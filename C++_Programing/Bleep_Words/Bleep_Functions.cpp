//
// Created by joel on 1/21/21.
//

#include "Bleep_Functions.hpp"


void FindAllOccurrences(std::vector<size_t> &occurrences, std::string const &text, std::string const &word)
{
    // Get the first occurrence
    size_t pos = text.find(word);

    // Repeat till end is reached
    while( pos != std::string::npos)
    {
        // Add position to the vector
        occurrences.push_back(pos);
        // Get the next occurrence from the current position
        pos =text.find(word, pos + word.length());
    }

}


std::string Bleep(std::string &text, std::string const &word)
{
    std::string mask (word.length(), '*');
    std::vector<size_t> occurrences {};
    FindAllOccurrences(occurrences, text, word);

    for (auto i = 0; i < occurrences.size(); i++)
    {
        text.replace(occurrences.at(i), word.length(), mask);
    }


    return text;
}




