#include <iostream>
using namespace std;

int main() {
    // 1. Display Hello World
    cout << "Hello World" << endl;

    // 2. Implement control characters
    cout << "1. New Line Test:\nThis is on a new line." << endl;
    
    // Using endl for new line
    cout << endl << "This is another new line using endl.";
    
    // Tab
    cout << "\n2. Tab Test: Column1\tColumn2\tColumn3";
    
    // Alarm (may not sound on all systems)
    cout << "\n3. Alarm Test:\a";
    
    // Carriage Return (overwrites the beginning of the line)
    cout << "\n4. Carriage Return Test: Hello\rBye" << endl;

    return 0;
}
