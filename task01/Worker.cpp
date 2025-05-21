#include "Worker.h"
double salary;
string company;

Worker::Worker() : Worker("", 0, false, 0.0, "") {

	cout << "Worker default constructor" << endl;
}
Worker::
Worker(string name, int age, bool gender, double salary, string company) {
	/*this->age = age;
	this->name = name;
	this->gender = gender;*/
	this->salary =salary ;
	this->company = company;
}
//Worker::Worker(const Worker& worker);
//Worker::~Worker(worker.name, worker.age, worker.gender, worker.salary, worker.company);

double Worker::getSalary() {
	return salary;
}
void Worker::setSalary(double salary) {
	this->salary = salary;
}
//string Worker::getCompany();
//void Worker::setCompany(string company);
//string Worker::toString() {
//
//	string s = "";
//	s += name + ", ";
//
//}