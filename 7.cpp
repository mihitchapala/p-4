#include<iostream>
using namespace std;

class student
{
	private:
		int std_id;
		string name;
		friend void getdata(student s);
	public:
		void putdata()
		{
			cout<<std_id;
			cout<<name;
		 } 
};
void getdata(student s)
{
	cout<<"enter student id:";
	cin>>s.std_id;
	cout<<"enter student name:";
	cin>>s.name;
}
int main()
{
	student s1;
	getdata(s1);
	s1.putdata();
	return 0;
}
