class Solution{
public:
	int search(string pat, string s) {
	    // code here
	    int n = s.size();
	    int cnt=0;
        int r=0;
        int l=0;
        
	    vector<int>freq1(26,0),freq2(26,0);
	    
        for(char c: pat)
        {
            freq1[c-'a']++;
        }
        
        while(r<n)
        {
            freq2[s[r]-'a']++;
            if(r-l+1==pat.size())
            {
                if(freq1==freq2)
                {
                    cnt++;
                }
                freq2[s[l]-'a']-=1;
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return cnt;
	}

};