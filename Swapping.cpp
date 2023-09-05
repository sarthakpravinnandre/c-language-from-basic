# include <iostream>
using namespace std;
int main ()
{
    int num1,num2,num3;
    cout<<"enter the value of first number";
    cin>>num1;
    cout<<"enter the value of second number";
    cin>>num2;
    cout<<"enter the value of third number";
    cin>>num3;
    num3=num1;
    num1=num2;
    num2=num3;
    cout<<"after the swapping, first number will be :"<<num1<<endl;
    cout<<"after the swapping, second number will be :"<<num2<<endl; 
}