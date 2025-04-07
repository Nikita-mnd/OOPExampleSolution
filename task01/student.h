#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	string getString() {
	string s = "name: " + name + ", age: " + to_string(age) +
		", mark: " + to_string(mark) + ", alive: " +
		(alive ? "yes" : "no") + "\n";
	return s;
}

};