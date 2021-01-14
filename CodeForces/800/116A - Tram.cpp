#include<iostream>
using namespace std;
 
int main()
{
	int stops, total=0, outNum, inNum, cap=0;
	
	cin >> stops;
	
	while(stops>0)
	{
		cin >> outNum >> inNum;
		total -= outNum;
		total += inNum;
		if(total>cap) cap = total;
		stops--;
	}
	cout << cap;	
}
