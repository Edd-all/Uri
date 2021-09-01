#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int cod, quant;
    double t;
    
    cin >> cod >> quant;
    
    cout << setprecision(2) << fixed;
    
    switch(cod){
        case 1:
        t = 4.00*quant;
        cout << "Total: R$ " << t << endl;
        break;
        case 2:
        t = 4.50*quant;
        cout << "Total: R$ " << t << endl;
        break;
        case 3:
        t = 5.00*quant;
        cout << "Total: R$ " << t << endl;
        break;
        case 4:
        t = 2.00*quant;
        cout << "Total: R$ " << t << endl;
        break;
        case 5:
        t = 1.50*quant;
        cout << "Total: R$ " << t << endl;
        break;
    }
 
    return 0;
}