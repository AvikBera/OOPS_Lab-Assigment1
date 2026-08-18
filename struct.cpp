#include <iostream>
#include <string>
using namespace std;

struct Student {
    // Data Members
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;

    // Member Functions
    void addDetails() {
        cout << "\nEnter Student Details:\n";
        cout << "Name: ";
        getline(cin, Name);
        cout << "Roll No: ";
        cin >> RollNo;
        cin.ignore(); // Clear buffer
        cout << "Degree: ";
        getline(cin, Degree);
        cout << "Hostel: ";
        getline(cin, Hostel);
        cout << "Current CGPA: ";
        cin >> CurrentCGPA;
        cin.ignore();
    }

    void updateDetails() {
        cout << "\nUpdating Details...\n";
        addDetails(); // Simplified: just re-entering all for this example
    }

    void updateCGPA(float newCGPA) {
        CurrentCGPA = newCGPA;
        cout << "CGPA updated successfully.\n";
    }

    void updateHostel(string newHostel) {
        Hostel = newHostel;
        cout << "Hostel updated successfully.\n";
    }

    void displaydetails() {
        cout << "\n--- Student Information ---\n";
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Degree: " << Degree << endl;
        cout << "Hostel: " << Hostel << endl;
        cout << "CGPA: " << CurrentCGPA << endl;
        cout << "---------------------------\n";
    }
};

int main() {
    Student s1;
    s1.addDetails();
    s1.displaydetails();
    
    s1.updateCGPA(9.5);
    s1.updateHostel("Block B");
    s1.displaydetails();

    return 0;
}

