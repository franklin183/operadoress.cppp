#include <iostream>
using namespace std;

int main() {
   int limite, base, potencia = 1;

   cout << "Ingrese el limite maximo: ";
   cin >> limite;

   cout << "Ingrese la base: ";
   cin >> base;

   while (potencia < limite) {
      cout << potencia << endl;
      potencia *= base;
   }

   return 0;
}