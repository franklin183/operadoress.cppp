#include <iostream>
using namespace std;

int main() {
   int n, num, max, min, sum = 0;
   float media;

   cout << "Ingrese la cantidad de numeros: ";
   cin >> n;

   for (int i = 1; i <= n; i++) {
      cout << "Ingrese el numero " << i << ": ";
      cin >> num;
      sum += num;
      if (i == 1) {
         max = num;
         min = num;
      } else {
         if (num > max) {
            max = num;
         }
         if (num < min) {
            min = num;
         }
      }
   }

   media = (float) sum / n;

   cout << "El numero mas grande es: " << max << endl;
   cout << "El numero más pequeño es: " << min << endl;
   cout << "La media de los numeros es: " << media << endl;

   return 0;
}