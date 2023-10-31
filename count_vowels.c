//Check if a given character is present in a string or not.
#include<stdio.h>
//function declaration
void CheckCharacter(char str[],char ch);
    int main(){
    char str[100];
    scanf("%s",str);
    char ch='l';
    CheckCharacter(str,ch);
return 0;
}
void CheckCharacter(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("character is present");
            return;
        }
    }
    printf("Character is not present");
}
