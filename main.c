#include <stdio.h>
#include <stdlib.h>
#define N 6

int minbul(int Sayilar[N]){//kullanici tanimli fonksiyon icinde minumum deger bulunuyor.
int a,min; //1,1
min=Sayilar[0];//1
//minumum deger icin dizi donguye sokuluyor.
for(a=1;a<N;a++){ //1,N,N-1
if(min>Sayilar[a])//N
min=Sayilar[a];	//N
}	
return min;//1
}


int main() {
int sayilar[N],i;//1,1
//sayilar dizisini donguye sokup kullanicidan veri girisi yapmasi isteniyor.
for(i=0;i<N;i++){ //1,N+1,N =2N+2
printf("%d. sayiyi giriniz:",i+1); //N
scanf("%d",&sayilar[i]);//N

}	
printf("En kucuk deger:%d",minbul(sayilar));//1	
	return 0;//1
}
//T(n)=8n+9 
//O(n)
