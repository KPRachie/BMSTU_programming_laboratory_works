#include <vector>
#include <iostream>


class List {

public:

	List();

	virtual ~List();

// functions

	void add(std::vector <int> list, int n);

	int delete_max(std::vector <int> list);

	void print_list(std::vector <int> list);

};
