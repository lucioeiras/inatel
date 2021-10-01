#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  cout << fixed << setprecision(3);

  double area_triangulo = a * c / 2;
  cout << "TRIANGULO: " << area_triangulo << endl;

  double area_circulo = 3.14159 * pow(c, 2);
  cout << "CIRCULO: " << area_circulo << endl;

  double area_trapezio = (a + b) * c / 2;
  cout << "TRAPEZIO: " << area_trapezio << endl;

  double area_quadrado = b * b;
  cout << "QUADRADO: " << area_quadrado << endl;

  double area_retangulo = a * b;
  cout << "RETANGULO: " << area_retangulo << endl;

  return 0;
}