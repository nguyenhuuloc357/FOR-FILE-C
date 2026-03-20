Tính tổng ước của số nguyên dương N. Độ phức tạp mong đợi O(sqrt(N))
Input 01
28
Output 01
56
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
ll n;
scanf("%lld",&n);
ll s=0;
for(int i=1;i<=sqrt(n);i++){
if(n%i==0){
s+=i;
if(i!=n/i){
s+=n/i;
}
}
}
printf("%lld",s);
return 0;
}






