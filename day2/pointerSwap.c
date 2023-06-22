#include <stdio.h>
void swap(int a, int b); //함수를 만들고나서는 위쪽에 선언을 해줘야한다.
void swap_addr(int *a, int *b);
void changeArr(int *ptr);


int main(void){
  int a = 10;
  int b  = 20;
  //a와 b의 값을 바꾸기.
  printf("swap함수 전 -> a: %d, b: %d\n",a,b); 
  swap(a,b);
  printf("swap함수 후 -> a: %d, b: %d\n",a,b);
  //값이 바뀌지 않음.
  //값에 의한 복사 (call by value) -> 값만 복사한다는 의미.
  printf("a의 주소: %d\n", &a);
  printf("b의 주소: %d\n", &b);
  //그럼 메모리 공간에 있는 주소값 자체를 넘기면?
  swap_addr(&a,&b);
  printf("swap_addr 함수 후 -> a: %d, b: %d\n",a,b);

  int arr2[3] = {10,20,30};
  changeArr(arr2);
  for(int i = 0; i < 3; i++ ){
    printf("%d\n",arr2[i]);
  }

  return 0;
}

void swap(int a, int b){
  int temp = a;
  a = b;
  b = temp;

  printf("swap함수 내 -> a: %d, b: %d\n",a,b);

  printf("함수내의 a의 주소: %d\n", &a); //새로운 주소가 생성되었다. 즉 함수내의 a,b와 함수밖의 a,b,는 서로 다른값이다.
  printf("함수내의 b의 주소: %d\n", &b);
}
void swap_addr(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;

  printf("addr함수내의 a의 주소: %d\n", &a);
  printf("addr함수내의 b의 주소: %d\n", &b);
}
void changeArr(int *ptr){ //pointer가 배열 주소를 참조하게되어 배열의 인덱스를 가져올 수 있게 된다.

  ptr[2] = 50;
}