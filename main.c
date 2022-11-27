#include "header.h"  
int main() {
	  printf("[==========================KLINIK BERSALIN===========================]\n");
	  printf("[DETAIL :                                                            ]\n");
	  printf("[BIAYA INAP          : BERDASARKAN KELAS * BIAYA PERHARI             ]\n");
	  printf("[BIAYA LAYANAN       : BERDASARKAN KELAS * BIAYA LAYANAN PERHARI     ]\n");
	  printf("[BIAYA PERSALINAN    : JIKA DOKTER = 1000000, JIKA BIDAN 750000      ]\n");
	  printf("[TOTAL BAYAR         : BIAYA INAP + BIAYA LAYANAN + BIAYA PERSALINAN ]\n");
	  printf("[BIAYA KAMAR PERHARI :                                               ]\n");
	  printf("[KELAS A INAP 300000 LAYANAN 100000                                  ]\n");
	  printf("[KELAS B INAP 200000 LAYANAN 70000                                   ]\n");
	  printf("[KELAS C INAP 100000 LAYANAN 50000                                   ]\n");
	  printf("[====================================================================]\n\n");
	       
	inputdatapasien();
	prosesdatapasien();  
	tampildatapasien();  
	return 0; 
} 
