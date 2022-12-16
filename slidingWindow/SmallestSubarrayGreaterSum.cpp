
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int SmallestSubarrayWithGreaterSum(vector<int> arr, int sumVal){ 
    int smallestSubarraySize=INT_MAX;
    int windowStart=0,windowSum=0;
    for(int windowEnd=0;windowEnd<arr.size();windowEnd++){
        windowSum +=arr[windowEnd];
        while(windowSum >= sumVal){
            smallestSubarraySize = min(smallestSubarraySize,windowEnd-windowStart+1);
            windowSum =windowSum -  arr[windowStart];
            windowStart++;
        }
        cout<<"sumVal"<<windowSum<<"\n";
        cout<<"smallestSubarraySize"<<smallestSubarraySize<<"\n";
    }
    return smallestSubarraySize;
}
int main()
{
    vector<int> arr{2, 1, 5, 2, 3, 2};
    cout<<SmallestSubarrayWithGreaterSum(arr,7)<<endl;
    return 0;
}