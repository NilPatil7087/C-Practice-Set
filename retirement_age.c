#include<stdio.h>
#include<conio.h>
int retirement_age(int a);
int main (){
 int age ,ans;
 printf("How old are you?");
 scanf("%d",&age);

ans = retirement_age (age);

 printf("you have %d years left until retierment ", ans);
 }


 int retirement_age (int a ){

 int retier=65  ;
 int cal ;
  cal = retier- a;
  return cal ;
 }
