#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    cout << setprecision(3)<<fixed;
 
    double t,v;
    
    cin >> t >> v;
    
    cout << (t*v)/12 << endl;
 
    return 0;
}
