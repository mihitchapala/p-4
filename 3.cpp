#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    float spi;
    
    
    Student(std::string n, float s) : name(n), spi(s) {}
};

int main() {
    
    Student students[10] = {
        {"Student 1", 3.5},
        {"Student 2", 3.2},
        {"Student 3", 3.9},
        {"Student 4", 3.7},
        {"Student 5", 3.1},
        {"Student 6", 3.8},
        {"Student 7", 3.6},
        {"Student 8", 3.4},
        {"Student 9", 3.0},
        {"Student 10", 3.3}
    };

    
    Student highestSPIStudent = students[0];
    for (int i = 1; i < 10; i++) {
        if (students[i].spi > highestSPIStudent.spi) {
            highestSPIStudent = students[i];
        }
    }

    
    std::cout << "Student with the highest SPI: " << highestSPIStudent.name << " (" << highestSPIStudent.spi << ")" << std::endl;

    return 0;
}
