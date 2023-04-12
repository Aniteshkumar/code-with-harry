//**** globle ****
#include<iostream>
#include<iomanip>
using namespace std;
/*int c =3;
int main()
{
    int a,b;
    cout<<"enter the two number = ";
    cin>>a>>b;
    cout<<"the sumof the two number = "<<a+b<<endl;
    cout<<"the value of globle = "<<::c+a;
    return 0;
}


// **** type casting ****
int main ()
{
    int a=3;
    float f=33.3;
    cout<<"the value of a is = "<<f<<endl;
    cout<<"the value of f is = "<<a<<endl;
}*/

//*****manipulate *** 
int main()
{
    int a,b;
    cout<<"enter the first   number = "<<endl;
    cin>>a;
    cout<<"enter the second number = "<<endl;
    cin>>b;
    cout<<"the value of first without setw =  "<<a<<endl;
    cout<<"enter the second number without setw = "<<b<<endl;
    cout<<"enter the first numberf with setw = "<<setw(2)<<a<<endl;
    cout<<"enter the second number with set w = "<<setw(9)<<b<<endl;
    return 0;
}