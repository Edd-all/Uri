#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   cout << setprecision(4)<<fixed;
 
   double raio;
   
   cin >> raio;
   
   cout << "A=" << 3.14159 * (raio*raio) << endl;
   
    return 0;
}
