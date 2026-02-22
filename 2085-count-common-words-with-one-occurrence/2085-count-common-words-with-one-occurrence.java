class Solution {
    public int countWords(String[] words1, String[] words2) {
        HashSet<String> hs=new HashSet<>();
        for(int i=0; i<words1.length; i++){
            for(int j=0; j<words2.length; j++){
                if(words1[i].equals(words2[j]) && !hs.contains(words2[j]) && words1[i]!="-1" && words2[j]!="-1"){
                    hs.add(words2[j]);
                    words1[i]="-1";
                    words2[j]="-1";
                    break;
                }
            }
            if(hs.contains(words1[i])) hs.remove(words1[i]);
        }
        for(int i=0; i<words2.length; i++){
            if(hs.contains(words2[i])) hs.remove(words2[i]);
        }
        for(int j=0; j<words1.length; j++){
            if(hs.contains(words1[j])) hs.remove(words1[j]);
        }
        int ans=hs.size();
        return ans;
    }
}