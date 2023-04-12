#include<iostream>
using namespace std;
int main() 
{
     //pointer is create and some carpage value 
 int*p;
 cout<<*p<<endl;

 int num=10;
 cout<<num<<endl;
 cout<<"addres of num = "<<&num<<endl;
 int*ptr=&num;
 cout<<"value of num = "<<*ptr<<endl;
 
 cout<<"before num "<<num<<endl; 

 (*ptr)++;
 cout<<"after "<<num;

 cout<<"hello word "<<endl;

 int*q=ptr;
    cout<<p<<"- "<<q<<endl;
    cout<<*ptr<<" - "<<*q<<endl;




 return 0;
}