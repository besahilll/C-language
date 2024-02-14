
#include <stdio.h>

int main()
{
    int n,arr[100],temp;
    printf("Enter the size of array");
    scanf("%d",&n);
    int end=n-1;
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[end];
        arr[end]=temp;
        
        end--;
    }
    
    //print
    printf("reversing the array\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
