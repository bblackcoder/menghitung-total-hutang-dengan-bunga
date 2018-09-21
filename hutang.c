#include<stdio.h>
//mutiara
main(){
	int totalhutang,hasil,bunga;//deklarasi tipe integer dengan variable totalhutang,hasil,dan bunga
	printf("masukkan hutang anda =\n");//menampilkan output di layar dengan format tertentu.
	scanf("%d",&totalhutang);//menerima input dari keyboard dg format tertentu.
	if(totalhutang<2000000){//jika hutang kurang dari 2000.000 maka bernilai true(benar)
		bunga=totalhutang*0.05;//menghitung variable bunga dengan menginput total hutangan kali 5% bunga
		hasil=totalhutang+bunga;//operator aritmatika mencari hasil total hutang + bunga
		printf("total bunga + bunga =%d \n",hasil);//megoutputkan hasil
	}
	else{
		bunga=totalhutang*0.1;
		hasil=totalhutang+bunga;
		printf("total bunga + bunga =%d \n",hasil);
	}92b81c0f72402f05ef5dfa2409c23c9cc0968833
}
