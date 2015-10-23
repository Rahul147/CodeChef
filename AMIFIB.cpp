#include "iostream"
#include "math.h"
using namespace std;

bool is_perfect_square(unsigned long long int x) {
	unsigned long long int n = sqrt(x);
	return (n*n == x);
}

bool is_fib(unsigned long long int val) {
	return is_perfect_square(5*val*val+4) || is_perfect_square(5*val*val-4);
}

int main(void) {
	int tst;
	unsigned long long int inp;

	cin>>tst;

	while(tst-- > 0){

		cin>>inp;

		is_fib(inp) ? cout<<"YES\n" : cout<<"NO\n";
	}
return 0;
}