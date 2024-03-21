vector<long long> printFirstNegativeInteger(long long int a[],long long int n, long long int k) {
    
    int l=0,r=0;
    queue<int> q;
    vector<long long> v;
    while(r<=n)
    {
        if((r-l) == k)
        {
            if(!q.empty())
            {
                v.push_back(q.front());
                if(a[l] == q.front()) q.pop();
            }
            else
            {
                v.push_back(0);
            }
            l++;
        }
        else
        {
            if(a[r] < 0) q.push(a[r]);
            r++;
        }
    }
    return v;
 }