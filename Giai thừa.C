 Nhập n không âm không quá 15, tính và in ra n! (n giai thừa)
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
ll n;
scanf("%lld",&n);
ll s=1;
for(int i=1;i<=n;i++){
s*=i;
}
printf("%lld",s);
return 0;
}






