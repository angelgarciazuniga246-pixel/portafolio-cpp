#include <iostream>
using namespace std;

int main(){
  const double PI = 3.1416;
  
  
  double radio, area;
  
  cout << "Ingresa el radio del círculo: ";
  
  cin >> radio;
  
  area = PI * radio * radio;
  
  cout << "El área del círculo es: " << area << endl;
  
  return 0;
  
  }