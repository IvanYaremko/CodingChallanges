#include<iostream>
using namespace std;

int main() {
	int size, count=1;
	cin >> size;
	
	int arr[size];
	
	for(int i=0;i<size;i++){
			cin >> arr[i];
		}
		
	for(int i=0;i<size-1;i++){
			if(arr[i]!=arr[i+1]){
					count++;
				}
		}
	cout<<count;
	return 0;
}
