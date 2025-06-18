#include <iostream>

using namespace std;

class Person{
public:

    string name;
    int age;
    string location;
    string favFood;
    string hobby;

    void showPersonalInfo(){
        cout << "Name: " << name << endl << "Age: " << age << endl << "Location: " << location << endl;
    }

    void showInterest(){
        cout << name << " loves to eat " << favFood << " and interested in " << hobby << endl;
    }

};

int main(){
    Person person1;
    Person person2;

    person1.name = "Habib";
    person1.age = 22;
    person1.location = "Noakhali";
    person1.favFood = "Biriyani";
    person1.hobby = "Fishing";

    person2.name = "Abir";
    person2.age = 29;
    person2.location = "Cumilla";
    person2.favFood = "Rosmalai";
    person2.hobby = "Photography";

    person1.showPersonalInfo();
    person1.showInterest();

    person2.showPersonalInfo();
    person2.showInterest();

    return 0;
}
