#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int binary[32];
    int i = 0;

    while (n > 0) {
        binary[i] = n & 1;
        n = n >> 1;
        i++;
    }

    

    cout << "Binary equivalent is: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;

    return 0;
}