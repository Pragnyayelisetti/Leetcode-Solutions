class Solution {
    public int scoreOfString(String s) {
        int cnt=0;
        int n=s.length();
        for(int i=0; i<n-1; i++){
            cnt+=Math.abs(s.charAt(i)-s.charAt(i+1));
        }
        return cnt;
    }
}