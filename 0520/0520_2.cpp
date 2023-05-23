# include <iostream>
# include <random>

using namespace std;

int main() {
    int num;

    for (int i = 0; i < 4; i++) {
        random_device rd;
        mt19937 generator(rd());
        uniform_int_distribution<int> distribution(0,9);
        num = distribution(generator);
        cout << num;
    }
    cout << endl;
    return 0;
}