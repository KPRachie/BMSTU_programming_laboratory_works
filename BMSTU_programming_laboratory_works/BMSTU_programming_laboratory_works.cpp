#include <iostream>
#include <string>

//ЛР 3 Программирование циклического процесса.Типы циклов.
//Рассмотреть решение предложенной задачи с использованием всех трех видов
//циклов.Отладить программу с наиболее рациональным вариантом цикла.Обосновать
//выбор.
//В заданном целом числе определить количество нечетных цифр.


int main() {
    int counter = 0;
    std::string st;
    std::cout << "Please, enter your number: ";
    std::cin >> st;
    for (char& s : st) {
        if ((int(s) - '0') % 2 != 0) {
            counter++;
        }
    }
    //int n = st.length();
    //int i = 0;
    //while (i < n) {
    //    if ((int(st[i]) - '0') % 2 != 0) {
    //        counter++;
    //    }
    //    i++;
    //}
    //int n = st.length();
    //int i = 0;
    //do {
    //    if ((int(st[i]) - '0') % 2 != 0) {
    //        counter++;
    //    }
    //    i++;
    //} while (i < n);
    std::cout << counter;
    return 0;
}


