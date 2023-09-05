# include <iostream>
using namespace std;
class book
{public:
string name;
string author;
string publication;
int price;
int year;
};
int main ()
{
book obj1,obj2,obj3;
obj1.name="physics";
obj1.author="abc";
obj1.publication="nirali";
obj1.price=890;
obj1.year=2019;

obj1.name="chemistry";
obj1.author="pqr";
obj1.publication="nirali";
obj1.price=850;
obj1.year=2019;

obj1.name="math";
obj1.author="xyz";
obj1.publication="nirali";
obj1.price=857;
obj1.year=2019;


cout<< obj1.name <<"\t" << obj1.author <<"\t" << obj1.price <<"\t"<< obj1.year;
cout<< obj2.name <<"\t" << obj2.author <<"\t" << obj2.price <<"\t"<< obj2.year;
return 0;
}
