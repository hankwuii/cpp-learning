# include <iostream>

using namespace std;

void sum(int &, int&);
int main() {
    int a, b;
    cin >> a >> b;
    sum(a, b);
    cout << a + b << endl;
    a = a + b;
    cout << a << endl;
    return 0;
}

void sum(int &i, int&j) {
    int total;
    total = i + j;
    return;
}