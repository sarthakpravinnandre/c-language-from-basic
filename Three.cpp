# include <iostream>
using namespace std;
int main ()
{
    int x,y,z;
    cout<<"enter the any three numbers";
    cin >> x >> y >> z;
    if (x>y)
    {
    if (x>z)    
    cout<<"the largest value is" << x << endl;
    else 
    cout<<"the largest value is" << y << endl;
    }
    else if (y>z)
    cout<<"the largest value is" << y << endl;
    else 
    cout<<"the largest value is" << z << endl;
}