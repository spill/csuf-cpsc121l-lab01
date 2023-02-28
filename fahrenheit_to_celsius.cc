// Ryan Trinh
// CPSC 120-06
// 2022-08-31
// rtrinh02@csu.fullerton.edu
// @rtrinh02
//
// Lab 02-02
// Partners: @thomasn1003
//
// This is my my program.
//

#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // It is a good practice to initialize variables when they are
  // declared. Rewrite the declarations to initialize them to reasonable values.
  // For integer variables assigning them 0 or other integer value is a good
  // practice. For doubles and floats using NAN which means 'not a number' is a
  // good value to use.
  int fahrenheit = 0;
  double celsius = NAN;
  fahrenheit = 451;
  celsius = fahrenheit * 9.0 / 5.0 + 32.0;
  cout << fahrenheit << " degrees Fahrenheit is " << celsius
       << " degrees Celsius.\n";
  return 0;
}
