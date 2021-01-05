#include<iostream>
#include<string>
using namespace std;

int main(){
	int count=0;
	bool v = true;
	string n;
	cin >> n;

	for(unsigned i=0; i<n.length() && v;i++){
		count = 0;
		for(unsigned j=i; j<n.length(); j++){
			if(n[i] == n[j]){
				count++;
				if(count == 7){
					v = false;
					break;
				}
			}
			else{
				break;
			};
		}
	}

	if(count == 7) cout << "YES";
	else cout << "NO";
}
