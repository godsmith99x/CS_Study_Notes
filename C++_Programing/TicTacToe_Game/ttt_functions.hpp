using namespace std;




void greeting();

void drawBoard(const vector<vector<char>> &v);

int pickSquare(int &whoseTurn, int &makeChoice, vector<int> &pastChoices);

bool choiceInRange(const int &choice);

bool choiceAlreadyTaken(const int &choice, const vector<int> &moves);

void saveChoiceUpdateBoard();

bool endGameCheck();

bool boardFullCheck();

bool winningCombinations();

void resetGame();

