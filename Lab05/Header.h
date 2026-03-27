#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
	string name;
	int age;
	int id;
public:
	Person(string name, int age, int id)
		: name(name), age(age), id(id) {}
	Person(){}

	void displayPerson() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "ID: " << id << endl;
	}

	void setPerson() {
		cout << "Enter name: ";
		cin >> name;
		do {
			cout << "Enter age (positive num): ";
			cin >> age;
		} while (age <= 0);
		do {
			cout << "Enter ID: ";
			cin >> id;
		} while (id <= 0);
	}
};

class Student : public Person {
private:
	string major;
	double gpa;
	int semester;
public:
	//Making a constructor for student and adding Person constructor in initializing list
	Student(string name, int age, int id, string major, double gpa, int semester)
		: Person(name,age,id), major(major), gpa(gpa), semester(semester) {}
	Student() {};

	void displayStudent() {
		//I could remove displayPerson() function, because you can call it anyways because of inheritance, but in this way will be more logical
		displayPerson();
		cout << "Major: " << major << endl;
		cout << "GPA: " << gpa << endl;
		cout << "Semester: " << semester << endl;
	}

	void setStudent() {
		cout << "Major: ";
		cin >> major;
		do {
			cout << "Enter GPA (0.0 - 4.0): ";
			cin >> gpa;
		} while (gpa < 0 || gpa > 4.0);
		do {
			cout << "Enter semester (positive num): ";
			cin >> semester;
		} while (semester <= 0);
	}
};

//Other classes are almost same as Student
class Teacher : public Person {
private:
	string department;
	double salary;
	string subject;
public:
	Teacher(string name, int age, int id, string department, double salary, string subject)
		: Person(name, age, id), department(department), salary(salary), subject(subject) {}
	Teacher() {};

	void displayTeacher() {
		displayPerson();
		cout << "Department: " << department << endl;
		cout << "Salary: " << salary << endl;
		cout << "Subject: " << subject << endl;
	}

	void setTeacher() {
		cout << "Department: ";
		cin >> department;
		do {
			cout << "Enter salary (positive num): ";
			cin >> salary;
		} while (salary <= 0);
		cout << "Enter subject: ";
		cin >> subject;
	}
};

class Staff : public Person {
private:
	string position;
	double monthlySalary;
	int workingHours;
public:
	Staff(string name, int age, int id, string position, double monthlySalary, int workingHours)
		: Person(name, age, id), position(position), monthlySalary(monthlySalary), workingHours(workingHours) {}
	Staff() {}

	void displayStaff() {
		displayPerson();
		cout << "Position: " << position << endl;
		cout << "Monthly salary: " << monthlySalary << endl;
		cout << "Working hours: " << workingHours << endl;
	}

	void setStaff() {
		cout << "Position: ";
		cin >> position;
		do {
			cout << "Enter monthly salary (positive num): ";
			cin >> monthlySalary;
		} while (monthlySalary <= 0);
		do {
			cout << "Enter working hours (positive num): ";
			cin >> workingHours;
		} while (workingHours <= 0);
	}
};