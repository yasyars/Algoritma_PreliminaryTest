#include <stdio.h>
#include <string.h>

void TampilkanPrima(int n){
//menampilkan bilangan prima yang berada pada range 0-n
//bilangan prima dimulai dari 2 
//asumsi n>0

	int prima = 1;
	printf("Bilangan prima antara 0 - %d adalah: \n",n);
	for (int i=2; i<=n; i++){
		for (int j=2;j<i;j++){
			if (i%j==0)
				prima =0;
		}
		
		if (prima==1){
			printf("%d ", i);
		}
		
		prima =1;
	}
	printf("\n");
}

void TampilkanFibonacci(int n){
//menampilkan n bialngan pada deret fibonacci
//deret dimulai dari bilangan 1
	int fibo[n];
	
	fibo[0]=1;
	fibo[1]=1;
	printf("%d ",fibo[0]);
	printf("%d ",fibo[1]);
	for (int i=2;i<n;i++){
		fibo[i]= fibo[i-2]+fibo[i-1];
		printf("%d ",fibo[i]);
	}
	printf("\n");
}

void TampilkanPola(const char *s){
	for (int i=0; i<strlen(s);i++){
		printf("%c",s[i]);
		for (int j=0;j<strlen(s)-i-1;j++){
			printf("%c",'0');
		}
		printf("\n");
	}
}

int main(){
	int n;
	char s[100]; //asumsi batas atas 100
	
	printf("\nMasukkan n (batas atas bilangan prima) : ");
	scanf("%d", &n);
	
	TampilkanPrima(n);
	
	printf("\nMasukkan n banyaknya bilangan fibonacci : ");
	scanf("%d", &n);
	
	TampilkanFibonacci(n);
	
	printf("\nMasukkan input angka (tanpa titik) : ");
	scanf("%s",s);
	
	TampilkanPola(s);
	
}
