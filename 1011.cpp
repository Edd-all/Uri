#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    cout << setprecision(3)<<fixed;
    
    double r;
    
    cin >> r;
    
    cout << "VOLUME = " << 4.0/3 * 3.14159 * (r*r*r) << endl;
 
    return 0;
}
