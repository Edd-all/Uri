#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    float a,b;
    double c,d;

    cin >> a >> b >> c >> d;

    cout << setprecision(6) << fixed;
    cout << "A = " << a <<  "," << " B = " << b << endl;
    cout << "C = " << c <<  "," << " D = " << d << endl;

    cout << setprecision(1) << fixed;
    cout << "A = " << a <<  "," << " B = " << b << endl;
    cout << "C = " << c <<  "," << " D = " << d << endl;

    cout << setprecision(2) << fixed;
    cout << "A = " << a <<  "," << " B = " << b << endl;
    cout << "C = " << c <<  "," << " D = " << d << endl;

    cout << setprecision(3) << fixed;
    cout << "A = " << a <<  "," << " B = " << b << endl;
    cout << "C = " << c <<  "," << " D = " << d << endl;

    cout << fixed << setprecision(3) << uppercase << scientific << "A = " << a << ", B = " << b << endl << "C = " << c << ", D = " << d << endl; 

    cout << setprecision(0) << fixed;
    cout << "A = " << a <<  "," << " B = " << b << endl;
    cout << "C = " << c <<  "," << " D = " << d << endl;

}
