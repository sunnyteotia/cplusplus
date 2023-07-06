//function overloading
/*#include "bits/stdc++.h"
using namespace std;
// function overloading 
class madhavas
{
    public:
    void fun()
    {
        cout<<"I am a function with no arguments "<<endl;
    }
    void fun(int x)
    {
        cout<<" i am a function with int argument "<<endl;
    }
    void fun(double x)
    {
        cout<<"i am a function with double  "<<endl;
    }
};
int32_t main(){
madhavas obj;
obj.fun();
obj.fun(4);
obj.fun(6.2);
}*/
// operator overloading //
/*#include "bits/stdc++.h"
using namespace std;
class Complex
{
private:
int real,imag;
public:
Complex(int r=0,int i=0){
real =r;
imag=i;
}
Complex operator + (Complex const &obj){
    Complex res;
    res.imag =imag + obj.imag;
    res.real=real +obj.real;
    return res;
}
void display(){
    cout<<real<<" + i"<<imag <<endl;
}
};
int32_t main(){
 Complex c1(12,7), c2(6,7);
 Complex c3=c1+c2;
c3.display();
return 0;
}*/
// function overwriting and run time //
#include "bits/stdc++.h"
using namespace std;
class base
{
    public:
    virtual 
    
    void print(){
        cout<<"this is the base class's print function "<<endl;
    }
    void display(){
        cout<<"this is the base class's display function "<<endl;
    }
};
class derived :public base 
{
    public:
    void print(){
        cout<<"this is the derived class's print function "<<endl;
    }
    void display(){
        cout<<"this is the derived class's display function "<<endl;
    }
};
int32_t main(){
    base *baseptr;
    derived d;
    baseptr =&d;
    baseptr -> print();
    baseptr -> display();
    return 0;
}