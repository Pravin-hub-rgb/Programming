#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
    friend void distanceCalc(Point, Point);
};
void distanceCalc(Point p, Point q)
{
    int distanceCalc = sqrt(pow((q.x - p.x), 2) + pow((q.y - p.y), 2));
    cout << "The distance is : " << distanceCalc << endl;
}

// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those points.

int main()
{
    Point p(1, 1);
    p.displayPoint();
    Point q(4, 6);
    q.displayPoint();
    Point r(0, 0);
    distanceCalc(p, q);
    return 0;
}