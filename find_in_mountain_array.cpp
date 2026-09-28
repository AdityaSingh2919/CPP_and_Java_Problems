/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int st=0,end=mountainArr.length()-1;
    // finding peek elemnt
        while(st<end){
            int mid=st+(end-st)/2;
           

           
           if(mountainArr.get(mid)<mountainArr.get(mid+1)){
            st=mid+1;
           }else{
            end=mid;
           }
           
        }
        //now searching wheather the target is left side 
        st=0;
        int peek=st;

        while(st<=end){
            int mid=st+(end-st)/2;

            if(mountainArr.get(mid)==target) return mid;

            else if(mountainArr.get(mid)>target) end=mid-1;
            else st=mid+1;
        }
        // searching target on the right side

        st=peek+1;
        end=mountainArr.length()-1;

        while(st<=end){
            int mid=st+(end-st)/2;
            if(mountainArr.get(mid)==target) return mid;
            else if(mountainArr.get(mid)>target) st=mid+1;
            else end=mid-1;

        }




    return -1;
    }
};
