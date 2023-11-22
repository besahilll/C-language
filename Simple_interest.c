//Code for calculating Simple interest
#include<stdio.h>

    int main(){
    int P,R,T;
    float SI;

    printf("Enter the principal amount:\n");
    scanf("%d",&P);
    printf("\nEnter rate of interest:");
    scanf("%d",&R);
    printf("\nEnter time");
    scanf("%d",&T);

    //Calculating Simple interest the set of values given by user
    SI= P*R*T/100;
    printf("\nSo the Simple interest is:%f", SI );    
return 0;
}
