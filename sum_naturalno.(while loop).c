//WAP to sum first 10 natural numbers using while loop
#include<stdio.h>

    int main(){
    int i=1,sum=0,n=10;

    //for(int i=0; i<=n; i++){  -> Using for loop
    //    sum+=i;
    //i++;
    //}
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("The value of sum(1 to 10 ) is %d",sum);
return 0;
}
