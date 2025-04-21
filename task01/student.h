#include "main.h"
class Student {
public:
	string name;
	int age;
	int* marks;
	int countMark;
	bool alive;
	//Default-constructor 
	Student() {

		cout << "Default-constructor..." << endl;
		name = "no name";
		age = 13;
		mark = 4.0;
		alive = true;
	}
	//constructor without arguments
	Student(string nm, int a) {

		cout << "Constructor without arguments" << endl;
		name = nm;
		age = a;
		mark = 4.0;
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
		student.mark, student.alive) {

		cout << "Copy -constructor" << endl;
		name = student.name;
		age = student.age;
		mark = student.mark;
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
			", mark: " + to_string(mark) + ", alive: " +
			(alive ? "yes" : "no") + "\n";
		return s;
	}

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

	int getMark(int index) {
		return index <= 0 || index > countMark ? 0 : marks[index];
	}

	int setMark(int index, int mark) {
		if (index >= 0 && index < countMark) {
			marks[index] = mark;
		}
	}

};