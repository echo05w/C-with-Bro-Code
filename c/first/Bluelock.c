#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 5
#define NAME_LEN 50
#define CLUB_LEN 50

typedef struct {
    char name[NAME_LEN];
    float price;
    char club[CLUB_LEN];
} Player;

int main() {
    Player players[MAX_PLAYERS];
    int count;
    float totalEarnings = 0.0f;

    printf("Welcome, Ego Ginpachi! Time to calculate player values.\n");

    printf("How many players do you want to process (max %d)? ", MAX_PLAYERS);
    scanf("%d", &count);
    getchar(); // consume newline after scanf

    for (int i = 0; i < count; i++) {
        printf("\nPlayer %d:\n", i + 1);

        printf("Enter player name: ");
        fgets(players[i].name, NAME_LEN, stdin);
        players[i].name[strcspn(players[i].name, "\n")] = '\0'; // remove newline

        printf("Enter player's transfer price: ");
        scanf("%f", &players[i].price);
        getchar(); // consume newline

        printf("Enter preferred club: ");
        fgets(players[i].club, CLUB_LEN, stdin);
        players[i].club[strcspn(players[i].club, "\n")] = '\0'; // remove newline

        totalEarnings += players[i].price;
    }

    printf("\n--- Blue Lock Transfer Summary ---\n");
    for (int i = 0; i < count; i++) {
        printf("%s wants to join %s for a price of $%.2f\n",
               players[i].name, players[i].club, players[i].price);
    }

    printf("\nTotal earnings from all transfers: $%.2f\n", totalEarnings);
    printf("Only the worthy will survive. Let the ego clash begin!\n");
   printf("With a budget of $%.2f, Anri Teieri can now scout new talent across Europe.\n", totalEarnings);


    return 0;
}
