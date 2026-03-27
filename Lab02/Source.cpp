#include "Header.h"

int main() {
	Book Empty;
	Empty.Display();
	Book IT(1,"Clean Code","Robert C. Martin",35.5);
	IT.Display();
	Book Copy(IT);
	Copy.Display();
	Book Math(2, "Calculus 1", "Robert", -30);
	Math.Display();

	cout << "--- Test ---\n";
	cout << "Old price of Copy: " << Copy.getPrice() << endl;
	Copy.setPrice(-50);
	cout << "New price of Copy: " << Copy.getPrice() << endl;
	Copy.setPrice(60);
	cout << "New price of Copy: " << Copy.getPrice() << endl;
}