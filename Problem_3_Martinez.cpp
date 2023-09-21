
#include <iostream>

using namespace std;

int main()
{
    float N;
    
    cout << "Enter your Height in centimeters: ";
    
    cin >> N;
    
    if ((N/30.48) < 4 || (N/30.48) > 10 ) 
        cout << "Are you sure you're human? ";
    else if ((N/30.48) > 4)
        cout << "You are allowed to ride in the roller coaster.";

    return 0;
}