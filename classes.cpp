#include "bits/stdc++.h"

using namespace std;

class Person {
    private:
        string name;
};

class Student : private Person {
    private:
        int id;
};

auto main() -> int {
    cout << "sizeof(Person) = " << sizeof(Person) << endl;
    cout << "sizeof(Student) = " << sizeof(Student) << endl;
}
