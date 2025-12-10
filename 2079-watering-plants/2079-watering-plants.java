class Solution {
    public int wateringPlants(int[] plants, int capacity) {
        int c=capacity;
        int step=0;
        for(int i=0; i<plants.length; i++){
            if(plants[i]>capacity){
                step += 2*i+1;
                capacity=c;
                capacity-=plants[i];
            }
            else{
                step++;
                capacity-=plants[i];
            }
        }
        return step;
    }
}