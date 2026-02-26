#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Decimal to Binary\n";
    cout << "2. Binary to Decimal\n";
    cout << "Enter choice: ";
    cin >> choice;

    // ---------------- DECIMAL TO BINARY ----------------
    if (choice == 1) {
        int n;
        cin >> n;

        int bin[32];
        int i = 0;

        while (n > 0) {
            bin[i] = n & 1;
            n = n >> 1;
            i++;
        }

        cout << "Binary equivalent is: ";
        for (int j = i - 1; j >= 0; j--) {
            cout << bin[j];
        }
        cout << endl;
    }

    // ---------------- BINARY TO DECIMAL ----------------
    else if (choice == 2) {
        int binaryNum;
        cin >> binaryNum;

        int ans = 0;
        int pow = 1;

        while (binaryNum != 0) {
            int digit = binaryNum % 10;
            ans = ans + (digit * pow);
            pow *= 2;
            binaryNum /= 10;
        }

        cout << "Decimal equivalent is: " << ans << endl;
    }

    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}