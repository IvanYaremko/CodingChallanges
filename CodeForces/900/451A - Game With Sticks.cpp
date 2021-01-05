#include<iostream>
using namespace std;

int main(){
	int n, m,i=0;
	cin >> n >> m;
	i = n*m;
	while(true){
		n--;
		m--;
		i=n*m;
		if(i<=0){
			cout<< "Akshat";
			break;
		}
		n--;
		m--;
		i=n*m;
		if(i<=0){
			cout<< "Malvika";
			break;
		}
	}
}
