#include <iostream>
using namespace std;

class Employee {
    string company;
    int bonus;
};

class Developer: Employee {
    string Skills;
};

class Manager: Employee{};

