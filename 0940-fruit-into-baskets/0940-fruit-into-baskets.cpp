class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> baskets;
        int left = 0;
        int ans = 0;
        for (int right = 0; right < fruits.size(); right++) {
            baskets[fruits[right]]++;
            if (baskets.size() > 2) {
                baskets[fruits[left]]--;
                if (baskets[fruits[left]] == 0) {
                    baskets.erase(fruits[left]);
                }
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};