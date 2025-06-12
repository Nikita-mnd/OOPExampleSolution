#include "Arraylist.h"

ArrayList::ArrayList() {

}
ArrayList::~ArrayList() {
	if (array != nullptr) {
		delete[] array;
	}
}
void ArrayList::add(int value) {

	if (array != nullptr) {
		int* newArray = new int[size + 1];

		for (int i = ; i < size; i++) {
			newArray[i] = array[i]
		}
		delete[] array;
		array = newArray;
	}

}
void ArrayList::add(int index, int value) {



}
void ArrayList::addAll(int* values, int size) {



}
void ArrayList::addAll(int index, int* values, int size) {



}

void ArrayList::remove(int index) {



}
void ArrayList::remove() {



}

int ArrayList::size() {



}
int ArrayList::get(int index) {


}
void ArrayList::set(int index, int value) {



}
void ArrayList::clear() {


}

string ArrayList::toString() {



}