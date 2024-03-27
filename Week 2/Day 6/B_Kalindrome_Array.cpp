#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int arr[],int n,int target)
{
    int i = 0, j = n - 1;
 
	while (i < j)
	{
		if (arr[i] == target)
			i++;
		else if (arr[j] == target)
			j--;
		else if (arr[i] != arr[j])
			return false;
		else
			i++, j--;
	}
 
	return true; 
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = true;

        for(int i=0;i<n-1-i;i++)
        {
            if (arr[i] != arr[n - 1 - i])
        	{
        		flag = isPalindrome(arr,n, arr[i]) || isPalindrome(arr,n, arr[n - 1 - i]);
        		break; 
        	}            
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}