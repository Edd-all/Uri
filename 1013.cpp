#include <iostream>
#include <stdlib.h>

using namespace std;
 
int main() {
 
    int a,b,c,maiorab,maior;
   
    cin >> a >> b >> c;
 
    maiorab = (a+b+abs(a-b))/2;    // abs -> valor absoluto "Absolute value"
    maior = (maiorab+c+abs(maiorab-c))/2;
    
    cout << maior << " eh o maior" << endl;

 
    return 0;
}
