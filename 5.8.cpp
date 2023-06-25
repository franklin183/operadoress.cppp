#include <cstdlib>
#include <iostream>
#include <math.h>
#define M 5
#define f(x) cos( 3 * x) - 2 * x //función en línea
using namespace std;
int main(){
    for (double x = 0.0; x <= M; x += 0.5)
    cout << x << " " << f(x) << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}