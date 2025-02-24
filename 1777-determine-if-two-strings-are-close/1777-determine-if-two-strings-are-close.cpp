class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()){
            return false;
        }
        map<char, int> freq1, freq2;
        set<char> set1, set2;
        for (char c : word1) {
            freq1[c]++;
            set1.insert(c);
        }
        for (char c : word2) {
            freq2[c]++;
            set2.insert(c);
        }
        if (set1 != set2){
            return false;
        }
        vector<int> values1, values2;
        for (auto i:freq1){
            values1.push_back(i.second);
        }
        for (auto i:freq2){
            values2.push_back(i.second);
        }
        sort(values1.begin(), values1.end());
        sort(values2.begin(), values2.end());

        return values1 == values2;
    }
};
