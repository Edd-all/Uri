#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    cout << setprecision(1)<<fixed;
    
    double a,b,c;
    
    cin >> a >> b >> c;
    
    cout << "MEDIA =" << ((2*a) + (3*b) + (5*c)) /10 << endl;
 
    return 0;
}
