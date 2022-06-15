//WAP to print multiplication table of a given no. n
#include<stdio.h>

    int main(){
    int n;
    //accept the input from the user
    printf("Enter the number whose table is to be print:");
    scanf("%d",&n);
    for(i=0;i<n+1;i++){
        printf("%d * %d = %d/n", n, i, n*i);
    }
       
return 0;
}
