#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include<iostream>

using namespace std;


class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        char ar[n][n];
        
        char char_array[n + 1];
        strcpy(char_array, s.c_str());
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                ar[i][j] = 0;
            }
        }
        
        int id = 0;
        int x = 0;
        int y = 0;
        int count = 0;
        
        for(int i = 1; i < n; i++){
            if(id == 0){
                y++;
                ar[x][y] = char_array[i];
            }else{
                x++;
                y--;
                ar[x][y] = char_array[i];
            }
            count++;
            if(count == numRows - 1){
                count = 0;
                id = !id;
            }
        }
        
        ar[0][0] = char_array[0];
        std::string result = "";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(ar[j][i] != 0){
                    result.push_back(ar[j][i]);
                }
            }
        }
        return result;
    }
};

int main(){
    Solution a;
    cout << a.convert("WEFdjfhefhsdGWJEGDSFJU.,sdjufhef,sdfjefja", 6);
    return 0;
}