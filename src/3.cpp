#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> names = {"Alice", "Bob", "Charlie"};
    string name = names.at(rand() % 3); // get a random name from the vector
    cout << "Hello, " << name << "!" << endl;
    return 0;
}
