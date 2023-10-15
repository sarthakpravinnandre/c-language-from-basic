# include <iostream>
using namespace std;
int main ()
{
    int n,i, sum =0;
    cout <<"enter the consecutive positive number";
    cin>>n;
    i=1;
    while ( i<=n)
    {
    sum+=i;
    }
    i++;
    cout<<"the sum="<<sum;
    return 0;
}