# include <iostream>
using namespace std;
int main ()
{
    int fahrenheit,celsius;
    cout<<"enter the fahrenheit of temperature";
    cin>>fahrenheit;
    cout<<"enter the celsius of temperature";
    cin>>celsius;
    fahrenheit =(celsius *9)/5 + 32;
    cout << "the temperature in celsius :"<< celsius << endl;
    cout << "the temperature in fahrenheit :"<< fahrenheit << endl;
}