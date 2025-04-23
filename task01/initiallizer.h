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

			list[i].name = names[rand() % 15];
			list[i].age = rand() % (maxAge - minAge + 1) + minAge;
			for (int j = 0; j < list[i].countMark; j++) {
				list[i].marks[j] = rand() % (maxMark - minMark + 1) + minMark;
			}
		}

	}

};