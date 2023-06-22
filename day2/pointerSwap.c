#include <stdio.h>
void swap(int a, int b); //함수를 만들고나서는 위쪽에 선언을 해줘야한다.
int main(void){
  int a = 10;
  int b  = 20;
  //a와 b의 값을 바꾸기.
  printf("swap함수 전 -> a: %d, b: %d\n",a,b); 
  swap(a,b);
  printf("swap함수 후 -> a: %d, b: %d\n",a,b);
  //값이 바뀌지 않음.
  //값에 의한 복사 (call by value) -> 값만 복사한다는 의미.
  return 0;
}

void swap(int a, int b){
  int temp = a;
  a = b;
  b = temp;

  printf("swap함수 내 -> a: %d, b: %d\n",a,b);
}