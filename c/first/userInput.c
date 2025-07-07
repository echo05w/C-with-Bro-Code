#include <stdio.h>
int main(){
 char name[50];
 int age;
 printf("Enter your name and age");
 scanf("%s",name);
 scanf("%d",&age);
 printf("My name is %s and I am %d y.o",name, age);
    return 0;
}