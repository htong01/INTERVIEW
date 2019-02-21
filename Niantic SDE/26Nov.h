#include <string>
#include <iostream>
using namespace std;

class Solution
{
  public:
  	void sol(string s){
  		int l = 0;   // num that need to add '('
		int cnt_l = 0;  // num of open parenthses
		for (char c : s){
			if(c == ')'){
				cnt_l ++;
			}
			else if(c == '('){
				l = l + cnt_l;
				cnt_l = 0;
			}
		}

  		int r = 0;   // num that need to add '('
		int cnt_r = 0;  // num of open parenthses
		for (char c : s){
			if(c == '('){
				cnt_r ++;
			}
			else if(c == ')'){
				r = r + cnt_r;
				cnt_r = 0;
			}
		}

		for(int i=0;i<l;i++)
			cout<<'(';
		for(char out:s)
			cout<<out;
		for(int i=0;i<l;i++)
			cout<<')';
		cout<<' '<<endl;
	}

};
