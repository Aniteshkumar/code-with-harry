#include<iostream>
using namespace std;
int main()
{
    /*int a=8;
    int*b=&a;

    cout<<"the addres of a is "<<b<<endl;
    cout<<"the addres of a is "<<&a<<endl;

    cout<<"the value of addres  b is = "<<*b<<endl;
    return 0;*/
    int a=5;
    cout<<a<<endl;
    int*ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    (*ptr++);
}