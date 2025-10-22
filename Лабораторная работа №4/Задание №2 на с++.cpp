#include <iostream>
#include <set>


void createSet(std::set<int>* setPlace, const char* setName) {
	int N;
	int input;

	std::cout << "Введите количество элементов множества0 " << setName << ':';
	std::cin >> N;

	std::cout << "Введите " << N << " элементов множества " << setName << ':' << std::endl;
	for (int i = 0; i < N; i++) {
		std::cin >> input;
		setPlace->insert(input);
	}
}

void rulesSet(const std::set<int>* setA, const std::set<int>* setB, std::set<int>* res) {
	for (auto i = setB->begin(); i != setB->end(); i++) {
		if (*i < 0 && setA->find(*i) == setA->end()) {
			res->insert(*i);
		}
	}
}

void Viewe(const std::set<int>* setPlace, const char* setName) {
	std::cout << "Множество " << setName << ":";
	for (auto i = setPlace->begin(); i != setPlace->end(); i++) {
		std::cout << *i << " ";
	}
	std::cout << std::endl;
}

void proces(std::set<int>* setA, std::set<int>* setB) {
	std::set<int> res;
	std::cout << "Изначальные множества:" << std::endl;
	Viewe(setA, "A");
	Viewe(setB, "B");

	rulesSet(setA, setB, &res);

	Viewe(&res, "результаты");
}

int main() {
	std::set<int> A;
	std::set<int> B;

	createSet(&A, "A");
	createSet(&B, "B");

	proces(&A, &B);

	return 0;
}