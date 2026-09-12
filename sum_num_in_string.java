class Solution {
    public int findSum(String s) {
        // code here
        int sum=0;
        int current=0;
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(ch>='0' && ch<='9'){
                current=(current*10)+(ch-'0');
            }else{
                sum+=current;
                current=0;
            }
        }
        sum+=current;
        return sum;
    }
}
