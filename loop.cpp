#include <iostream>
using namespace std;

int main() {
    cout << "--- For Loop Variations ---" << endl;
    
    // Standard for loop
    cout << "Standard: ";
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
    }
    cout << endl;

    // For loop without initialization in construct
    cout << "No Init: ";
    int j = 0;
    for (; j < 3; j++) {
        cout << j << " ";
    }
    cout << endl;

    // For loop without initialization and increment in construct
    cout << "No Init & Increment: ";
    int k = 0;
    for (; k < 3;) {
        cout << k << " ";
        k++;
    }
    cout << endl;

    cout << "\n--- While Loop ---" << endl;
    int w = 0;
    while (w < 3) {
        cout << w << " ";
        w++;
    }
    cout << endl;

    cout << "\n--- Do-While Loop ---" << endl;
    int d = 0;
    do {
        cout << d << " ";
        d++;
    } while (d < 3);
    cout << endl;

    return 0;
}

