#include <iostream>
#include <string>
using namespace std;

void test(int** array, int size) {
	if (*array == nullptr && size > 0) {
		*array = new int[size] {};
	}
	for (int i = 0; i < size; i++)
	{
		**(array + i) = 1;
		//array[i]
	}
}

string convert(int& array, int size) {
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s += to_string(array[i]) + " ";
	}
	return s;
}

int main() {
	int size = 10;
	int** array = new int*[size];

	cout << "before: " << convert(&array, size) << endl;
	test(array, size);
	cout << "after: " << convert(&array, size) << endl;
	delete[] array;
	return 0;
}