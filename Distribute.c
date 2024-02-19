
#include <stdio.h>

int main()
{
    int arr[]={9,7,6,1,5,2,4,8,3,10};
    int count=0;
    int z=1;
    while(z<11){
        for(int j=0;j<10;j++){
            if(z==arr[j]){
                printf("%d\n",count);
                count=0;
                z++;
                break;
            }
            else{
                count++;
            }
        }
    }

    return 0;
}
