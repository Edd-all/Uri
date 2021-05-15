#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
    
    cout << setprecision(3)<<fixed;
    
    int x;
    float y;
    
    cin >> x >> y;
    
    cout << x/y << " km/l" << endl;
 
    return 0;
}
