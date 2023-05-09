# include <iostream>

using namespace std;

void sum(int &, int &);

int main() {
    int a, b;
    cin >> a >> b;
    sum(a, b);
    cout << a << " " << b << endl;
    return 0;
}

void sum(int &i, int &j) {
    i = i + j;
}