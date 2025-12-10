class Solution {
    public int minimumRefill(int[] plants, int capacityA, int capacityB) {
        int step=0;
        int i=0;
        int j=plants.length;
        j--;
        int ca=capacityA;
        int cb=capacityB;
        while(i<j){
            if(plants[i]>capacityA){
                step++;
                capacityA=ca;
                capacityA-=plants[i];
            }
            else if(plants[i]<=capacityA){
                capacityA-=plants[i];
            }
            if(plants[j]>capacityB){
                step++;
                capacityB=cb;
                capacityB-=plants[j];
            }
            else capacityB-=plants[j];
            i++;
            j--;
        }
        if(i==j){
            if(capacityA>=capacityB){
                if(plants[i]>capacityA){
                    step++;
                    capacityA=ca;
                    capacityA-=plants[i];
                }
                else if(plants[i]<=capacityA){
                    capacityA-=plants[i];
                }
            }
            else if(capacityA<capacityB){
                if(plants[j]>capacityB){
                    step++;
                    capacityB=cb;
                    capacityB-=plants[j];
                }
                else capacityB-=plants[j];
            }
        }
        return step;
    }
}