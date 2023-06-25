#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;
    int b;

    Rectangle(){//default constructor-- no argument passed
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y){//parametraized constructor -- arguments passed
        l = x;
        b = y;
    }

    Rectangle(Rectangle& r){//copy constructor-- initialise an object by another existing object
        l = r.l;
        b= r.b;
    };

    ~Rectangle(){//Destrctor
        cout<<"Decstructor is called"<<endl;
    };
};
int main()
{
     Rectangle *r1= new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1; 
    Rectangle r2(4,5);
    cout<<r2.l<<" "<<r2.b<<endl;
    Rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}