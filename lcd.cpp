#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void one(int, int, int);
void two(int, int, int);
void three(int, int, int);
void four(int, int, int);
void five(int, int, int);
void six(int, int, int);
void seven(int, int, int);
void eight(int, int, int);
void nine(int, int, int);
void zero(int, int, int);

int main(){
	int s, n;
	cin >> s >> n;
	vector <int> vec;
	int row = (2 * s) + 3;
	int col = s + 2;
	string str = to_string(n);
	for(int i=0; i<str.length(); i++){
		n = stoi(str.substr(i, 1));
		vec.push_back(n);
	}
	for(int i=0; i<vec.size(); i++){
		switch(vec[i]){
			case 1 : one(row, col, s); 
			         break;
			case 2 : two(row, col, s);
			         break;
			case 3 : three(row, col, s);
			         break;
			case 4 : four(row, col, s);
			         break;
			case 5 : five(row, col, s);
			         break;
			case 6 : six(row, col, s);
			         break;
			case 7 : seven(row, col, s);
			         break;
			case 8 : eight(row, col, s);
			         break;
			case 9 : nine(row, col, s);
			         break;
		    default : zero(row, col, s);
	    }
	}
    return 0;
}

void one(int r, int c, int s){
	int x = 0;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(i == 1 + x){
				cout << " ";
			}
			else{
				if(j == c)
					cout << "׀";
				else 
					cout << " ";
			}
	    }
	    if(i == 1 + x)
	    	x = x + s + 1;
	    cout << endl;
	}
}

void two(int r, int c, int s){
	int x = 0;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(i == 1 + x){
				if(j == 1 or j == c)
					cout << " ";
				else
					cout << "-";

			}
			else if(i < (r/2)+1 && r > 1){
				if(j == c)
					cout << "׀";
				else 
					cout << " ";
			}
			else if(i > (r/2)+1 && i <= r){
				if(j == 1)
					cout << "׀";
				else 
					cout << " ";
			}
		}
		if(i == 1 + x)
			x = x + s + 1;

		cout << endl;
	}
}

void three(int r, int c, int s){
	int x = 0;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(i == 1 + x){
				if(j == 1 or j == c)
					cout << " ";
				else
					cout << "-";

			}
			else if(i < (r/2)+1 && r > 1){
				if(j == c)
					cout << "׀";
				else 
					cout << " ";
			}
			else if(i > (r/2)+1 && i <= r){
				if(j == c)
					cout << "׀";
				else 
					cout << " ";
			}
		}
		if(i == 1 + x)
			x = x + s + 1;

		cout << endl;
	}
}

void four(int r, int c, int s){
	int x = 0;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(i == 1 + x){
				if(i == 1)
					cout << " ";
				else if(i == r)
					cout << " ";
				else{
					if(j > 1 && j < c)
						cout << "-";
					else 
						cout << " ";
				}
			 }

		    
			else if(i > 1 && i < (r/2)+1){
				if(j == 1 or j == c)
					cout << "׀";
				else 
					cout << " ";
			}
			else if(i > (r/2)+1 && i <=r){
				if(j == c)
					cout << "׀";
				else 
					cout << " ";
			}
		}
		if(i == 1 + x){
			x = x + s + 1;
		}
		cout << endl;
	}
}

void five(int r, int c, int s){
	int x = 0;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(i == 1 + x){
				if(j == 1 or j == c)
					cout << " ";
				else
					cout << "-";

			}
			else if(i < (r/2)+1 && r > 1){
				if(j == 1)
					cout << "׀";
				else 
					cout << " ";
			}
			else if(i > (r/2)+1 && i <= r){
				if(j == c)
					cout << "׀";
				else 
					cout << " ";
			}
		}
		if(i == 1 + x)
			x = x + s + 1;

		cout << endl;
	}
}

void six(int r, int c, int s){
	int x = 0;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(i == 1 + x){
				if(j == 1 or j == c)
					cout << " ";
				else
					cout << "-";

			}
			else if(i < (r/2)+1 && r > 1){
				if(j == 1)
					cout << "׀";
				else 
					cout << " ";
			}
			else if(i > (r/2)+1 && i <= r){
				if(j == 1 or j == c)
					cout << "׀";
				else 
					cout << " ";
			}
		}
		if(i == 1 + x)
			x = x + s + 1;

		cout << endl;
	}
}

void seven(int r, int c, int s){
	int x = 0;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(i == 1 + x){
				if(i == 1 && j < c)
					cout << "-";
				else 
					cout << " ";
			}
			else{
				if(j == c)
					cout << "׀";
				else 
					cout << " ";
			}
	    }
	    if(i == 1 + x)
	    	x = x + s + 1;
	    cout << endl;
	}
}

void eight(int r, int c, int s){
	int x = 0;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(i == 1 + x){
				if(j == 1 or j == c)
					cout << " ";
				else
					cout << "-";

			}
			else if(i < (r/2)+1 && r > 1){
				if(j == 1 or j == c)
					cout << "׀";
				else 
					cout << " ";
			}
			else if(i > (r/2)+1 && i <= r){
				if(j == 1 or j == c)
					cout << "׀";
				else 
					cout << " ";
			}
		}
		if(i == 1 + x)
			x = x + s + 1;

		cout << endl;
	}
}

void nine(int r, int c, int s){
	int x = 0;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(i == 1 + x){
				if(j == 1 or j == c)
					cout << " ";
				else
					cout << "-";

			}
			else if(i < (r/2)+1 && r > 1){
				if(j == 1 or j == c)
					cout << "׀";
				else 
					cout << " ";
			}
			else if(i > (r/2)+1 && i <= r){
				if(j == c)
					cout << "׀";
				else 
					cout << " ";
			}
		}
		if(i == 1 + x)
			x = x + s + 1;

		cout << endl;
	}
}

void zero(int r, int c, int s){
	int x = 0;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(i == 1 or i == r){
				if(j == 1 or j == c)
					cout << " ";
				else 
					cout << "-";
			}
			else if(i < (r/2)+1 && r > 1){
				if(j == 1 or j == c)
					cout << "׀";
				else 
					cout << " ";
			}
			else if(i > (r/2)+1 && i <= r){
				if(j == 1 or j == c)
					cout << "׀";
				else 
					cout << " ";
			}
		}
		cout << endl;
	}
}
