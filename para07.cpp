#include <iostream>
using namespace std;

double Circle(double radius) {
    return 3.14 * radius * radius;
}

double Ring(double innerRadius, double outerRadius) 
{
    
    if (innerRadius >= outerRadius) {
        cout << "Error: The inner radius must be less than the outer radius." << endl;
        return 0.0;
    }

    double ringArea = Circle(outerRadius) - Circle(innerRadius);

    return ringArea;
}

int main() {
    double innerRadius, outerRadius;

    cout << "Enter the inner radius of the ring: ";
    cin >> innerRadius;
    cout << "Enter the outer radius of the ring: ";
    cin >> outerRadius;

    double ringArea = Ring(innerRadius, outerRadius);

    cout << "Area of the ring: " << ringArea << endl;

    return 0;
}
