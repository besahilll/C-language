//Check if a file exists before reading from it.
#include<stdio.h>

    int main(){
    FILE *fptr;
    fptr=fopen("NEW FILE.txt","r");
    if(fptr==NULL){
        printf("File doesn't exist.");
    }
    else{
        printf("File exists");
    }
return 0;
}
