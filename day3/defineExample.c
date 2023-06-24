#include <stdio.h>
#define N 10
#define SQR(X) X * X

int main(void){
  printf("%d\n", N);
  int result = SQR(N+2);
  //SQR매크로에 10 + 2 * 10 + 2 가 들어간다. 연산자 우선 순위로 곱연산이 먼저 진행됨.
  // 2 * 10 = 20 -> 10 + 20 + 2 = 32 가 결과로 출력되게 된다.
  printf("%d\n",result);
  int rShift = 10 << 2;
  //10을 2진법으로 표현하면 1010 우shift시에는 이진수에서 마지막 10을 우측으로 밀어버려서 지워버림 그래서 이진수 10만 남고 10은 10진법으로 2
  //좌shift시에는 <<2 이므로 0을 두개 더 붙여줌 101000 이 되므로 40이됨.
  printf("%d\n",rShift); 
}