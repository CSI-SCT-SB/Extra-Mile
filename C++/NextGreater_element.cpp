class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> st;
        
        
        int n=nums.size();
                vector<int> ans(n,-1);

        for(int i=2*n-1;i>=0;i--)
        {
            while(st.size()!=0 && st.top()<=nums[i%n])
            {
                st.pop();
            }
            
            if(i<n)
            {
                if( st.size()>0)
                    ans[i]=(st.top());
            }
            
            st.push(nums[i%n]);}
        
        return ans;
    }
};
