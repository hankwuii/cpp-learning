# include <iostream>
# include <cstdlib>
using namespace std;
void sum(int), fact(int);
int main(void) {
    int a = 5;
    fact(a);
    sum(a+5);
    return 0;
}

void sum(int a) {
    int i, sum = 0;
    for(i = 1; i <= a; i++)
        sum = sum + a;
    cout << "sum of 1~" << a << " is " << sum << endl;
    return;
}

void fact(int a) {
    int i, total = 1;
    for(i = 1; i <= a; i++)
        total = total*i;
    cout << "total of " << a << "! is " << total << endl;
    return;
}