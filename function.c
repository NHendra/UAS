#include "header.h" 
 
void inputdatapasien()  {
      printf("Masuk banyaknya pasien : ");scanf("%d",&byk);
	  printf("\n");     
	  for(i=0;i<byk;i++){   
	  	printf("Nama Pasien          : ");scanf("%s",p[i].nama);
		printf("1. Kelas A\n");
		printf("2. Kelas B\n");
		printf("3. Kelas C\n");   
	  	printf("Ruangan Kelas        : ");scanf("%d",&p[i].kelas);
		printf("1. Dokter\n");
		printf("2. Bidan\n");   
	  	printf("Penanganan           : ");scanf("%d",&p[i].penanganan);    
	  	printf("Lama Inap            : ");scanf("%d",&p[i].lamainap);   printf("==\n");     }          
	  	printf("\nData telah berhasil diinput\n");       
}
void prosesdatapasien(){ 
	for(i=0;i<byk;i++){
		if(p[i].kelas==1){
				if(p[i].penanganan==1){
					p[i].inap=ai*p[i].lamainap;
					p[i].layanan=al*p[i].lamainap;
					p[i].persalinan=dokter;
					p[i].total=p[i].inap+p[i].layanan+p[i].persalinan;
				}else if(p[i].penanganan==2){
					p[i].inap=ai*p[i].lamainap;
					p[i].layanan=al*p[i].lamainap;
					p[i].persalinan=bidan;
					p[i].total=p[i].inap+p[i].layanan+p[i].persalinan;
				}
			}else if(p[i].kelas==2){
				if(p[i].penanganan==1){
					p[i].inap=bi*p[i].lamainap;
					p[i].layanan=bl*p[i].lamainap;
					p[i].persalinan=dokter;
					p[i].total=p[i].inap+p[i].layanan+p[i].persalinan;
				}else if(p[i].penanganan==2){
					p[i].inap=bi*p[i].lamainap;
					p[i].layanan=bl*p[i].lamainap;
					p[i].persalinan=bidan;
					p[i].total=p[i].inap+p[i].layanan+p[i].persalinan;
				}
			}else if(p[i].kelas==3){
				if(p[i].penanganan==1){
					p[i].inap=ci*p[i].lamainap;
					p[i].layanan=cl*p[i].lamainap;
					p[i].persalinan=dokter;
					p[i].total=p[i].inap+p[i].layanan+p[i].persalinan;
				}else if(p[i].penanganan==2){
					p[i].inap=ci*p[i].lamainap;
					p[i].layanan=cl*p[i].lamainap;
					p[i].persalinan=bidan;
					p[i].total=p[i].inap+p[i].layanan+p[i].persalinan;
				}
			}
	}printf("\nData telah berhasil diproses\n");
}  
void tampildatapasien()  {   
		printf("\n------------Data Pasien--------------");  
		for(i=0;i<byk;i++)   {
			if(p[i].kelas==1){
				if(p[i].penanganan==1){
					printf("\nNama Pasien           : %s",p[i].nama);    
					printf("\nRuangan Kelas         : Kelas A");    
					printf("\nPenanganan            : Dokter");       
					printf("\nLama Inap             : %d",p[i].lamainap);
					printf("\nBiaya                 ");
					printf("\nBiaya Inap            : %d",p[i].inap);
					printf("\nBiaya Layanan         : %d",p[i].layanan);    
					printf("\nBiaya Persalina       : %d",p[i].persalinan);
					printf("\nBiaya Total           : %d",p[i].total);printf("\n");
				}else if(p[i].penanganan==2){
					printf("\nNama Pasien           : %s",p[i].nama);    
					printf("\nRuangan Kelas         : Kelas A");    
					printf("\nPenanganan            : Bidan");       
					printf("\nLama Inap             : %d",p[i].lamainap);
					printf("\nBiaya                 ");
					printf("\nBiaya Inap            : %d",p[i].inap);
					printf("\nBiaya Layanan         : %d",p[i].layanan);    
					printf("\nBiaya Persalina       : %d",p[i].persalinan);
					printf("\nBiaya Total           : %d",p[i].total);printf("\n");					   
				}
			}else if(p[i].kelas==2){
				if(p[i].penanganan==1){
					printf("\nNama Pasien           : %s",p[i].nama);    
					printf("\nRuangan Kelas         : Kelas B");    
					printf("\nPenanganan            : Dokter");       
					printf("\nLama Inap             : %d",p[i].lamainap);    
					printf("\nBiaya                 ");
					printf("\nBiaya Inap            : %d",p[i].inap);
					printf("\nBiaya Layanan         : %d",p[i].layanan);    
					printf("\nBiaya Persalina       : %d",p[i].persalinan);
					printf("\nBiaya Total           : %d",p[i].total);printf("\n");					
				}else if(p[i].penanganan==2){
					printf("\nNama Pasien           : %s",p[i].nama);    
					printf("\nRuangan Kelas         : Kelas B");    
					printf("\nPenanganan            : Bidan");       
					printf("\nLama Inap             : %d",p[i].lamainap); 
					printf("\nBiaya                 ");
					printf("\nBiaya Inap            : %d",p[i].inap);
					printf("\nBiaya Layanan         : %d",p[i].layanan);    
					printf("\nBiaya Persalina       : %d",p[i].persalinan);
					printf("\nBiaya Total           : %d",p[i].total);printf("\n");					
				}
			}else if(p[i].kelas==3){
				if(p[i].penanganan==1){
					printf("\nNama Pasien           : %s",p[i].nama);    
					printf("\nRuangan Kelas         : Kelas C");    
					printf("\nPenanganan            : Dokter");       
					printf("\nLama Inap             : %d",p[i].lamainap);   
					printf("\nBiaya                 ");
					printf("\nBiaya Inap            : %d",p[i].inap);
					printf("\nBiaya Layanan         : %d",p[i].layanan);    
					printf("\nBiaya Persalina       : %d",p[i].persalinan);
					printf("\nBiaya Total           : %d",p[i].total);printf("\n");					
				}else if(p[i].penanganan==2){
					printf("\nNama Pasien           : %s",p[i].nama);    
					printf("\nRuangan Kelas         : Kelas C");    
					printf("\nPenanganan            : Bidan");       
					printf("\nLama Inap             : %d",p[i].lamainap);   
					printf("\nBiaya                 ");
					printf("\nBiaya Inap            : %d",p[i].inap);
					printf("\nBiaya Layanan         : %d",p[i].layanan);    
					printf("\nBiaya Persalina       : %d",p[i].persalinan);
					printf("\nBiaya Total           : %d",p[i].total);printf("\n");					
				}
			}    
		}     
	} 
