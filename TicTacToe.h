struct Node
{
	char chip;
	Node *up, *up_right, *right, *down_right, *down, *down_left, *left, *up_left;
};
struct Win{
	bool win = false;
	char player = '1';
};

class TicTacToe
{
	private:
		Node *head = new Node();
		Node *cursor = head;
		char curPlayer = '1';
		char prevChip = '-';
		Win *winner = new Win();
		void moveUtil(Node *next_cursor);
		bool getWinnerUtil(Node *first, Node *second, Node *third);
	public:
		TicTacToe();
		Node* getHead();
		void display();
		void move(char direction);
		bool setNode();
		Win* getWinner();
};