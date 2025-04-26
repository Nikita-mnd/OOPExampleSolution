#include "main.h"
class Student {
private:

	string name;
	int age;
	int* marks;
	int countMark;
	bool alive;
	string getAllMarks() {
		if (countMark == 0) {
			return "[]";
		}
		string s = "";
		for (int i = 0; i < countMark; i++)
		{
			s += to_string(marks[i]) + " ";
		}
		return s;
	}
public:
	string getName() {
		return name;
	}

	void setName(string name){
		this -> name = name;
	}

	int getAge() { return age; }
	void setAge(int age) {
		if(age >= 13 && age <= 18){this->age = age;}
	}

	int getCountMark() {
		return countMark;
	}

	int* getMarks() {
		return marks;
	}

	bool isAlive() {
		return alive;
	}

	void setAlive(bool alive) {
		this->alive = alive;
	}

	//Default-constructor 
	Student() : Student("no name" , 13, 10, true) {

	}
	//constructor without arguments
	Student(string nm, int a) {

		cout << "Constructor without arguments" << endl;
		name = nm;
		age = a;
		marks = nullptr;
		alive = true;
	}
	//canonical-constructor
	Student(string name, int age, int mark, bool alive) {

		cout << "Constructor without arguments" << endl;
		this->name = name;
		this->age = age;
		this->alive = alive;
		marks = new int[countMark];
		for (int i = 0; i < countMark; i++) {
			this->marks[i] = marks[i];
		}
	}
	//Copy -constructor
	Student(const Student& student) : Student(student.name, student.age,
		student.marks, student.alive) {

		cout << "Copy -constructor" << endl;
		name = student.name;
		age = student.age;
		marks = student.marks;
		alive = student.alive;
	}
	//destructor
	~Student() {
		cout << "destructor..." << endl;
		if (marks) {
			delete[] marks;
		}
	}

	string toString() {
		string s = "name: " + name + ", age: " + to_string(age) +
			", mark: " + marks + ", alive: " +
			(alive ? "yes" : "no") + "\n";
		return s;
	}

	

	int getMark(int index) {
		return index <= 0 || index > countMark ? 0 : marks[index];
	}

	int setMark(int index, int mark) {
		if (index >= 0 && index < countMark) {
			marks[index] = mark;
		}
	}

};