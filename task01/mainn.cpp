#include "teacher.h"

void change(Student student) {
	student.name = "Vova";
	student.age = 15;
	student.mark = 10;
	student.alive = false;
}


int main() {
	Student* list = nullptr;
	cout << "Input numbers of students: ";
	int size;
	cin >> size;

	list = new Student[size];

	cout << "Input data of student:\n";
	for (int i = 0; i < size; i++)
	{
		cout << "name: ";
		cin >> list[i].name;

		cout << "age: ";
		cin >> list[i].age;

		cout << "average mark: ";
		cin >> list[i].mark;

		cout << "is alive (y/n): ";
		char answear;
		cin >> answear;

		list[i].alive = islower(answear) == 'y';
	}

	Teacher teacher;

	Student result = teacher.getAllBestStudent(list, size);

	string msg = result.alive ? result.name : "No best student.";

		cout << "Best student is: " << msg;

	return 0;
}