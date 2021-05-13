#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>
#include<unistd.h>
#include<ctype.h>
#include<string>

using namespace std;
	
int period;
int cvv=0;

char q;
   
       
struct customerDetails
{
    char adnumber[10];
    char name[100];
    char address[100];
    char phonenumber[15];
    char nationality[15];	
    char email[50];
    char arrivaldate[15];
    char cardno[20];
}m,g,k;


int time()
{
	time_t currenttime;
	time(&currenttime);
	system("color 1");
	printf("\n\n\n\tCurrent Time and Date : %s",ctime(&currenttime));
	return 0;
}


int load()
{
    int r,q;
    
    printf("\n\n\n\n\n\n\n\t\t\t\t\tLOADING.\n\t\t\t\t\t");
    for(r=1;r<=20;r++)
	{
    	for(q=0;q<=100000000;q++);
        printf("%c",61);
    } 
    printf("\n");
    return 1;
}


int first()
{
	int time();
	
	printf("\n\t\t\tW E L C O M E\n");
	time();
	printf("\n\n\tCurrent Weather : Not Available!\n");
	printf("\n\n\t*This program is developed by students of class XI Sci.C.*\n");
	printf("\n\n\tPress any key on the keyboard to continue.\n");
	return 0;
}


void second()
{
	printf("\n\tOur service is free to use.\n");
	printf("\tYou can book hotel rooms in our partner hotels across India.\n");
	printf("\tOur service is not available in some states of India.We are sorry for the inconvinience.\n");
	printf("\tWe are trying to expand our service.\n\n");
	printf("\tPress any key on the keyboard to continue.\n");
}


int third()
{
	int n;
	
	printf("\tOur service is available in following states:");
	printf("\n\t 1.Maharashtra\n\t 2.Goa\n\t 3.Kerala");
	printf("\n\tEnter the coreesponding number of the state you want to check for.\n");
	scanf("%d",&n);
	cin.ignore();
	return(n);
}


int form_mh(int l )
{
	
	char f;
	int flag=0;
	char c,h;
	FILE *info;
   
    
    printf("\nEnter Your Name: ");
	gets(m.name);
	cin.ignore();
	
	printf("\nWe need to know about you.\nPlease provide correct information.\n");
	
	printf("\nEnter your contact number: ");
    gets(m.phonenumber);
	cin.ignore();
	
    printf("\nEnter your postal address: ");
    gets(k.address);
    cin.ignore();
    
    printf("\nEnter your nationality: ");
    gets(m.nationality);
    cin.ignore();
    
    printf("\nEnter your email address: ");
    gets(m.email);
    cin.ignore();
    
    printf("\nEnter your Aadhar number: ");
    gets(m.adnumber);
    cin.ignore();
    
    printf("\nEnter your arrival date(DD/MM/YYYY): ");
    gets(k.arrivaldate);
    cin.ignore();
    printf("\nEnter number of days:");
    scanf("%d",&period);
    
    
x:  printf("Enter your payment method.If cash,press 'y' and press 'n' for payment using card.");
    f=tolower(getch());
    switch(f)
    {
    	case 'y':printf("You selected cash method.\nFor %d days, you will have to pay RS.%d ",period,(period * l));
    	         break;
    	         
        case 'n':printf("You selected card method.\nFor %d days, you will have to pay RS.%d ",period,(period * l));
		         printf("\nEnter the card number\n");
                 gets(m.cardno);
                 cin.ignore();
                 printf("Enter CVV Number\n");
                 scanf("%d",&cvv);
                 cin.ignore();
				 break;
				 
        default:printf("\n\n%c Invalid Choice.\n",7);
                goto x;
	}
	
    info=fopen("record.txt","a+");	
    fprintf(info,"\nState:Maharashtra\nName: %s\nContact number: %s\nAddress: %s\nNationality: %s\nEmail: %s",m.name,m.phonenumber,m.address,m.nationality,m.email);
	fprintf(info,"\nAdhar number: %s\nArrival date: %s\nPeriod('x'days): %d\nCard Details:\n\tCard Number:%s\n\tCVV:%d\n",m.adnumber,m.arrivaldate,period,m.cardno,cvv);
	fprintf(info,"Total Bill Amount:Rs. %d /-\n\n\n",period*l);
    fclose(info);
    
    printf("Wait while we process your request.");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".\n");
    sleep(3);
    system("cls");
    printf("Your Booking is done successfully from %s for %d days.\nPress C to exit,B to view older records.\n",m.arrivaldate,period);
    c=toupper(getch());
    if(c=='C')
    {
    	return 0;
	}
	else if(c=='B')
	{
		system("cls");
		sleep(2);
	    {
            info=fopen("record.txt","r");
            do
	        {
                putchar(h=getc(info));
            }while(h!=EOF);
	    }
        fclose(info);
        sleep(2);
        printf("Press any key to continue...");
        getch();
        system("cls");
        printf("\nPress E to exit,R to return to menu.");
        q=tolower(getch());
        switch(q)
        {
        	case 'e':printf("\nIt was nice working with you.Do use our service again!");
        	         sleep(2);
        	         return 0;
        	         
        	default:printf("Invalid Input.Program is terminating...");
			        return 0; 
		}
        
	}
	else
	{
	    printf("INVALID CHOICE.PROGRAM WILL TERMINATE AFTER 5 SECONDS");
	    system("cls");
	    sleep(1);
	    printf("%c",7);
	    printf("\n5");
	    system("cls");
	    sleep(1);
	    printf("\n4");
	    system("cls");
	    printf("%c",7);
	    sleep(1);
	    printf("\n3");
	    system("cls");
	    sleep(1);
	    printf("\n2");
	    system("cls");
	    printf("%c",7);
	    sleep(1);
	    printf("\n1");
	    system("cls");
	    sleep(1);
	    printf("\n0");
	    system("cls");
	    return 0;
	}	
	return 0;
}


//to take details from the user
int form_ga(int l)
{
	char f;
	int flag=0;
	char c,h;
	FILE *info;
   
    
    printf("\nEnter Your Name: ");
	gets(g.name);
	cin.ignore();
	
	printf("\nWe need to know about you.\nPlease provide correct information.\n");
	
	printf("\nEnter your contact number: ");
	gets(g.phonenumber);
	cin.ignore();
	
    printf("\nEnter your postal address: ");
    gets(g.address); 
    cin.ignore();
    
    printf("\nEnter your nationality: ");
    gets(g.nationality);
    cin.ignore();
    
    printf("\nEnter your email address: ");
    gets(g.email);
    cin.ignore();
    
    printf("\nEnter your Aadhar number: ");
    gets(g.adnumber);
    cin.ignore();
    
    printf("\nEnter your arrival date(DD/MM/YYYY): ");
    gets(g.arrivaldate);
    cin.ignore();
    
    printf("\nEnter number of days:");
    scanf("%d",&period);
    
    
x:  printf("Enter your payment method.If cash,press 'y' and press 'n' for payment using card.");
    f=tolower(getch());
    switch(f)
    {
    	case 'y':printf("You selected cash method.\nFor %d days, you will have to pay RS.%d ",period,(period * l));
    	         break;
    	         
        case 'n':printf("You selected card method.\nFor %d days, you will have to pay RS.%d ",period,(period * l));
		         printf("\nEnter the card number\n");
                 gets(m.cardno);
                 cin.ignore();
                 printf("Enter CVV Number\n");
                 scanf("%d",&cvv);
                 cin.ignore();
				 break;
				 
        default:printf("\n\n%c Invalid Choice.\n",7);
                goto x;
	}
	
    info=fopen("record.txt","a+");	
    fprintf(info,"\nState:Goa\nName: %s\nContact number: %s\nAddress: %s\nNationality: %s\nEmail: %s",m.name,m.phonenumber,m.address,m.nationality,m.email);
	fprintf(info,"\nAdhar number: %s\nArrival date: %s\nPeriod('x'days): %d\nCard Details:\n\tCard Number:%s\n\tCVV:%d\n",m.adnumber,m.arrivaldate,period,m.cardno,cvv);
    fprintf(info,"Total Bill Amount:Rs. %d /-\n\n\n",period*l);
    fclose(info);
    
    printf("Wait while we process your request.");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".\n");
    sleep(3);
    system("cls");
    printf("%c",7);
    printf("Your Booking is done successfully from %s for %d days.\nPress C to exit,B to view older records.\n",g.arrivaldate,period);
    c=toupper(getch());
    if(c=='C')
    {
    	flag=0;
	}
	else if(c=='B')
	{
		flag=1;
		system("cls");
		sleep(2);
	    {
            info=fopen("record.txt","r");
            do
	        {
                putchar(h=getc(info));
            }while(h!=EOF);
	    }
        fclose(info);
        sleep(2);
        printf("Press any key to continue...");
        getch();
        system("cls");
        printf("\nPress E to exit.");
        q=tolower(getch());
        switch(q)
        {
        	case 'e':printf("\nIt was nice working with you.Do use our service again!");
        	         sleep(2);
        	         return 0;
        	         
        	default:printf("Invalid Input.Program is terminating...");
			        return 0;  	         
		}
	}
	else
	{
		flag=0;
	    printf("INVALID CHOICE.PROGRAM WILL TERMINATE AFTER 5 SECONDS");
	    system("cls");
	    sleep(1);
	    printf("%c",7);
	    printf("\n5");
	    system("cls");
	    sleep(1);
	    printf("\n4");
	    system("cls");
	    printf("%c",7);
	    sleep(1);
	    printf("\n3");
	    system("cls");
	    sleep(1);
	    printf("\n2");
	    system("cls");
	    printf("%c",7);
	    sleep(1);
	    printf("\n1");
	    system("cls");
	    sleep(1);
	    printf("\n0");
	    system("cls");
	}
    return 0;	
}


//to take details from the user
int form_kl(int l)
{
	char f;
	int flag=0;
	char c,h;
	FILE *info;
   
    
    printf("\nEnter Your Name: ");
	gets(k.name);
	cin.ignore();
	
	printf("\nWe need to know about you.\nPlease provide correct information.\n");
	
	printf("\nEnter your contact number: ");
	gets(k.phonenumber);
	cin.ignore();
	
    printf("\nEnter your postal address: ");
    gets(k.address);
    cin.ignore();
    
    printf("\nEnter your nationality: ");
    gets(k.nationality);
    cin.ignore();
    
    printf("\nEnter your email address: ");
    gets(k.email);
    cin.ignore();
    
    printf("\nEnter your Aadhar number: ");
    gets(k.adnumber);
    cin.ignore();
    
    printf("\nEnter your arrival date(DD/MM/YYYY): ");
    gets(k.arrivaldate);
    cin.ignore();
    
    printf("\nEnter number of days:");
    scanf("%d",&period);
    
    
x:  printf("Enter your payment method.If cash,press 'y' and press 'n' for payment using card.");
    f=tolower(getch());
    switch(f)
    {
    	case 'y':printf("You selected cash method.\nFor %d days, you will have to pay RS.%d ",period,(period * l));
    	         break;
    	         
        case 'n':printf("You selected card method.\nFor %d days, you will have to pay RS.%d ",period,(period * l));
		         printf("\nEnter the card number\n");
                 scanf("%s",&k.cardno);
                 printf("Enter CVV Number\n");
                 scanf("%d",&cvv);
				 break;
				 
        default:printf("\n\n%c Invalid Choice.\n",7);
                goto x;
	}
	
    info=fopen("record.txt","a+");	
    fprintf(info,"\nState:Kerala\nName: %s\nContact number: %s\nAddress: %s\nNationality: %s\nEmail: %s",m.name,m.phonenumber,m.address,m.nationality,m.email);
	fprintf(info,"\nAdhar number: %s\nArrival date: %s\nPeriod('x'days): %d\nCard Details:\n\tCard Number:%s\n\tCVV:%d\n",m.adnumber,m.arrivaldate,period,m.cardno,cvv);
	fprintf(info,"Total Bill Amount:Rs. %d /-\n\n\n",period*l);
    fclose(info);
    
    printf("Wait while we process your request.");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".\n");
    sleep(3);
    system("cls");
    printf("%c",7);
    printf("Your Booking is done successfully from %s for %d days.\nPress C to exit,B to view older records.\n",k.arrivaldate,period);
    c=toupper(getch());
    if(c=='C')
    {
    	flag=0;
	}
	else if(c=='B')
	{
		flag=1;
		system("cls");
		sleep(2);
	    {
            info=fopen("record.txt","r");
            do
	        {
                putchar(h=getc(info));
            }while(h!=EOF);
	    }
        fclose(info);
        sleep(2);
        printf("Press any key to continue...");
        getch();
        system("cls");
        printf("\nPress E to exit.");
        q=tolower(getch());
        switch(q)
        {
        	case 'e':printf("\nIt was nice working with you.Do use our service again!");
        	         sleep(2);
        	         return 0;
        	default:printf("Invalid Input.Program is terminating...");
			        return 0;  	         
		}
	}
	else
	{
		flag=0;
	    printf("INVALID CHOICE.PROGRAM WILL TERMINATE AFTER 5 SECONDS");
	    system("cls");
	    sleep(1);
	    printf("%c",7);
	    printf("\n5");
	    system("cls");
	    sleep(1);
	    printf("\n4");
	    system("cls");
	    printf("%c",7);
	    sleep(1);
	    printf("\n3");
	    system("cls");
	    sleep(1);
	    printf("\n2");
	    system("cls");
	    printf("%c",7);
	    sleep(1);
	    printf("\n1");
	    system("cls");
	    sleep(1);
	    printf("\n0");
	    system("cls");
	}
    return 0;	
}


int mh()
{
	void mumbai();
	void nagpur();
	void lonavla();
	void ahmednagar();
	void aurangabad();
	void kolhapur();
	void mahabaleshwar();
	void pune();
	
	char ch;
	
	printf("\nOur service is available in the following places:\n");
j:  printf("1)Mumbai\n2)Pune\n3)Mahabaleshwar\n4)Lonavla\n");
	printf("5)Aurangabad\n6)Ahmednagar\n7)Kolhapur\n8)Nagpur\n");
	scanf("%c",&ch);
	cin.ignore();
	switch(ch)
    {
    	     case '1' :mumbai();
		               break;
		               
    	     case '2' :pune();
		               break;
		               
    	     case '3' :mahabaleshwar(); 
		               break;
		               
    	     case '4':lonavla(); 
		               break;
		               
    	     case '5' :aurangabad();
		               break;
		               
    	     case '6' :ahmednagar();
		               break;
		               
             case '7' :kolhapur();
		               break;
		               
    	     case '8' :nagpur();
		               break;
		               
		     default : printf("%c",7);
                       printf("Invalid Input.\n");
                       sleep(2);
                       printf("Select place again.\n");
                       goto j;
   	}
   
}


//to take details from the user
int ga()
{
	void Ponda();
	void panaji();
	void Mapusa();
	void Benaulim();
	void Margao();
	void Vasco();
	void Vagator();
	void Calangute();
	
	int ch;
	
	printf("\nOur service is available in the following places:\n");
j:	printf("1)Panajim\n2)Ponda\n3)Mapusa\n4)Vasco\n");
	printf("5)Margao\n6)Vagator\n7)Calangute\n8)Benaulim\n");
	scanf("%d",&ch);
    if((ch<=8) && (ch>=1))
	{
         switch(ch)
        {
             	case 1 :panaji();
		                break;
		                
             	case 2 :Ponda();
		                break;
		                
               	case 3 :Mapusa(); 
	         	        break;
	         	        
             	case 4 :Vasco(); 
		                break;
		                
             	case 5 :Margao();
	        	        break;
	        	        
             	case 6 :Vagator();
	         	        break;
	         	        
              	case 7 :Calangute();
	        	        break;
	        	        
             	case 8 :Benaulim();
	        	        break;
        }
    }
	else
	{
	printf("%c",7);
    printf("Invalid Input.\n");
    sleep(2);
    printf("Select place again.\n");
    goto j;
    }
}


int kl()
{
    void munnar();
    void kochi();
    void thiruvananthpuram();
	void kumarakon();   
	void kovalam(); 
	void alappuza();
	
	int ch;
	
	printf("\nOur service is available in the following places:\n");
j:	printf("1)Munnar\n2)Kochi\n3)Thiruvanantpuram\n4)Kumarakon\n");
	printf("5)Kovalam\n6)Alappuza\n");
	scanf("%d",&ch);
	if((ch<=6) && (ch>=1))
	{
          switch(ch)
          {
    	         case 1 :munnar();
		                 break;
		                 
                 case 2 :kochi();
		                 break;
		                 
                 case 3 :thiruvananthpuram(); 
	 	                 break;
	 	                 
                 case 4 :kumarakon(); 
		                 break;
		                 
    	         case 5 :kovalam();
		                 break;
		                 
                 case 6 :alappuza();
		                 break;
          }
    }
    else
    {
    printf("%c",7);
    printf("Invalid Input.\n");
    sleep(2);
    printf("Select place again.\n");
    goto j;
    }
}


void mumbai()
{
	int a,b,c,d;
	
	a=7920;
	b=1427;
	c=9200;
	
	sleep(3);
	system("cls");
	printf("\n\t\t*PPN: Price Per Night\n\nThe available Hotles are:\n");
	printf("\n1. Trident Bandra Kurla\nRating:8.9[VERY GOOD]\n*Free Wi-Fi\n*GYM\n*Independent Parking\n*Both A/C & non-A/C rooms available\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\n2. JW Mariott Mumbai\nRating:9.0[EXCELLENTT]\n*Swimming Pool\n*Libarary*Parking\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
    printf("\nPPN: Rs.%d\n",b);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\n3. Hotel Taj Mahal Palace\nRating:9.2[EXCELLENTT]\n*Parking\n*Playground\n*Plush Location\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",c);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	
    printf("\n\n\nSelect a Hotel\n");
y:  scanf("%d",&d);
    cin.ignore();
    switch(d)
    {
      	case 1:printf("\nYou have selected The Trident Bandra Kurla.\n");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(a);
		       break;
      	case 2:printf("You have selected The JW Mariott Mumbai.");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(b);
		       break;
     	case 3:printf("You have selected The Hotel Taj Mahal Palace.");
     	       printf("Kindly provide folloeing details.\n");
    		   form_mh(c);
		       break;
        default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	            goto y;
	}
}


void pune()
{
	int a,b,d;
	
	a=1080;
	b=4118;
	
	system("cls");
	printf("\n\t\t*PPN: Price Per Night\n\nThe available Hotles are:\n");
	printf("\n1. Royal Orchid Centre\nRating:8.3[VERY GOOD]\n*Free Wi-Fi\n*GYM\n*Independent Parking\n*Both A/C & non-A/C rooms available\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
    printf("\nPPN: Rs.%d\n",a);
    printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\n2. Aroura Towers\nRating:7.6[FAIR]\n*Parking\n*Playground\n*Plush Location\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
    printf("\nPPN: Rs.%d\n",b);
    printf("___________________________________________________________________________________________________________________________________________________________________________");
    
	printf("\n\n\nSelect a Hotel\n");
y:  scanf("%d",&d);
    cin.ignore();
    switch(d)
    {
      	case 1:printf("\nYou have selected The Royal Orchid Centre.\n");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(a);
		       break;
      	case 2:printf("You have selected The Aurora Towers.");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(b);
		       break;
        default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	            goto y;
	}
}


void mahabaleshwar()
{
	int a,b,d;
	
	a=1179;
	b=8702;
	
	system("cls");
	printf("\n\t\t*PPN: Price Per Night\n\nThe available Hotles are:\n");
	printf("\n1. Treebo Hillway Inn\nRating:9.4[EXCELLENTT]\n*Parking\n*Playground\n*Plush Location\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
    printf("\nPPN: Rs.%d\n",a);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\n2. Saj Resort\nRating:8.2[VERY GOOD]\n*Free Wi-Fi\n*GYM\n*Independent Parking\n*Both A/C & non-A/C rooms available\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
    printf("\nPPN: Rs.%d\n",b);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
    
	printf("\n\n\nSelect a Hotel\n");
y:  scanf("%d",&d);
    cin.ignore();
    switch(d)
    {
      	case 1:printf("\nYou have selected The Treebo Hillway Inn.\n");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(a);
		       break;
      	case 2:printf("You have selected The Saj Resort.");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(b);
		       break;
        default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	            goto y;
	}
}


void lonavla()
{
	int a,b,d;
	
	a=1399;
	b=1426;
	
	system("cls");
	printf("\n\t\t*PPN: Price Per Night\n\nThe available Hotles are:\n");
	printf("\n1. Citrus Hotel Lonavla\nRating:7.8[FAIR]\n*Free Wi-Fi\n*GYM\n*Independent Parking\n*Both A/C & non-A/C rooms available\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
    printf("\nPPN: Rs.%d\n",a);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\n2. Olive Villa\nRating:8.3[VERY GOOD]\n*Parking\n*Playground\n*Plush Location\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
    printf("\nPPN: Rs.%d\n",b);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
 
    printf("\n\n\nSelect a Hotel\n");
y:  scanf("%d",&d);
    cin.ignore();
    switch(d)
    {
      	case 1:printf("\nYou have selected The Citrus Hotel Lonavla.\n");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(a);
		       break;
      	case 2:printf("You have selected The Olive Villa.");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(b);
		       break;
        default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	            goto y;
	}
}


void aurangabad()
{
	int a,b,d;
	
	a=1861;
	b=577;
	
	system("cls");
    printf("\n\t\t*PPN: Price Per Night\n\nThe available Hotles are:\n");
	printf("\n1. Hotel Treebo Sonia\nRating:9.2[EXCELLENTT]\n*Parking\n*Playground\n*Plush Location\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\n2. Hotel Preetam\nRating:7.4[FAIR]\n*Free Wi-Fi\n*GYM\n*Independent Parking\n*Both A/C & non-A/C rooms available\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
    printf("\nPPN: Rs.%d\n",b);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
   
    printf("\n\n\nSelect a Hotel\n");
y:  scanf("%d",&d);
    cin.ignore();
    switch(d)
    {
      	case 1:printf("\nYou have selected The Hotel Treebo Sonia.\n");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(a);
		       break;
      	case 2:printf("You have selected The Hotel Preetam.");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(b);
		       break;
        default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	            goto y;
	}
}


void ahmednagar()
{
	int a,b,d;
	
	a=1861;
	b=577;
	
	system("cls");
    printf("\n\t\t*PPN: Price Per Night\n\nThe available Hotles are:\n");
	printf("\n1. Hotel Treebo Sonia\nRating:9.2[EXCELLENTT]\n*Free Wi-Fi\n*GYM\n*Independent Parking\n*Both A/C & non-A/C rooms available\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\n2. Hotel Preetam\nRating:7.4[FAIR]\n*Free Wi-Fi\n*GYM\n*Independent Parking\n*Both A/C & non-A/C rooms available\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
    printf("\nPPN: Rs.%d\n",b);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
    
    printf("\n\n\nSelect a Hotel\n");
y:  scanf("%d",&d);
    cin.ignore();
    switch(d)
    {
      	case 1:printf("\nYou have selected The Hotel Treebo Sonia.\n");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(a);
		       break;
      	case 2:printf("You have selected The Hotel Preetam.");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(b);
		       break;
        default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	            goto y;
	}
}


void kolhapur()
{
    int a,b,d;
    
    a=2506;
    b=956;
    
    system("cls");
	printf("\n\t\t*PPN: Price Per Night\n\nThe available Hotles are:\n");
	printf("n1. 3 Leaves\nRating:8.6[EXCELLENTT]\n*Free Wi-Fi\n*GYM\n*Independent Parking\n*Both A/C & non-A/C rooms available\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\n2. Vishwa\nRating:8.1[VERY GOOD]\n*Parking\n*Playground\n*Plush Location\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",b);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
   
    printf("\n\n\nSelect a Hotel\n");
y:  scanf("%d",&d);
    cin.ignore();
    switch(d)
    {
      	case 1:printf("\nYou have selected Hotel 3 Leaves.\n");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(a);
		       break;
      	case 2:printf("You have selected Hotel Vishwa.");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(b);
		       break;
        default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	            goto y;
	}
}


void nagpur()
{
	int a,b,d;
	
	a=1489;
	b=2336;
	
	system("cls");
	printf("\n\t\t*PPN: Price Per Night\n\nThe available Hotles are:\n");
	printf("\n1. Ivory House\nRating:9.6[EXCELLENTT]\n*Parking\n*Playground\n*Plush Location\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\n2. Centre Point\nRating:8.1[VERY GOOD]\n*Parking\n*Playground\n*Plush Location\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",b);
	printf("___________________________________________________________________________________________________________________________________________________________________________");
  
    printf("\n\n\nSelect a Hotel\n");
y:  scanf("%d",&d);
    cin.ignore();
    switch(d)
    {
      	case 1:printf("\nYou have selected Hotel Ivory House.\n");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(a);
		       break;
      	case 2:printf("You have selected Hotel Centre Point.");
      	       printf("Kindly provide folloeing details.\n");
               form_mh(b);
		       break;
        default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	            goto y;
	}
}


void panaji()
{
	int a,b,c;
	
	a=16630;
	b=4356;
	c=7990;
	
	system("cls");
	printf("You have chosen Panaji\n");
	sleep(1);
	printf("\nThe Hotels available in Panaji are:\n\n");
	sleep(1);
	printf("1.Hotel Park Hyatt Goa Resort & Spa\nRating:8.8[Excellent]\n");
	printf("\nSwimming pool\nSpa and wellness centre\nAirport shuttle\nFree parking\nRoom service\nFitness centre\nBar\nBeachfront");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n2.Treehouse Neptune Malaca Road panjim\nRating:8.0[Very Good]\n");
	printf("\nElectronic security key card system\nMassage\nDaily Housekeeping\nDaily newspaper\nSpa\nCCTV\nCafeteria\nLaundry service");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",b);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n3.DoubleTree by Hilton Goa Panaji\nRating:8.7[Excellent]\n");
	printf("\nFree Wi-fi\nGym\nDaily Housekeeping\nBoth AC & Non-AC Rooms Available");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",c);
	printf("_____________________________________________________________________________________________________________________________________________________");
}


void Ponda()
{
	int a,b,c;
	a=2300;
	b=1800;
	c=3050;
	system("cls");
	printf("You have chosen Ponda\n");
	sleep(1);
	printf("\nThe Hotels available in Ponda are:\n\n");
	sleep(1);
	printf("1.Hotel Menino Classic\nRating:7.8[Good]\n");
	printf("\nSpa and wellness centre\nFree parking\nRoom service\nFitness centre\nBar");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n2.Hotel SunGrace\nRating:7.0[Good]\n");
	printf("\nElectronic security key card system\nMassage\nDaily Housekeeping\nDaily newspaper");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",b);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n3.Hotel Menino Executive\nRating:9.1[Excellent]\n");
	printf("\nFree Wi-fi\nGym\nDaily Housekeeping\nBoth AC & Non-AC Rooms Available\nBanquet Hall");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",c);
	printf("_____________________________________________________________________________________________________________________________________________________");
}


void Margao()
{
	int a,b,c;
	a=12130;
	b=4356;
	c=1400;
	system("cls");
	printf("You have chosen Margao\n");
	sleep(1);
	printf("\nThe Hotels available in Margao are:\n\n");
	sleep(1);
	printf("1.Planet Hollywood Goa Beach Resort\nRating:8.5[Excellent]\n");
	printf("\nSwimming pool\nSpa and wellness centre\nAirport shuttle\nFree parking\nRoom service\nFitness centre\nBar");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n2.Hotel Nanutel\nRating:8.2[Very Good]\n");
	printf("\n24 Hour Reception Service\nElectronic security key card system\nMassage\nDaily Housekeeping\nDaily newspaper\nSpa\nCCTV\nCafeteria\nLaundry service");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",b);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n3.Treebo Trip XEC Residency\nRating:9.0[Excellent]\n");
	printf("\nFree Wi-fi\nGym\nDaily Housekeeping\nBoth AC & Non-AC Rooms Available\nCar Parking");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",c);
	printf("_____________________________________________________________________________________________________________________________________________________");
}


void Mapusa()
{
	int a,b,c;
	a=3500;
	b=900;
	c=2250;
	system("cls");
	printf("You have chosen Mapusa\n");
	sleep(1);
	printf("\nThe Hotels available in Mapusa are:\n\n");
	sleep(1);
	printf("1.Treebo Trend Green Park\nRating:8.4[Very Good]\n");
	printf("\nSwimming pool\nSpa and wellness centre\nAirport shuttle\nFree parking\nRoom service\nFitness centre\nBar\n24-hour reception service");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n2.Hotel Sai Swastik\nRating:7.2[Good]\n");
	printf("\nDaily Housekeeping\nDaily newspaper\nSpa\nCCTV\nCafeteria\nLaundry service\n\nBar\nCar Parking\n");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",b);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n3.Boshan Hotel\nRating:8.1[Excellent]\n");
	printf("\nFree Wi-fi\nGym\nDaily Housekeeping\nBoth AC & Non-AC Rooms Available\nCar Parking\nGeyser");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",c);
	printf("_____________________________________________________________________________________________________________________________________________________");
}


void Vasco()
{
	int a,b,c;
	a=2600;
	b=4350;
	c=1590;
	system("cls");
	printf("You have chosen Vasco Da Gama\n");
	sleep(1);
	printf("\nThe Hotels available in Vasco Da Gama are:\n\n");
	sleep(1);
	printf("1.The Flora Grand\nRating:8.2[Very Good]\n");
	printf("\nSwimming pool\nAirport shuttle\nFree parking\nRoom service\nFitness centre\nBar");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n2.The HQ\nRating:8.0[Very Good]\n");
	printf("\nElectronic security key card system\nMassage\nDaily Housekeeping\nDaily newspaper\nSpa\nCCTV\nCafeteria\nLaundry service");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",b);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n3.Beach Bay Cottages\nRating:8.1[Very Good]\n");
	printf("\nFree Wi-fi\nGym\nDaily Housekeeping\nBoth AC & Non-AC Rooms Available\nFree Parking\nFree Breakfast");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",c);
	printf("_____________________________________________________________________________________________________________________________________________________");
}


void Calangute()
{
	int a,b,c;
	a=2500;
	b=6200;
	c=4725;
	system("cls");
	printf("You have chosen Calangute\n");
	sleep(1);
	printf("\nThe Hotels available in Calangute are:\n\n");
	sleep(1);
	printf("1.Sun City Resort\nRating:8.0[Very Good]\n");
	printf("\nSwimming pool\nSpa and wellness centre\nAirport shuttle\nFree parking\nRoom service\nFitness centre\nBar");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n2.Fab Hotel Prime Salare Crown Calangute\nRating:9.0[Excellent]\n");
	printf("\nElectronic security key card system\nMassage\nDaily Housekeeping\nDaily newspaper\nSpa\nCCTV\nCafeteria\nLaundry service");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",b);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n3.Fab Hotel Prime Casa Kiara Calangute\nRating:8.8[Excellent]\n");
	printf("\nFree Wi-fi\nGym\nDaily Housekeeping\nAirport Shuttle\nSwimming Pool\nSpa\nBoth AC & Non-AC Rooms Available");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",c);
	printf("_____________________________________________________________________________________________________________________________________________________");
}


void Benaulim()
{
	int a,b,c;
	
	a=10680;
	b=6590;
	c=18590;
	
	system("cls");
	printf("You have chosen Benaulim\n");
	sleep(1);
	printf("\nThe Hotels available in Benaulim are:\n\n");
	sleep(1);
	printf("1.Azaya Beach Resort\nRating:7.8[Very Good]\n");
	printf("\nSwimming pool\nSpa and wellness centre\nAirport shuttle\nFree parking\nRoom service\nFitness centre\nBar\nBeachfront");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n2.Radisson Blue Resort Benaulim\nRating:8.2[Very Good]\n");
	printf("\nBeach\nElectronic security key card system\nMassage\nDaily Housekeeping\nDaily newspaper\nSpa\nCCTV\nRestaurant\nLaundry service");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",b);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n3.Hotel Taj Exotica Goa\nRating:9.7[Excellent]\n");
	printf("\nBeach\nElectronic security key card system\nMassage\nDaily Housekeeping\nDaily newspaper\nSpa\nCCTV\nRestaurant");
	printf("\nLaundry service\nFree Wi-fi\nGym\nDaily Housekeeping\nBoth AC & Non-AC Rooms Available");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",c);
	printf("_____________________________________________________________________________________________________________________________________________________");
}


void Vagator()
{
	int a,b,c;
	
	a=2570;
	b=15732;
	c=6387;
	
	system("cls");
	printf("You have chosen Vagator\n");
	sleep(1);
	printf("\nThe Hotels available in Vagator are:\n\n");
	sleep(1);
	printf("1.Pappi Chulo\nRating:8.6[Excellent]\nSwimming pool\nSpa and wellness centre\nAirport shuttle\nFree parking\nRoom service\nFitness centre\nBar\n");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",a);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n2.Resort W Goa\nRating:9.0[Excellent]\n");
	printf("\nBeach\nElectronic security key card system\nMassage\nDaily Housekeeping\nDaily newspaper\nSpa\nCCTV\nRestaurant\nLaundry service");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",b);
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\n3.Bell Bottoms Resort\nRating:8.7[Excellent]\nRestaurant\nBeach\nFree Wi-fi\nGym\nDaily Housekeeping\nBoth AC & Non-AC Rooms Available\n");
	printf("_____________________________________________________________________________________________________________________________________________________");
	printf("\nPPN: Rs.%d\n",c);
	printf("_____________________________________________________________________________________________________________________________________________________");
}



void munnar()
{
	int a,b,c,d;
	
	a=1326;
	b=1258;
	c=1258;
	
	printf("\n\nPlaces to visit in Munnar are\n");
y:	printf("@ Eravikulam National Park\n @ Mattupetty Dam\n  @ Anamudi\n   @ Tea Museum\n    @ Pothamedu View Point\n");

    printf("\n\t\t*PPN: Price Per Night\n");
	printf("\nThe hotels available are:\n");
	printf("\n1. Munnar Inn\nRating:7.4\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",a);
	printf("___________________________________________________________________________________________________");
	printf("\n2. OYO 24816 Munnar Days\nRating:8.5[excellent]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",b);
	printf("___________________________________________________________________________________________________");
	printf("\nOYO 24816 Munnar Days\nRating:8.5[excellent]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",c);
	printf("___________________________________________________________________________________________________");
	
	printf("\n\n\nSelect a hotel\n\n");
	scanf("%d",&d);
	switch(d)
	{
		case 1: printf("You have selected Munnar Inn .\n");
		        printf("Kindly provide the following details\n");
		          form_kl(a);
		        break;
		case 2: printf("You have selected OYO 24816 Munnar Days.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(b);
		        break;
		case 3: printf("You have selected OYO13133 Le grand.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(c);
				break;        
		default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	             goto y;
	}
}


void kochi()
{
    int a,b,c,d;
	
	a=867;
	b=958;
	c=2564;
	
	printf("\n\nPlaces to visit in Kochi are\n\n\n");
y:	printf("@ FORT KOCHI\n @ MATTANCHERRY PALACE\n  @ St. FRANCIS CSI CHURCH\n   @ PARADESI SYNAGOGUE\n    @ HILL PALACE MUSEUM\n");
	
	printf("\n\t\t*PPN: Price Per Night\n");
	printf("\nThe Hotels available are:\n");
	printf("\n1. OYO 5202 Hotel Pearl Malabar\nRating:8.8[excellent]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",a);
	printf("___________________________________________________________________________________________________");
    printf("\n2. A V Residency\nRating:7.7[good]\n");
    printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",b);
	printf("___________________________________________________________________________________________________");
	printf("\n3. The Olive Cochin\nRating:8.1[very good]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",c);
	printf("___________________________________________________________________________________________________");
   
    printf("\n\n\nSelect a hotel\n\n");
	scanf("%d",&d);
	switch(d)
	{
		case 1: printf("You have selected OYO 5202 Hotel Pearl Malabar.\n");
		        printf("Kindly provide the following details\n");
		        form_kl(a);
		        break;
		case 2: printf("You have selected A V Residency.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(b);
		        break;
		case 3: printf("You have selected The Olive Cochin.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(c);
				break;        
		 default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	             goto y;
	}
}


void thiruvananthpuram()
{
    int a,b,c,d;
	
	a=1627;
	b=2180;
	c=2720;
	
	printf("\n\nPlaces to visit in Thiruvananthpuam are\n");
y:	printf("@ Sree Padmanabhaswamy Temple\n @ Napier museum\n  @ Shankumugham Beach\n   @ Kuthira Malika\n    @ Thiruvananthpuram Zoo\n");

    printf("\n\t\t*PPN: Price Per Night\n");
	printf("\nThe hotels available are:\n");
	printf("\n1. Treebo Adrak\nRating:9.2[excellent]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",a);
	printf("___________________________________________________________________________________________________");
    printf("\n2. Ruby Arena\nRating:7.4\n");
    printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",b);
	printf("___________________________________________________________________________________________________");
	printf("\n3. Trivandrum\nRating:7.6[good]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",c);
	printf("___________________________________________________________________________________________________");
  
    printf("\n\n\nSelect a hotel\n\n");
	scanf("%d",&d);
	switch(d)
	{
		case 1: printf("You have selected Treebo Adrak.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(a);
		        break;
		case 2: printf("You have selected Ruby Arena.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(b);
		        break;
		case 3: printf("You have selected Trivandrum.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(c);
				break;        
	 default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	             goto y;
	}
}


void kumarakon()
{
	int a,b,c,d;
	
	a=22764;
	b=2393;
	c=3731;
	
	printf("\n\nPlaces to visit in Kumarakom are\n");
y:	printf("@ Kumarakom Bird Sanctuary\n @ Pathiramanal\n  @ Bay Island Driftwood Museum\n   @ Mango Meadows Agriculture Theme Park\n    @ Chavara Bhavan\n");
	
	printf("\n\t\t*PPN: Price Per Night\n");
	printf("\nThe hotels available are:\n");
	printf("\n1. Coconut Lagoon-CGH Earth\nRating:8.7[excellent]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",a);
	printf("___________________________________________________________________________________________________");
    printf("\n2. Shivaganga House Boat\nRating:7.5[good]\n");
    printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",b);
	printf("___________________________________________________________________________________________________");
	printf("\n3. Kalathil Lake Resort\nRating:7.9[good]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",c);
	printf("___________________________________________________________________________________________________");
   
    printf("\n\n\nSelect a hotel\n\n");
	scanf("%d",&d);
	switch(d)
	{
		case 1: printf("You have selected Coconut Lagoon-CGH Earth.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(a);
		        break;
		case 2: printf("You have selected Shivaganga House Boat.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(b);
		        break;
		case 3: printf("You have selected Kalathil Lake Resort.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(c);
				break;        
		default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	             goto y;
	}
}


void kovalam()
{
	int a,b,c,d;
	
	a=3731;
	b=11415;
	c=6106;
	
	printf("\n\nPlaces to visit in Kovalam are\n");
y:	printf("@ Samudra Beach Park\n @ Light House Beach\n  @ Halcyon Castle\n   @ Kovalam Beach\n    @ Vizhinjam Lighthouse\n");

    printf("\n\t\t*PPN: Price Per Night\n");
	printf("\nThe hotels available are:\n");
	printf("\n1. Hotel The Leela Kovalam\nRating:8.7[excellent]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",a);
	printf("___________________________________________________________________________________________________");
    printf("\n2. Uday Samudra\nRating:7.9[good]\n");
    printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",b);
	printf("___________________________________________________________________________________________________");
	printf("\n3. Hotel Turtle\nRating:8.1[very good]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",c);
	printf("___________________________________________________________________________________________________");
   
    printf("\n\n\nSelect a hotel\n\n");
	scanf("%d",&d);
	switch(d)
	{
		case 1: printf("You have selected Hotel The Leela Kovalam.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(a);
		        break;
		case 2: printf("You have selected Uday Samudra.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(b);
		        break;
		case 3: printf("You have selected Hotel Turtle.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(c);
				break;        
	default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	             goto y;
	}
}


void alappuza()
{
		int a,b,c,d;
	
	a=1977;
	b=2468;
	c=4665;
	
	printf("\n\nPlaces to visit in Alappuza are\n");
y:	printf("@ Alappuzha Beach\n @ Vembanad\n  @ Merari beach\n   @ Pathiramanal\n    @ Shree krishna Swami Temple\n");
	
	printf("\n\t\t*PPN: Price Per Night\n");
	printf("\nThe hotels available are:\n");
	printf("\n1. Treebo Palmyra Grand Suite\nRating:9.1[excellent]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",a);
	printf("___________________________________________________________________________________________________");
    printf("\n2. Sreelakshmi Residency\nRating:7.8[good]\n");
    printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",b);
	printf("___________________________________________________________________________________________________");
	printf("\n3. Ramada Alleppey\nRating:8.2[very good]\n");
	printf("___________________________________________________________________________________________________");
	printf("\nPPN: Rs=%d\n",c);
	printf("___________________________________________________________________________________________________");
   
    printf("\n\n\nSelect a hotel\n\n");
	scanf("%d",&d);
	switch(d)
	{
		case 1: printf("You have selected Treebo Palmyra Grand Suite.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(a);
		        break;
		case 2: printf("You have selected Sreelakshmi Residency.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(b);
		        break;
		case 3: printf("You have selected Ramada Alleppey.\n");
		        printf("Kindly provide the following details\n");
		          form_kl(c);
				break;        
		default:printf("\n %c Invalid Choice.\nSelect hotel again.\n");
	             goto y;
	}
}
   	

   	
int main()
{
	int load();
	int first();
	void second();
	void records();
	int third();
	int form_mh(int);
	int form_kl();
	int form_ga();
	int mh();
	int ga();
	int kl();

	char ch,q;
	int m,z;
	
	printf("%c",7);
	load();
	sleep(1);
    system("cls");
	first();
	getch();
	system("cls");
	second();
	getch();
	system("cls");
p:	m=third();
	if((m<=3)&&(m>=1))
	{
	   switch(m)
	   {
	    	case 1:printf("\nYou have selected Maharashtra\n");
			       mh();
				   break;
		    case 2:printf("\nYou have selected Goa\n"); 
			       ga();
				   break;
	    	case 3:printf("\nYou have selected Kerala\n"); 
			       kl();
				   break;
	   }
	}
	else
	{
		system("cls");
		printf("%c",7);
    	printf("\nSOMETHING WENT WRONG.TRY AGAIN.\n");
    	printf("Press 'Y' to try again.Press 'N' to exit.");
        ch=toupper(getch());
    	if(ch=='Y')
    	{
    		system("cls");
			m=third();
        	if((m<=3)&&(m>=1))
        	{
	            switch(m)
	            {
	             	case 1:printf("You have selected Maharashtra");
					       mh();
					       break;
		            case 2:printf("You have selected Goa");
		                   ga();
					       break;
	              	case 3:printf("You have selected Kerala");
	             	       kl();
					       break;
	            }
	            goto p;
        	}
        	else
        	{
        		system("cls");
        		printf("%c",7);
        		printf("UNKNOWN E RR O R OCCURED");
        		sleep(0.5);
        		return 0;
			}
     	}
       	else if(ch=='N')
    	{
	    	system("cls");
		    return 0;
     	}
    }
 
}


