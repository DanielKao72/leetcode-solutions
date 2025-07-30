class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = 0;
        vector<int> word_lengths;

        for (int i = 0; i<s.size(); i++) {
            if (s[i] != ' ') {
                size++;
            }
            else {
                if (size != 0) word_lengths.push_back(size);
                size = 0;
            }
        }

        if (size != 0) word_lengths.push_back(size);

        return word_lengths[word_lengths.size()-1];
    }
};