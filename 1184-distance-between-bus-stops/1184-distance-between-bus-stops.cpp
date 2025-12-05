class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int dist1=0;
        if(start<destination){
            for(int i=start; i<destination; i++){
                dist1+=distance[i];
                distance[i]=-1;
            }
        }
        else{
            for(int i=destination; i<start; i++){
                dist1+=distance[i];
                distance[i]=-1;
            }
        }
        int dist2=0;
        for(int i=0; i<distance.size(); i++){
            if(distance[i]!=-1) dist2+=distance[i];
        }
        int ans = min(dist1 , dist2);
        return ans;
    }
};