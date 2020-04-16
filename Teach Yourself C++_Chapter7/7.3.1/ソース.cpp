#include <iostream>
#include <cstring>

class BaseClass {
private:
	std::string m_str;
public:
	BaseClass(const std::string& str) { m_str = str; }
	std::string getStr(){ return m_str; }
};

class DeriveClass : public BaseClass {
private:
	int m_len;
public:
	DeriveClass(const std::string& str, const size_t len) : BaseClass(str) {
		m_len = len;
	}
	size_t getLen() { return m_len; }
};

int main() {
	const std::string str = "JUSTIN BIEBER";

	DeriveClass d(str, str.length());
	std::cout << "str: " << d.getStr() << "\n";
	std::cout << "len: " << d.getLen() << "\n";

	return 0;
}