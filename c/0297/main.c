#include<stdio.h>

int main(){
	int i,n,k,p,win;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d %d",&k,&p);
		win=k%p;
		if(win==0){
			win=p;
		}
		printf("%d\n",win);
	}
	return 0;
}
