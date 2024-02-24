#include <stdio.h>

int main()
{
 printf("실수 출력%10d\n",1234);
 printf("실수 출력%11d\n",1234);
 printf("실수 출력%14d\n",1234);
 printf("실수 출력%16d\n",1234);
 printf("실수 출력%18d\n",1234);
 printf("%s\n", "각 과목의 점수와 합계, 평균을 출력한다.");
 printf("kor %d, mat %d, eng %d\n", 55, 65, 90);
 printf("sum %d\n", 55 + 65+ 90);
 printf("avg %d\n", (55 + 65 + 90)/3);
 printf("%s%8s\n", "sub", "score");
 printf("------------\n");
 printf("%s%8d\n", "kor", 50);
 printf("%s%8d\n", "mat", 65);
 printf("%s%8d\n", "eng", 90);
 printf("------------\n");
 printf("%s%8d\n", "sum", 50+65+90);
 printf("%s%8d\n", "avg", (50+65+90)/3);
 int a = 2;
 char b;
 b = 'c';
 printf("a = %d\nb = %c\n", a, b);
 return 0;
}