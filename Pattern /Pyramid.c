
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the no. of rows: ");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        for(int j=0;j<rows-i;j++){
            printf(" ");
        }
        for(int k=0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=rows-1;i>0;i--){
        for(int j=0;j<rows-i;j++){
            printf(" ");
        }
        for(int k=0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
