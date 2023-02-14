#include <stdio.h>

float area_of_circle();
int area_of_rectangle();
int area_of_square();
float area_of_triangle();

int main()
{
    int choice;
    float area;

    printf("Press 1 to calculate => Area of circle.\n");
    printf("Press 2 to calculate => Area of Rectangle.\n");
    printf("Press 3 to calculate => Area of Square.\n");
    printf("Press 4 to calculate => Area of Triangle.\n");
    printf("_-_-_-_-_-_- \n");
    printf("Select a option: ");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        area = area_of_circle();
        printf("The area is : %.2f", area);
        break;
    case 2:
        area = area_of_rectangle();
        printf("The area is : %.2f", area);
        break;
    case 3:
        area = area_of_square();
        printf("The area is : %.2f", area);
        break;
    case 4:
        area = area_of_triangle();
        printf("The area is : %.2f", area);
        break;

    default:
        printf("Invalid Choice");
        break;
    }

    return 0;
}

float area_of_circle()
{
    int r;
    printf("Enter the Radius of the circle: ");
    scanf("%d", &r);

    return 3.1416 * (r * r);
}

int area_of_rectangle()
{

    int h, w;

    printf("Enter height of the Rectangle: ");
    scanf("%d", &h);
    printf("\n");
    printf("Enter width of the Rectangle: ");
    scanf("%d", &w);
    printf("\n");

    return h * w;
}

int area_of_square()
{
    int w;

    printf("Enter the width of Square: \n");
    scanf("%d", &w);

    return w * w;
}

float area_of_triangle()
{
    int b, h;
    printf("Enter the base of Triangle: ");
    scanf("%d", &b);
    printf("\n");
    printf("Enter the height of Triangle: ");
    scanf("%d", &h);
    printf("\n");

    return (b * h) / 2;
}