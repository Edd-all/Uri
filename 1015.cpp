#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
double distancia(float x1, float y1, float x2, float y2) {
	float p1 = x2 - x1;
    float p2 = y2 - y1;
    float res = sqrt((p1*p1) + (p2*p2));
    return res;
}

int main() {
    cout << setprecision(4)<<fixed;
    
	float x1, y1, x2, y2;
	
	cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    cout << distancia(x1, y1, x2, y2) << endl;
   
   return 0; 
}
