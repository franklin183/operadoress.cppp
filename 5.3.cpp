#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int i = 1 , n ;
    cin >> n;
    while (i <= 3)
    if ((i % 3) == 0)
    ++i;
    cout << i << endl;
    system("PAUSE");
  return EXIT_SUCCESS;
}
//la salida con el valor de n,0 es = 1 //
//la salida con el valor de n,1 es = 2 //
//la salida con el valor de n,3 es = no ay respuesta supongo que el bucle sige //