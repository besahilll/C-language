//WAP to find whether a year entered by user is leap year or not.
#include<stdio.h>

    int main(){
    int year;
    printf("Enter the year:");
    scanf("%d", &year);

    if(((year%4==0) && (year%400==0)) || (year%100!=0)){
        printf("The year is leap year");
    }

    else{
        printf("The year is not a leap year");
    }
return 0;
}
