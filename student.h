#include<iostream>
using namespace std;
class Student{
	private:
		int roll_no;
		string name;
		int marks1;
		int marks2;
		int marks3;
		public:
			
Student(int roll_no, string name, int marks1, int marks2, int marks3)
{
	this->roll_no=roll_no;
	this->name=name;
	this->marks1=marks1;
	this->marks2=marks2;
	this->marks3=marks3;
	
	cout<<"Enter roll no: ";
	cin>>roll_no;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter marks1: ";
	cin>>marks1;
	cout<<"Enter marks2: ";
	cin>>marks2;
	cout<<"Enter marks3: ";
	cin>>marks3;
}
int getrno()
{
	return roll_no;
}
string getname()
{
	return name;
}
int getm1()
{
	return marks1;
}
int getm2()
{
	return marks2;
}
int getm3()
{
	return marks3;
}


void setrno(int roll_no)
{
	this->roll_no=roll_no;
}
void setname(string name)
{
	this->name=name;
}
void setm1(int marks1)
{
	this->marks1=marks1;
}
void setm2(int marks1)
{
	this->marks2=marks2;
}
void setm3(int marks3)
{
	this->marks3=marks3;
}

};

