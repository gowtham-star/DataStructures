#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{2,3,4,1,5};
    int winsum = 0 ;
    int k=2;
    int i;
    for( i=0;i<k;i++){
        winsum+=arr[i];
    }
    int maxsum = winsum;
    for(;i<arr.size();i++){
        winsum = winsum - arr[i-k] +arr[i];
        cout<<i-k<<"\n";
        maxsum = max(maxsum,winsum);
    }
    cout<<maxsum<<"\n";
    return 0;
}
