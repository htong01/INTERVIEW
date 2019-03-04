#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

string findSubString(string str, string pat){
	int l1 = str.length();
	int l2 = str.length();
	if(l1<l2) return;

	for(int i=0;i<l1;i++){

	}
}

int main() 
{ 
    string str = "this is a test string"; 
    string pat = "tist"; 
  
    cout << "Smallest window is : \n"
        << findSubString(str, pat); 
    return 0; 
} 