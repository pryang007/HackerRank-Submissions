#include <stdio.h>

void update(int *a,int *b) {
    int temp=*a;
    *a=*a+*b;
    *b=-1*(temp-*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
