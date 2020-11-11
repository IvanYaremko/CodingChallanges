#include<iostream>
#include<string>
using namespace std;
 
int main(){
	string s;
	char vowels[] = {'A', 'O', 'E', 'U', 'I'};
	cin >> s;
	
	for(unsigned i=0; i<s.length(); i++){
		for(int v=0; v<5; v++){
			if(s[i] == vowels[v] || s[i] == vowels[v] + 32 ){
				s[i] = '*';
			}
		}
		if(s[i] >= 65 && s[i] <= 90){
			s[i] = s[i]+32;
		}
	}
	
	for(unsigned i=0; i<s.length(); i++) {
		if(s[i] != '*'){
			cout << '.' <<s[i];
		}
	}
 
}
