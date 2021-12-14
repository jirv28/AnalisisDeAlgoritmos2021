#include <stdio.h>
#include <stdlib.h>

int max(int n1, int n2);

int main(void){
	int r[1001], p[1000];
	int i,j,n,q;

	printf("\nIngresar longitud: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		printf("\nIngresar precio de la longitud %d: ",i);
		scanf("%d",&p[i]);
	}
	
	r[0]=0;
	
	for (j=1; j<=n; j++){
		q= -2147483646;
		for (i=1; i<=j; i++){
			q=max(q,(p[i]+r[j-i]));
		}
		r[j]=q;
	}
	
	printf("\nEl mayor precio a obtener es: %d", r[n]);
	return 0;
}

int max(int n1, int n2){
    int result;
    if(n1>n2){
        result=n1;
    } else{
        result=n2;
    }
}
