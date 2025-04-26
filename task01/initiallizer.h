#include "student.h"
class Initializer {

public:

	void init(Student*& list, int count) {

		if (list == nullptr && count > 0) {

			list = new Student[count];

		}


		string names[]{ "Anna", "Ivan", "Alex", "Vlad", "Matvey"
		, "Timur", "Timpfey", "Nikita", "Vladimir",
		"Bogdan", "Rodion", "Dniil", "Victor", "Kate",
		"Alice", "Maks" };
		int minMark = 0;
		int maxMark = 0;

		int minAge = 13;
		int maxAge = 18;

		for (int i = 0; i < count; i++) {

			list[i].setName(names[rand() % 15]);
			list[i].setAge(rand() % (maxAge - minAge + 1) + minAge);
			for (int j = 0; j < list[i].getCountMark(); j++) {
				*(list[i].getMarks() + j) = rand() % (maxMark - minMark + 1) + minMark);
			}
		}

	}

};