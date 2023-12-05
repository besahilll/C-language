// Write a function to calculate area of circle,area of square and area of rectangle
#include <stdio.h>

// Function declaration
float AreaCircle(float r);       // r->radius
float AreaSquare(float s);       // s->side
int Arearectangle(int l, int b); // l->length , b->breadth

int main()
{
    int l, b;
    float r, s;
    // Accepting the input from the user
    printf("Enter the radius of the circle :");
    scanf("%d", &r);
    printf("Enter the side of the square :");
    scanf("%d", &s);
    printf("Enter the length and breadth of rectangle:");
    scanf("%d%d", &l, &b);

    // Function calling
    printf("So the area of circle is:%d\n", AreaCircle(r));
    printf("So the area of square is:%d\n", AreaSquare(s));
    printf("So the area of rectangle is: %d \n", AreaRectangle(l, b));

    return 0;
}

// Function definitions
float AreaCircle(float r)
{
    return 3.14 * r * r;
}
float AreaSquare(float s)
{
    return s * s;
}
int AreaRectangle(int l, int b)
{
    return l * b;
}
