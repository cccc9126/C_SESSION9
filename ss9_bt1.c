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
    printf("chon vi tri ban muon them phan tu vao mang : ");
    scanf("%d",&addIndex);
    if(addIndex>100){
        printf("vi tri khong hop le");
    }else if(addIndex<=soLuong){
        for(int i=soLuong;i>addIndex;i--){
            a[i]=a[i-1];
        }
        int addNumber;
        printf("nhap phan tu ban muon them vao :");
        scanf("%d", &addNumber);

        a[addIndex]=addNumber;
    }
    for(int i=0;i<=soLuong;i++){
        printf("%d",a[i]);
    }

    return 0;
}
