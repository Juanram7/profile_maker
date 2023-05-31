#include <iostream>
#include "profile.hpp"
using std::cout;
using std::endl;

int main(){
    Profile ted("Ted Walters", 30, "Miami", "USA", "Software Engineer");
    // add skills to pf
    ted.add_skills("Object-Oriented Programming techniques");
    ted.add_skills("Proficient in C/C++");
    ted.add_skills("Proficient in Python");
    ted.add_skills("Excellent communication skills");
    ted.add_skills("Team player");

    cout << ted.view_profile() << endl;

    return 0;
}