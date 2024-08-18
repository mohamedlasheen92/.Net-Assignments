#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Complex {
public:
    int Real;
    int Img;
    char* description;

    Complex() {
        Real = Img = 0;
        description = new char[3];
    }
    Complex(int Real, int _Img) {
        this->Real = Real;
        Img = _Img;
        description = new char[3];
    }

    void Display() {    //void Display(Complex* this)
        cout << description << ": " << this->Real << " + " << Img << "i" << endl;
    }
    Complex operator+(Complex c2) {
        Complex result;
        result.Real = this->Real + c2.Real;
        result.Img = Img + c2.Img;  //Second way
        return result;
    }
    Complex operator+(int num) {
        Complex result;
        result.Real = Real + num;
        result.Img = Img + num;
        
        return result;
    }
    Complex operator++() {
        Real++;
        Img++;
        return *this;
    }
    Complex operator++(int num) {
        Complex temp = *this;
        Real++;
        Img++;
        return temp;
    }
    void operator=(Complex c) {
        Real = c.Real;
        Img = c.Img;
        description = new char[3];
    }
};
int main()
{
    Complex c1(3, 5);
    Complex c2(2, 4);
    Complex c3(5, 6);
    //c1.Display();

    //Complex c4 = c1 + c2 + c3;       //c1.operator+(c2)
    //c4.Display();

    /*Complex c5 = c2 + 10;
    c5.Display();*/

    //Complex c6 = ++c3;    //c3.operator++()
    //Complex c6 = c3++;      //c3.operator++(0)
    //c6.Display();
    //c3.Display();

    Complex c4;
    c4 = c1;
    strcpy(c1.description, "c1");
    strcpy(c4.description, "c4");

    c1.Display();
    c4.Display();





    return 0;
}

