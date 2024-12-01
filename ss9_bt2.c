#include <stdio.h>

int main(int argc, const char * argv[]) {
fflush(stdin);
    int a[5]={1,2,3,4,5};
    int i=0;
    
    int repairIndex;
    int repairNumber;
    printf("chon vi tri ban muon sua : ");
    scanf("%d",&repairIndex);
    fflush(stdin);
    if( repairIndex >= 5){
        printf("vi tri khong hop le");
    }else if( repairIndex < 5){
        printf("nhap phan tu ban muon them vao :");
        scanf("%d", &repairNumber);
        fflush(stdin);
    }
    a[repairIndex] = repairNumber;

     for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    
    return 0;
    
}
