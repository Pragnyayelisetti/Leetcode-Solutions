class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i=0; i<asteroids.size(); i++){
            while(!st.empty() and (st.top()>0 and asteroids[i]<0)){
                if(abs(st.top())>abs(asteroids[i])){
                    asteroids[i]=-1001;
                    break;
                }
                else if(abs(st.top())==abs(asteroids[i])){
                    st.pop();
                    asteroids[i]=-1001;
                    break;
                }
                else{
                    st.pop();
                }
            }
            if(asteroids[i]!=-1001) st.push(asteroids[i]);//3 5
        }
        vector<int>arr;
        while(!st.empty()){
            arr.push_back(st.top());
            st.pop();
        }
        reverse(arr.begin() , arr.end());
        return arr;
    }
};