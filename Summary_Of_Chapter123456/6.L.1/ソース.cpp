#include <iostream>
#define PROJECT6L1_TEST_STRING1 "JUSTINE BIEBER"
#define PROJECT6L1_TEST_STRING2 "KAZUYA ONUKI"

class Strings {
private:
	std::string m_string;
public:
	Strings(const std::string& string) :m_string(string) {}
	void operator+(const Strings& other);
	void operator=(const Strings& other);
	bool operator<(const Strings& other);
	bool operator>(const Strings& other);
	bool operator==(const Strings& other);
	std::string getString(void) { return m_string; }
};

void Strings::operator+(const Strings& other) { m_string = m_string + other.m_string; }

void Strings::operator=(const Strings& other) { m_string = other.m_string; }

bool Strings::operator<(const Strings& other){ 
	return m_string.length() < other.m_string.length() ? true : false;
}
bool Strings::operator>(const Strings& other) {
	return m_string.length() > other.m_string.length() ? true : false;
}
bool Strings::operator==(const Strings& other) {
	return m_string.length() == other.m_string.length() ? true : false;
}

int main() {
	Strings s1(PROJECT6L1_TEST_STRING1), s2(PROJECT6L1_TEST_STRING2);
	
	s1 + s2;
	s2 = s1;
	
	if (s1 < s2) { std::cout << "s1 < s2\n"; }
	if (s1 > s2) { std::cout << "s1 > s2\n"; }
	if (s1 == s2) { std::cout << "s1 == s2\n"; }
	
	return 0;

}


