#include<iostream>
#include 'student.h'
using namespace std;

int main()
{
	Student s(101, "Apoorva", 60, 70, 80);
    //s.accept();
	s.calculate();
	s.display();
	return 0;
}
