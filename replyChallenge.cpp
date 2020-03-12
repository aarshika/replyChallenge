#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include<fstream>
using namespace std;

class Employee {
public:
    string company;
    int bonus;
};

class Developer : Employee {
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

class Manager : Employee {};

int WP(Developer di, Developer dj) {
    set<string> si;
    for(int i = 0; i < di.skillCount; i++){
        si.insert(di.skills[i]);
    }

    set<string> sj;
    for(int i = 0; i < dj.skillCount; i++){
        sj.insert(dj.skills[i]);
    }

    set<int> intersect;
    set_intersection(si.begin(),si.end(),sj.begin(),sj.end(), back_inserter(intersect));
                  
    cout << intersect.size();
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
    
    ifstream fp;
    fp.open("a_solar.txt");
    char c;
    int height, width;
    fp>>width>>height;
    int Mat1[height][width];
    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            fp>>c;
            Mat1[i][j] == c;
        }
    }
    int dev,bonus,num_skills,man;
    string company,skills;
    fp>>dev;
    for(int i=0;i<dev;i++)
    {
        fp>>company;
        fp>>bonus>>num_skills;
        string array[num_skills];
        for(int j=0;j<num_skills;j++)
        {
            fp>>skills;
            array[j] == skills;
        }
    }
    fp>>man;
    for(int i=0;i<man;i++)
    {
        fp>>company>>bonus;
    }
}
