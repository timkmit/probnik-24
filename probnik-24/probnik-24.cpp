#include <iostream>
#include <cmath>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
	
	int k = 0;
	int max = 0;
	fstream file;
	file.open("24 (3).txt");
	string s;
	for (int j = 0; getline(file, s); j++) {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != 'G' && s[i] != 'W' && s[i] != 'P') {
				k++;
			}
			else {
				if (max < k) {
					max = k;
					k = 0;
				}
			}
		}
	}
	
	cout << max;

	return 0;
}