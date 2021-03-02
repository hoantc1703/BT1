#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"jrb.h"
#include"fields.h"
#include<conio.h>
#include"jval.h"

int main(){
	int i, n;
	char name[30];
	double diemtb;
	JRB list, node;
	
	list = make_jrb();
	jrb_insert_str(list, strdup("Hoan"), new_jval_d(7.8));
	jrb_insert_str(list, strdup("Phong"), new_jval_d(9.2));
	jrb_insert_str(list, strdup("Tuan"), new_jval_d(8.8));
	jrb_insert_str(list, strdup("Long"), new_jval_d(8.9));
	
	do{
		system("cls");
		printf("1. Add name\n 2.Tim ten\n 3. Tim ten vao xoa\n 4. Tim theo diem\n 5. Sap xep theo diem\n 6.In ra danh sach SV\n 0. Thoat\n");
		printf("Banchon\n");
		scanf("%d", &n);
		
	switch(n){
		case 1: 
			fflush(stdin);
			printf("Name:");
			gets(name);
			fflush(stdin);
			printf("Diemtb");
			scanf("%d", &diemtb);
			node = jrb_find_str(list, name);
			if(node != NULL){
				node->val = new_jval_d(diemtb);
			}else{
				jrb_insert_str(list, strdup(name), new_jval_d(diemtb));
			}
			break;
		case 2:
			fflush(stdin);
			printf("Name:");
			gets(name);
			node = jrb_find_str(list, name);
			if(node == NULL){
				printf("Khong tim thay ten %s \n", name);
			}else{
				printf("Diem trung binh cua %s la %d", name, jval_d(node->val));
			}
			getch();
			break;
		case 3: 
		case 4: 
			fflush(stdin);
			printf("Diem trung binh:");
			scanf("%d", &diemtb);
			node = jrb_find_str(list, name);
			if(node == NULL){
				printf("Khong tim thay diem %d\n", diemtb);
			}
			else{
				printf("Ten sinh vien co %d la %s", diemtb, jval_d(node->val));
			}
			getch();
			break;
		}
	}
		while(n!=6);
		return(0);
}

