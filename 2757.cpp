#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int a,b,c;

    cin >> a >> b >> c;
    
    cout << "A = " << a << "," << " B = " << b << ","  << " C = " << c << endl;

    cout << setfill (' ');
    cout << "A = " << setw (10) << a << "," << " B = " << setw (10) << b << ","  << " C = " << setw (10) << c << endl;

    cout << internal << setfill ('0');
    cout << "A = " << setw (10) << a << "," << " B = " << setw (10) << b << ","  << " C = " << setw (10) << c << endl;

    cout << left << setfill (' ');
    cout << "A = " << setw (10) << a <<  "," << " B = " << setw (10) << b <<  ","  << " C = " << setw (10) << c << endl;
 
    return 0;
}
