#include<iostream>
#include<string>
using namespace std;
 
int main(){
	int n, k;
	string s;
	cin >> n >> k >> s;
	
	for(int i=0; i<=25;i++){
		for(int j=0; j<n&&k;j++){
			if(s[j] == 'a' + i){
				s[j] = '0';
				k--;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(s[i] != '0') cout << s[i];
	}
}
