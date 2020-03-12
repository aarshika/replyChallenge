#include <iostream>
#include <iterator>
#include <set>
#include <algorithm>
using namespace std;

class Employee {
    public:

        string company;
        int bonus;
};

class Developer: Employee {
    public:

        string skills[];
};

class Manager: Employee{};

int WP(Developer di, Developer dj){
    for(int i = 1; i < sizeof(di.skills)/sizeof(di.skills[0]); i++){
        cout << di.skills[i] << endl;
    }
}

int main()
{
    // string a = "abcdk57";
    // string b = "abcdk57";
    // string c;

    set_intersection(
        a.begin(), a.end(),
        b.begin(), b.end(),
        back_inserter(c));

        if(!c.compare(a) && !c.compare(b)){
            cout << "same";
        }

    cout << c << '\n';
}
