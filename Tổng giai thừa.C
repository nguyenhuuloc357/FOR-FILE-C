Tính tổng S(n) = 1 + 1.2 + 1.2.3 + 1.2.3.4 + ... + 1.2.3....n //1+1!+2!+3!+4!+...+n!
Input 01

5
Output 01

153

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
int n;
scanf("%d",&n);
ll gt=1;
ll s=0;
for(int i=1;i<=n;i++){
gt*=i;
s+=gt;
}
printf("%lld",s);
return 0;
}
