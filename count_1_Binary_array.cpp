class Solution {
  public:
    int countOnes(vector<int>& arr) {
        // code here
        int st=0,end=arr.size()-1;
        int target=1;

        int first=-1;
        int last=-1;

        while(st<=end){
            //first occurence
            int mid=st+(end-st)/2;
            if(arr[mid]==target){
                first=mid;
                end=mid-1;
            }
            

            else{
               end=mid-1;
            }



        }
         //last occurence
         st=0,end=arr.size()-1;
        while(st<=end){

            int mid=st+(end-st)/2;
            if(arr[mid]==target){
                last=mid;
               st= mid+1;
            }
            
            else{
              end=mid-1;
            }



        }
        if(first==-1) return 0;
        int count=last-first;
        return count+1;
    }
};
