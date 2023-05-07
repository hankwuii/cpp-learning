# include <iostream>
# include <cstdlib>
using namespace std;
int main() {
    int numberoflanguages, num = 1;
    /*cout << "I have " << num << " apples." << endl;
      cout << "You have " << num << " apples too.\n"; //"\n" = endl */

    cout << "How many languages have you used?\n";
    cin >> numberoflanguages;

    if (numberoflanguages <= num)
        cout << "You sucks.\n";
    else
        cout << "So what?\n";

    return 0;
}