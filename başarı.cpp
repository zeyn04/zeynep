#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int i;
	int karar;
     	printf("HOSGELDINIZ\nSiparis vermek istiyorsaniz lutfen 1'i tuslayiniz\nSiparis vermek istemiyorsaniz lutfen 2'yi tuslayiniz\n");
	   scanf("%d",&karar);
	while(karar==1)
	   {
		printf("kahve siparis etmek istiyorsaniz lutfen 1'i tuslayiniz.\nCay siparis etmek istiyoraniz lutfen 2'yi tuslayiniz.");
	    scanf("%d",&karar);
	    if(karar==1)
   {
	   printf("kahve sparis ettiniz\n");
	   printf("kahve seceneklerimiz,istediginiz secenegi lutfen tuslayiniz\n1.mocha\n2.cappucino\n3.filtre kahve\n");
	  	scanf("%d",&karar);
		  switch(karar)
	    {
		   case 1:
	  	  printf("Mocha aldiniz.\nWhite chocolate mocha istiyorsaniz lutfen 1'i tuslayiniz\nChocolate mocha almak istiyorsaniz lutfen 2'yi tuslayiniz\n");
	  	  scanf("%d",&karar);
	  	   if(karar==1)
	  	   {
	  	   	printf("white chocolate mocha aldiniz\n");
	  	   }
		   if(karar==2)
		   {
		   printf("Chocolate mocha aldiniz\n");
	       }
	       break;
	  	  
			case 2:
	  	  printf("cappucino aldiniz.\n");
			break;	
	  	  
			case 3:
		  printf("filtre kahve aldinizz.\nSutlu filtre kahve istiyorsaniz 1'i tuslayiniz\nSade filtre kahve istiyorsaniz 2'yi tuslayiniz\n");
		  scanf("%d",&karar);
		   if(karar==1)
		   {
		   	printf("Sutlu filtre kahve aldiniz\n");
		   }
		   if(karar==2)
		   {
		   	printf("Sade filtre kahve aldiniz\n");
		   }
		  break;
	    }
	   
		 printf("tekrar siparis vermek istiyorsaniz lutfen 1'i tuslayiniz\nEger cikmak isterseniz 5'yi tuslayiniz.\n");
	       scanf("%d",&karar);
	        if(karar==5)
	        {
	        	break;
			}
		   else if(karar==1)
		   {
			continue;
		   }
		   else
		   printf("verdiginiz siparisler 15-30 dk icinde hazir olacaktir\nBizi tercih ettiginiz icin tesekkur eder iyi gunler dileriz\n");
	        break; 
    }
	    else 
	  {
	  	printf("cay siparis ettiniz\nCay seceneklerimiz\nlutfen istediginiz secenegi tuslayiniz\n1.papatya\n2.yesilcay\n3.kusburnu\n4.demlik cay\n");
	  	scanf("%d",&karar);
	  	switch(karar)
	  	{
	  	case 1:
		  printf("papatya aldiniz\n");	
	  	    break;	
	  	case 2:
	  	  printf("yesilcay aldiniz\n");
	  	    break;
		 case 3:
		  printf("kusburnu aldiniz\n"); 
		   break;  
		case 4:
		  printf("Demlik cay aldiniz\n"); 
		   break;
		}
	    printf("aroma istiyorsaniz lutfen 1'i tuslayiniz\nistemiyorsaniz 2'yi tuslayiniz\n");
	  	scanf("%d",&karar);
	  	 if(karar==1)
	  	 {
			 int i=0 ;
             int toplam=0,aroma=0;
             for(i=0;i<3;i++);
             {
             	printf("aroma seceneginizi giriniz.\n7=bal\n8=sut\n9=seker\n",i+1);
             	scanf("%d",&aroma);
				if(aroma==7)
             	printf("bal aromasini sectiniz\n");
             	else if(aroma==8)
             	printf("süt aromasini sectiniz\n");
             	else if(aroma==9)
             	printf("þeker aromasini sectiniz\n");
             	else
             	printf("aroma secmediniz\n");

			}
	}
		    else
		    {
		    printf("siparisleriniz 15-30 dakika icinde hazir olacaktir.\nBizi tercih ettiginiz icin tesekkur eder iyi günler dileriz\n");
			break;
		    }
	    }
	  
	printf("tekrar siparis vermek istiyorsaniz lütfen 1'i tuslayiniz\nEger cýkmak isterseniz 5'yi tuslayiniz.\n");
	scanf("%d",&karar);
	        if(karar==5)
	        {
	        	printf("siparisleriniz 15-30 dakika icinde hazir olacaktir.\nBizi tercih ettiginiz icin tesekkur eder iyi gunler dileriz\n");
				break;
			}
		   else if(karar==1)
		   {
			continue;
		   }
		   else
		   printf("Yanlis tuslama yaptiniz\n");
	          break;
		       
       }
   return 0;
}
