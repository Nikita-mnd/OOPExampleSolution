#include "main.h"
class Student {
public:
	string name;
	int age;
	double mark;
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
	Student(string nm, int a, int m, bool al) {

		cout << "Constructor without arguments" << endl;
		name = nm;
		age = a;
		mark = m;
		alive = al;
	}
	//Copy -constructor
	Student(const Student& student) {

		cout << "Copy -constructor" << endl;
		name = student.name;
		age = student.age;
		mark = student.mark;
		alive = student.alive;
	}

	string toString() {
	string s = "name: " + name + ", age: " + to_string(age) +
		", mark: " + to_string(mark) + ", alive: " +
		(alive ? "yes" : "no") + "\n";
	return s;
}

};