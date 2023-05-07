# include <iostream>

using namespace std;

void sort(int &, int &);
int main() {
    int a, b;
    cin >> a >> b;
    sort(a, b);
    cout << a << " " << b << endl;
    
    return 0;
}

void sort(int &i, int&j) {
    if (i < j) {
        int temp = i;
        i = j;
        j = temp;
    }
    return;
}