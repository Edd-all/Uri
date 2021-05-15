#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;
 
int main() {
 
    double a,b,c,delta,x,y;
    
    cin >> a >> b >> c;
    
    delta = (b*b)-4*a*c;
 	
 	if (delta < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }
    else{
    	
    	cout << setprecision(5)<<fixed;
    	
    	x = (-b + sqrt(delta))/(a*2);
    	y = (-b - sqrt(delta))/(a*2);
    	
        cout << "R1 = " << x << endl;
        cout << "R2 = " << y << endl;
    }
    return 0;
}



