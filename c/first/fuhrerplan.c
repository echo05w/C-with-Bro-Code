#include <stdio.h>
#include <string.h>

int main() {
    char item[50] = " ";
    float price = 0.0f;
    int area = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Good morning, Commander!\n");

    // Getting the country name
    printf("What country do you want to invade?: ");
    fgets(item, sizeof(item), stdin);

    // Remove the newline character from fgets input (if any)
    item[strcspn(item, "\n")] = '\0'; 

    // Getting the price to invade
    printf("How much price for army needed to invade it?: ");
    scanf("%f", &price);

    // Getting the land area
    printf("How many land units do you want to conquer?: ");
    scanf("%d", &area);

    // Calculate the total cost
    total = area * price;

    // Displaying the total cost
    printf("The total price contributed to invade %s is: %c%.2f\n", item, currency, total);

    return 0;
}
