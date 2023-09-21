
#include <iostream>

using namespace std;

int main()
{
     float f;
    
    cout << "Enter Fahrenheit:";
    
    cin >> f;
    
    cout << f << " degree Fahrenheit is " << (f-32) * 5.0/9.0 << " degree in celcius."; 

    return 0;
}