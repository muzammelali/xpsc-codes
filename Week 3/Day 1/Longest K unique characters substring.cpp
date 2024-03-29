class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        unordered_map<char,long long> mp;
        long long r=0,l=0,ans=-1;
        while(r<s.size())
        {
            mp[s[r]]++;
            while(mp.size() > k)
            {
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                mp.erase(s[l]);
                l++;
            }
            
            if(mp.size() == k)
                ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    
    }
};