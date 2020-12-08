#include <vector>
#pragma once


class Profile
{
private:
  //atributes
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;

public:
  //constructor declarations
  Profile();
  Profile(std::string name, int age, std::string city, std::string country, std::string pronouns = "they/them");

  //destructor declaration
  ~Profile();

  //method declarations
  std::string viewProfile();

  void addHobby(std::string newHobby);
};
