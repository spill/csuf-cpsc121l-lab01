// Ryan Trinh
// CPSC 120-04
// 2022-08-30
// rtrinh02@csu.fullerton.edu
// @rtrinh02
//
// Lab 02-01
// Partners: @thomasn1003
//
// quadratic formula
//

#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Here's a quadratic equation:
  //     4x^2 + 7x - 13 = 0
  // Let's solve it using the Quadratic Formula https://en.wikipedia.org/wiki/Quadratic_formula
  // It is a good practice to initialize variables when they are
  // declared. Rewrite the declarations to initialize them to reasonable values.
  // For integer variables assigning them 0 or other integer value is a good
  // practice. For doubles and floats using NAN which means 'not a number' is a
  // good value to use.
  double a = NAN;
  double b = NAN;
  double c = NAN;
  double discriminant = NAN;
  // In 4x^2, a is 4
  a = 4.0;
  // In + 7x, b is 7
  b = 7.0;
  // In - 13, c is -13
  c = -13.0;
  discriminant = (b * b) - (4 * a * c);
  if (discriminant >= 0 and a != 0.0) {
  double first_solution = (-b + sqrt(discriminant)) / (2 * a);
  double second_solution = (-b - sqrt(discriminant)) / (2 * a);
  cout << "There are two solutions for 4x^2 + 7x - 13 = 0.\n";
  cout << "The first is " << first_solution << " and the second is " << second_solution << ".\n";
  } else{
    cout << "There are no Real roots for 4x^2 + 7x - 13 = 0\n";
  }
  return 0;
}
