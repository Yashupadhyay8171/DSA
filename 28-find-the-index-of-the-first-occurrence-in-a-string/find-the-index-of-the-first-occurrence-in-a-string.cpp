class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle) != -1 ? haystack.find(needle) : -1;
    }
};