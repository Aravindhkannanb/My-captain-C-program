#include<stdio.h>
int food;
main (){
printf("Enter a Number b/w 0 to 5 : ");
scanf("%d",&food);
switch (food){
    case 1:
    printf("Pizza \n Rs. 239");
    break;
    case 2:
    printf("Burger \n Rs.129");
    break;
    case 3:
    printf("Pasta \n Rs.179");
    break;
    case 4:
    printf("French Fries \n Rs.99");
    break;
    case 5:
    printf("Sandwich \n Rs.149");
    break;
}}