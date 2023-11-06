#include <iostream>

class Product {
private:
    int manufactureYear;
    int expiryYear;

public:
    Product(int manufacture, int expiry) : manufactureYear(manufacture), expiryYear(expiry) {}


    int calculateDifference() {
        return expiryYear - manufactureYear;
    }
};

int main() {
    Product item(2020, 2025);
    int difference = item.calculateDifference();
    
    std::cout << "Difference between Manufacture Year and Expiry Year: " << difference << " years" << std::endl;

    return 0;
}

