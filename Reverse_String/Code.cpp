#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.length();
        char char_array[n + 1];
        strcpy(char_array, s.c_str());
        vector<char> ready;
        
        for(int i = 0; i<n; i++){
            if(isalpha(char_array[i])){
                ready.push_back(char_array[i]);
            }
        }
        
        reverse(ready.begin(),ready.end());
        
        int j = 0;
        for(int i = 0; i<n; i++){
            if(isalpha(char_array[i])){
                char_array[i] = ready[j];
                j++;
            }
        }
        
        return char_array;        
    }
};


int main(){
    Solution a;
    cout << a.reverseOnlyLetters("Leet-Code=Test_cor");
    return 0;
}