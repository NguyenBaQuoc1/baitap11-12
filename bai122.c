#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a[1000];
    int i = 0 ; 
    int nguyenam = 0 ;
    int phuam = 0 ;

    printf("Nhap chuoi ki tu \n");
    scanf("%[^\n]" , &a[i]);

    while(a[i++] != '\0'){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            nguyenam++;      
        }else phuam++ ;       
    }

    printf("So nguyen am la %d \n" , nguyenam);
    printf("So phu am la : %d " , phuam);
    return 0;
}
