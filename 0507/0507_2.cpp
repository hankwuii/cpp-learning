# include <iostream>
# include <cstdlib>
using namespace std;
void func(int, int);
int main(void) {
    int a=3, b=6;
    cout << "In main(), a=3, b=6\n";
    func(a,b);
    cout << "func(), a=" << a << ", b=" << b << "\n"; //func()裡的a、b改變並未影響到main因其為區域變數
}

void func(int a, int b) {
    a = a+10; //a+=10
    b = b+10;
    cout << "In func(), a=" << a << ", b=" << b << "\n";
    return;
}