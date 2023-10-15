# include <iostream>
using namespace std;
class wall
{
double length;
double height;
public:
wall (double len,double hgt)
{
    length =len;
    height =hgt;
}
double calculate_area ()
{
    return length * height;
}
};
int main ()
{
    wall w1 (12.5,12.13);
    wall w2 (13.5,13.18);
    cout<<"w1 calculate_area ()";
    cout<<"w2 calculate_area ()";
    return 0;
}