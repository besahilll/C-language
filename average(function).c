//Write a function to find average of three numbers...
#include<stdio.h>

//function declaration
float Average(int n1,int n2,int n3);

    int main(){
    int n1,n2,n3;
    //accepting the input from the user
    printf("Enter the three numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    
    printf("So the average is %f",Average(n1,n2,n3));          //function calling
return 0;
}
//function definition
float Average(int n1, int n2, int n3){
    return (float)(n1+n2+n3)/3;
}
