using namespace std;

void greeting();
void drawBoard(const vector<vector<char>> &board);
int chooseSquare(const int &whoseTurn, int &choice);
bool choiceInRange(const int &choice);
bool choiceTaken(const int &choice, const vector<int> &pastChoices);
void addChoiceToPastChoices(const int &choice, vector<int> &pastChoices); 
void updateBoard(const int &whoseTurn, const int &choice, vector<vector<char>> &board);
void changePlayers(int &whoseTurn);
bool winningComboCheck(const int &whoseTurn, const vector<vector<char>> &board);
bool fullBoardCheck(const vector<int> &pastChoices);
bool playAgain();
void printPastChoices(vector<int> pastChoices);
void resetChoice(int choice);
bool quitGame(int choice);