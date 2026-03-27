#include <iostream>
#include <string>

using namespace std;

class StockEx {
private:
	string currency;
	float mktrate;
	string date;
public:
	//Made a default so I can create objects without inserting data, and insert only with istream
	StockEx(){}
	StockEx(string currency, float mktrate, string date) 
		: currency(currency), mktrate(mktrate), date(date){}

	float operator*(const int amount) {
		return mktrate * amount;
	}
	float operator-(const StockEx& obj) {
		return mktrate - obj.mktrate;
	}
	bool operator>(const StockEx& obj) {
		return mktrate > obj.mktrate;
	}
	//with this overload cout will be written easily in cpp file
	friend ostream& operator<<(ostream& out, const StockEx& obj) {
		out << "Currency: " << obj.currency << endl;
		out << "Market rate: " << obj.mktrate << endl;
		out << "Date: " << obj.date << endl;
		return out;
	}
	//same with cin, where I have to write only one line for each object
	friend istream& operator>>(istream& in, StockEx& obj) {
		cout << "Enter currency: ";
		in >> obj.currency;
		cout << "Enter market rate: ";
		in >> obj.mktrate;
		cout << "Enter date: ";
		in >> obj.date;
		return in;
	}
};