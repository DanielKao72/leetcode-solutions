class Solution {
public:
    bool isVowel(char letter) {
        return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');
    }

    bool isValid(string word) {
        bool hasVowel = false, hasConsonant = false;

        if(word.size() < 3) return false;

        for (int i = 0; i<word.size(); i++) {
            if ((word[i] < 48 || word[i] > 57) && 
            (word[i] < 65 || word[i] > 90) && 
            (word[i] < 97 || word[i] > 122)) return false;

            if (isVowel(word[i])) hasVowel = true;
            else if (word[i] < 48 || word[i] > 57) hasConsonant = true;
        }

        return hasVowel && hasConsonant;
    }
};