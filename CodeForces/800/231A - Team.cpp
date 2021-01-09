#include<iostream>
using namespace std;
 
int main(){
	int n, p, v, t, l=0;
	
	cin >> n;
	
	while(n>0){
		cin >> p >> v >> t;
		if((p+v+t) >= 2){
			
			l++;
		}
		n--;
	}
	cout << l;
}
