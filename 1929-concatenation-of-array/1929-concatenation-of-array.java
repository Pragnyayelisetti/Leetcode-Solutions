class Solution {
    public int[] getConcatenation(int[] nums) {
        int n=2*nums.length;
        int arr[]=new int[n];
        for(int i=0; i<n/2; i++){
            arr[i]=nums[i];
        }
        int j=0;
        for(int i=n/2; i<n; i++){
            arr[i]=nums[j];
            j++;
        }
        return arr;
    }
}