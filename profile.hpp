#include <iostream>
#include <vector>
#include <string>
//class declaration
class Profile{
    public:
    Profile(std::string new_fullname, int new_age, std::string new_city, std::string new_country, std::string new_occupation);
    std::string view_profile();
    void add_skills(std::string new_skills);

    private:
    std::string fullname;
    int age;
    std::string city;
    std::string country;
    std::string occupation;
    std::vector<std::string> skills;
};