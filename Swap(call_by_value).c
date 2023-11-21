//Write a function to swap 2 numbers, a & b by using by call by value
#include<stdio.h>
//function definition
void swap(int x,int y);
    int main(){
    int a=3 , b=5;
    swap(a,b);    //call by value 
    printf("The value of a is %d & b is %d\n",a,b);
return 0;
}
//function definition
void swap(int x,int y){
    int t=x;
    x=y;
    y=t;
    printf(" Now, the value of x is %d & y is %d\n",x,y);
}
