#include "iostream"
using namespace std;
#include<stdio.h>

int rank(char ch) {

	switch(ch) {

		case 'A' : return 1;
		case '2' : return 2;
		case '3' : return 3;
		case '4' : return 4;
		case '5' : return 5;
		case '6' : return 6;
		case '7' : return 7;
		case '8' : return 8;
		case '9' : return 9;
		case 'T': return 10;
		case 'J' : return 11;
		case 'Q' : return 12;
		case 'K' : return 13;

	}
}

int suits(char ch) {

	switch(ch) {

		case 'S' : return 1;
		case 'H' : return 2;
		case 'D' : return 3;
		case 'C' : return 4; 
	}
}


int main(void)
{
	int suit[14][5], tst;
	char hand[20];

	cin>>tst;

	while(tst-- > 0) {

		cin.getline(hand, 20);

		cout.putline(hand, 20);
/*
		for(int i = 1; i <= 14; i++) {
			for(int j = 1; j <= 5; j++){
				suit[i][j] = 0;
			}
		}

		



		for(int i = 0; i!='\0'; i+=3) {

            cout<<hand[i]<<hand[i+1]<<"\n";

		//	suit[rank(hand[i])][suits(hand[i+1])] = 1;
		}
/*
		for(int i = 1; i <= 14; i++) {
			for(int j = 1; j <= 5; j++){
				cout<<suit[i][j]<<" ";
			}
			cout<<"\n";
		}

*/

	}


	return 0;
}