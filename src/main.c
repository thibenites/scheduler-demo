#include <stdio.h>

int main() {
  int a[5];
  int n;
  int flag; //flag para ver se teve alguma ocorrência na iésima interação

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<(n+1); i++) { //começo na iteração 1, para facilitar a conta de resto (%), terminando na (n+1), obviamente
    flag = 0;           //zera a flag no início de cada iteração
    if(i%a[0] == 0){    //conta para ver se esta tarefa deve ocorrer nesta iteração, caso resto igual a zero, deve acontecer
        printf("0");    //impressão da tarefa que ocorreu
        flag = 1;       //flag para inidcar que houve tarefa
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
    if(flag == 0){      //se não houve tarefa nesta iteração, imprimi-se o hífen, seguido do \n, c.c. só o \n
        printf("-\n");
    }
    else{
        printf("\n");
    }
  }

  return 0;
}
