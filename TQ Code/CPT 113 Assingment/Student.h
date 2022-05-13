#ifndef STUDENT_H
#define STUDENT_H
#include<string>
#include"Stay.h"


using namespace std;

class Student
{
private:
	char gender;
	string name;
	string email;
	string phone;
	int matricNum;
	string IC;

public:
	Student();
	~Student();
	Student(char, string, string, string, int, string);
	void setStudent(char, string, string, string, int, string);
	friend void Stay::displayData(const Student);
	bool operator==(string&);
};
#endif // !STUDENT_H
