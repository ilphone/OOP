#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"


using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;


    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:{
            string nimi;
            string opiskelijan_nimi;
            int ika;
            cout << "Uuden opiskelijan nimi? " << endl;
            cin >> nimi;
            opiskelijan_nimi = nimi;
            cout << "Uuden opiskelijan ika? " << endl;
            cin >> ika;
            studentList.emplace_back(nimi, ika);

            break;
        }
        case 1:{
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            for(auto &i : studentList){
                i.printStudentinfo();
            }

            break;
        }
        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),
                 [](const Student& a, const Student& b) {
                     return a.getName() < b.getName();
                 });

            for(auto &i : studentList){
                i.printStudentinfo();
            }

            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),
                 [](const Student& a, const Student& b) {
                     return a.getAge() < b.getAge();
                 });

            for(auto &i : studentList){
                i.printStudentinfo();
            }



            break;
        case 4:{
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            string etsittava;
            cout << "Etsittavan henkilon nimi? " << endl;
            cin >> etsittava;
            auto it = find_if(studentList.begin(), studentList.end(),[&etsittava](const Student &student){
                return student.getName() == etsittava;});
            if(it!= studentList.end()){
                cout << "Loytyi: " << endl;
                it -> printStudentinfo();
            }
            else{
                cout << "Ei loytynyt!" << endl;
            }
        }
                break;
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

return 0;
}
