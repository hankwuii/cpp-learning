# include <iostream>
# include <cstdlib>
using namespace std;
void add10(int, int);
void add20(int &, int &); //若有參照要在宣告變數打上＆
int main(){
    int a = 20, b = 50, c = 20, d = 50;
    cout << "before call add10(): " << "a=" << a << ", b=" << b << endl;
    add10(a,b);
    cout << "after call add10(): " << "a=" << a << ", b=" << b << endl;

    cout << "before call add20(): " << "c=" << c << ", b=" << d << endl;
    add20(c,d);
    cout << "after call add20(): " << "c=" << c << ", d=" << d << endl;
    
    return 0;
}

void add10(int i, int j) {
    i+=10;
    j+=10;
    return;
}

void add20(int &k, int &z) { //讓c、d參照k、z
    k+=10;
    z+=10;
    return;
}