# include <iostream>
using namespace std;
class wall 
{
double length;
double height;
public:
wall(double len,double hgt)
{
    length =len;
    height =hgt;
}
wall (class obj);
{
    lenght =obj length;
    height =obj height;
}
double calculate_area ()
{
    return length * height;
}
};
int main ()
{
    wall w1 (10.12,10.13);
    wall w2=w1;
    cout<<"w1 calculate_area ()";
    cout<<"w2 calculate_area ()";
return 0;
}
