#include<iostream>
using namespace std;
class myClass{
	private:
		int number;
	public:
		myClass(int num){
			cout<<"parameterized constructor called with num ="<<num<<endl;
			number=num;
		}
		void display(){
			cout<<"number:"<<number<<endl;
		}
};
int main()
{
	myClass obj(42);
	obj.display();
	return 0;
}
