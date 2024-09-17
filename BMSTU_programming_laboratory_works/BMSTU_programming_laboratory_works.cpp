#include <iostream>
#include <array>


//ЛР 4 Одномерные массивы
//Даны координаты 20 точек на прямой.Определить номера двух точек, расстояние
//между которыми наибольшее(считать, что такая пара точек единственная).


int min_max_sort(std::array <int, 20> points) {
    int minimum, tmp;
    for (int i = 0; i < 19; i++) {
        int minimum = i;
        for (int j = i + 1; j < 20; j++) {
            if (points[j] < points[minimum]) {
                minimum = j;
            }
        }
        tmp = points[i];
        points[i] = points[minimum];
        points[minimum] = tmp;
    }

    return points[19] - points[0];
}


int bubble_sort(std::array <int, 20> points) {
    bool flag = true;
    int tmp;
    while (flag) {
        flag = false;
        for (int i = 0; i < 19; i++) {
            if (points[i] > points[i + 1]) {
                tmp = points[i];
                points[i] = points[i + 1];
                points[i + 1] = tmp;
                flag = true;
            }
        }
    }
    return points[19] - points[0];
}


int main() {
    std::array <int, 20> points;
    int point;
    std::cout << "Please, enter your numbers: ";
    for (int i = 0; i < 20; i++) {
        std::cin >> point;
        points[i] = point;
    }
    /*std::cout << bubble_sort(points);*/
    std::cout << min_max_sort(points);
    return 0;
}
