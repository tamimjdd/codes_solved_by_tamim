#include <stdio.h>
int main(){
	int n,l,r,d;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&l,&r,&d);
		printf("%d\n",d<l?d:(r/d+1)*d);
	}
}
