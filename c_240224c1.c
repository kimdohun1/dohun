 #include <stdio.h>

 int main()
{
    printf("%s \n","서식 문자로 출력하는 방법입니다.");
    printf("%s \n","이것은 문자열을 나타냅니다.");
    printf("%s \n", "수를 출력할 때는 따옴표를 생략합니다.");
    printf("%d \n", 123);
    printf("%.1f \n", 6.5);
    printf("수식을 출력하면 계산 결과가 출력됩니다.");
    printf("%d + %d = %d\n", 10, 5, 10 + 5);
    printf("내 생년월일은 %d년 %d월 %d일 입니다 만 나이는 %d살 입니다. \n", 1984, 9, 22, 2024 - 1984);
    return 0;
}    