#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    unordered_set<string> used;
    used.insert(words[0]);

    for (int i = 1; i < words.size(); i++) {
        string prev = words[i - 1];
        string curr = words[i];

        if (used.count(curr) || prev.back() != curr.front()) {
            return {(i % n) + 1, (i / n) + 1};
        }
        
        used.insert(curr);
    }

    return {0, 0};
}