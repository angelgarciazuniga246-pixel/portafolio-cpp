#include <iostream>
using namespace std;

int main() {
   double celsius, fahrenheit;
   
   int pregunta1, pregunta2;
   
   cout << "Presiona 1 si quieres pasar de Celsius a Fahrenheit.";
   cout << " Presiona 2 si quieres pasar de Fahrenheit a Celsius." << endl;
   
   cin >> pregunta1;
   
   if (pregunta1 == 1){
   
    cout << "Ingresa la temperatura en grados Celsius: ";
   
    cin >> celsius;
   
    fahrenheit = (celsius * 9/5) + 32;
   
    cout << "La temperatura en Fahrenheit es: " << fahrenheit << endl;
   }
   
   if (pregunta1 == 2){
   
     cout << "Ingresa la temperatura en grados Fahrenheit: ";
     
     cin >> fahrenheit;
     
     celsius = (fahrenheit - 32) * 5/9;
     
     cout << "La temperatura en Celsius es: " << celsius << endl;
   }
   
   
   
   
   return 0;
   }