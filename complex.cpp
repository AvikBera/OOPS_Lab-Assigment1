#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    // Initialize values
    void set(float r, float i) {
        real = r;
        imaginary = i;
    }

    // Display complex number
    void display() {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }

    // Add two complex numbers and return the result
    Complex sum(Complex c2) {
        Complex result;
        result.real = real + c2.real;
        result.imaginary = imaginary + c2.imaginary;
        return result;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.set(3.5, 2.5);
    cout << "Complex Number 1: ";
    c1.display();

    c2.set(1.5, -4.0);
    cout << "Complex Number 2: ";
    c2.display();

    // Summing c1 and c2
    c3 = c1.sum(c2);
    
    cout << "Sum: ";
    c3.display();

    return 0;
}

