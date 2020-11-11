#include<iostream>
#include<string>
using namespace std;
 
int main(){
	unsigned c=0;
	string s;
	cin >> s;
 
	for(unsigned i=0; i<s.length(); i++){
		if(s[i] >= 'A' && s[i]<='Z') c++;
	}
 
	if(c>s.length()-c){
		for(unsigned i=0; i<s.length(); i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				s[i] = s[i]-32;
			}
			
		}
	}else{
		for(unsigned i=0; i<s.length(); i++){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				s[i] = s[i]+32;
			}
		}
	}		
 
	cout << s;
}
