//Make a program that inputs user name & print its length.
#include<stdio.h>
//function declaration
int countlength(char arr[]);

    int main(){
        char name[100];
        printf("Enter your name:");
        fgets(name,100,stdin);
        puts(name);
        printf("So the length of the string is:%d",countlength(name));
    
return 0;
}
//function definition
int countlength(char arr[]){
    int count = 0;
    for(int i=0;arr[i] != '\0';i++){
        count++;
    }
    return count-1;
}
