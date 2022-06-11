//WAP to find greatest of four numbers entered by the user
#include<stdio.h>

    int main(){
    float n1,n2,n3,n4;
    printf("enter the four numbers: ");
    scanf("%f%f%f%f", &n1, &n2 , &n3, &n4 );
    
    //if n1 is greater than n2,n2 is greater than n3 and n4 is less than n3, n1 is the greatest
    if(n1>n2 && n2>n3 && n4<n3){
        printf("The greatest integer is %.2f", n1);
    }
     //if  n2 is greater than n1,n1 is greater than n3 and n4 is less than n3, n2 is the greatest
    else if(n2>n1 && n1>n3 && n4<n3){
        printf("The greatest integer is %.2f", n2);
    }
    //if  n3 is greater than n1,n1 is greater than n2 and n4 is less than n2, n3 is the greatest
    else if(n3>n1 && n1>n2 && n4<n2){
        printf("The greatest integer is %.2f",n3);
    }
    // if all the above statements are false, n4 is the greatest
    else {
        printf("The greatest integer is %.2f",n4);
    }

return 0;
}
