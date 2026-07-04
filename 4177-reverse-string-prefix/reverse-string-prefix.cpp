class Solution {
public:
    string reversePrefix(string s, int k) {
        for(int i=0;i<k/2;i++){
        char ch=s[i];
        s[i]=s[k-i-1];
        s[k-i-1]=ch;
        }
        
        return s;
    }
};