/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int removeDuplicates(int *nums,int n) {
    
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(nums[i] == nums[j]){
                    for(int k = j ;k<n-1;k++){
                        nums[k] = nums[k+1]; 
                    }
                    j--;
                    n--;
                }
            }
        }
      return n;
    }
int main()
{
    int n = 5;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<removeDuplicates(arr,n);
}