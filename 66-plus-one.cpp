
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
   int n = digits.size();
    if(digits[n-1] < 9 ){
        digits[n-1] = digits[n-1]+1;
    }
    else if(digits[n-1] == 9){
        int ans = digits[n-1]+1;
        for(int i = 1;i<n;i++){
        digits[n-i] = ans%10;
        ans = ans/10;
        digits[n-i-1] = digits[n-i-1]+ans;
        ans = digits[n-i-1];
    }
    if(digits[0] == 10){
        digits[0]/=10;
        digits.push_back(0);
    }
    }
    if(digits[0] == 9 && digits.size() == 1 ){
        digits.pop_back();
        digits.push_back(1);
        digits.push_back(0);
    }

    return digits;
    }

};
int main()
{
    cout<<"Hello World";

    return 0;
}