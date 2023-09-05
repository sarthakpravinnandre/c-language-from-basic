# include <iostream>
using namespace std;
class bike
{public:
string brand;
string model;
int year;
};
int main ()
{
bike obj1,obj2;
obj1.brand="honda";
obj1.model="unicon";
obj1.year=2020;
    
obj2.brand="honda";
obj2.model="splendor";
obj2.year=2020;
cout<< obj1.brand <<"\t" << obj1.model <<"\t" << obj1.year;
cout<< obj2.brand <<"\t" << obj2.model <<"\t" << obj2.year;
return 0;
}
