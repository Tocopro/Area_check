#include <iostream>
#include <cmath>
using namespace std;


class Triangle
        {
public:
    double width{}, height{}, radius{}, triangle_Area{}, circle_Area{};


          double pie = 3.14;
           void User_input()
          {

              cout << "Enter the Height of the Triangle: "  << endl;
              cin >> height;
              cout << "Enter the Width of the Triangle: " << endl;
              cin >> width;
              cout << "Enter the Radius of the Circle: " << endl;
              cin >> radius;
          }
          void circleArea()
          {
              circle_Area = pie * pow(radius, 2);
              cout << "Area of the Circle = " << circle_Area << endl;
          }
          void triangleArea()
          {
              triangle_Area = 0.5 * height * width;
              cout <<"Area of the Triangle = " <<  triangle_Area << endl;
          }
          void condition()
          {
               if (triangle_Area < circle_Area)
               {
                   cout << "The Triangle can fit inside the Circle";
               }
               else
               {
                   cout << "The Triangle cannot fit inside the Circle";
               }
          }
};
int main() {
     Triangle calc;
     calc.User_input();
     calc.circleArea();
     calc.triangleArea();
     calc.condition();
}
