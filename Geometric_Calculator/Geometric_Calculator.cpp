
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//global variables
int a, b, c, d, r, rectangle_perimeter, triangle_perimeter, trapeze_perimeter ;
string circle, rectangle, triangle, trapeze, user_input;
float PI, circle_perimeter;


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
                cout << "Enter radious: " << endl;
                cin >> r;
                //check point for number MUST BE POSITIVE
                if (r < 0) {
                    cout << "Number can't be negative. Please try again";                    
                }
            } while (r < 0);
                circle_perimeter = 2 * PI * r;// math formulas for figure perimeter
                cout << "Circle perimeter= " << circle_perimeter << endl;
                cout << "\n---- Ready for next calculations! ---- \n" << endl;
        }

        else if (user_input == "2") {

            do {
                cout << "Enter rectangle dimension:\n a= ", cin >> a, cout << " b= ", cin >> b;
                //check point for number MUST BE POSITIVE
                if (a, b < 0) {
                    cout << "Number can't be negative. Please try again";
                }
            } while (a, b < 0);
                rectangle_perimeter = 2 * a + 2 * b;// math formulas for figure perimeter
                cout << "Rectangle perimeter= " << rectangle_perimeter << endl;
                cout << "\n---- Ready for next calculations! ---- \n" << endl;
        }
        else if (user_input == "3") {

            cout << "Enter triangle dimension:\n a= ", cin >> a, cout << " b= ", cin >> b, cout << " c= ", cin >> c;
            triangle_perimeter = a + b + c;// math formulas for figure perimeter
            cout << "Triangle perimeter= " << triangle_perimeter << endl;
            cout << "\n---- Ready for next calculations! ---- \n" << endl;
        }
        else if (user_input == "4") {
            cout << "Enter trapeze dimension:\n a= ", cin >> a, cout << " b= ", cin >> b, cout << " c= ", cin >> c, cout << " d= ", cin >> d;
            trapeze_perimeter = a + b + c + d;// math formulas for figure perimeter
            cout << "Rectangle perimeter= " << trapeze_perimeter << endl;
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