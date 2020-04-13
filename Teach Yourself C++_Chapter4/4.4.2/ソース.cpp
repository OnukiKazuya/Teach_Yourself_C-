#include <iostream>

class StoreInfo {
	std::string Name, TEL;
public:
	void Store(const std::string& name, const std::string& tel) {
		Name=name;
		TEL = tel;
	}
	void ShowInfo() {
		std::cout << "name: " << Name << "\n";
		std::cout << "tel: " << TEL << "\n";
	}
};

int main() {
	auto sp = new StoreInfo;
	if (!sp) { std::cerr << "Memory Allocation Error"; return 1; }
	sp->Store("Justine Bieber", "090-hoge-hoge");
	sp->ShowInfo();
	return 0;
}