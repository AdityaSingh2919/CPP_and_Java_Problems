#include <iostream>
#include<vector>
#include<stack>
using namespace std;
int main() {
	int n;
    cin>>n;

    vector<int>arr(n);
   stack<int>s;
   vector<int>ans(arr.size(),0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   
   for(int i=0;i<arr.size();i++){
    while(s.size()>0 && arr[s.top()] <= arr[i]){
        s.pop();
    }
        if(s.empty()){
            ans[i]=i+1;
        }else{
            ans[i]=i-s.top();
        }
        s.push(i);
    }
    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;
   

}
