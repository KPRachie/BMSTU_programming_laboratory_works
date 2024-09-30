#include "List.hpp"


List::List() {
}

List::~List() {
}

//functions

void List::add(std::vector <int> list, int n) {
	bool flag = true;
	for (int& num : list) {
		if (num == n) {
			flag = false;
		}
	}
	if (flag) {
		list.push_back(n);
	}
}

int List::delete_max(std::vector <int> list) {
	int index, maximum;
	maximum = list[0];
	index = 0;
	for (int i = 0; i < list.size(); i++) {
		if (std::max(list[index], maximum) == list[index]) {
			index = i;
			maximum = list[index];
		}
	}
	std::cout << "Maximum: " << maximum;
	list.erase(list.begin() + index);
	return 0;
}

void List::print_list(std::vector <int> list) {
	std::cout << "Current list: ";
	for (int& num : list) {
		std::cout << num << " ";
	}
}
