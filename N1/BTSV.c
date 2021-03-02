#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"libbt.a"
#include"btree.h"


int main(){
    int i, n, size;
    double diemtb;
    char name[30];
    BTA * list;
    btint();
    list = btopn("mylist",0,0);
    if(!list)
    {
        printf("Tao my list\n");
        list = btcrt("mylist",0,0);
        printf("Insert data\n");
        diemtb = 7.8;
        if(btins(list,"Hoan",(char*)&diemtb,sizeof(double)))
            printf("Loi , khong the them Hoan\n");
        diemtb = 6.6;
        if(btins(list,"Phong", (char*)&diemtb, sizeof(double)))
            printf("Loi, khong the them Phong\n");
        diemtb = 7.9;
        if(btins(list, "Long", (char*)&diemtb, sizeof(double)));
            printf("Loi, khong the them Long\n");
        diemtb = 8.2;
        if(btins(list, "Tuan", (char*)&diemtb, sizeof(double)))
            printf("Loi, khong the them Tuan\n");
    }
    do{
        printf("\n 1. Add diem\n 2.Tim diem\n 3.Tim diem va xoa\n 4.Tim theo ten\n 5.Sap xep theo diem\n 6.In danh sach\n 7. Thoat\n");
        scanf("%d\n",&n);
        while(getch()!= '\n');
        switch (n)
        {
        case 1: 
            printf("Name:");
            gets(name);
            printf("Diem trung binh:");
            scanf("%lf",&diemtb);
            while(getch()!= '\n');
            btins(list, name, (char*)&diemtb,sizeof(double));
            break;
        case 2:
            printf("Name :");
            gets(name);
            if(btsel(list, name, (char*)&diemtb, sizeof(double), &size)){
                printf("Khong tim thay diem cua %s \n", name);
            }else
            {
                printf("Diem trung binh cua %s la %lf\n", name, diemtb);
            }
            break;
        case 3 :
        case 4 :
            printf("Diem trung binh:");
            scanf("%lf", &diemtb);
            if(btsel(list, name, (char*)&name, sizeof(char), &size)){
                printf("Khong tim thay diem %lf\n", diemtb);
            }
            else
            {
                printf("Diem trung binh %lf cua %s\n", name, diemtb);
            }
            break;
        case 5 :
        case 6 :
        case 7 :
            btcls(list);
            break;
        }
    }while(n != 7);
    return 0;
}