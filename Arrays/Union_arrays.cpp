https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays


class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        
        set <int> st;
        
        for(auto it: a)
        {
            st.insert(it);
        }
        
                
        for(auto it: b)
        {
            st.insert(it);
        }
        
        vector <int> unionn(st.begin(),st.end());
        
        return unionn;

        
    }
};