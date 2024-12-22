#include <stdio.h>

int update(int *a,int *b){
    int c;
    c=a+b;
    return c;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}