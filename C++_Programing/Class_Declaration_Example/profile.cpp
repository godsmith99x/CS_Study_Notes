#include <string>
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
std::string Profile::mViewProfile()
{
  return "Name: " + name + "\n" + "Age: " + std::to_string(age) + "\n" + "City: " + city + "\n" + "Country: " + country + "\n" + "Pronouns: " + pronouns + "\n";
}