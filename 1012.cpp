#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
 
    cout << setprecision(3)<<fixed;
    
    float a,b,c;
    
    cin >> a >> b >> c ;
    
    cout << "TRIANGULO: " << (a*c)/2 << endl;
    cout << "CIRCULO: " << 3.14159 * (c*c) << endl;
    cout << "TRAPEZIO: " << ((a+b)*c)/2 << endl;
    cout << "QUADRADO: " << b*b << endl;
    cout << "RETANGULO: " << a*b << endl;
 
    return 0;
}
