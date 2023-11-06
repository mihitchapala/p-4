#include <iostream>

class Adder {
private:
    int num1;
public:
    Adder(int n1) : num1(n1) {}
    friend int addNumbers(const Adder& obj, int num2);
};

int addNumbers(const Adder& obj, int num2) {
    return obj.num1 + num2;
}

int main() {
    Adder adder(5);
    int num2 = 10;

    int result = addNumbers(adder, num2);

    std::cout << "Sum of " << adder.num1 << " and " << num2 << " is " << result << std::endl;

    return 0;
}

