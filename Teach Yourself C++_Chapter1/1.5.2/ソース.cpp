#include <iostream>
#include <stdio.h>

class Card {

private:
	std::string Title;
	std::string Author;
	int BookNum;

public:
	void Store(const std::string& title, const std::string& author, const int booknum); // –{‚Ìî•ñ‚ğ•Û‘¶
	void Show(); // î•ñŠJ¦

};

void Card::Store(const std::string& title, const std::string& author, const int booknum) {
	Title = title;
	Author = author;
	BookNum = booknum;
}

void Card::Show() {
	std::cout << Title << "\n";
	std::cout << Author << "\n";
	std::cout << BookNum << "\n";
}


int main() {
	Card c1;
	c1.Store("AI", "Onuki", 20);
	c1.Show();

	return 0;
}