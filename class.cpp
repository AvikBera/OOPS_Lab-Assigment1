#include <iostream>
#include <string>
using namespace std;

class StudentClass {
private:
    // Private Data Members (Encapsulation)
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;

    // Private Member Function (Question 6 requirement)
    // This cannot be called from main(), only from within the class
    void formatName() {
        // Example internal logic
        Name = "[Student] " + Name;
    }

public:
    // Public Member Functions
    void addDetails(string n, int r, string d, string h, float c) {
        Name = n;
        RollNo = r;
        Degree = d;
        Hostel = h;
        CurrentCGPA = c;
        
        // Calling a private member function inside a public one (Question 6a & 6b)
        formatName(); 
    }

    void updateCGPA(float newCGPA) {
        CurrentCGPA = newCGPA;
    }

    void updateHostel(string newHostel) {
        Hostel = newHostel;
    }

    void displaydetails() {
        cout << "\n--- Student Class Info ---\n";
        cout << "Name: " << Name << endl; // Name was formatted by private function
        cout << "Roll No: " << RollNo << endl;
        cout << "Degree: " << Degree << endl;
        cout << "Hostel: " << Hostel << endl;
        cout << "CGPA: " << CurrentCGPA << endl;
    }
};

int main() {
    StudentClass s1;
    
    // s1.Name = "John"; // ERROR: Name is private
    // s1.formatName();  // ERROR: formatName() is private

    s1.addDetails("Alice Smith", 101, "B.Tech", "Block A", 8.9); // Public call
    s1.displaydetails();

    return 0;
}

