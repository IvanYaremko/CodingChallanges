#include<iostream>
#include<string>
using namespace std;
int main(){
  int hIndex=0, c=0;
	string s, h="hello";
	cin>>s;
			
	for(unsigned i=0; i<s.length(); i++){
		if(s[i] == h[hIndex]){
			hIndex++;
			c++;
			if(c==5) break;
		}
		
	}
	(c==5) ? cout<<"YES" : cout<<"NO";
}
