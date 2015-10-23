#include "stdio.h"
#include "string.h"

#define MAX 1002


void clean(int * arr) {
	int i;
	for(i = 0; i <= 100; i++)
		arr[i] = 0;
}

unsigned long long int find_max(unsigned long long int * cash, int count) {
	unsigned long long int max = cash[0], i;

	for(i = 0; i <= count; i++){
		if(cash[i] > max) 
			max = cash[i];
	}

	return max;
}

int main(void) {
	int tst, num_q, i;
	char corr_ans[MAX], chef_ans[MAX];
	unsigned long long int cash[MAX+1]; 
	int count = 0, arr[100];

	scanf("%d", &tst);

	while(tst-- > 0) {
		
		clean(arr);
		scanf("%d", &num_q);

		scanf("%s", corr_ans);
		for(i = 0; i < num_q; i++) {
			arr[(int)corr_ans[i]] = 1;	
		}
		
		scanf("%s", chef_ans);
		for(i = 0; i < num_q; i++) {
			arr[(int)chef_ans[i]] += 1;	
		}

		//gets(corr_ans);
		//gets(chef_ans);
	
		for(i = 0; i <= num_q; i++) {
			scanf("%llu", &cash[i]);
		}

		for(i = 'A'; i <= 'Z'; i++) {
			if(arr[i] == 2)
				count++;
		}



		printf("%llu\n", find_max(cash, count));
		count = 0;
	}

	
	return 0;
}
