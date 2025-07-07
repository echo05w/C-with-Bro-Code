#include <stdio.h>
#include<stdbool.h>
 int main(){
 int age=20;
 int year=2005;
 float gpa=2;
 double pi=3.41592;
 char name[]="Hasan Soliyev";
 char food[]="I love Mantyi";
 bool amIOnline=true;
 printf("Hello I am %s\n",name);
 printf("My age is %d and i was born in %d \n" ,age,year);
 printf("my gpa is %f \n",gpa);
 printf("The value of pi is %.lf \n",pi);
 printf("and %s \n" ,food);
 if(amIOnline){
    printf("I am online rn");
 }else{
    printf("I am offline rn");
 }
    return 0;
 } 