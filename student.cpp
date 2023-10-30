#include 'student.h'
using namespace std;
//void accept()
//{
//	cout<<"Enter roll no: ";
//	cin>>roll_no;
//	cout<<"Enter name: ";
//	cin>>name;
//	cout<<"Enter marks1: ";
//	cin>>marks1;
//	cout<<"Enter marks2: ";
//	cin>>marks2;
//	cout<<"Enter marks3: ";
//	cin>>marks3;
//}
void calculate()
{
	int sum = marks1+marks2+marks3;
	int avg = sum/3;
}
void display()
{
	cout<<"Roll no: "<<roll_no;
	cout<<"Name: "<<name;
	cout<<"Marks1: "<<marks1;
	cout<<"Marks2: "<<marks2;
	cout<<"Marks3: "<<marks3;
	cout<<"Sum: "<<sum;
	cout<<"Average: "<<avg;
}
