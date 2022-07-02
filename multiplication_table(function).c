//Write a function to print multiplication table of n
#include<stdio.h>

void table(int num);    //function declaration
    int main(){
        int num;
        //Accepting the input from the user
        printf("Enter the number whose table you want to print:");
        scanf("%d",&num);

        table(num);  //Argument/Actual parameter
    
return 0;
}
void table(int num){      //Parameter/Formal Parameter
    for(int i=1; i<=10; i++){
        printf("%d\n", num*i);
    }
}
