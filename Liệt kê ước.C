Đếm số lượng ước và liệt kê các ước theo thứ tự tăng dần của số nguyên dương N

Gợi ý : Duyệt vòng lặp từ 1 tới N lượt thứ nhất để đếm ước, lượt thứ 2 để liệt kê ước
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
int n;
scanf("%d",&n);
ll dem=0;
for(int i=1;i<=n;i++){
if(n%i==0){//dem uoc
++dem;
}
}
printf("%lld\n",dem);
for(int i=1;i<=n;i++){//liệt kê ước
if(n%i==0){
printf("%d ",i);
}
}
return 0;
}






