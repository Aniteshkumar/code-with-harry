#include<iostream>
using namespace std;
int main()
{
 int num=8;
 cout<<num<<endl;
 cout<<"addres is ="<<&num<<endl;

 int*ptr=&num;
 cout<<"addres is ptr = "<<ptr<<endl;
 cout<<"the value of  ptr = "<<*ptr<<endl;

 cout<<"size of integer  = "<<sizeof(num)<<endl;
 cout<<"size of pointer = "<<sizeof(ptr)<<endl;


 return 0;
}