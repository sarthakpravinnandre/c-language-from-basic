# include <iostream>
using namespace std;
class car
{public:
string brand;
string model;
int year;
};
int main ()
{
car obj1,obj2;
obj1.brand="tata";
obj1.model="nexon";
obj1.year=2020;
    
obj2.brand="maruti suzuki";
obj2.model="swift";
obj2.year=2020;
cout<< obj1.brand <<"\t" << obj1.model <<"\t" << obj1.year;
cout<< obj2.brand <<"\t" << obj2.model <<"\t" << obj2.year;
return 0;
}
