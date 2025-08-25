class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = (int)arr.size() + 1;
        int x1 = 0, x2 = 0;
        for (int v : arr) x1 ^= v;        // XOR of array elements
        for (int i = 1; i <= n; ++i) x2 ^= i; // XOR of 1..n
        return x1 ^ x2; // missing numbe
    }
};