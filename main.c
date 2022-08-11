#include <stdio.h>

void calendario (int mes) {
  int i;
  char* vetor[13]={"a","Janeiro","Fevereiro","Março","Abril","Maio,","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
  printf("-------------------------\n      %s,2020\n-------------------------\nD   S   T   Q   Q   S   S\n",vetor[mes]);//char* que serve para armazenar literais de strings(ou ponteiros)
  if (mes==1) {
    printf("            ");//espaço para corrigir os dias da semana
    for (i=1; i<=31; i++) {
      printf("%d\t",i);//(\t) para alinhar os números do calendário
      if ((i==4) || (i==11) || (i==18) || (i==25) || (i==31)) {
        printf("\n");
      }
    }
  }
  if (mes==2) {
    printf("                        ");
    for (i=1; i<=29; i++) {
      printf("%d\t",i);
      if ((i==1) || (i==8) || (i==15) || (i==22) || (i==29)) {
        printf("\n");
      }
    }
  }
  if (mes==3) {
    printf("");
    for (i=1; i<=31; i++) {
      printf("%d\t",i);
      if ((i==7) || (i==14) || (i==21) || (i==28) || (i==31)) {
        printf("\n");
      }
    }
  }
  if (mes==4) {
    printf("            ");
    for (i=1; i<=30; i++) {
      printf("%d\t",i);
      if ((i==4) || (i==11) || (i==18) || (i==25) || (i==30)) {
        printf("\n");
      }
    }
  }
  if (mes==5) {
    printf("                    ");
    for (i=1; i<=31; i++) {
      printf("%d\t",i);
      if ((i==2) || (i==9) || (i==16) || (i==23) || (i==30) || (i==31)) {
        printf("\n");
      }
    }
  }
  if (mes==6) {
    printf("    ");
    for (i=1; i<=30; i++) {
      printf("%d\t",i);
      if ((i==6) || (i==13) || (i==20) || (i==27) || (i==30)) {
        printf("\n");
      }
    }
  }
  if (mes==7) {
    printf("            ");
    for (i=1; i<=31; i++) {
      printf("%d\t",i);
      if ((i==4) || (i==11) || (i==18) || (i==25) || (i==31)) {
        printf("\n");
      }
    }
  }
  if (mes==8) {
    printf("                        ");
    for (i=1; i<=31; i++) {
      printf("%d\t",i);
      if ((i==1) || (i==8) || (i==15) || (i==22) || (i==29) || (i==31)) {
        printf("\n");
      }
    }
  }
  if (mes==9) {
    printf("        ");
    for (i=1; i<=30; i++) {
      printf("%d\t",i);
      if ((i==5) || (i==12) || (i==19) || (i==26) || (i==30)) {
        printf("\n");
      }
    }
  }
  if (mes==10) {
    printf("                ");
    for (i=1; i<=31; i++) {
      printf("%d\t",i);
      if ((i==3) || (i==10) || (i==17) || (i==24) || (i==31)) {
        printf("\n");
      }
    }
  }
  if (mes==11) {
    printf("");
    for (i=1; i<=30; i++) {
      printf("%d\t",i);
      if ((i==7) || (i==14) || (i==21) || (i==28) || (i==30)) {
        printf("\n");
      }
    }
  }
  if (mes==12) {
    printf("        ");
    for (i=1; i<=31; i++) {
      printf("%d\t",i);
      if ((i==5) || (i==12) || (i==19) || (i==26) || (i==31)) {
        printf("\n");
      }
    }
  }
  }

int main (void) {
  int n;
  printf("Digite o número que corresponde ao mês que você deseja ver o calendário  (Ex: 1 -> Janeiro): ");
  scanf("%d", &n);
  if (n>12 || n<1) {
    printf("Mês inválido\n");
  }
  else {
    calendario(n);
  }
  return 0;
}