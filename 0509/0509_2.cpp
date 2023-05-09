# include <iostream>

using namespace std;

int sum(int start = 1, int end = 10, int step = 1);  //可以預設值,但一定不會更改的值必須放在左邊
double sum(double, double);  //函數的多載,名稱相同的函數,可以引數個數不同or引數個數相同、型態不同

int main() {
    cout << "sum() = " << sum() << endl;  //全部使用預設值
    cout << "sum(2) = " << sum(2) << endl;  //更改start
    cout << "sum(2,8) = " << sum(2,8) << endl;  //更改start,end
    cout << "sum(1,15,3) = " << sum(1,15,3) << endl;
    return 0;
}

int sum(int start, int end, int step) {
    int i, total = 0;
    for (i = start; i <= end; i += step)
        total = total + i;
    return total;
}