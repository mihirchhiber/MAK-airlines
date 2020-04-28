#include<iostream.h>
//used for the input output functions
#include<conio.h>
//used for getch, clrscr and textcolor
#include<stdlib.h>
//used for randomize functions(rand, srand, random, randomize)
#include<time.h>
//used for the time function
#include<stdio.h>
//used for inputting a string
#include<string.h>
//used for the string compare function
#include<dos.h>
//used for inputting delay in the output
struct depart_return
{	short day;
	short month;
	int year;
} DEPARTING,RETURNING;
struct people_total
{
	int adults;
	int child;
	int infant;
} PEOPLE;
struct details
{	char first_name[30];
	char last_name[30];
} ADULTS[5],CHILD[5],INFANT[5];
struct phone_number
{	int country_code;
	int area_code;
	long phone_no;
} PHONE;
struct payment
{	char full_name[40];
	long double card_number;
	long doe;
	int security_number;
	char otp[10];
} PAYMENT;
void promo(int num)
{
	switch(num)
	{
		case 0: cout<<"Las Vegas";break;
		case 1: cout<<"Delhi";break;
		case 2: cout<<"Pune";break;
		case 3: cout<<"San Francisco";break;
		case 4: cout<<"Bali";break;
		case 5: cout<<"Hawaii";break;
		case 6: cout<<"Singapore";break;
		case 7: cout<<"Dubai";break;
		case 8: cout<<"Tokyo";break;
		case 9: cout<<"Texas";break;
		case 10:cout<<"Chicago";break;
	}
}
struct promo
{	int from;
	int to;
	int cost;
} deal[5];
int main()
{
	clrscr();
	randomize();
	//seeds the random number generator with a random number
	char wish;
	int air,ch;
	do
	{
	for(int line=0;line<40;++line)
	{
		clrscr();
		cout<<"Welcome to MAK Airlines\n";
		for(air=0;air<line;++air)
			cout<<" ";
		cout<<"_____         ______   \n";
		for(air=0;air<line;++air)
			cout<<" ";
		cout<<"| : \         |    )  \n";
		for(air=0;air<line;++air)
			cout<<" ";
		cout<<"| :  `\______|______)________\n ";
		for(air=0;air<line;++air)
			cout<<" ";
		cout<<"('______              )_____)_____   \n ";
		for(air=0;air<line;++air)
			cout<<" ";
		cout<<"  (____/-)_,---------,_____________>--\n ";
		for(air=0;air<line;++air)
			cout<<" ";
		cout<<"    (       /\n ";
		for(air=0;air<line;++air)
			cout<<" ";
		cout<<"     |     /  \n ";
		for(air=0;air<line;++air)
			cout<<" ";
		cout<<"     |____/__   \n";
		delay(100);      //delays the time the output stays on the screen
	}
	cout<<"\n\nExperience comfort & luxury with the Best In The World Airline Now! Impeccable  service. Innovative Cabin Product.Great way to fly. Experience it to believe it!\n\n";
	cout<<"1. Know about us\n";
	cout<<"2. Book tickets\n";
	cout<<"3. Flight staus\n";
	cout<<"4. Promotions\n";
	cout<<"5. How to contact us\n\n";
	cout<<"Enter you choice : ";
	cin>>ch;          //takes in the users input
	switch(ch)
	{
		case 1: //know about us
			clrscr();
			textcolor(GREEN);    //changes the colour of the text
			cprintf("OUR PLANES ARE OF THE HIGHEST QUALITY OF TITANIUM");
			cout<<endl;
			cprintf("WE HAVE BEEN RATED AS A 5 STAR AIRLINES EVER SINCE OUR INCEPTION");
			cout<<endl;
			cprintf("GOLD PLATED UTENSILS, LEATHER BELTS, YOU NAME IT; WE HAVE IT");
			cout<<endl;
			cprintf("OFFERS FLIGHTS AND PROMOTIONS TO OVER 200 NATIONS");
			cout<<endl;
			cprintf("BEST INFLIGHT ENTERTAINMENT");
			cout<<endl;
			cprintf("WE ALSO FLY TO NATIONS LIKE NORTH KOREA");
			cout<<endl;
			cprintf("SINCE OUR INCEPTION WE'VE HAD 0 CASUALTIES");
			cout<<endl;
			cprintf("JOIN US TO HAVE A LIFE CHANGING EXPERIENCE");
			delay(3000);
			textcolor(WHITE);
			cout<<"\n\n\n\n";
			break;               //break to the jump out of the case
		case 2: //booking tickets
			clrscr();
			char from_country[100],to_country[100],CLASS,GENDER,email_address[50],alpha[15];
			int choice,i,serial_no,total,news,number[15],check;
			float store_price[6];
			cout<<"\t\t\t\tBOOKING TICKETS\n\n";
			cout<<"From : ";
			gets(from_country);
			cout<<"To : ";
			gets(to_country);
			while(strcmpi(from_country,to_country)==0)
			{	cout<<"Invalid!\n";
				cout<<"From : ";
				gets(from_country);
				cout<<"To : ";
				gets(to_country);
			}
			//while loop to check the validity of the countries inputted
			cout<<"\n\n";
			cout<<"1. One Way\n2. Round Trip\n\n";
			cout<<"Pick an option : ";
			cin>>choice;
			while(choice!=1&&choice!=2)
			{	cout<<"Invalid option!\n";
				cout<<"Pick an option again: ";
				cin>>choice;
			}
			//while loop to check the validity of the option inputted
			cout<<"\nDeparting : ";
			cout<<"\nEnter the Date of Departure(dd) : ";
			cin>>DEPARTING.day;
			while(DEPARTING.day<1||DEPARTING.day>31)
			{	cout<<"Please enter a date between 1 and 31 : ";
				cin>>DEPARTING.day;
			}
			cout<<"Enter the Month(mm) : ";
			cin>>DEPARTING.month;
			while(DEPARTING.month<1||DEPARTING.month>12)
			{	cout<<"Please enter a month between 1 and 12 : ";
				cin>>DEPARTING.month;
			}
			cout<<"Enter the Year(yyyy) : ";
			cin>>DEPARTING.year;
			cout<<"\n";
			int R;
			unsigned int seedval;
			time_t t;
			seedval=(unsigned)time(&t);
			srand(seedval);
			if(choice==2)
			{	cout<<"Returning : ";
				cout<<"\nEnter the Date of Arrival(dd) : ";
				cin>>RETURNING.day;
				while(RETURNING.day<1||RETURNING.day>31)
				{	cout<<"Please enter a date between 1 and 31 : ";
					cin>>RETURNING.day;
				}
				cout<<"Enter the Month(mm) : ";
				cin>>RETURNING.month;
				while(RETURNING.month<1||RETURNING.month>12)
				{	cout<<"Please enter a month between 1 and 12 : ";
					cin>>RETURNING.month;
				}
				cout<<"Enter the Year(yyyy) : ";
				cin>>RETURNING.year;
				while(RETURNING.year<DEPARTING.year)
				{	cout<<"Unfortunately our airline does not travel back in time!\n";
					cout<<"Please enter the Year again : ";
					cin>>RETURNING.year;
				}
			}
			//while loop to check the validity of the date of departing/returning inputted
			cout<<"\n";
			cout<<"Class : \n\n";
			cout<<"Economy(E)\tPremium Economy(P)\tBusiness(B)\tFirst Class/Suites(F)\n\n";
			cout<<"Please pick a Class(E/P/B/F) : ";
			cin>>CLASS;
			while(CLASS!='E'&&CLASS!='P'&&CLASS!='B'&&CLASS!='F'&&CLASS!='e'&&CLASS!='p'&&CLASS!='b'&&CLASS!='f')
			{	cout<<"Invalid Class! ";
				cout<<"Please pick a Class again : ";
				cin>>CLASS;
			}
			//while loop to check the validity of the class inputted
			clrscr();
			cout<<"Number of Adults(12 years and above) : ";
			cin>>PEOPLE.adults;
			while(PEOPLE.adults>3)
			{	cout<<"We are sorry but you can book tickets for only 3 adults at a time!\n";
				cout<<"Number of adults : ";
				cin>>PEOPLE.adults;
			}
			cout<<"Number of Children(2-11 years) : ";
			cin>>PEOPLE.child;
			while(PEOPLE.child>3)
			{	cout<<"We are sorry but you can book tickets for only 3 children at a time!\n";
				cout<<"Number of Children : ";
				cin>>PEOPLE.child;
			}
			cout<<"Number of Infants(0-23 months) : ";
			cin>>PEOPLE.infant;
			while(PEOPLE.adults>3)
			{	cout<<"We are sorry but you can book tickets for only 3 infants at a time!\n";
				cout<<"Number of Infants : ";
				cin>>PEOPLE.infant;
			}
			//while loop to check the validity of the number of passengers inputted
			clrscr();
			total=PEOPLE.adults+PEOPLE.child+PEOPLE.infant;
			if(total==0)
				break;
			for(i=1;i<2;++i)
			{	cout<<"Searching for available flights";
				delay(500);
				cout<<".";
				delay(500);
				cout<<".";
				delay(500);
				cout<<".";
				delay(1000);
				clrscr();
			}
			//loop for the processing of information provided
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tProceeding to the flight page...";
			delay(1500);
			clrscr();
			cout<<"\t\t\t\tAvailable Flights : \n\n\n";
			cout<<"S.No\tFlight Number\tTPrice\tDate of Departure\tDate of Arrival\n\n";
			for(i=1;i<=(rand()%5)+2;++i)
			//randomizes a number between 2 and 5
			{       check=i;
				cout<<i<<")\tMAK"<<random(9999-1000+1)+1000<<"\t\t$";
				//outputs a random number between 1000 and 10000
				switch(CLASS)
				{
					case 'E':store_price[i-1]=(random(1565-677+1)+677)*total;
						 cout<<store_price[i-1];
						 break;
					case 'e':store_price[i-1]=(random(1565-677+1)+677)*total;
						 cout<<store_price[i-1];
						 break;
					case 'P':store_price[i-1]=(random(2117-876+1)+876)*total;
						 cout<<store_price[i-1];
						 break;
					case 'p':store_price[i-1]=(random(2117-876+1)+876)*total;
						 cout<<store_price[i-1];
						 break;
					case 'B':store_price[i-1]=(random(2457-1107+1)+1107)*total;
						 cout<<store_price[i-1];
						 break;
					case 'b':store_price[i-1]=(random(2457-1107+1)+1107)*total;
						 cout<<store_price[i-1];
						 break;
					case 'F':store_price[i-1]=(random(2947-1317+1)+1317)*total;
						 cout<<store_price[i-1];
						 break;
					case 'f':store_price[i-1]=(random(2947-1317+1)+1317)*total;
						 cout<<store_price[i-1];
						 break;
				}
				cout<<"\t"<<DEPARTING.day<<"/"<<DEPARTING.month<<"/"<<DEPARTING.year<<"\t\t";
				if(choice==2)
					cout<<RETURNING.day<<"/"<<RETURNING.month<<"/"<<RETURNING.year;
				else
					cout<<"-------------";
				cout<<"\n\n";
			}
			cout<<"For selecting a flight enter the Serial Number of that respective flight : ";
			cin>>serial_no;
			while(serial_no>check||serial_no<1)
			{	cout<<"Invalid Serial Number!\n";
				cout<<"Enter the Serial Number again : ";
				cin>>serial_no;
			}
			//while loop to check the validity of the serial number inputted
			clrscr();
			if(PEOPLE.adults)
				for(i=0;i<PEOPLE.adults;++i)
				{	cout<<"Enter the information for Passenger "<<i+1<<" - Adult\n";
					cout<<"Gender(M/F) : ";
					cin>>GENDER;
					while(GENDER!='M'&&GENDER!='F'&&GENDER!='m'&&GENDER!='f')
					{	cout<<"Invalid Gender!\n";
						cout<<"Gender(M/F) : ";
						cin>>GENDER;
					}
					cout<<"First Name(as in Passport) : ";
					gets(ADULTS[i].first_name);
					cout<<"Last Name(as in Passport) : ";
					gets(ADULTS[i].last_name);
					cout<<"\n\n";
				}
			if(PEOPLE.child)
				for(i=0;i<PEOPLE.child;++i)
				{	cout<<"Enter the Information for Passenger "<<i+1+PEOPLE.adults<<" - Child\n";
					cout<<"Gender(M/F) : ";
					cin>>GENDER;
					while(GENDER!='M'&&GENDER!='F'&&GENDER!='m'&&GENDER!='f')
					{	cout<<"Invalid Gender!\n";
						cout<<"Gender(M/F) : ";
						cin>>GENDER;
					}
					cout<<"First Name(as in Passport) : ";
					gets(CHILD[i].first_name);
					cout<<"Last Name(as in Passport) : ";
					gets(CHILD[i].last_name);
					cout<<"\n\n";
				}
			if(PEOPLE.infant)
				for(i=0;i<PEOPLE.infant;++i)
				{	cout<<"Enter the information for Passenger "<<i+1+PEOPLE.adults+PEOPLE.child<<" - Infant\n";
					cout<<"Gender(M/F) : ";
					cin>>GENDER;
					while(GENDER!='M'&&GENDER!='F'&&GENDER!='m'&&GENDER!='f')
					{	cout<<"Invalid Gender!\n";
						cout<<"Gender(M/F) : ";
						cin>>GENDER;
					}
					cout<<"First Name(as in Passport) : ";
					gets(INFANT[i].first_name);
					cout<<"Last Name(as in Passport) : ";
					gets(INFANT[i].last_name);
					cout<<"\n\n";
				}
			//takes in the information of all the passengers
			clrscr();
			cout<<"Contact Details\n\n";
			cout<<"Please provide the contact details of one of the passengers in this booking.\n\n";
			cout<<"Email Address : ";
			gets(email_address);
			cout<<"\nWould you like to receive news and promotional fares?\n";
			cout<<"1. Yes\n2. No\n";
			cout<<"Enter your choice : ";
			cin>>news;
			while(news!=1&&news!=2)
			{	cout<<"Invalid choice!\n";
				cout<<"Enter your choice again : ";
				cin>>news;
			}
			//while loop to check the validity of the choice inputted
			cout<<"\nPhone Number\n";
			cout<<"Let us contact you by phone or text message if there are updates to your flight.\n\n";
			cout<<"Country Code : +";
			cin>>PHONE.country_code;
			cout<<"Area Code : ";
			cin>>PHONE.area_code;
			cout<<"Number : ";
			cin>>PHONE.phone_no;
			clrscr();
			cout<<"Seat Selection : \n\n";
			int u;
			unsigned int seed;
			time_t x;
			seed=(unsigned)time(&x);
			srand(seed);
			int num;
			num=1;
			char ch='A';
			for(int p=0;p<11;++p)
				if(p==3||p==7)
					cout<<" ";
				else
				{
					cout<<"  "<<ch;
					++ch;
				}
			for(int z=0;z<9;++z)
			{
				cout<<endl;
				cout<<num;
				num++;
				for(int y=0;y<11;++y)
				{
					if(y==3||y==7)
						cout<<" ";
					else
					{
						u=rand();
						if(u%2==0)
						{
							if(z==0||z==1)
							       textcolor(WHITE);
							if(z==2||z==3)
								textcolor(BLUE);
							if(z==4||z==5)
								textcolor(5);
							if(z==6||z==7||z==8)
								textcolor(YELLOW);
							textbackground(RED);
							cprintf("[_]");
						 }
						else
						{
							if(z==0||z==1)
								textcolor(WHITE);
							if(z==2||z==3)
								textcolor(BLUE);
							if(z==4||z==5)
								textcolor(5);
							if(z==6||z==7||z==8)
								textcolor(YELLOW);
							textbackground(GREEN);
							cprintf("[_]");
						}
					}
				}
			}
			textbackground(BLACK);
			cout<<endl<<endl;
			textcolor(WHITE);
			cprintf("[_]-Refers to First Class seats");
			cout<<endl;
			textcolor(BLUE);
			cprintf("[_]-Refers to Business class seats");
			cout<<endl;
			textcolor(5);
			cprintf("[_]-Refers to Premium Economy class seats");
			cout<<endl;
			textcolor(YELLOW);
			cprintf("[_]-Refers to Economy class seats");
			textcolor(RED);
			cout<<endl;
			cprintf("Red");
			cout<<" background means the seat is occupied\n";
			textcolor(GREEN);
			cprintf("Green");
			cout<<" background means the seat is empty\n";
			textcolor(WHITE);
			cout<<"Please input "<<total<<" seats(alphabet followed by the number) : ";
			for(i=0;i<total;++i)
				cin>>alpha[i]>>number[i];
			clrscr();
			cout<<"Grand Total : $"<<store_price[serial_no-1]<<"\n\n";
			cout<<"Payment by Debit/Credit Card only \n\n";
			cout<<"Enter the Full Name of person who holds the Debit/Credit Card : ";
			gets(PAYMENT.full_name);
			cout<<"Credit Card Number : ";
			cin>>PAYMENT.card_number;
			cout<<"Security Number(at the back of the Debit/Credit Card) : ";
			cin>>PAYMENT.security_number;
			cout<<"Date of Expiry(mmyyyy) : ";
			cin>>PAYMENT.doe;
			cout<<"OTP : ";
			gets(PAYMENT.otp);
			delay(800);
			cout<<"\n\n\n";
			cout<<"Checking the information provided";
			for(i=1;i<4;++i)
			{	cout<<".";
				delay(800);
			}
			clrscr();
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t  BOOKING SUCCESSFUL  ";
			delay(2500);
			clrscr();
			break;

case 3: clrscr();        //to clear screen
			int load,g;
			char str[6][30]={"Going to depart","Departed","Midway","Arrived","Delayed","Cancelled"};    //creating a string which consists of flight status
			cout<<"Welcome to MAK AIRLINES\nThis is the interface which allows you to check the status of flights\n";
			cout<<"Please input the Flight Number(4 digits) : ";
			cin>>num;   //input for flight number
			while(num<1000||num>9999) //to check if the flight number entered is correct or not
			{	cout<<"Invalid Flight Number!\n";
				cout<<"Flight Number should be 4 digits!\n";
				cout<<"Enter the Flight Number again : ";
				cin>>num;   //input for number is taken again if the previous input was invalid
			}
			cout<<"Thank you\n\nRechecking";
			for(load=0;load<4;++load)       //for loop made to show fake processing time
			{
				cout<<".";
				delay(400);
			}
			cout<<"\n\nThe flight number entered : MAK "<<num;
			unsigned int seedvals;   //next for lines are used for rand
			time_t q;
			seedval = (unsigned) time(&q);
			srand(seedvals);
			g=(rand()%5)+0;
			cout<<"\n\nSEARCHING.";
			for(load=0;load<4;++load)    //for loop made to show fake processing time
			{
				cout<<".";
				delay(400);
			}
			cout<<"\nScanning databases.";
			for(load=0;load<4;++load)   //for loop made to show fake processing time
			{
				cout<<".";
				delay(400);
			}
			cout<<"\nEstablishing radio contact.";
			for(load=0;load<4;++load)   //for loop made to show fake processing time
			{
				cout<<".";
				delay(400);
			}
			cout<<"\n\nStatus of the flight : ";
			for(int j=0;str[g][j]!='\0';++j)  //for loop made to show fake processing time
			{
				cout<<str[g][j];
			}
			delay(2500);  //delay used here so the user can see the output and then proceed to the next page
			cout<<"\n\n\n";
			break;   //used so the cases after this line won't be executed
		case 4: //Promotions
			clrscr();
			int promonum1,promonum2,cost;
			char promoch;
			textcolor(LIGHTRED);     //to specify the color of the text
			cprintf("\nSSSSS     A     LL      EEEEEE");
			cout<<endl;
			textcolor(LIGHTRED);     //to specify the color of the text
			cprintf("SS       A A    LL      EE    ");
			cout<<endl;
			textcolor(WHITE);        //to specify the color of the text
			cprintf("SSSSS   AAAAA   LL      EEEEEE");
			cout<<endl;
			textcolor(GREEN);        //to specify the color of the text
			cprintf("   SS  A     A  LL      EE    ");
			cout<<endl;
			textcolor(GREEN);        //to specify the color of the text
			cprintf("SSSSS A       A LLLLLLL EEEEEE");
			textcolor(WHITE);        //to specify the color of the text
			cout<<"\n\nHOT PROMOS FOR THIS WEEK!!!!";
			cout<<"\n";
			for(i=0;i<5;++i)  //loop made to show 5 random deals
			{
				cout<<"\nPROMO "<<i+1<<":";
				promonum1=random(10);  //to save the details of the random promotion created
				promo(promonum1);   //execution is passed to "promo" function
				deal[i].from=promonum1;  //to save the details of the random promotion created
				cout<<" to ";
				promonum2=random(10);  //to save the details of the random promotion created
				if(promonum1!=promonum2) //if loop is used if two random numbers match, the origin and destination will be the same, therefore we use this if loop to remove this problem
					promo(promonum2);
				else
				{	promonum2++;
					promo(promonum2);
				}
				deal[i].to=promonum2;   //to save the details of the random promotion created
				cout<<" for $";
				cost=random(350-100+1)+100;
				cout<<cost;
				deal[i].cost=cost;      //to save the details of the random promotion created
			}
			cout<<"\n\nTerms and conditions:1)All tickets are non refundable."; //terms and conditons for the deals
			cout<<"\n                     2)Tickets booked are ECONOMY class.";
			cout<<"\n                     3)Only one way tickets.";
			cout<<"\n\nDo you want to make use of any of these deals?\n";
			cout<<"(If yes, enter the number, otherwise enter n)\n";
			cin>>promoch;
			while(promoch!=49&&promoch!=50&&promoch!=51&&promoch!=52&&promoch!=53&&promoch!='n'&&promoch!='N') //to check for invalid input
			{	cout<<"Invalid option!\n";
				cout<<"Enter a valid number or enter n : ";
				cin>>promoch; //asks for the input again if the previous input was invalid
			}
			clrscr();  // to clear screen
			if(promoch>=49&&promoch<=53)
			{
				clrscr();
				char from_country[100],to_country[100],CLASS,GENDER,email_address[50];
				int choice,serial_no,total,news,check;
				cout<<"---------------------------------ENTER DETAILS--------------------------------\n\n\n";
				cout<<"From : ";
				promo(deal[promoch-49].from); //displaying the details of promotion which were saved before
				cout<<"\nTo : ";
				promo(deal[promoch-49].to);   //displaying the details of promotion which were saved before
				cout<<"\n\n";
				cout<<"1. One Way\n2. Round Trip\n\n";
				cout<<"Pick an option : ";
				cin>>choice;
				while(choice!=1&&choice!=2)  //to check for invalid inputs
				{	cout<<"Invalid option!\n";
					cout<<"Pick an option again: ";
					cin>>choice; //tells user to input again if the previous input was invalid
				}
				cout<<"\nDeparting : ";
				cout<<"\nEnter the Date of Departure(dd) : ";
				cin>>DEPARTING.day;
				while(DEPARTING.day<1||DEPARTING.day>31)  //to check if the dates are correct
				{	cout<<"Please enter a date between 1 and 31 : ";
					cin>>DEPARTING.day;  //tells user to input again if the previous input was invalid
				}
				cout<<"Enter the Month(mm) : ";
				cin>>DEPARTING.month;
				while(DEPARTING.month<1||DEPARTING.month>12) //to check if the dates are correct
				{	cout<<"Please enter a month between 1 and 12 : ";
					cin>>DEPARTING.month;  //tells user to input again if the previous input was invalid
				}
				cout<<"Enter the Year(yyyy) : ";
				cin>>DEPARTING.year;
				cout<<"\n";
				if(choice==2) //if user inputs for round trip, this if statement will help to take return details
				{	cout<<"Returning : ";
					cout<<"\nEnter the Date of Arrival(dd) : ";
					cin>>RETURNING.day;
					while(RETURNING.day<1||RETURNING.day>31)  //to check if the date is valid
					{	cout<<"Please enter a date between 1 and 31 : ";
						cin>>RETURNING.day; //takes input again if the previous input was invalid
					}
					cout<<"Enter the Month(mm) : ";
					cin>>RETURNING.month;
					while(RETURNING.month<1||RETURNING.month>12)  //to check if the date is valid
					{	cout<<"Please enter a month between 1 and 12 : ";
						cin>>RETURNING.month; //takes input again if the previous input was invalid
					}
					cout<<"Enter the Year(yyyy) : ";
					cin>>RETURNING.year;
					while(RETURNING.year<DEPARTING.year)  //to check if the person has input wrong dates(return is before depart)
					{	cout<<"Unfortunately our airline does not travel back in time!\n";
						cout<<"Please enter the Year again : ";
						cin>>RETURNING.year;
					}
				}
				cout<<"\n";
				cout<<"Class : ECONOMY";  //class is default because the tickets are very cheap
				cout<<"\n\n";
				cout<<"Number of Adults(12 years and above) : ";
				cin>>PEOPLE.adults; //input number of adults
				while(PEOPLE.adults>3)  //we can only accomodate booking for 3 adults at a time
				{	cout<<"We are sorry but you can book tickets for only 3 adults at a time!\n";
					cout<<"Number of adults : ";
					cin>>PEOPLE.adults; //to take input again
				}
				cout<<"Number of Children(2-11 years) : ";
				cin>>PEOPLE.child;
				while(PEOPLE.child>3)  //we can only accomodate booking for 3 adults at a time
				{	cout<<"We are sorry but you can book tickets for only 3 children at a time!\n";
					cout<<"Number of Children : ";
					cin>>PEOPLE.child;  //to take input again
				}
				cout<<"Number of Infants(0-23 months) : ";
				cin>>PEOPLE.infant;
				while(PEOPLE.adults>3)  //we can only accomodate booking for 3 adults at a time
				{	cout<<"We are sorry but you can book tickets for only 3 infants at a time!\n";
					cout<<"Number of Infants : ";
					cin>>PEOPLE.infant; //to take input again
				}
				clrscr();
				total=PEOPLE.adults+PEOPLE.child+PEOPLE.infant;
				if(total==0)  //if no one is travelling then all the procedure will be skipped
					break;
				for(i=1;i<2;++i) //to fake processing time
				{	cout<<"Searching for available flights";
					delay(500);
					cout<<".";
					delay(500);
					cout<<".";
					delay(500);
					cout<<".";
					delay(1000);
					clrscr();
				}
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tProceeding to the flight page...";
				delay(2000);  //to fake processing time
				clrscr();
				cout<<"\t\t\t\tAvailable Flights : \n\n\n";
				cout<<"S.No\tFlight Number\tPrice\tDate of Departure\tDate of Arrival\n\n";
				for(i=1;i<=(rand()%5)+2;++i) //to display details for different flights
				{       check=i;
					cout<<i<<")\tMAK"<<random(9999-1000+1)+1000<<"\t\t$";
					cout<<(deal[promoch-49].cost*total)<<"\t";  // outputs the stored cost value
					cout<<"\t"<<DEPARTING.day<<"/"<<DEPARTING.month<<"/"<<DEPARTING.year<<"\t"; //outputs all the input data
					if(choice==2)  //if statement is executed if the trip is a round trip
						cout<<RETURNING.day<<"/"<<RETURNING.month<<"/"<<RETURNING.year; //outputs all the input data
					else
						cout<<"-------------";
					cout<<"\n\n";
				}
				cout<<"For selecting a flight enter the Serial Number of that respective flight : ";
				cin>>serial_no; //input choice of the user
				while(serial_no>check||serial_no<1)  //to check if the input is valid
				{	cout<<"Invalid Serial Number!\n";
					cout<<"Enter the Serial Number again : ";
					cin>>serial_no; //takes input againi if the previous input was invalid
				}
				clrscr(); //to clear screen
				if(PEOPLE.adults)
					for(i=0;i<PEOPLE.adults;++i) //for statement used to take input for the travellers
					{	cout<<"Enter the information for Passenger "<<i+1<<" - Adult\n";
						cout<<"Gender(M/F) : ";
						cin>>GENDER;
						while(GENDER!='M'&&GENDER!='F'&&GENDER!='m'&&GENDER!='f') //to checkif the input given is valid
						{	cout<<"Invalid Gender!\n";
							cout<<"Gender(M/F) : ";
							cin>>GENDER; //takes input again
						}
						cout<<"First Name(as in Passport) : ";
						gets(ADULTS[i].first_name); //takes input for the first name
						cout<<"Last Name(as in Passport) : ";
						gets(ADULTS[i].last_name);  //takes input for the last name
						cout<<"\n\n";
					}
				if(PEOPLE.child)  //child and adult is divided so its easier to check if the age of the child is between 2 to 11
					for(i=0;i<PEOPLE.child;++i)
					{	cout<<"Enter the Information for Passenger "<<i+1+PEOPLE.adults<<" - Child\n";
						cout<<"Gender(M/F) : ";
						cin>>GENDER;
						while(GENDER!='M'&&GENDER!='F'&&GENDER!='m'&&GENDER!='f') //to check if the input is correct
						{	cout<<"Invalid Gender!\n";
							cout<<"Gender(M/F) : ";
							cin>>GENDER; //takes input again if the preivous input was invalid
						}
						cout<<"First Name(as in Passport) : ";
						gets(CHILD[i].first_name);
						cout<<"Last Name(as in Passport) : ";
						gets(CHILD[i].last_name);
						cout<<"\n\n";
					}
				if(PEOPLE.infant) //infant,child and adult is divided so its easier to check if the infant's age is correct
					for(i=0;i<PEOPLE.infant;++i)
					{	cout<<"Enter the information for Passenger "<<i+1+PEOPLE.adults+PEOPLE.child<<" - Infant\n";
						cout<<"Gender(M/F) : ";
						cin>>GENDER;
						while(GENDER!='M'&&GENDER!='F'&&GENDER!='m'&&GENDER!='f') //to check if the previous input was valid
						{	cout<<"Invalid Gender!\n";
							cout<<"Gender(M/F) : ";
							cin>>GENDER;  //takes input again if the old input was invalid
						}
						cout<<"First Name(as in Passport) : ";
						gets(INFANT[i].first_name);
						cout<<"Last Name(as in Passport) : ";
						gets(INFANT[i].last_name);
						cout<<"\n\n";
					}
				clrscr(); //to clear screen
				cout<<"Contact Details\n\n";
				cout<<"Please provide the contact details of one of the passengers in this booking.\n\n";
				cout<<"Email Address : ";
				gets(email_address);
				cout<<"\nWould you like to receive news and promotional fares?\n";
				cout<<"1. Yes\n2. No\n";
				cout<<"Enter your choice : ";
				cin>>news;
				while(news!=1&&news!=2)   //to check if the input is valid or not			{	cout<<"Invalid choice!\n";
					cout<<"Enter your choice again : ";
					cin>>news;  //takes input again if the previous input was invalid
				}
				cout<<"\nPhone Number*\n";
				cout<<"Let us contact you by phone or text message if ther are updates to your flight.\n\n";
				cout<<"Country Code : +";
				cin>>PHONE.country_code;  //to take input for their number
				cout<<"Area Code : ";
				cin>>PHONE.area_code;     //to take input for their number
				cout<<"Number : ";
				cin>>PHONE.phone_no;      //to take input for their number
				clrscr();
				cout<<"Payment by Debit/Credit Card only \n\n";
				cout<<"Enter the Full Name of person who holds the Debit/Credit Card : ";
				gets(PAYMENT.full_name);  //to take input for credit card info
				cout<<"Credit Card Number : ";
				cin>>PAYMENT.card_number; //to take input for credit card info
				cout<<"Security Number(at the back of the Debit/Credit Card) : ";
				cin>>PAYMENT.security_number; //to take input for credit card info
				cout<<"Date of Expiry(mmyyyy) : ";
				cin>>PAYMENT.doe; //to take input for credit card info
				cout<<"OTP : ";
				gets(PAYMENT.otp); //to take input for credit card info
				delay(800);
				cout<<"\n\n\n";
				cout<<"Checking the information provided";
				for(i=1;i<4;++i)  //for loop to fake processing time
				{	cout<<".";
					delay(800);
				}
				clrscr(); //to clear screen
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t      BOOKING SUCCESSFUL  ";
				delay(2500);
				clrscr();
			}
			else if(promoch=='n'||promoch=='N')  //if the user doesnt want any deal, this helps to come out of the switch case
			{	delay(500);
				clrscr();
			}
			break;
		case 5: //contact us
			clrscr();
			cout<<"How to contact us";
			cout<<"\n\nGet in touch with us";
			cout<<"\n\nFor ticketing or reservations enquiries please call:";
			cout<<random(10000)<<"-"<<random(10000)<<"-"<<random(10000); //creates random phone number for contacting
			cout<<"\nReservations/ticketing enquiries email:";
			textcolor(YELLOW); //to change color of text
			cprintf("makreservations@makisthebest.com");
			cout<<"\nOther enquiries email:";
			cprintf("makeverything@makisthebest.com");
			cout<<"\nFeedback email:";
			cprintf("nobadfeedbacksformak@makisthebest.com");
			textcolor(WHITE); //to change color of the text
			delay(2500);
			break;
		default:clrscr(); //default is used to check if the user has inputed a wrong choice
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   Wrong choice";
			for(z=440;z<880;++z)//uses sound to alert for wrong choice
			{
				sound(z);
				delay(5);
				nosound();
			}
			for(int y=880;y>440;--y)
			{
				sound(y);
				delay(5);
				nosound();
			}
			clrscr();
			break;
	}
	cout<<"Do you wish to use another feature of our online MAK website(y or n)?\n";
	cin>>wish;  //takes input if they want to run the code again
	if(wish!='y'&&wish!='Y'&&wish!='n'&&wish!='N')  //checks if the input given is valid or not
		while(wish!='y'&&wish!='Y'&&wish!='n'&&wish!='N') //to check if the user inputs invalid choices again and again
		{	cout<<"Invalid decision!\n";
			cout<<"Enter your wish : ";
			cin>>wish;
		}
	else;
	}while(wish=='y'||wish=='Y'); //if input if y or Y, the code will run again
	getch();
	return 0;
}



























PSEUDOCODE

struct depart_return
{
	short day
	short month
	int year
} DEPARTING, RETURNING
struct people_total
{
	int adult
	int child
	int infant
} PEOPLE
struct details
{
	char first_name[30]
	char last_name[30]
} ADULTS[5],CHILD[5],INFANTS[5]
struct phone_number
{
	int country_code
	int area_code
	long phone_no
} PHONE
stuct payment 
{
	char full_name[40]
	long double card_number
	long doe
	int security_number
	char otp[10]
} PAYMENT
declare function promo(num as integer) as void
{
	select case option of num

	case 1:
		print "Las Vegas"
		break
	case 2:
		print "Delhi"
		break
	case 3:
		print "Pune"
		break
	case 4:
		print "San Francisco"
		break 
	case 5:
		print "Bali"
		break
	case 6:
		print "Hawaii"
		break
	case 7:
		print "Singapore"
		break
	case 8:
		print "Dubai"
		break
	case 9: 
		print "Texas"
		break
	case 10:
		print "Chicago"
		break
	end case
	end function
}
struct promo
{
	int from
	int to
	int cost
} deal[5]
declare function main() as int
{
	clrscr()
	randomize()
	repeat
	{
	 	select case option of ch

		case 1:
		{
			clrscr()
			cprintf("Information on the airways to make it more user friendly")

		}
		case 2:
		{
			clrscr()
			declare from_country as string 
			declare to_country as string
			declare email_address as string
			declare alpha as string
			declare number[15] as integer
			declare store_price[6] as float
			print "Booking tickets"
			print "From :"
			gets(from_country)
			print "TO :"
			gets(to_country)
			while (strcmpi(from_country, to_country)=0)
			{
				print "Invalid"
				print "From :"
				gets(from_country)
				print "to :"
				gets(to_country)
				endwhile
			}
			print "1. One way  2. Round Trip"
			print "Pick an option"
			input choice
			while(choice!=1 and choice!=2)
			{
				print "invalid option"
				print "pick an option again: "
				input choice
				endwhile
			}
			print " Departing"
			print  "Enter the date of departure(dd)"
			input DEPARTING.day
			while(DEPARTING.day<1 or DEPARTING.day>31)
			{
				print "Please enter a valid date"
				input DEPARTING.day
				endwhile
			}
			print "Enter the departing month(mm)"
			input DEPARTING.month
			while(DEPARTING.month<1 or DEPARTING.month>12)
			{
				print"Please enter a valid month"
				input DEPARTING.month
				endhwile
			}
			print "enter the departing year(yyyy)"
			input DEPARTING.year
			seedval=(unsigned)time(&t)
			srand(seedval)
			if choice=2 then
			{
				print "Returning :"
				print " Enter the date of return"
				input RETURNING.day
				while(RETURNING.day<1 or RETURNING.day>31)
				{
					print "Please enter a valid month"
					input RETURNING.day
					endwhile
				}
				print "Enter the month of return"
				input RETURNING.month
				while(RETURNING.month<1 or RETURNING.month>12)
				{
					print "Please enter a valid month"
					input RETURNING.month
					endhwhile
				}
				print "Please input the year of return"
				input RETURNING.year
				while(RETURNING.year<DEPARTING.year)
				{
					print"No time travel"
					input RETURNING.year
					endwhile

				}
			}
			print "Class :"
			print "Economy(E) Premium Economy(P) Busisness(B)  First class(F)"
			print "Please choose a letter"
			input CLASS
			while(CLASS!='E' and CLASS!='P' and CLASS!='B' and CLASS!='F' and CLASS!='e' and CLASS!='p' and CLASS!='b' and CLASS!='f')
			{
				print "Invalid class"
				print "Pick a class again"
				input CLASS
				endwhile
			}
			clrscr()
			print "Please input the number of adults"
			input PEOPLE.adults
			while(PEOPLE.adults>3)
			{
				print "We are sorry but you can only book tickets for a max of 3 adults"
				input "PEOPLE.adults"
			}
			print "Number of children(2-11) years:"
			input PEOPLE.child
			while(PEOPLE.child>3)
			{
				print "We are sorry but you can only book tickets for 3 children at a time"
				input PEOPLE.child
			}
			print "Number of infants(0-23 months)"
			input PEOPLE.infants
			while(PEOPLE.infants)
			{
				print "You can only book tickets for 3 infants at a time "
				input PEOPLE.infants
			}
			clrscr()
			total=PEOPLE.adults+PEOPLE.child+PEOPLE.infants
			if (total=0)
			{
				break 
			}
			print " Available flights : "
			print "S.no Flight number  Tprice Date of departure  Date of arrival"
			for i = 1 to (rand()%5)+2
			{
				check=i
				print i 
				print " MAK
				print random(9999-1000+1)+1000
				case based on class

				 case  'E':
				{
					store_price[i-1]=(random(1565-677+1)+677)*total
					print store_price[i-1]
					break
				}
				 case  'e':
				{
					store_price[i-1]=(random(1565-677+1)+677)*total
					print store_price[i-1]
					break
				}
				 case  'P':
				{
					store_price[i-1]=(random(2117-876+1)+876)*total
					print store_price[i-1]
					break
				}
				 case  'p':
				{
					store_price[i-1]=(random(2117-876+1)+876)*total
					print store_price[i-1]
					break	
				}
				 case  'B':
				{
					store_price[i-1]=(random(2457-1107+1)+1107)*total
					print store_price[i-1]
					break
				}
				 case  'b':
				{
					store_price[i-1]=(random(2457-1107+1)+1107)*total
					print store_price[i-1]
					break	
				}
				 case  'F':
				{
					store_price[i-1]=(random(2947-1317+1)+1317)*total
					print store_price[i-1]
					break
				}
				 case  'f':
				{
					store_price[i-1]=(random(2947-1317+1)+1317)*total
					print store_price[i-1]
					break
				}
				  NEXT   i

			}
			print DEPARTING.day
			print DEPARTING.month
			print DEPARTING.year
			if choice=2
			{
				print RETURNING.day
				print RETURNING.month
				print RETURNING.year
			}
			print "Choose a flight number"
			input serial_no
			while(serial_no>check or serial_no<1)
			{
				print "Invalid number chosen"
				print " Please re-enter the number"
				input serial_no
				endwhile
			}
			clrscr()
			if(PEOPLE.adults)
			{
				for i=1 to PEOPLE.adults
				{
					print "Enter the information for Passenger"
					print i
					print "Gender(M/F)"
					input GENDER
						while(GENDER!='M' and  GENDER!='F'  and  GENDER='m'  and  GENDER='f')
						{
							print "Invalid gender"
							print "Please re-enter"
							input GENDER
							endwhile
						}
						print "First name"
						gets(ADULTS[i].first_name)
						print "Last name"
						gets(ADULTS[i].last_name)

				}
				 NEXT  i
			}
			if(PEOPLE.child)
			{
				for i=1 to PEOPLE.child
				{
					print "Enter the information for Passenger"
					print i
					print "Gender(M/F)"
					input GENDER
						while(GENDER!='M' and  GENDER!='F'  and  GENDER='m'  and  GENDER='f')
						{
							print "Invalid gender"
							print "Please re-enter"
							input GENDER
							endwhile
						}
						print "First name"
						gets(CHILD[i].first_name)
						print "Last name"
						gets(CHILD[i].last_name)

				}
				 NEXT  i
			}
			if PEOPLE.infant
			{
				for i=1 to PEOPLE.INFANT
				{
					print "Enter the information for Passenger"
					print i
					print "Gender(M/F)"
					input GENDER
						while(GENDER!='M' and  GENDER!='F'  and  GENDER='m'  and  GENDER='f')
						{
							print "Invalid gender"
							print "Please re-enter"
							input GENDER
							endwhile
						}
						print "First name"
						gets(INFANT[i].first_name)
						print "Last name"
						gets(INFANT[i].last_name)

				}
			}
			clrscr()
			print "contact details"
			print "Please provide contact details of one of the passengers"
			print "enter the email address"
			gets(email_address)
			print "Would you like to receive news of promotional affairs?"
			print "1.YES   2.NO"
			print "Enter your choice"
			input news
			while(news!=1 and news!=2)
			{
				print "invalid option"
				input news
				endwhile
			}
			print "Please enter your phone number"
			print "country code"
			input PHONE.country_code
			print "area code"
			input PHONE.area_code
			print "phone number"
			input PHONE.phone_no
			clrscr()
			print "Seat selection"
			seed=(unsigned)time(&x)
			srand(seed)
			num=1
			ch = 'A'
			for p = 0 to 11
			{
				if(p=3 or p=7)
				{
					print " "
				}
				else
				{
					print " "
					print ch
					increment ch
				}
				 NEXT  p
			}
			for z = 0 to 9
			{
				print "endl"
				print num
				increment num
				for y = 0 to 11
				{
					if (y=3 or y=7)
					{
						print " "
					}
					else
					{
						u=rand()
						if u%2=0
						{
							if (z=0 or z=1)
								textcolor(WHITE)
							if (z=2 or z=3)
								textcolor(BLUE)
							if (z=3 or z=4)
								textcolor(5)
							if(z=6 or z=7 or z=8)
								textcolor(YELLOW)
							textbackground(RED)
							cprintf("[_]")
						}
						else
						{
							if (z=0 or z=1)
								textcolor(WHITE)
							if (z=2 or z=3)
								textcolor(BLUE)
							if (z=3 or z=4)
								textcolor(5)
							if(z=6 or z=7 or z=8)
								textcolor(YELLOW)
							textbackground(GREEN)
							cprintf("[_]")
						}
					}
					 NEXT  y
				}
				 NEXT  z
			}
			textbackground(BLACK)
			print "endl"
			textcolor(WHITE)
			cprintf("The COLORSCHEMING")
			clrscr()
			print "GRAND TOTAL"
			print store_price[serial_no-1]
			print "payment by debit/ credit card only"
			print " Enter the full name of the person holding the credit card"
			gets(PAYMENT.full_name)
			print "CREDIT card number"
			input PAYMENT.card_number
			print "Security number"
			input PAYMENT.security_number
			print "DATE of expiry"
			input PAYMENT.doe
			print "OTP :"
			gets (PAYMENT.otp)
			print "booking successful"
		}
		case 3: 
		{	clrscr()
			declare load and g as integers
			decalre str[6][30] as a 2D character string
			str[6][30]={"Going to depart","Departed","Midway","Arrived","Delayed","Cancelled"}
			print "Welcome to MAK AIRLINESThis is the interface which allows you to check the status of flights"
			print "Please input the Flight Number(4 digits) : "
			input num
			while num<1000 or num>9999 
				print "Invalid Flight Number!"
				print "Flight Number should be 4 digits!"
				print "Enter the Flight Number again : "
				input num
			endwhile
			print "Thank you Rechecking"
			print "The flight number entered : MAK "
			print num
			declare seedvals as unsigned integer
			declare q as time_t
			seedval = (unsigned) time(&q)
			srand(seedvals)
			g=(rand()%5)+0
			print "Scanning databases."
			print "Establishing radio contact."
			print "Status of the flight : "
			for(int j=0str[g][j]!='\0'++j)
			{
				print str[g][j]
			}
			delay(2500)
		}
		case 4:
		{	clrscr()
			declare promonum1,promonum2,cost as integer 
			declare promoch as character
			textcolor(LIGHTRED) 
			print "Sale""
			print "HOT PROMOS FOR THIS WEEK!!!!"
			for i=0 to 4
			{
				print "PROMO "
				print i+1
				promonum1=random(10)
				promo(promonum1)
				deal[i].from=promonum1
				print " to "
				promonum2=random(10)
				if(promonum1=promonum2)
				{	promonum2++
					promo(promonum2)
				}
				else
					promo(promonum2)
				deal[i].to=promonum2
				print " for $"
				cost=random(350-100+1)+100
				print cost
				deal[i].cost=cost
				 NEXT  i
			}
			print "terms and conditions......"
			print "Do you want to make use of any of these deals?"
			print "(If yes, enter the number, otherwise enter n)"
			input promoch
			while(promoch!=49 and promoch!=50 and promoch!=51 and promoch!=52 and promoch!=53 and promoch!='n' and promoch!='N')
			{	print "Invalid option!"
				print "Enter a valid number or enter n : "
				input promoch
			}
			clrscr()
			if(promoch>=49 and promoch<=53)
			{
				clrscr()
				declare from_country[100],to_country[100],email_address[50] as character string
				declare CLASS,GENDER as character 
				int choice,serial_no,total,news,check 
				print "---------------------------------ENTER DETAILS--------------------------------" 
				print "From : " 
				promo(deal[promoch-49].from) 
				print "To : " 
				promo(deal[promoch-49].to)  
				print "1. One Way2. Round Trip" 
				print "Pick an option : " 
				input choice 
				while(choice!=1 and choice!=2)
				{	 print "Invalid option!" 
					 print "Pick an option again: " 
					 input choice 
				}
				print "Departing : " 
				print "Enter the Date of Departure(dd) : " 
				input DEPARTING.day 
				while(DEPARTING.day<1 or DEPARTING.day>31)
				{	 print "Please enter a date between 1 and 31 : " 
					input DEPARTING.day 
				}
				print "Enter the Month(mm) : " 
				input DEPARTING.month 
				while(DEPARTING.month<1 or DEPARTING.month>12)
				{	 print "Please enter a month between 1 and 12 : " 
					input DEPARTING.month 
				}
				print "Enter the Year(yyyy) : " 
				input DEPARTING.year 
				if(choice=2)
				{	print "Returning : " 
					print "Enter the Date of Arrival(dd) : " 
					input RETURNING.day 
					while(RETURNING.day<1 or RETURNING.day>31)
					{	print "Please enter a date between 1 and 31 : " 
						input RETURNING.day 
					}
					print "Enter the Month(mm) : " 
					input RETURNING.month 
					while(RETURNING.month<1 or RETURNING.month>12)
					{	print "Please enter a month between 1 and 12 : " 
						input RETURNING.month 
					}
					print "Enter the Year(yyyy) : " 
					input RETURNING.year 
					while(RETURNING.year<DEPARTING.year)
					{	print "Unfortunately our airline does not travel back in time!" 
						print "Please enter the Year again : " 
						input RETURNING.year 
					}
				}
				print "Class : ECONOMY"  
				print "Number of Adults(12 years and above) : " 
				input PEOPLE.adults 
				while(PEOPLE.adults>3)
				{	print "We are sorry but you can book tickets for only 3 adults at a time!" 
					print "Number of adults : " 
					input PEOPLE.adults 
				}
				print "Number of Children(2-11 years) : " 
				input PEOPLE.child 
				while(PEOPLE.child>3)
				{	print "We are sorry but you can book tickets for only 3 children at a time!" 
					print "Number of Children : " 
					input PEOPLE.child 
				}
				print "Number of Infants(0-23 months) : " 
				input PEOPLE.infant 
				while(PEOPLE.adults>3)
				{	print "We are sorry but you can book tickets for only 3 infants at a time!" 
					print "Number of Infants : " 
					input PEOPLE.infant 
				}
				clrscr() 
				total=PEOPLE.adults+PEOPLE.child+PEOPLE.infant 
				if(total=0)
					break  
				print "Available Flights : " 
				print "S.No  Flight Number  Price  Date of Departure  Date of Arrival" 
				for i=1 to (rand()%5)+2
				{       check=i 
					print i
					print "MAK"
					print (9999-1000+1)+1000	
					print "$" 
					print (deal[promoch-49].cost*total) 
					print DEPARTING.day
					print DEPARTING.month
					print DEPARTING.year 
					if(choice=2)
						print RETURNING.day
						print RETURNING.month
						print RETURNING.year 
					else
						 print "-------------"  
				}
				print "For selecting a flight enter the Serial Number of that respective flight : " 
				input serial_no 
				while(serial_no>check or serial_no<1)
				{	print "Invalid Serial Number!" 
					print "Enter the Serial Number again : " 
					input serial_no 
				}
				clrscr() 
				if(PEOPLE.adults)
					for i=0 to people-1 
					{	print "Enter the information for Passenger "
						print i+1
						print " - Adult" 
						print "Gender(M/F) : " 
						input GENDER 
						while GENDER!='M'and GENDER!='F' and GENDER!='m' and GENDER!='f')
					 		print "Invalid Gender!" 
							print "Gender(M/F) : " 
							input GENDER 
						endwhile
						print "First Name(as in Passport) : " 
						input ADULTS[i].first_name 
						print "Last Name(as in Passport) : " 
						input ADULTS[i].last_name 
					 NEXT  i
					}
				if(PEOPLE.child)
					for i=0 to PEOPLE.child-1
					{	print "Enter the Information for Passenger "
						print i+1+PEOPLE.adults
						print " - Child" 
						print "Gender(M/F) : " 
						input GENDER 
						while GENDER!='M' and GENDER!='F'& and GENDER!='m' and GENDER!='f')
							print "Invalid Gender!" 
							print "Gender(M/F) : " 
							input GENDER 
						endwhile
						print "First Name(as in Passport) : " 
						input CHILD[i].first_name 
						print "Last Name(as in Passport) : " 
						input CHILD[i].last_name 
					 NEXT  i 
					}
				if(PEOPLE.infant)
					for i=0 to PEOPLE.infant-1 
					{	print "Enter the information for Passenger "
						print i+1+PEOPLE.adults+PEOPLE.child
						print " - Infant" 
						print "Gender(M/F) : " 
						input GENDER 
						while GENDER!='M' and GENDER!='F' and GENDER!='m' and GENDER!='f')
							print "Invalid Gender!" 
							print "Gender(M/F) : " 
							input GENDER 
						endwhile
						print "First Name(as in Passport) : " 
						input INFANT[i].first_name 
						print "Last Name(as in Passport) : " 
						input INFANT[i].last_name 
					 NEXT  i 
					}
				clrscr() 
				print "Contact Details" 
				print "Please provide the contact details of one of the passengers in this booking." 
				print "Email Address : " 
				input email_address 
				print "Would you like to receive news and promotional fares?" 
				print "1. Yes2. No" 
				print "Enter your choice : " 
				input news 
				while news!=1 and news!=2
					print "Invalid choice!" 
					print "Enter your choice again : " 
					input news 
				endwhile
				print "Phone Number*" 
				print "Let us contact you by phone or text message if ther are updates to your flight." 
				print "Country Code : +" 
				input PHONE.country_code 
				print "Area Code : " 
				input PHONE.area_code 
				print "Number : " 
				input PHONE.phone_no 
				clrscr() 
				print "Payment by Debit/Credit Card only " 
				print "Enter the Full Name of person who holds the Debit/Credit Card : " 
				input PAYMENT.full_name 
				print "Credit Card Number : " 
				input PAYMENT.card_number 
				print "Security Number(at the back of the Debit/Credit Card) : " 
				input PAYMENT.security_number 
				print "Date of Expiry(mmyyyy) : " 
				input PAYMENT.doe 
				print "OTP : " 
				input PAYMENT.otp) 
				delay(800)
				clrscr() 
				print "      BOOKING SUCCESSFUL  " 
				delay(2500) 
				clrscr() 
			}
			else if(promoch='n' or promoch='N')
			{	delay(500) 
				clrscr() 
			}
			break 
		case 5: //contact us
			clrscr() 
			print "How to contact us" 
			print "Get in touch with us" 
			print "For ticketing or reservations enquiries please call:" 
			print random(10000)
			print random(10000)
			print random(10000) 
			print "Reservations/ticketing enquiries email:"  
			print "makreservations@makisthebest.com" 
			print "Other enquiries email:" 
			print "makeverything@makisthebest.com" 
			print "Feedback email:" 
			print "nobadfeedbacksformak@makisthebest.com" 
			delay(2500) 
			break 
}until wish=’n’ or wish=’N’
































