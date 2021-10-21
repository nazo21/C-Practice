#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

    cout << "Enter a number [0 to end]: ";
    int n;
    cin >> n;
    int sum = 0;
    
    while (n != 0) {
        
       if (n > 0) {
            sum += n;

        }
       cin >> n;
    }
    cout << "The sum of positives numbers is :" << sum << endl;
    return 0;


}