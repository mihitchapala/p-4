#include <iostream>
using namespace std;
class MyClass{
	private:
		int data;
	public:
		MyClass(int value):data(value){
			cout<<"constructor called"<<endl;
		}
		MyClass(const MyClass& other):data(other.data){
			cout<<" copy constructor called"<<endl;
		}
		void display(){
			cout<<"data:"<<data<<endl;
		}
};
int main()
{
	MyClass obj1(42);
	MyClass obj2=obj1;
	cout<<"object 1:";
	obj1.display();
	cout<<"object 2:";
	obj2.display();
	return 0;
}
