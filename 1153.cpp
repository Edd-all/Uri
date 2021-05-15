#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
 
    int n, fat;
    
    cin >> n;
    
    for(fat=1; n>1; n = n-1){
        fat = fat *n;
    }
  
  cout << fat <<endl;
  
    return 0;
}
