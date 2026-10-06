class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        for(int i=0;i<prices.size();i++){
            bool found=false;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    int discount=prices[i]-prices[j];
                    ans.push_back(discount);
                    found=true;
                    break;
                }
              
            }
            if(!found){
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};
