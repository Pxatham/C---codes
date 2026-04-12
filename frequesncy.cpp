#include <iostream>
#include <map>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    map<char, int> freq;

    // count frequency
    for(char ch : str){
        freq[ch]++;
    }

    // find first non-repeating
    for(char ch : str){
        if(freq[ch] == 1){
            cout << "First non-repeating: " << ch;
            break;
        }
    }

    return 0;
}