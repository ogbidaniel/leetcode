#include <iostream>
#include <string>

using namespace std;
bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
int maxVowels(string s, int k) {
    int right, curr = 0, result = 0;

    // calculate the initial window vowel count
    for (right = 0; right < k; right++) {
        curr += (isVowel(s[right]));
    }

    for (int right = k; right <= s.size(); right++) {
        curr += isVowel(s[right]);
        curr -= isVowel(s[right - k]);
        result = max(result, curr);
    }
    return result;
}

int main()
{
    string s = "abciiidef";
    int k = 3;
    int output = maxVowels(s, k);
    cout << "Output: " << output << endl;

    return 0;
}