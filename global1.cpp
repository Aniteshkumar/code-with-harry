#include<iostream>
using namespace std;
int c=45;// globle 

int main ()
{
    /*float f=33.3f;
    long double d=35.3l;
    int a,b;
    cout<<"enter the two number = "<<endl;
    cin>>a>>b;

    cout<<" the sum of two number is = "<<a+b<<endl;
    cout<<"the globle is c  = "<<::c;
    cout<<"the value of d = "<<d<<endl;
    cout<<"the size of 33.3f is = "<<sizeof(33.3f)<<endl;
    cout<<"the size of 35.5l is = "<<sizeof(35.5l)<<endl;
    return 0;  
     
     // ******* reference variable ********

     int a =5;
     int & b=a;
     cout<<a<<endl;
     cout<<b<<endl;*/

     //******** type casting ********  

    
    int a=33;
    float f =33.33;
    cout<<a<<endl;
    cout<<f<<endl;
    cout<<"the value of a is = "<<float(f)<<endl;
    cout<<"the value of f is = "<<int (a)<<endl;
    int c=int(f);


     cout<<"the expression of = "<<a+f<<endl;
     cout <<"the expression of = "<<a+float(f)<<endl;//66.33
     cout<<"the expression = "<<f+int(a)<<endl;//
     return 0;
}
