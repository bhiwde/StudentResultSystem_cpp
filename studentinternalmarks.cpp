#include<iostream>
using namespace std;
class Student{
    public:
		int id;
		char name[20];
	        void setStudent(){
			cout<<"\n Enter the student Id and Name:";
			cin>>id>>name;
			}
};
class Internal:public Student
{
	public:
		int im1,im2;
		void setinternalmarks()
		{
			cout<<"\n Enter the Internal Marks for Math1 and Math2:";
			cin>>im1>>im2;
		}
};

class Result:public Internal{
	 private:
		float perc=0.0;
   	public:
			void setresult(){
			cout<<"\n Enter the Percentage:"<<perc;
			cin>>perc;
		}
		void showdata()	{
			cout<<"\n Student Id:"<<id;
			cout<<"\n Student Name:"<<name;
			cout<<"\n Student Internal Marks Math1:"<<im1  <<"Math2:"<<im2;
		    cout<<"\n Student Percentage:"<<perc;
		}
};
int main(){
	Result R;
	R.setStudent();
	R.setinternalmarks();
	R.setresult();
	R.showdata();
	return 0;
}