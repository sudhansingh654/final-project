#include <iostream>
#include <string>
#include <vector>

using namespace std;

string getRandomWord() {
    vector<string> words = {"apple", "banana", "cherry", "date", "elderberry", "fig"};
    return words[rand() % words.size()];
}

int main() {
    cout << getRandomWord();
    return 0;
}
