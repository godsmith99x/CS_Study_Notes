// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>
#include <algorithm> // for binary search
#include <numeric>   // for accumulate

using namespace std;

void displayMenu();
void enterChoice(const vector<char> acceptableChoices, char &currentChoice);
void printNumbers(vector<int> numbers);
void addNumber(vector<int> &numbers);
void displayMean(vector<int> numbers);
void displayMin(vector<int> numbers);
void displayMax(vector<int> numbers);
bool quitProgram(bool &quit);

int main()
{

    const vector<char> acceptableChoices{'A', 'L', 'M', 'P', 'Q', 'S', 'a', 'l', 'm', 'p', 'q', 's'};
    vector<int> numbers{};
    char currentChoice{};
    bool quit = false;

    while (!quit)
    {

        displayMenu();
        enterChoice(acceptableChoices, currentChoice);

        switch (currentChoice)
        {
        case 'P':
        case 'p':
            printNumbers(numbers);
            break;
        case 'A':
        case 'a':
            addNumber(numbers);
            break;
        case 'M':
        case 'm':
            displayMean(numbers);
            break;
        case 'S':
        case 's':
            displayMin(numbers);
            break;
        case 'L':
        case 'l':
            displayMax(numbers);
            break;
        case 'Q':
        case 'q':
            quitProgram(quit);
            break;
        default:
            cout << "Error" << endl;
        }
    }

    return 0;
}

void displayMenu()
{
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
}

void enterChoice(const vector<char> acceptableChoices, char &currentChoice)
{
    char choice{};

    cout << "\nEnter your choice: ";
    cin >> choice;

    if (binary_search(acceptableChoices.begin(), acceptableChoices.end(), choice))
    {
        cout << endl;
        currentChoice = choice;
    }
    else
    {
        cout << "Invalid choice. Please enter a valid choice." << endl;
        enterChoice(acceptableChoices, currentChoice);
    }
}

void printNumbers(vector<int> numbers)
{
    cout << "The current numbers entered are: [";
    for (auto i : numbers)
    {
        cout << i << " ";
    }
    cout << "]\n";
}

void addNumber(vector<int> &numbers)
{

    while (true)
    {
        int number{};
        cout << "Add an integer to the list: ";

        if (cin >> number)
        {
            cout << "You entered: " << number << endl;
            numbers.push_back(number);
            break;
        }
        else
        {
            cout << "Please enter a valid integer" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

void displayMean(vector<int> numbers)
{
    if (numbers.size() == 0)
    {
        cout << "Unable to calculate the mean - no data" << endl;
    }
    else
    {
        float mean = (accumulate(numbers.begin(), numbers.end(), 0)) / (numbers.size());
        cout << "The mean is: " << mean << endl;
    }
}

void displayMin(vector<int> numbers)
{
    if (numbers.size() == 0)
    {
        cout << "Unable to determine the smallest number - list is empty" << endl;
    }
    else
    {

        vector<int>::iterator result = min_element(numbers.begin(), numbers.end());
        int min = numbers.at(distance(numbers.begin(), result));
        cout << "The smallest number is: " << min << endl;
    }
}

void displayMax(vector<int> numbers)
{
    if (numbers.size() == 0)
    {
        cout << "Unable to determine the largest number - list is empty" << endl;
    }
    else
    {
        vector<int>::iterator result = max_element(numbers.begin(), numbers.end());
        int max = numbers.at(distance(numbers.begin(), result));
        cout << "The largest number is: " << max << endl;
    }
}

bool quitProgram(bool &quit)
{
    return quit = true;
}