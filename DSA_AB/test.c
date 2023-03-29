#include <stdio.h>
struct Rectangle
{
    int length, breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int peri(struct Rectangle r)
{
    return 2 * (r.length + r.breadth);
}

int main()
{
    struct Rectangle r = {0, 0};

    int l, b;

    printf("Enter length and breadth : ");
    scanf("%d%d", &l, &b);

    initialize(&r, l, b);

    int a = area(r);
    int p = peri(r);

    printf("Area = %d \n Perimeter = %d\n", a, p);
    return 0;
}