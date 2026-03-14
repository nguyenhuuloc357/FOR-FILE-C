Nhập vào giá trị của n không quá 10^6, tính tổng các số nguyên dương không vượt quá n chia hết cho 3.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
int main(){
int n;
scanf("%d",&n);
ll s=0;
for(int i=1;i<=n;i++){
if(i%3==0){//tính tất cả các số tự nhiên n chia hết cho 3
s+=i;
}
}
printf("%lld",s);
return 0;
}
