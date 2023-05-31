#include <iostream>
#include "profile.hpp"
#include <string>

// Class function definitions

Profile::Profile(std::string new_fullname, int new_age, std::string new_city, std::string new_country, std::string new_occupation)
    : fullname(new_fullname), age(new_age), city(new_city), country(new_country), occupation(new_occupation){}

std::string Profile::view_profile(){
    std::string bio = "Name: " + fullname;
    bio += "\nAge: " + std::to_string(age);
    bio += "\nLocation: " + city + ", " + country;
    bio += "\nOccupation: " + occupation;

    std::string skill_string = "Skills:\n";
    for(std::string skill : skills){
        skill_string += " - " + skill + "\n";
    }
    return bio + "\n" + skill_string;
}

void Profile::add_skills(std::string new_skills){
    skills.push_back(new_skills);
}