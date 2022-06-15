#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
 	int atm,pin,ruttien,chuyenkhoan,chonso,stk,sodu;
 	char tieptuc;
 	printf ("Vui long dua the cua ban vao: ");
 	printf ("Nhap ma Pin the: ");
 	scanf ("%d", &pin);
 	if(pin==456){
 	do 
	{
	 	printf ("1. chon rut tien \n");
 		printf ("2. chon chuyen khoan \n");
 		printf ("3. chon xem so du \n");
 		printf ("4. chon ket thuc \n");
 		printf ("ban chon so may ? \n");
 		scanf ("%d",&chonso);
 		switch(chonso)
		{
	 		case 1 : 
	 			printf (" So tien ban muon rut ?");
	 			scanf ("%d", &ruttien);
	 			printf ("ban da rut tien %d \n", ruttien);
	 			break;
	 		case 2 :	
	 			printf ("Chon so tai khoan can chuyen: \n");
	 			scanf("%d",&stk);
	 			printf ("Chon so tien can chuyen:");
	 			scanf ("%d",&chuyenkhoan);
	 			printf ("ban da chuyen khoan %d",&chuyenkhoan);
	 			break;
	 		case 3 :
	 			printf ("So du cua ban la %d",sodu);
	 			break;	  
	 	}
	 	printf("ban muon tiep tuc khong: y/N ?");
	 	fflush(stdin);
	 	scanf("%c",&tieptuc);
	}while(tieptuc == 'y');
	}else printf("ban nhap sai");
}
