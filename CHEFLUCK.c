#include<stdio.h>
/*
#define FOUR 4
#define SEVEN 7
*/
int main(void) {
	int num, tst, flag = 0, i, j, ans;
	scanf("%d", &tst);


	while(tst--) {

		scanf("%d", &num);

		for(i = 0; i <= num && (flag == 0); i+=7) {
			
			for(j = 0; j <= num; j+=4) {

				if( num == ( i + j) ) {
					flag = 1;
					ans = i;
				}
			}
		}

		if(flag) 
			printf("%d\n", ans);

		else 
			printf("%d\n", -1);
			flag = 0;
			ans = -1;
	}
	
	return 0;
}