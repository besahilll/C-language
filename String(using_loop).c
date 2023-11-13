
//Create a string FirstNAME & Lastname to store details of user & print all characters using a loop.
#include<stdio.h>
//function declaration
void printstring(char arr[]);
    int main(){
    char firstname[]="SAHIL";
    char lastname[]="BATHLA";
    printstring(firstname);
    printstring(lastname);

return 0;
}
//function definition
void printstring(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
