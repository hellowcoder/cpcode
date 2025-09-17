#include <iostream>
using namespace std;

class complexNumber {
public:
  double real;
  double imag;

  complexNumber(double r, double i);
  complexNumber(double r);
  void display();
};

complexNumber::complexNumber(double r) {
  real = r;
}

complexNumber::complexNumber(double r, double i) {
  real = r;
  imag = i;
}
void complexNumber::display() {
  cout << "Real part: " << real << ", ";
  cout << "Imaginary part: " << imag << endl;
}

int main() {
  complexNumber c1(5);
  complexNumber c2(3, 4);

  cout << "complex number C1: ";
  c1.display();
  cout << "complex number C2: ";
  c2.display();
  return 0;
}