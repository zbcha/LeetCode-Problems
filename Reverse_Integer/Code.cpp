#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include<iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        if(x >= -(pow(2,31)) and x <= (pow(2,31)-1)){
            long int id = 0;
            if(x<0) id =1;
            result = abs(x);
            
            string tem = to_string(x);
            ::reverse(tem.begin(),tem.end());
            long long int temid = std::stoll(tem);
            if(temid < -(pow(2,31)) or temid > (pow(2,31)-1)){
                temid = 0;
            }
            result = temid;
            
            if(id == 1) result *= -1;
        }
        return result;
    }
};

int main(){
    Solution a;
    cout << a.reverse(1534236469);
    cout << "\n";
    cout << a.reverse(56727802);
    return 0;
}