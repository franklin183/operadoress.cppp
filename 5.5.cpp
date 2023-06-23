#include <iostream>
using namespace std;
int main(){
    int i = 1 ;
    while (i * i < 10){      
        int j = i;
    while (j * j < 100){
        cout << i + j << " ";
        j *= 2;
        }
        i++;
        cout << endl;
    }
    cout << "\n*****\n";
     return 0; 
}
//la salida del bucle es una fila de 2,3,5,9 ; otra fila de 4,6,10 ; otra fila de 6,9 y una fila final de 5 asteriscos//