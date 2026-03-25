class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        if(barcodes.size()==1) return barcodes;
        vector<int>res(barcodes.size());
        unordered_map<int,int>freq;
        for(int barcode:barcodes) freq[barcode]++;
        /*
            1-->3
            2-->3
        */
        vector<pair<int,int>>p;
        for(auto it:freq){
            p.push_back({it.first , it.second});
        }
        sort(p.begin() , p.end() , [](auto &a , auto &b){
            return a.second>b.second;
        });
        int j=0;
        for(int i=0; i<p.size(); i++){
            while(p[i].second){
                if(j>=barcodes.size()) j=1;
                res[j]=p[i].first;
                j+=2;
                p[i].second--;
            }
        }
        return res;
    }
};