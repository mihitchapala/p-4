#include<iostream>
#include<string>
class Employee{
	private:
		int emp_id;
		std::string emp_name;
	public:
		void getData(){
			std::cout<<"enter Employee ID:";
			std::cin>>emp_id;
			std::cin.ignore();
			std::cout<<"enter Employee Name:";
			std::getline(std::cin,emp_name);
		}
		void putData(){
			std::cout<<"Employee ID:"<<emp_id<<std::endl;
			std::cout<<"Employee Name:"<<emp_name<<std::endl;
		}
};
int main()
{
	const int numEmployees=10;
	Employee emp[numEmployees];
	for(int i=0;i<numEmployees;i++)
	{
		std::cout<<"\nEnter detail for Employee"<<i+1<<":"<<std::endl;
		emp[i].getData();
	}
	for(int i=0;i<numEmployees;i++)
	{
		std::cout<<"\n Detail for Employee"<<i+1<<":"<<std::endl;
		emp[i].putData();
	}
	return 0;
}
