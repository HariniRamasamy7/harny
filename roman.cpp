#include<iostream>
using namespace std;
int main(){ 
    int romanToInt(string s) 
        int a = 0,r,map;
        map<char, int> a;
        a['I'] = 1;
        a['V'] = 5;
        a['X'] = 10;
        a['L'] = 50;
      
        for (int i = 1; i <= s.length() - 1; i ++) {
            int cur = a[s[i]];
            int next = a[s[i + 1]];
            if (cur >= next) {
                r = r+cur;
            } else {
                r = r-cur;
            }
        }
        return r + a[s[s.length() - 1]];
    
};
