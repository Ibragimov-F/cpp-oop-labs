#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
	string name;
	int age;
	char gender;
public:
	Person(string name, int age, char gender) {
		//I use set instead of initialize list so conditions won't be missed.
		setPerson(name, age, gender);
	}

	void setPerson(string name, int age, char gender) {
		this->name = name;

		if (age <= 0) {
			cout << "Invalid age for " << name << ". Age set to 0\n";
			this->age = 0;
		}
		else this->age = age;

		if (gender == 'M' || gender == 'm' || gender == 'F' || gender == 'f') this->gender = gender;
		else { 
			cout << "Invalid gender for " << name << ". Gender set to U.\n";
			this->gender = 'U';
		}
	}

	virtual void show() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
	}

	virtual ~Person(){}
};

class Student : public Person {
private:
	int idnumber;
	string subject;
	int grade;
public:
	Student(string name, int age, char gender, int idnumber, string subject, int grade)
	: Person(name,age,gender) {
		setStudent(idnumber, subject, grade);
	}

	void setStudent(int idnumber, string subject, int grade) {
		if (idnumber <= 0) {
			cout << "Invalid student ID for " << name << ". ID set to 0.\n";
			this->idnumber = 0;
		}
		else this->idnumber = idnumber;

		this->subject = subject;

		if (grade < 0 || grade > 100) {
			cout << "Invalid grade for " << name << ". Grade set to 0.\n";
			this->grade = 0;
		}
		else this->grade = grade;
	}

	void show() override {
		cout << "------- Student Details ------\n";
		// I still decided to call a function from base class like in previous lab
		Person::show();
		cout << "ID number: " << idnumber << endl;
		cout << "Subject: " << subject << endl;
		cout << "Grade: " << grade << endl << endl;
	}
};

class Teacher : public Person {
private:
	string courseInfo;
public:
	Teacher(string name, int age, char gender, string courseInfo)
		: Person(name, age, gender) {
		setTeacher(courseInfo);
	}

	void setTeacher(string courseInfo) {
		this->courseInfo = courseInfo;
	}

	void show() override {
		cout << "------- Teachers Details ------\n";
		Person::show();
		cout << "Course Info: " << courseInfo << endl << endl;
	}
};