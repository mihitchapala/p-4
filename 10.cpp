#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass() {
        value = 0;
    }

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyClass myObj;
    myObj.display();

    return 0;
}

