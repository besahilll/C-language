#include<stdio.h>
//Function declaration
float converttemp(float C);
    int main(){
        float C;
        //accepting the input from the user
        printf("Enter the temperature in celsius:");
        scanf("%f",&C);
        printf("Converting the temperature to fahrenheit\n");
        float far=converttemp(C);                             //function calling
        printf("so the temperature in fahrenheit is %f",far);

    
return 0;
}
//function definition
float converttemp(float C){
    float far= C * (9.0/5.0) + 32;
    return far;
}
