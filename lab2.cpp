#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

protected:
    string address;

public:
    Person(string n, int a, string addr) : name(n), age(a), address(addr) {
        cout << "Displaying information of: " << name << endl;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }

    ~Person() {
        cout << "Destructor called for " << name << endl;
    }
};

class Student : public Person {
private:
    int studentId;

public:
    Student(string n, int a, string addr, int id) : Person(n, a, addr), studentId(id){}

    void displayStudentDetails() {
        cout << "Student ID: " << studentId << endl;
    }
};

int main() {
    string personName, personAddress, studentName, studentAddress;
    int personAge, studentAge, studentId;

    cout << "Enter Person's Name: ";
    getline(cin, personName);
    cout << "Enter Person's Age: ";
    cin >> personAge;
    cin.ignore();
    cout << "Enter Person's Address: ";
    getline(cin, personAddress);

    Person person(personName, personAge, personAddress);
    person.displayDetails();

    cout << "-----------------------" << endl;

    cout << "Enter Student's Name: ";
    getline(cin, studentName);
    cout << "Enter Student's Age: ";
    cin >> studentAge;
    cin.ignore();
    cout << "Enter Student's Address: ";
    getline(cin, studentAddress);
    cout << "Enter Student's ID: ";
    cin >> studentId;

    Student student(studentName, studentAge, studentAddress, studentId);
    student.displayDetails();
    student.displayStudentDetails();

    cout << "-----------------------" << endl;

    return 0;
}
