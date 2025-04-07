#include "student.h"


void change(Student student) {
	student.name = "Vova";
	student.age = 15;
	student.mark = 10;
	student.alive = false;
}


int main() {

	Student st1, temp;

	st1.name = "Bogdan";
	st1.age = 14;
	st1.mark = 9.5;
	st1.alive = true;

	temp = st1;

cout << "Before: " << endl << st1.getString(st1) << endl 
<< temp.getString(temp);
	change(st1);

	st1.name = "Vova";
	/*st2.name = "Ivan";
	st2.age = 15;
	st2.mark = 4.5;
	st2.alive = true;*/


	
	//cout << "After: " << endl << st1.getString(st1) << endl;


	//cout << << st2.getString(st2);

	//if (st1.alive != true || st2.alive != true) {
	//	cout << "The best student is " <<
	//		(st1.alive != true ? "Ivan" : "Bogdan") << endl;
	//}
	//else {
	//	//string name = st1.mark > st2.mark ? st1.name : st2.name;
	//	Student t = st1.mark > st2.mark ? st1 : st2;
	//	cout << "The best student is " << t.name << endl;
	//}
	return 0;
}