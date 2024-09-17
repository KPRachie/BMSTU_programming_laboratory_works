#include <iostream>
#include <vector>
#include <string>
#include <map>


//Ћ– 6 —троки.
//ƒана непуста€ последовательность слов из строчных латинских букв (количество
//слов больше 5) : между соседними словами Ц зап€та€ и пробел, за последним словом -
//точка.ќпределить количество слов, которые начинаютс€ на гласную букву. ¬ывести на
//экран количество слов и сами эти слова.


int main() {
    int counter = 0;
    std::map <char, int> hash;
    hash['a'] = 1;
    hash['e'] = 1;
    hash['y'] = 1;
    hash['u'] = 1;
    hash['i'] = 1;
    hash['o'] = 1;
    std::string stroka;
    std::vector <std::string> words;
    std::string word;
    while (true) {
        std::cin >> word;
        if (word.back() == '.') {
            word[word.length() - 1] = ' ';
            if (hash[word[0]] == 1) {
                words.push_back(word);
                counter++;
            }
            break;
        }
        word[word.length() - 1] = ' ';
        if (hash[word[0]] == 1) {
            words.push_back(word);
            counter++;
        }
    }
    std::cout << "Here are " << counter << " words: ";
    for (auto& a : words) {
        std::cout << a;
    }
    return 0;
}


//test:
// abc, cde, gfd, klm, asd, ert, uifkgjf, osdkdk.