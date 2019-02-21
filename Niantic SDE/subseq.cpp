#include <iostream>
#include <string>
using namespace std;

int comp(string a, string b)
{
	int m = a.length();
	int n = b.length();
	int cnt = 0;
	for(int i=0;i<(m-n);i++){
		for(int j=0;j<n;j++){
			if(b[j] != a[i+j])
				break;
		    cnt = j;
			// if(b[j] == a[i+j]) cnt++;
		}
		if (cnt == (n-1))
			return i;
	}

	return 0;
}

int main()
{
	string a = "helloworld";
	string b = "llo";
	int result = comp(a,b);
	if(result == 0)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;

	return 0;
}