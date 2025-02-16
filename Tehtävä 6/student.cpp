#include "student.h"

Student::Student(string name, int age) {
    setAge(age);
    setName(name);
}


void Student::setAge(int age_to_set){
    age = age_to_set;
}

void Student::setName(string name_to_set){
    name = name_to_set;
}

string Student::getName() const {return name;}

int Student::getAge() const{
    return age;
}

void Student::printStudentinfo(){
    cout << "Student " << name << " Age " << age << endl;
}
