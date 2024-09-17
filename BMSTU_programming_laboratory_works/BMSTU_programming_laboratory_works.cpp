#include <iostream>
#include <array>


//ËÐ 5 Ìàòðèöû.
//Ðåøèòü ïîñòàâëåííóþ çàäà÷ó, èñïîëüçóÿ ñðåäñòâà óïðàâëåíèÿ ââîäîì / âûâîäîì. Äàí
//ìàññèâ ëèòåð ðàçìåðîì 3 * 12. Âûâåñòè ìàññèâ íà ýêðàí â âèäå òðåõ ôðàãìåíòîâ,
//ðàñïîëîæèâ ñîîòâåòñòâóþùèå ÷àñòè ñòðîê âåðòèêàëüíî :


int main() {
    std::array <char, 36> matrix;
    int n = 1;
    char l;
    std::cout << "Please, enter your matrix: ";
    for (int i = 0; i < 36; i++) {
        std::cin >> l;
        matrix[i] = l;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                std::cout << matrix[i + 4 * j + 12 * k];
                if (k == 2) {
                    std::cout << " ";
                }
            }
            if (j == 2) {
                std::cout << '\n';
            }
        }
    }
}


//a b c d e f g h i j k l    a a a  e e e  i i i
//a b c d e f g h i j k l -> b b b  f f f  j j j 
//a b c d e f g h i j k l    c c c  g g g  k k k
//                           d d d  h h h  l l l 
