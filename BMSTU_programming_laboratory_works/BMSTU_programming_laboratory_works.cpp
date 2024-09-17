#include <iostream>
#include <cmath>


//�� 2 ���������������� ���������������� ��������������� ��������.
//������ ������������ ����� X � Y.���������� ����������� �� ����� �
//������������(X, Y) �������������� ����� ���������.�������������� ��� �����
//���������.


bool check_if_belongs(float x, float y) {
    if (std::pow(x, 2) + std::pow(y, 2) <= 1 && std::pow(x + 1, 2) + std::pow(y, 2) <= 1) {
        return true;
    } else {
        return false;
    }
}
int main() {
    float x, y;
    std::cout << "Please, enter x and y: ";
    std::cin >> x >> y;
    if (check_if_belongs(x, y)) {
        std::cout << "It's belongs!";
    } else {
        std::cout << "It doesn't belong!";
    }
    return 0;
}

//tests:
//1. -0.5 0
//2. -2 0 
//3. 0.5 0
//4. 0 0 
//5. 2 2
