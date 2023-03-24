#include<iostream>
using namespace std;
class Student
{
    private:
		int id;
		char name[20];
	public:	
		void setStudent()
		{
			cout<<"\n Enter the student Id and Name:";
			cin>>id>>name;
			
		}
		void getstudent()
		{
			cout<<"\n Student Id:"<<id;
			cout<<"\n Student Name:"<<name;
		}
};

int main()
{
	Student s;
	s.setStudent();
	s.getstudent();
	return 0;
}