#include <iostream>
#include <string>
#include<set>
using namespace std;

int main(){
    string word, temp, temp2;
    set<char> letters;

    cout << "enter word: ";
    cin >> word;

    for (auto letter1: word) {
        int rep = 0;
        for (auto letter2: word) {
            if (letter1 == letter2)
                rep++;
            if (rep> 1)
                letters.insert(letter1);
        }
    }

    
    
    for (auto letter:letters)
        cout <<letter << "\n";

    return 0;
}
