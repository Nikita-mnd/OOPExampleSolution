#include "student.h"

int main(){

	Student st1, st2;

	st1.name = "Bogdan";
	st1.age = 14;
	st1.mark = 9.5;
	st1.alive = true;

	st2.name = "Ivan";
	st2.age = 15;
	st2.mark = 4.5;
	st2.alive = true;
	if (st1.alive != true || st2.alive != true) {
		cout << "The best student is " <<
			(st1.alive != true ? "Ivan" : "Bogdan") << endl;
	} else {
	//string name = st1.mark > st2.mark ? st1.name : st2.name;
	Student t = st1.mark > st2.mark ? st1 : st2;
	cout << "The best student is " << t.name << endl;;
	}
	return 0;
}