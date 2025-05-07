#include "Gruop.h"

Group::Group() {

}

Group::Group(Student* list, int count) {
	if (list != nullptr && count > 0) {
		list = new Student[count];

		this->count = count;

		for (int i = 0; i < count; i++)
		{
			this->list[i] = list[i];
		}
	}
	count = 0;
	list = nullptr;

}
Group::~Group() {

	if (list != nullptr) {
		delete[] list;
	}
}

Student Group::getStudent(int index) {

	if (index >= 0 && index < count) {
		return list[index];
	}
	return Student("", 0, 0, false);
}
void add(Student student) {



}
void remove(Student student) {


}
void remove(int index) {



}
void set(Student st1, Student st2) {

	for (int i = 0; i < count; i++)
	{
		if (st1.getName() == list[i].getName()
			&& st1.getAge() == list[i].getAge
			&& st1.getAlive() == list[i].getAlive) {
		
		}
	}
}
void set(int index, Student st2) {


}
int getCount() {


}
string toString() {


}
};