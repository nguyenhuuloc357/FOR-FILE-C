Cho N số nguyên, nhiệm vụ của bạn là tính tổng các số nguyên được nhập là số chẵn.

Đầu vào
Dòng đầu tiên là số nguyên dương N - số lượng số được nhập.

Dòng thứ 2 là N số nguyên được nhập, mỗi số cách nhau một khoảng trắng
Input 01

8
8 9 4 1 5 1 6 6
Output 01

24

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
int n;
scanf("%d",&n);
ll s=0;
for(int i=1;i<=n;i++){
int x;
scanf("%d",&x);
if(x%2==0)
s+=x;
}
printf("%lld",s);
return 0;
}
