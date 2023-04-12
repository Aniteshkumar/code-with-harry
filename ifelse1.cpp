#include<iostream>
using namespace std;
int main()
{
    int age ;
    cout<<"enter the age = "<<endl;
    cin>>age;

    if( (age<18)&&(age >0))
    {
        cout<<"you are not get to the party = "<<age<<endl;

    }
    else if (age==18)
    {
        cout<<"you are a kid you wil get a kid pass to the party "<<age<<endl;

    }
    else if (age <0)
    {
        cout<<"you are not get born ="<<age<<endl;
    }
    else 

    {
        cout<<"you get to the party = "<<age<<endl;
        return 0;
        
    }
}