#include<stdio.h> 

int checksohoanhao(int n){ 
		if(n<2) return -1; 
		if(n>=2){ 
			int i; 
			int sum=0; 
			for(i=1;i*i<=n;i=i+1){ 
				if(n%i==0) sum=sum+i+n/i; 
			} 
			sum=sum-n; 
			if(sum==n) return 1; 
			else return -1; 
		}
} int b[1000001]; 

int main(){ 
	int n,i,j; 
	scanf("%d",&n); 
	for(i=0;i<=1000000;i=i+1) b[i]=1; 
	for(i=0;i<=n;i=i+1){ 
		if(b[i]==1){ 
			if(checksohoanhao(i)==1){ 
				for(j=2*i;j<=n;j=j+i){ 
					b[j]=0; 
				} 
			} 
			if(checksohoanhao(i)==-1) b[i]=0; 
		} 
	} 
	for(i=0;i<=n;i=i+1){ 
		if(b[i]==1) printf("%d ",i); 
	} 
}