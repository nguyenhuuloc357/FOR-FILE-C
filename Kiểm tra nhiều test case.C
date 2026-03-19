Bài này rất đơn giản, nhiệm vụ của bạn là kiểm tra số nhập vào là chẵn hay lẻ. Các bạn phải trả lời nhiều trường hợp. (Bài này có nhiệm vụ cho các bạn làm quen với các bài toán mà đề bài cho nhiều test case sau này)

Đầu vào
Dòng đầu tiên là số lượng trường hợp T

T dòng tiếp theo mỗi dòng là một số nguyên N cần kiểm tra tính chẵn lẻ.
3
166
721
665
Output 01
EVEN
ODD
ODD

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
int t;
scanf("%d",&t);
for(int i=1;i<=t;i++){
int n;
scanf("%d",&n);
if(n%2==0){
printf("EVEN\n");
}
else printf("ODD\n");
}
return 0;
}
