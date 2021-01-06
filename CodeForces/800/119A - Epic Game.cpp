#include<iostream>
using namespace std;
int gcd(int p, int n) {
   if (n == 0) return p;
   return gcd(n, p % n);
}

int main(){
	int a, b, n;
	cin >> a >> b >> n;

	while(true){
		n-=gcd(a,n);
		if(n==0){
			cout<<0;
			break;
		}
		n-=gcd(b,n);
		if(n==0){
			cout<<1;
			break;
		}
	}
}
