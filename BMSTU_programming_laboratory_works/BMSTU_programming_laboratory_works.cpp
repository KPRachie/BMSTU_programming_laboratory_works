#include <iostream>
#include <string>


//ËÐ 3 Ïðîãðàììèðîâàíèå öèêëè÷åñêîãî ïðîöåññà.Òèïû öèêëîâ.
//Ðàññìîòðåòü ðåøåíèå ïðåäëîæåííîé çàäà÷è ñ èñïîëüçîâàíèåì âñåõ òðåõ âèäîâ
//öèêëîâ.Îòëàäèòü ïðîãðàììó ñ íàèáîëåå ðàöèîíàëüíûì âàðèàíòîì öèêëà.Îáîñíîâàòü
//âûáîð.
//Â çàäàííîì öåëîì ÷èñëå îïðåäåëèòü êîëè÷åñòâî íå÷åòíûõ öèôð.


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


