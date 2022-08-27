#include "bits/stdc++.h"

using namespace std;

//The program is supposed to calculate the distance between three points.
// Distance is calculated as : sqrt((x2-x1)^2 + (y2-y1)^2)
double calculateDistance(double x1, double x2, double y1, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


int main()
{
    double x1{1}, y1{1}, x2{2}, y2{4}, x3{3}, y3{6};

    cout << "Distance Between (x1, y1) - (x2, y2): " << calculateDistance(x1, x2, y1, y2) << endl;
    cout << "Distance Between (x2, y2) - (x3, y3): " << calculateDistance(x2, x3, y2, y3) << endl;
    cout << "Distance Between (x3, y3) - (x1, y1): " << calculateDistance(x3, x1, y3, y1) << endl;

}