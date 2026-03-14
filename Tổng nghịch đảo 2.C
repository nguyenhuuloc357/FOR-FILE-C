Tính tổng : S(n) = 1/2 + 1/4 + 1/6 + 1/8 +…….+ 1/(2n)

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
int n;
scanf("%d",&n);
d s=0;
for(int i=1;i<=n;i++){
s+=1.0/i/2;
}
printf("%.5lf",s);
return 0;
}






