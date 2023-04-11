// #include<iostream>
// using namespace std;

// // single inheritance
// class Parent{
// public:
//     Parent(){
//         cout<<"Parent class"<<endl;
//     }
// };
// class Child: public Parent{
//  public:
//     Child(){
//         cout<<"Child class"<< endl;
//     }

// };
// int main()
// {
//     Child c;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// // multi level inheritance
// class Parent{
// public:
//     Parent(){
//         cout<<"Parent class"<<endl;
//     }
// };
// class Child: public Parent{
//  public:
//     Child(){
//         cout<<"Child class"<< endl;
//     }
// };
// class GrandChild: public Child{
// public:
//     GrandChild(){
//         cout<<"Grandchild class"<< endl;
//     }
// };
    

// int main()
// {
//     GrandChild gc;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// //Multiple inheritance
// class Parent1{
// public:
//     Parent1(){
//         cout<<"Parent1 class"<<endl;
//     }
// };
// class  Parent2{
//  public:
//     Parent2(){
//         cout<<"Parent2 class"<< endl;
//     }
// };
// class Child: public Parent1, Parent2{
// public:
//     Child(){
//         cout<<"Child class"<< endl;
//     }
// };
// class GrandChild: public Child{
// public:
//     GrandChild(){
//         cout<<"Grandchild class"<< endl;
//     }
// };
    

// int main()
// {
//     Child c;
//     return 0;
// }


#include<iostream>
using namespace std;

//Multiple inheritance
class Parent1{
public:
    Parent1(){
        cout<<"Parent1 class"<<endl;
    }
};
class  Parent2{
 public:
    Parent2(){
        cout<<"Parent2 class"<< endl;
    }
};
class Child1: public Parent1{
public:
    Child1(){
        cout<<"Child class"<< endl;
    }
};
class Child2: public Parent1{
public:
    Child2(){
        cout<<"Child class"<< endl;
    }
};

    

int main()
{
    Child1 c;
    return 0;
}

