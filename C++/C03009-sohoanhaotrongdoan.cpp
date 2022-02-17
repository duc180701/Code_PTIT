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
} 

int arr[1000001]; 

int main(){ 
	int a, b, i, j, tmp; 
	scanf("%d%d",&a, &b);
    if(a > b) {
        tmp = a;
        a = b;
        b = tmp;
    } 
	for(i=0;i<=1000000;i=i+1) arr[i]=1; 
	for(i=a;i<=b;i=i+1){ 
		if(arr[i]==1){ 
			if(checksohoanhao(i)==1){ 
				for(j=2*i;j<=b;j=j+i){ 
					arr[j]=0; 
				} 
			} 
			if(checksohoanhao(i)==-1) arr[i]=0; 
		} 
	} 
	for(i=a;i<=b;i=i+1){ 
		if(arr[i]==1) printf("%d ",i); 
	} 
}
