#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[100];
    int i=0;
    int soLuong;
    printf("nhap so phan tu ban muon them vao mang : ");
    scanf("%d",&soLuong);
    for(int i=0;i<soLuong;i++){
        printf("nhap phan tu cho mang : ");
        scanf("%d",&a[i]);
    }
    int addIndex;
    printf("chon vi tri ban muon xoa phan tu vao mang : ");
    scanf("%d",&addIndex);
    if(addIndex>100){
        printf("vi tri khong hop le");
    }else if(addIndex<=soLuong){
        for(int i=addIndex;i<soLuong;i++){
            a[i]=a[i+1];
        }
    }
    for(int i=0;i<(soLuong-1);i++){
        printf("%d",a[i]);
    }

    return 0;
}

