// liá»‡t kÃª cÃ¡c thá»© trong tuáº§n
#include<stdio.h> 
enum week{v,mon, tue, wed, thur, fri, sat, sun};

int main() {
    enum week day;
    day = v ;
    printf("mon %d\n", day);
    
    // duyet tat ca cac chi so phan tu cua enum week
    int i; 
    for (i = mon; i <= sun; i++)
        printf("%d ", i);
    return 0;
}