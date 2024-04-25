#include <iostream>
using namespace std;

int main() {

    int baris;
    int n = 1;

    cout << "masukkan jumlah baris: ";
    cin >> baris;
    
    for (int i = 1; i <= baris; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << n++ << " ";
            if (n > 28)
                break;
        }
        cout << endl;
    }
    
}