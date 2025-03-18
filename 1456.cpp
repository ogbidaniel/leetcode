#include <iostream>
#include <string>
#include <set>

using namespace std;

int maxVowels(string s, int k) {
    // vowel set initialization
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int vowelSum = 0;

    // window and max num initialization
    for (int i = 0; i < k; i++) {
        if (vowels.count(s[i])) {
            vowelSum += 1;
        }
    }

    // sliding the window, removing or increasing vowel count depending on the removed or added element
    int maxNum = vowelSum;
    for (int i = k; i <= s.size(); i++) {
        if (vowels.count(s[i])) {
            vowelSum += 1;
        }
        if (vowels.count(s[i-k])) {
            vowelSum -= 1;
        }
        maxNum = max(maxNum, vowelSum);
    }
    return maxNum;
}

int main()
{
    string s = "abciiidef";
    int k = 3;
    int output = maxVowels(s, k);
    cout << "Output: " << output << endl;

    return 0;
}