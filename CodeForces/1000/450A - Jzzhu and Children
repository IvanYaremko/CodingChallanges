#include<iostream>
 
using namespace std;
 
struct student{
	int m;
	int id;
};
 
int main() {
	int n, m;
	cin>>n>>m;
	student a[n], l;
	for(int i=0; i<n; i++){
		cin>>a[i].m;
		a[i].id=i+1;
	}
	
	
	while(n>0){
		student t = a[0];
	 
		if(t.m > m){
			t.m-=m;
			for(int i=0; i<n;i++){
				a[i] = a[i+1];
			}
			a[n-1] = t;
		}
		else{
			l = a[0];
			for(int i=0; i<n; i++){
				a[i] = a[i+1];
			}
			n--;
		}	
	}
	
	
	cout << l.id;
}
