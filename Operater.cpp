#include <iostream>
using namespace std;
int globalVariable = 10;

class MyClass
{public:

    static int classVariable;

    static void printClassVariable() {
        std::cout << "Class Variable: " << classVariable << std::endl;
    }
};


int MyClass::classVariable = 20;

int main() {
    
    int localVariable = 5;

    
    cout << "Global Variable: " << globalVariable << std::endl;

    cout << "Local Variable: " << localVariable << std::endl;

    cout << "Class Variable: " << MyClass::classVariable << std::endl;

    MyClass::printClassVariable();

    return 0;
} 