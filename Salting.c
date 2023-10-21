//Find the salted form of a password entered by the user if the salt is "123" & added at end.
#include<stdio.h>
#include<string.h>
//function declaration
void salting(char password[]);
    int main(){
        char password[100];
        printf("Enter the Password:");
        scanf("%s",password);
        
        salting(password);
    
return 0;
}
//function definition
void salting(char password[]){ 
    char salt[]="123";
    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);
}
