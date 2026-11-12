#include <iostream>
#include "person.h"
#include "student.h"
#include "teacher.h"
#include <vector>

using namespace std;

int main()
{
    Person objPerson("Riku");
    Student objStudent("Matti", 123);
    Teacher objTeacher("Martti", 321);

    // Luodaan vektori
    vector<Person*> lista;

    // Lisätään olioiden osoitteet
    lista.push_back(&objPerson);
    lista.push_back(&objStudent);
    lista.push_back(&objTeacher);

    for(auto a: lista) {
        a->sayStatus();
    }

    // objPerson.sayStatus();
    // objStudent.sayStatus();
    // objTeacher.sayStatus();
    cout << "LOPPU! " << endl;
    return 0;
}
