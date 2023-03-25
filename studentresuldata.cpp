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
class Result:public Student{
	private:
		float perc;
		public:
			void setresult(){
			cout<<"\n Enter the Percentage:"<<perc;
			cin>>perc;
		}
		void showdata()	{
			cout<<"\n Student Id:"<<id;
			cout<<"\n Student Name:"<<name;
			cout<<"\n Student Percentage:"<<perc;
		}
};
int main(){
	Result R;
	R.setStudent();
	R.setresult();
	R.showdata();
	return 0;
}