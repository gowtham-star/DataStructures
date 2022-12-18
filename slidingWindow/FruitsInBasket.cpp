using namespace std;
#include <iostream>
#include <unordered_map>
#include<vector>

int findMaxFruitCount(vector<char> arr,int k){
   unordered_map<char,int> freqMap;
   int windowStart = 0, maxLength = 0;
   for(int windowEnd=0;windowEnd<arr.size();windowEnd++){
       freqMap[arr[windowEnd]]++;
       while(freqMap.size()>2){
           freqMap[arr[windowStart]]--;
           if (freqMap[arr[windowStart]] == 0)
                freqMap.erase(arr[windowStart]);
           windowStart++;
       }
       maxLength = max(maxLength, windowEnd - windowStart + 1);
   }
    return   maxLength;
}

int main()
{
    vector<char> arr{'A', 'B', 'C', 'A', 'C'};
    int k =2;
    cout<<findMaxFruitCount(arr,k);
    return 0;
}