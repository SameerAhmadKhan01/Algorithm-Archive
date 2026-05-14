//The Task: As you read a string character by character, keep track of which characters appear only once and identify the first one that appeared.

#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

char firstUnique(string s) {
    queue<char> q;
    vector<int> count(256, 0);

    for (char c : s) {
        count[c]++;
        q.push(c);

        while (!q.empty() && count[q.front()] > 1) {
            q.pop();
        }
    }

    return q.empty() ? '#' : q.front();
}

int main() {
    string stream = "aabbcdeeff";
    cout << "First non-repeating char: " << firstUnique(stream) << endl; 
    return 0;
}