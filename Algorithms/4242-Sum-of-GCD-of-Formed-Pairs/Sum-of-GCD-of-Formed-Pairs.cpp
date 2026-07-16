class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx = 0;
        vector<int> prefixGcd;
        for(int num : nums){
            mx = max(mx, num);
            int g = gcd(num,mx);
            prefixGcd.push_back(g);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        int l = 0, r = prefixGcd.size() - 1;
        long long sum = 0;
        while(l < r){
            sum += gcd(prefixGcd[l], prefixGcd[r]);
            l++;
            r--;
        }
        return sum;
    }
};