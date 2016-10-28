#include <iostream>
using namespace std;

class Course
{ //declaring the class 'Course'//
private: 
	string CourseName;
	string* students;
	int numberofStudents;
	int capacity;

public:
	Course(const string& courseName, int capacity);
	~Course();
	string getCoursename() const;
	void addStudent(const string& name);
	void dropsStudent(const string& name);
	string* getStudents() const;
	int getNumberofStudents() const;
};

Course::Course(const string& CourseName, int capacity)
{
	numberofStudents = 0;
	this->CourseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course :: ~Course()
{
	delete[] students;
}

string Course::getCourseName() const 
{
	return courseName; //returns the name of the course//
}
void Course::addStudent(const string& name)
{
	students[numberofStudents] = name; //adds a student to the class//
	numberofStudents++;
}

void Course::dropStudent(const string& name)
{
	students[numberOfStudents] = name; //drops one student//
	numberofStudents - 1;
}

string* Course getStudents() const
{
	return students;
}

int Course::getNumberOFStudents() const
{
	return numberOfStudents;
}
