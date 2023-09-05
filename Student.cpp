# include <iostream>
using namespace std;
class student
{public:
string name;
string div;
int year;
};
int main ()
{
student obj1,obj2;
obj1.name="sarthak";
obj1.div="c";
obj1.year=2020;

obj1.name="harshal";
obj1.div="b";
obj1.year=2020;
cout<< obj1.name <<"\t" << obj1.div <<"\t" << obj1.year;
cout<< obj2.name <<"\t" << obj2.div <<"\t" << obj2.year;
return 0;
}
