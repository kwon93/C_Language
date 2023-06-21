#include <stdio.h>//표준 입출력 라이브러리

int main(void){
  char name[20]; //C에서 문자열은 char의 배열로 나타낸다. 
  printf("이름이 뭐요");
  scanf("%s",name); //java의 Scanner Class와 비슷하다.
  printf("%s아 반갑다.",name);
  return 0;
}