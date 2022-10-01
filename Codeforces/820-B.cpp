#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	void solve()
	{
		int n ; cin >> n ;
		string text ;
		cin >> text ;

		string ans = "";

		for(int i = 0 ; i < n; i++){
			if(i + 2 < n and text[i+2] == '0' and (i + 3 == n or (text[i+3] != '0'))){
				int temp = (text[i] -'0') * 10 + text[i+1] - '0' - 1;
				ans += char(temp + 'a');
				i += 2;
			}
			else{
				int temp = text[i] - '0' - 1 + 'a';
				ans += char(temp);
			}
		}

		cout << ans << endl;

	}
};

int main()
{
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	while (t--)
	{
		Solution obj;
		obj.solve();
	}

	return 0;
}
