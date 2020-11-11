#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
 
int main(){
	string s, n;
	cin>>s;
	
	for(unsigned i=0; i<s.size(); i++){
		if(s[i]!='+'){
			n.push_back(s[i]);
		}
	}
	sort(n.begin(), n.end());
	cout << n[0];
	for(unsigned i=1; i<n.size(); i++){
		cout << "+" << n[i];
	}
	return 0;
}
