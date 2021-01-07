#include <iostream>
#include <string>
using namespace std;

int main(){
	char c;
	string in, out="", keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
	int shift = 0;
	cin >> c;
	cin >> in;

	if(c == 'R') shift = -1;
	else shift = 1;


	for(unsigned i=0; i<in.length(); i++){
		for(unsigned j=0; j<keyboard.length(); j++){
			if(in[i] == keyboard[j]){
				out += keyboard[j+shift];
				break;
			}
		}
	}
	cout << out;
}

