#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};
void printPersonInfo(const Person& person) {
    std::cout << "Received Person Information: ";
    person.display();
}

int main() {
    Person person1("Alice", 30);
    printPersonInfo(person1);

    return 0;
}

