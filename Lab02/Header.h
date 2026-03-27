#include <iostream>
#include <string>

using namespace std;

class Book {
private:
	int bookID;
	string title;
	string author;
	double price;
public:
	Book() {
		bookID = 0;
		title = "Unknown";
		author = "Unknown";
		price = 0.0;
	}
	Book(int bookID, string title, string author, double price) {
		this->bookID = bookID;
		this->title = title;
		this->author = author;
		if (price < 0) this->price = 0;
		else this->price = price;
	}
	Book(Book& other) {
		bookID = other.bookID;
		title = other.title;
		author = other.author;
		price = other.price;
	}
	~Book() {
		cout << "The book is deleted.\n";
	}

	void Display() {
		cout << "Book Details:\n";
		cout << "  ID: " << bookID << endl;
		cout << "  Title: " << title << endl;
		cout << "  Author: " << author << endl;
		cout << "  Price: " << price << endl << endl;
	}

	void setPrice(int a) {
		if (a < 0) {
			cout << "Invalid price! Price cannot be negative. Keeping old price.\n";
		}
		else price = a;
	}

	int getPrice() {
		return price;
	}
};