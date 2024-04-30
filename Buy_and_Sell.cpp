#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
       int maxProfits=-1;
       int mins=prices[0];
       
       for(int i=0;i<prices.size();i++){
        mins=min(prices[i],mins);
        int profit=prices[i]-mins;
        maxProfits=max(maxProfits,profit);
       }

       return maxProfits;
}


int main(){
    vector<int>nums={7,1,5,3,6,4};
    cout<<maxProfit(nums)<<endl;
    return 0;
}