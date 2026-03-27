#include "Header.h"

int main() {
	const int num = 4;
	Person* users[num];

	users[0] = new Student("Ali", -20, 'X', -100, "Mathematics", 1000);
	users[1] = new Student("Malika", 19, 'f', 102, "Physics", 95);
	users[2] = new Teacher("Salima", 40, 'F', "Mathematics");
	users[3] = new Teacher("Bekzod", 35, 'P', "Data Structures");

	for (int i = 0; i < num; i++) {
		users[i]->show();
	}

	for (int i = 0; i < num; i++) {
		delete users[i];
	}
}