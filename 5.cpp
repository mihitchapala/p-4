#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Function to display person information
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Function that returns a Person object
Person createPerson(const std::string& name, int age) {
    return Person(name, age);
}

// Function that takes a Person object as an argument
void printPersonInfo(const Person& person) {
    std::cout << "Received Person Information: ";
    person.display();
}

int main() {
    // Create a Person object using createPerson function
    Person person1 = createPerson("Alice", 30);

    // Pass the Person object as an argument to the printPersonInfo function
    printPersonInfo(person1);

    return 0;
}

