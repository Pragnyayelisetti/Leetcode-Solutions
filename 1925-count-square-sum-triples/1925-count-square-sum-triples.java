class Solution {
    public int countTriples(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<n;j++){
                int s=(i*i)+(j*j);
                int p=(int)Math.sqrt(s);
                if(p*p==s && p<=n)
                cnt+=2;
            }
        }
        return cnt;
    }
}