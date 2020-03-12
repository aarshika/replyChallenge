#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
using namespace std;

// bool compareString(const string& string1, const string& string2);

class Employee {
public:
    string company;
    int bonus;
};

class Developer : public Employee {
public:
    string *skills;
    int skillCount;

    Developer(string company, int bonus, int skillCount, string *skills) {
        this->bonus = bonus;
        this->company = company;
        this->skillCount = skillCount;
        this->skills = new string[skillCount];
        for (int i = 0; i < skillCount; i++) {
            this->skills[i] = skills[i];
            cout << this->skills[i];
        }
    }
};

class Manager : public Employee {};

// int WP(Developer di, Developer dj) {
//     set<string> si;
//     for (int i = 0; i < di.skillCount; i++) {
//         si.insert(di.skills[i]);
//     }

//     set<string> sj;
//     for (int i = 0; i < dj.skillCount; i++) {
//         sj.insert(dj.skills[i]);
//     }

//     set<string> intersect;
//     set_intersection(si.begin(), si.end(), sj.begin(), sj.end(), intersect.begin(), compareString);

//     // cout << intersect.size();
// }

// bool compareString(const string& string1, const string& string2) {
//   return string1.compare(string2);
// }

int BP(Developer &di, Developer &dj){
    if(!di.company.compare(dj.company)){
        return di.bonus * dj.bonus;
    }
}


int main() {
    string *s1 = new string[2];
    s1[0] = "sad";
    s1[1] = "asd";
    Developer d1("opn", 7, 2, s1);
    Developer d2("opn", 7, 2, s1);
    WP(d1, d2);

    // string a = "abcdk57";
    // string b = "abcdk57";
    // string c;

    // set_intersection(
    //     a.begin(), a.end(),
    //     b.begin(), b.end(),
    //     back_inserter(c));

    //     if(!c.compare(a) && !c.compare(b)){
    //         cout << "same";
    //     }

    // cout << c << '\n';
}
