//  **** manipulater in c++ ******
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=2,b=15,c=150,d=1500;
    cout<<"the valuenof a is without setw = "<<a<<endl;
    cout<<"the value of b is without setw = "<<b<<endl;

    cout<<"the value of a is= "<<setw(6)<<a<<endl;
    cout<<"the value of b is = "<<setw(6)<<b<<endl;
    cout<<"the value of c is = "<<setw(6)<<c<<endl;
    cout<<"the value of d is = "<<setw(6)<<d<<endl;
    return 0;

}
