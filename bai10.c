#include<stdio.h>
#if 0
int main(){
    char s[100];
    float f;
    printf("Ten san pham: ");
    scanf("%s",s);
    printf("Gia: $");
    scanf("%f",&f);
    int n=27;
    while(--n) printf("-");
    printf("\n");
    printf("%s%10s\n","Ten san pham","Gia");
    printf("%s\033[0;31m%15c%.2f\033[0m\n",s,'$',f);
}
#endif
#include<string.h>
int main(){
    char s[100];
    int a,b;
    printf("Nhap ten nhan vien: ");
    fgets(s,sizeof(s),stdin);
    s[strlen(s)-1]='\0';
    printf("Nhap so gio lam: ");
    scanf("%d",&a);
    printf("Nhap luong moi gio: ");
    scanf("%d",&b);
    int n=50;
    while(n--) printf("-");
    printf("\n%-17s%-15s%-15s%-17s","Ten nhan vien","So gio lam","Luong moi gio","Tong luong");
    printf("\n%-17s\033[0;31m%-15d$%-14d$%-17d\033[0m\n",s,a,b,a*b);
}