#include<iostream>

class MathUtility {
public:
    static int square(int num) {
        return num * num;
    }
};

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;
    int result = MathUtility::square(num);

    std::cout << "The square of " << num << " is: " << result << std::endl;

    return 0;
}
