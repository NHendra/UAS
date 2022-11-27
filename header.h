#include <stdio.h> 
#include <conio.h>
  
typedef struct {
         char nama[50];
         int kelas;         
		 int penanganan;         
		 int lamainap;
		 int inap;
		 int layanan;
		 int persalinan;
		 int total;
}Pasien;   
	Pasien p[10]; 
		 int i,byk; 
		 int dokter=1000000;
		 int bidan=750000;
		 int ai=300000;
		 int al=100000;
		 int bi=200000;
		 int bl=70000;
		 int ci=100000;
		 int cl=50000;	  
	
	void inputdatapasien();
	void prosesdatapasien(); 
	void tampildatapasien();  
