#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Complex {
public:
    int Real, Img;
    char* Description;
    static int counter;

    Complex()
    {
        Real = Img = 0;
        counter++;
        Description = new char[10];
    }
    Complex(int real, int img)
    {
        Real = real;
        Img = img;
        counter++;
        Description = new char[10];
    }
    Complex(const Complex& oldObj) {    //Copy Constructor
        this->Real = oldObj.Real;
        this->Img = oldObj.Img;
        this->Description = new char[10];

        for (int i = 0; i < 10; i++) {
            this->Description[i] = oldObj.Description[i];
        }
        
    }
    void Display()
    {
        cout << Description << " -> " << Real << " + " << Img << "i\n";
    }
    static Complex Add(Complex first, Complex second) {
        Complex result;
        result.Real = first.Real + second.Real;
        result.Img = first.Img + second.Img;
        
        first.Real = 95;
        strcpy(first.Description, "c77");

        return result;
    }
    static void DisplayCounter() {
        cout << "Counter: " << counter << endl;
    }

    ~Complex() {
        delete this->Description;
        cout << "I'm Destructor\n";
    }
};
int Complex::counter = 0;
int main()
{
    Complex c1(3, 5);
    Complex c2(2, 4);

    strcpy(c1.Description, "c1");
    strcpy(c2.Description, "c2");

    Complex c3 = Complex::Add(c1, c2);

    c1.Display();


    Complex::DisplayCounter();



    return 0;
}

