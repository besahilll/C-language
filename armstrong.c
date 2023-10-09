#include<stdio.h>
void armstrong(int num);
    int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    armstrong(num);

return 0;
}
void armstrong(int num){
    if(num==0){
        return 0;
    }
    int r=num%10;
    int sum=r*r*r + armstrong(num/10);
    if(sum==num){
        printf("%d is a armstrong number",num);
    }
    else{
        printf("%d is not aramstrong number",num);
    }
}
