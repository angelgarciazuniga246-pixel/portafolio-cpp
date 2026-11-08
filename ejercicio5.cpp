#include <iostream>
using namespace std;

int main(){
  int num1, num2;
  
  cout << "Ingresa el primer número: ";
  
  cin >> num1;
  
  cout << "Ingresa el segundo número: ";
  
  cin >> num2;
  
  if (num1 > num2){
    cout << num1 << " es mayor." << endl;
    
  } else if (num2 > num1){
    cout << num2 << " es mayor." << endl;
  } else {
    cout << "Ambos números son iguales." << endl;
  }
  
  return 0;
  
}    