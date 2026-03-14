Tính tổng : S(n) =1+1/2+1/3+1/4+….+1/n

Lưu ý : Lấy 1.0 / i khi tính toán thay vì 1 / i

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
s+=1.0/i;//cộng 1+1/2+1/3+1/4+….+1/n
}
printf("%.3lf",s);
return 0;
}






