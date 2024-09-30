#include <vector>
#include <iostream>


//ЛР 9 Динамические структуры данных.Списки.
//С клавиатуры вводятся целые числа.Организовать список с одновременным
//удалением повторяющихся чисел.Вывести печать полученный список.Из полученного списка удалить максимальное число.Вывести на печать найденное число и новый
//список.


void add(std::vector <int> list, int n) {
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


void delete_max(std::vector <int> list) {
    int index, maximum;
    maximum = list[0];
    index = 0;
    for (int i = 0; i < list.size(); i++) {
        if (std::max(list[index], maximum) == list[index]) {
            index = i;
            maximum = list[index];
        }
    }
    std::cout << "Maximum: " << maximum << '\n';
    list.erase(list.begin() + index);
}


void print_list(std::vector <int> list) {
    std::cout << "Current list: ";
    for (int& num : list) {
        std::cout << num << " ";
    }
}


int main(){
    std::vector <int> list;
    char input;
    std::cin >> input;
    while (input != 's') {
        bool flag = true;
        for (int& num : list) {
            if (num == (int) input - '0') {
                flag = false;
            }
        }
        if (flag) {
            list.push_back((int) input - '0');
        }
        std::cin >> input;
    }
    delete_max(list);
    print_list(list);
}
