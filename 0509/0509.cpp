# include <iostream>

using namespace std;

void print(char , int &);

int main() {
    int i, count = 0;

    for (i = 0; i < 4; i++)
        print('*', count);
    cout << endl;
    
    for (i = 0; i < 6; i++)
        print('%', count);
    cout << endl;
    
    cout <<"print() been called for " << count << " times." <<endl;
    return 0;
}

void print(char ch, int &j) {
    cout << ch;
    j++;
    return;
}