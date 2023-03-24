#include <bits/stdc++.h>
using namespace std;

int main()
{

	string line = "/*Ehsanul mostafa imon*/";

	if (line.size()>=2 && line[0] == '/' && line[1] == '/') {

		cout << "It is a single-line comment";
		
	}

	if (line.size()>=4 && line[line.size() - 2] == '*'
		&& line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*') {

		cout << "It is a multi-line comment";
			
	}
	else{
		cout << "It is not a comment";
	}

	
	return 0;
}

