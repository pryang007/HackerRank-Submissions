#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    char ch;
    long ld;
    double lf;
    float f;
    scanf("%d %ld %c %f %lf",&i,&ld,&ch,&f,&lf);
    printf("%d\n%ld\n%c\n%f\n%lf",i,ld,ch,f,lf);
    return 0;
}
