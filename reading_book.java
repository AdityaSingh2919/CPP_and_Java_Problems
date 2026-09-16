// User function Template for Java

class Solution {
    public int maxPoint(int k, int[] arr1, int[] arr2) {
        // code
        int []arr3=new int[arr1.length];
        int max=0;
        // int sum=0;
        for(int i=0;i<arr1.length;i++){
            // sum=
            arr3[i]=(k/arr1[i])*arr2[i];;
            max=Math.max(max,arr3[i]);
        }
        return max;
    }
}
