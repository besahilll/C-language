// volume of a cyclinder
#include <stdio.h>

int main()
{
    int r, h;
    float PI = 3.14, vol;
    printf("Enter the radius and height of the cyclinder\n");
    scanf("%d%d", &r, &h);
    vol = PI * r * r * h;
    printf("Enter the volume of the cyclinder:%f", vol);
    return 0;
}
