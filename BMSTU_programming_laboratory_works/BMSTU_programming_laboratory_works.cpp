#include <fstream>
#include <iostream>
#include <string>


//�� 8 �������� �������.
//������� ���� F, ��������� �� ����� �����. ���������� �� ����� F � ���� G ���
//�������� �����.


int main() {
    std::string line;
    std::ofstream myfilein("G.txt"); 
    std::ifstream myfileout("F.txt");
    if (myfilein.is_open() and myfileout.is_open()) {
        while (getline(myfileout, line)) {
            for (auto& a : line) {
                if ((((int) a) - '0') % 2 != 0) {
                    myfilein << a - '0';
                }
            }
        }
        myfilein.close();
        myfileout.close();
    }
    return 0;

}
