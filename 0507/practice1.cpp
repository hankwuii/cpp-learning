# include <iostream>

using namespace std;

int fun(int, int);

int main() {
    int month, day, total;
    cout << "Please enter a date" << endl;
    cin >> month >> day;
    total = fun(month, day);
    cout << total << endl;
    return 0;
}

int fun(int m,int d) {
    int total = 0, sum = 0;
    int date[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < m-1; i++)
        sum = sum + date[i];
    return sum + d;
}