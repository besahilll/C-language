//Write a function to calculate the percentage of a student from marks in Science,Math, & Sanskrit
#include<stdio.h>
//Function definition
int calcPercantage(int s, int m, int sans);          //s->science, m->math, sans->sanskrit
    int main(){
    int s,m,sans;
    //accepting the input from the user
    printf("Enter the marks of Science,Maths & Sanskrit:");
    scanf("%d%d%d",&s,&m,&sans);
    
    printf("The percentage is %d",calcPercantage(s,m,sans));  //Function calling
return 0;
}
calcPercantage(int s, int m, int sans){   //Function definition
    return ((s+m+sans)/3);
}
