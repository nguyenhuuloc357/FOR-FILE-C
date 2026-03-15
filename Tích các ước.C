Tính tích các ước của số tự nhiên N
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
ll n;
scanf("%lld",&n);
long long tich=1;
for(int i=1;i<=n;i++){//liệt kê ước
if(n%i==0){
tich*=i;
}
}
printf("%lld",tich);
return 0;
}






