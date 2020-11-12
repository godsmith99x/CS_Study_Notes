using namespace std;

void greeting();
void drawBoard(const vector<vector<char>> &board);
int chooseSquare(const int &whoseTurn, int &choice);
bool choiceInRange(const int &choice);
bool choiceTaken(const int &choice, const vector<int> &pastChoices);
void addChoiceToPastChoices(const int &choice, vector<int> &pastChoices); 
void updateBoard(const int &whoseTurn, const int &choice, vector<vector<char>> &board);
int changePlayers(int &whoseTurn);
bool winningComboCheck(const int &whoseTurn, const vector<vector<char>> &board, bool &endGame);
bool fullBoardCheck(const vector<int> &pastChoices, bool &endGame);
bool playAgain(const vector<vector<char>> startingGameBoard, vector<vector<char>> board, int whoseTurn, int choice, vector<int> pastChoices, bool endGame);
void resetGame(const vector<vector<char>> startingGameBoard, vector<vector<char>> board, int whoseTurn, int choice, vector<int> pastChoices, bool endGame);
void printPastChoices(vector<int> pastChoices);