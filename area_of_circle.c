#include <stdio.h>

int main()
{
    int r;
    float PI = 3.14, area;
    printf("Enter the radius of circle :\n");
    scanf("%d", &r);
    area = PI * r * r;
    printf("enter the area of circle:%f", area);

    return 0;
}
