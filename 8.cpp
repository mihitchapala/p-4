#include <iostream>

class FriendClass;

class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}
    friend class FriendClass;
};

class FriendClass {
public:
    void accessPrivateData(const MyClass& obj) {
        std::cout << "Private Data (accessed by FriendClass): " << obj.privateData << std::endl;
    }
};

int main() {
    MyClass myObj(42);
    FriendClass friendObj;


    friendObj.accessPrivateData(myObj);

    return 0;
}

