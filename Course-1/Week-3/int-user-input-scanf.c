#include <stdio.h>
int main () {
    int age;//DECLARE
    age = 17;//DEFINE
    printf("What is your age?\n");
    scanf("%d", &age);
    printf("You are %d years old\n", age);//USE
    return 0;
}