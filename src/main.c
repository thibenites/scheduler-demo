#include <stdio.h>

int main() {
  int a[5];
  int n;
  int flag; //flag para ver se teve alguma ocorrência na iésima interação

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<(n+1); i++) {
    flag = 0;
    if(i%a[0] == 0){
        printf("0");
        flag = 1;
    }
    if(i%a[1] == 0){
        printf("1");
        flag = 1;
    }
    if(i%a[2] == 0){
        printf("2");
        flag = 1;
    }
    if(i%a[3] == 0){
        printf("3");
        flag = 1;
    }
    if(i%a[4] == 0){
        printf("4");
        flag = 1;
    }
    if(flag == 0){
        printf("-\n");
    }
    else{
        printf("\n");
    }
  }

  return 0;
}
