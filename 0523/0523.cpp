# include <iostream>

using namespace std;

int main() {
    int b=5, *ptr=&b;
    double c=3.14;

    cout << "c= " << c << ", sizeof(c)=" << sizeof(c);
    cout << ", location(&c)=" << &c << endl;
    cout << "b= " << b << ", sizeof(b)=" << sizeof(b);
    cout << ", location(&b)=" << &b << endl;

    cout << "*ptr= " << *ptr << ", ptr=" << ptr << endl;
    cout << ", &ptr=" << &ptr << endl;

    return 0;
}