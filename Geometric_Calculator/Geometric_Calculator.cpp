
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//global variables
int a, b, c, d, r, h, rectangle_perimeter, rectangle_area, triangle_perimeter, triangle_area, trapeze_perimeter, trapeze_area ;
string circle, rectangle, triangle, trapeze, user_input;
float PI, circle_perimeter, circle_area;


int main()
{
    // define PI as a constant value
    PI = 3.14159;
    
    //Welcome note for user 
    cout << "Welcome in Geometry Calculator!\n" << endl;
    cout << "This program calculates the perimeter and the surface area for the following figures:\n" << endl;


    do {
        cout << "1. Circle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Trapeze\n" << endl;
        cout << "If you want quit calculator select:\n5. EXIT \n" << endl;
        cout << "Enter Choice >> ";
        cin >> user_input;

        if (user_input == "1") {
            
            do {
                cout << "Enter radious: r=", cin >> r;
                
                //check point for number MUST BE POSITIVE
                if (r < 0) {
                    cout << "Number can't be negative. Please try again\n";                    
                }
            } while (r < 0);

                circle_perimeter = 2 * PI * r; // math formulas for figure perimeter
                cout << "\nCircle perimeter = " << circle_perimeter << endl;
                circle_area = PI * r * r; // math formula for figure area
                cout << "Circle area = " << circle_area << endl;
                cout << "\n---- Ready for next calculations! ---- \n" << endl;
        }

        else if (user_input == "2") {

            do {
                cout << "Enter rectangle dimension:\n a= ", cin >> a, cout << " b= ", cin >> b;
                //check point for number MUST BE POSITIVE
                if (a < 0, b < 0) {
                    cout << "Number can't be negative. Please try again\n";
                }
            } while (a < 0, b < 0);

                rectangle_perimeter = 2 * a + 2 * b;// math formulas for figure perimeter
                cout << "\nRectangle perimeter = " << rectangle_perimeter << endl;
                rectangle_area = a * b; // math formula for figure area
                cout << "Rectangle area = " << rectangle_area << endl;
                cout << "\n---- Ready for next calculations! ---- \n" << endl;
        }
        else if (user_input == "3") {

            do {
                cout << "Enter triangle dimension:\n a= ", cin >> a, cout << " b= ", cin >> b, cout << " c= ", cin >> c, cout << " h= ", cin >> h;
                //check point for number MUST BE POSITIVE
                if (a < 0, b < 0, c < 0, h < 0 ) {
                    cout << "Number can't be negative. Please try again\n";
                }
            } while (a < 0, b < 0, c < 0, h < 0);

            triangle_perimeter = a + b + c;// math formulas for figure perimeter
            cout << "\nTriangle perimeter = " << triangle_perimeter << endl;
            triangle_area = a * h * 0.5;
            cout << "Triangle area = " << triangle_area << endl;
            cout << "\n---- Ready for next calculations! ---- \n" << endl;
        }
        else if (user_input == "4") {

            do {
                cout << "Enter trapeze dimension:\n a= ", cin >> a, cout << " b= ", cin >> b, cout << " c= ", cin >> c, cout << " d= ", cin >> d, cout << " h= ", cin >> h;
                //check point for number MUST BE POSITIVE
                if (a < 0, b < 0, c < 0, d < 0, h < 0) {
                    cout << "Number can't be negative. Please try again\n";
                }
            } while (a < 0, b < 0, c < 0, d < 0, h < 0);

            trapeze_perimeter = a + b + c + d;// math formulas for figure perimeter
            cout << "\nRectangle perimeter = " << trapeze_perimeter << endl;
            trapeze_area = (a + b) * h / 2;
            cout << "Rectangle area = " << rectangle_area << endl;
            cout << "\n---- Ready for next calculations! ---- \n" << endl;
        }
        else if (user_input == "5") {
            cout << "See you next time! Bye!" << endl;
                break;
        }

        else {
            cout << "\n Wrong choice! Once again.\n" << endl;
        }
    }

        while (true);
}