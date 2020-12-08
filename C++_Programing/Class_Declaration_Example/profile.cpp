#include <string>
#include <vector>
#include "profile.hpp"

//constructor definition
Profile::Profile(std::string nameVal, int ageVal, std::string cityVal, std::string countryVal, std::string pronounsVal)
  : name {nameVal}, age {ageVal}, city {cityVal}, country {countryVal}, pronouns {pronounsVal}
{}

//delegated constructor example for no arg constructor
Profile::Profile()
  : Profile{"unknown", 0, "unknown", "unknown", "they/them"}
{}

//destructor definition
Profile::~Profile()
{}

//method definitions
std::string Profile::viewProfile()
{
  std::string nameString {"Name: " + name + "\n"};
  std::string ageString {"Age: " + std::to_string(age) + "\n"};
  std::string cityString {"City: " + city + "\n"};
  std::string countryString {"Country: " + country + "\n"};
  std::string pronounsString {"Pronouns: " + pronouns + "\n"};
  std::string hobbiesString {"Hobbies: "};

  for(auto i : hobbies)
    {
      hobbiesString += i + ", ";
    }

  return  nameString +  ageString +  cityString +  countryString + pronounsString + hobbiesString + "[end of profile]\n";
}

void Profile::addHobby(std::string newHobby)
{
  hobbies.push_back(newHobby);
}