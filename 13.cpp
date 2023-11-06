#include<iostream>
using namespace std;
class MYClass{
	public:
		MyClass(){
			cout<<"constructor called"<<endl;
		}
		~MyClass(){
			cout<<"destructor called"<<endl;
		}
};
int main(){
	 MyClass obj;
	cout<<"inside main function"<<endl;
	return 0;
}
