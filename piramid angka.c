#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int M, N;
	int i, j;
	int x, y;
	
	printf("");
	scanf("%d", &N);
	M = N*2-1;
	
	for(i = 1; i <= M; i++){
		if(i < N*2-i){
			x = i;
		} else{
			x = N*2-i;
		}
		for(j = 1; j <= M; j++){
			if(j < N*2-j){
				y = j;
			} else{
				y = N*2-j;
			}
			if(x <= y){
			printf("%d", x);
			} else {
			printf("%d", y);
			}
			if(j == M){
			printf("\n");
			} else{
			printf(" ");
			}
			}
		}
return 0;
}
