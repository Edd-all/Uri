#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {

  int i;
    float f;
    char c;
    string s;

    cin >> i;
    cin >> f;
    cin.ignore();
    cin >> c;
    cin.ignore();
    getline(cin,s);
    
    cout << setprecision(6) << fixed;

    cout << i << f << c << s << endl;
    cout << i << "\t" << f << "\t" << c << "\t" << s << endl;
    cout << setw(10) << i << setw(10) << f << setw(10) << c << setw(10) << s << endl;
	
    
    return 0;
}
