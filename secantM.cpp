#include<stdio.h>
#include<conio.h>
#define f(x) 2 x + 3
int main(){
	int x1,x0,f0,x2,i,f2,f1,e,iter;
	printf("initial guesses: ");
	scanf("%d %d",&x0,&x1);
	printf("insert tolerable error: ");
	scanf("%d",&e);
	printf("maximum iteration: ");
	scanf("%d",&iter);
	for( i=0;i<iter;i++){
		f0=f(x0);
		f1=f(x1);
		if(f0==f1){
			printf("error");
		}
		x2=x1-(x1-x0)*f1/(f1-f0);
		f2 = f(x2);
		printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,x1,x2,f2);
		
	}
}
