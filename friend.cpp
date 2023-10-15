
#include <iostream>
using namespace std;
class Math 
{
public:
static int multiply(int a, int b) {
return a * b;
}
};
int main() {
int result = Math::multiply(5, 3);
cout << "Result of multiplication: " << result << std::endl;
return 0;
}

