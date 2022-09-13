#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float euclidDis(int x1, int y1, int x2, int y2, float (*ptr)(float))
{
    float result;
    result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("The distance between two given points are : %f\n", result);
    printf("The area of the circle with radius %f is %f",result, ptr(result));   
}
float circleArea(float radius)
{    
    return (PI * pow(radius, 2));
}
int main()
{
    float (*rad)(float);
    rad = circleArea;
    int x1, y1, x2, y2;
    printf("Enter the coordinates of first point : \n");
    scanf("%d", &x1);
    scanf("%d", &y1);
    printf("\nEnter the coordinates of second point : ");
    scanf("%d", &x2);
    scanf("%d", &y2);
    euclidDis(x1, y1, x2, y2, rad);
    return 0;
}