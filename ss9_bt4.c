#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    int Add=0;
    int num;
    int a[100];
    int soLuong;
    int del=0;
    while(num!=6){
        
        printf("\t\tMenu\n");
        printf("1. Nhập vào mảng\n");
        printf("2 .Hiển thị mảng\n");
        printf("3. Thêm phần tử\n");
        printf("4. Sửa phần tử\n");
        printf("5. Xóa phần tử\n");
        printf("6. Thoát\n");
        printf("hãy nhập lựa chọn của bạn : ");
        scanf("%d",&num);
        if(num<0 || num>6){
            printf("vui lòng lựa chọn lại");
        }else if(num==1){
            printf("hãy nhập độ dài của mảng : ");
            scanf("%d", &soLuong);
            for(int i = 0;i<soLuong;i++){
                printf("nhập phần tử a[%d] cho mảng :",i);
                scanf("%d",&a[i]);
            }
        }else if(num==2){
            for(int i=0;i<(soLuong+Add-del);i++){
                printf("%d\n",a[i]);
            }
        }else if(num==3){
            
            int addIndex,addNumber;
            printf("hãy nhập vị trí muốn thêm phần tử : ");
            scanf("%d",&addIndex);
            if(addIndex<=soLuong+Add){
                for(int i=(soLuong+Add);i>addIndex;i--){
                    a[i]=a[i-1];
                }
                printf("hãy nhập phần tử bạn muốn thêm : ");
                scanf("%d", &addNumber);
                a[addIndex]=addNumber;
                Add++;
            }else if(addIndex>soLuong+Add){
                while(addIndex>soLuong+Add){
                    printf("vui lòng nhập lại : ");
                    scanf("%d",&addIndex );
                    if(addIndex<=soLuong+Add){
                        for(int i=(soLuong=Add);i>addIndex;i--){
                            a[i]=a[i-1];
                        }
                        printf("hãy nhập phần tử bạn muốn thêm : ");
                        scanf("%d", &addNumber);
                        a[addIndex]=addNumber;
                        Add++;
                    }
                }
            }
            
        }else if (num==4){
            int repairIndex=2423,repairNumber;
            while(repairIndex>soLuong+Add){
                printf("hãy nhập vị trí muốn sửa : ");
                scanf("%d",&repairIndex);
                if(repairIndex>(soLuong+Add)){
                    printf("vui lòng nhập lại\n");
                }
                
            }
            printf("hãy nhập số muốn sửa vào đây : ");
            scanf("%d",&repairNumber);
            a[repairIndex]=repairNumber;
            
        }else if(num==5){
            del++;
            int dltIndex=423142, dltNumber;
            while(dltIndex>soLuong+Add){
                printf("hãy nhập vị trí muốn xóa : ");
                scanf("%d",&dltIndex+Add);
                if(dltIndex>soLuong+Add){
                    printf("vui lòng nhập lại\n");
                }
                for(int i=dltIndex;i<(soLuong+Add);i++){
                    a[i]=a[i+1];
                
                }
            }
        }
    }
}
