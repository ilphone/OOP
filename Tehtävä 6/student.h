#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;
class Student
{
public:
    Student(string name, int age);
    void setAge(int age_to_set);
    void setName(string name_to_set);
    string getName() const;
    int getAge() const;
    void printStudentinfo();

private:
    string name;
    int age;

};

#endif // STUDENT_H
