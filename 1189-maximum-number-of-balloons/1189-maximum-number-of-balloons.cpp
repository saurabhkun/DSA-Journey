#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> counts;
        
       
        for (char c : text) {
            counts[c]++;
        }
        
        
        int maxBalloons = counts['b'];
        maxBalloons = min(maxBalloons, counts['a']);
        maxBalloons = min(maxBalloons, counts['l'] / 2);
        maxBalloons = min(maxBalloons, counts['o'] / 2);
        maxBalloons = min(maxBalloons, counts['n']);
        
        return maxBalloons;
    }
};