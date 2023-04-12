#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int*b=&a; //&-> (addres of ) operater 
    //***&a is  a addres of a 

    cout<<"the addres of a is = "<<&a<<endl;
    cout<<"the addres of  b is = "<<b<<endl;

    // * =>(value at) dereferance operater
    cout<<"the value of b is = "<<*b<<endl; 
    return 0;
}