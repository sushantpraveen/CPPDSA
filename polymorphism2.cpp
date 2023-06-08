//oprator overloading
#include<iostream>
using namespace std;
class Complex{
    private:
    int real,imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int r,int i){
        real=r;
        imag=i;
    }
    void print()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    //this is overloading syntx of operator overload
    Complex operator +(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.real;
        return temp;
    }
};
int main(){
    Complex c1(1,4);
    Complex c2(2,5);
    Complex c3(1,1);
    Complex c4;
    c4=c1+c2+c3; ///c1.add(c2)
    c4.print();

}