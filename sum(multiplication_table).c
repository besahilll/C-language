//WAP to calculate the sum of the numbers occuring in the multiplication table of 8
#include<stdio.h>

    int main(){
    int num,n=10,sum=0;
    //Accepting the input from the user
    printf("Enter the number whose table sum you want to calculate:");
    scanf("%d", &num);
    for(int i=0;i<=n;i++){
        sum+=num*i;
    }
    printf("\nSum of the numbers occuring in the multiplication table of n is:%d",sum);
return 0;
}
