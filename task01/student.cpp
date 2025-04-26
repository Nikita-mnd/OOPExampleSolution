#include "main.h"
class Student {
private:

	string name;
	int age;
	int* marks;
	int countMark;
	bool alive;
	string getAllMarks();
public:
	string getName();

	void setName(string name);

	int getAge();
	void setAge(int age);

	int getCountMark();

	int* getMarks();

	bool isAlive();

	void setAlive(bool alive);

	//Default-constructor 
	Student() : Student("no name", 13, 10, true);
	//constructor without arguments
	Student(string nm, int a);
	//canonical-constructor
	Student(string name, int age, int mark, bool alive);
	//Copy -constructor
	Student(const Student& student) : Student(student.name, student.age,
		student.marks, student.alive);
	//destructor
	~Student();

	string toString();



	int getMark(int index);

	int setMark(int index, int mark);

};