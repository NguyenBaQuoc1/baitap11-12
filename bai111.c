#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[7][10] , temp[10] ; 
    char i , j ; 
    printf("Nhap 7 Ten ma ban muon kiem tra\n");
    for(i=0 ; i<7 ; i++){
        printf("Ten so [%d]" , i+1);
        scanf("%s" , &name[i]);
    }
    for(i= 0 ; i < 6 ; i++){
        for(j=i+1 ; j < 7 ; j ++){
            if(strcmp(name[i] , name[j]) > 0){
                strcpy(temp , name[i]);
                strcpy(name[i] , name[j]);
                strcpy(name[j] , temp);
            }
        }
    }
    for(i=0 ; i<7 ; i++){
        printf("%s\n",name[i]);
    }
    return 0;
}
