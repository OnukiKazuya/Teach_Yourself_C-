#include <iostream>
#include <cstring>

class StrType {
	char* p;
	int len;
public:
	StrType() { 
		p = new char[255];
		if (!p) { std::cerr << "MemoryAllocationError"; exit(1); }
		len = 255; 
	}
	StrType(const char* s, int byte) {
		auto slen = std::strlen(s);
		p = new char[byte+1];
		if (!p) { std::cerr << "MemoryAllocationError"; exit(1); }
		len = byte + 1;
		strcpy_s(p, byte+1, s);
	}
	char* GetString() { return p; }
	int GetLength() { return len; }
};

int main() {
	StrType s1, s2("Jus", 3);
	std::cout << s1.GetLength() << " " << s2.GetLength() << "\n";
	return 0;
}
