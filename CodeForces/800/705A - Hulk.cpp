#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cin >> n;

	string  s="";

	for(int i=0; i<n; i++){
		if(i%2==0){
			s+="I hate ";
		}
		else{
			s+="I love ";
		}
		if(i+1<n) s+="that ";
	}
	s+="it";
	cout<<s;
}
