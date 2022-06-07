//Code to convert celsius to farheneit
#include<stdio.h>

    int main(){
    float C,F;
    printf("enter temp in celsius\n");
    scanf("%f",&C);
    F= C*(9/5) + 32;

    //Converting celsius to farheneit
    printf(" The temp in farheneit is %f", F);
return 0;
}
