#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void mainMenu();
void contactUs();
void newMenu();
void signUp();
void signIn();
void display();
void Continue();
void afterLogin();
void placeOrder();
void delete();
void cart();
struct user{
	char fullName[50];
	char email[50];
        char address[50];
	char password[50];
	char username[50];
	char phone[50];
};
struct carts
{
int item_id;
char *product_name[10];
float buy_price;
};
struct carts item[30];
int product_id[10]={101,102,103,104,105,106,107,108,109,110};
char *productName[10]={"Dress1","Dress2","Dress3","Dress4","Dress5","Dress6","Dress7","Dress8","Dress9","Dress10"};
int price[10]={1000,280,970,450,3000,5000,350,1400,800,650};
int discount[10]={11,0,10,0,17,19,0,13,10,0};
int gst[10];
float total[10];
char username[50],pword[50];
FILE *fp;
int usrFound = 0;
struct user user,usr;
char password2[50];
void takeinput(char ch[50]) //take input for registration
{    
	fgets(ch,50,stdin);
	ch[strlen(ch) - 1] = 0; 
 }
char generateUsername(char email[50],char username[50])    //generate username using email
{  
	for(int i=0;i<strlen(email);i++)
    {
		if(email[i] == '@') break;
		else username[i] = email[i];
	}
}
void main()
{
	char ch;
	printf("*****************************************\n");
	printf("*****************************************\n");
        printf("*                                       *\n");
        printf("*                                       *\n");
        printf("*     Welcome to our shopping portal    *\n");
        printf("*                                       *\n");
        printf("*                                       *\n");
	printf("*****************************************\n");
	printf("*****************************************\n");
	printf("press enter key to continue...\n");
	scanf("%c",&ch);
	if(ch==0x0A)
	{
	mainMenu();
	}
	else
	{
		exit(EXIT_SUCCESS);
	}
	getch();
}
void mainMenu()    //main menu
{
system("cls");
 printf("****************************************\n");
 printf("******************MENU******************\n");
 printf("*               1.Display              *\n");
 printf("*               2.SignUp               *\n");
 printf("*               3.SignIn               *\n");
 printf("*               4.Contact Us           *\n");
 printf("*               5.Exit                 *\n");
 printf("****************************************\n");
 printf("****************************************\n");
int choice;
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	display();
	break;
	case 2:
	signUp();
	break;
	case 3:
	signIn();
	break;
	case 4:
	contactUs();
	break;
    case 5:
    exit(EXIT_SUCCESS);
	default:
	printf("Invalid option");
}
}
void display() //display items
{
system("cls");
printf("ID\t\tNAME\t\tPRICE\t\tDISCOUNT\tGST\t\tTOTAL");

FILE *f;
f=fopen("clothes.txt","w");
    if(f==NULL)
    {
        printf("unable to open file");
    }
    for(int i=0;i<10;i++)
    {
            if(price[i]>500)
            {
            gst[i]=18;
            }
            else
            {
                gst[i]=0;
            }
        total[i] = price[i]+((gst[i]*price[i])*0.01)-((discount[i]*price[i])*0.01);
        fprintf(f,"\n%d\t\t%s\t\t%d\t\t%d%%\t\t%d%%\t\t%.2f",product_id[i],productName[i],price[i],discount[i],gst[i],total[i]);
     }
    fclose(f);
    char ch;
    f=fopen("clothes.txt","r");
    do
    {
    ch = fgetc(f);
    putchar(ch);
    } while (ch!=EOF); 
    fclose(f);
    if(usrFound==0)
    {
    printf("\n\n");
    printf("Login first to purchase any product\n");
    Continue();
    }    
}

void Continue()
{
    int option;
    printf("\npress 1 to go back or 0 to exit\n");
    scanf("%d",&option);
    if(option==1)
    {
    mainMenu();
    }
    else 
    {
    exit(EXIT_SUCCESS);
    }
}

void newMenu() //new menu after login
{
 system("cls");
 printf("****************************************\n");
 printf("******************MENU******************\n");
 printf("*               1.Display              *\n");
 printf("*               2.Cart                 *\n");
 printf("*               3.SignOut              *\n");
 printf("****************************************\n");
 printf("****************************************\n");
}
void afterLogin() 
{
 char ch;
 int choice;
 printf("\n\nEnter your choice\n");
 scanf("%d",&choice);
 int id;
 FILE *f;
 switch(choice)
 {
     case 1:
     display();
      printf("\nEnter the id of the product you want to purchase\n");
     do
     {
     f=fopen("cart.txt","a+");
     scanf("%d",&id);
     for(int i=0;i<10;i++)
       {
           if(price[i]>500)
            {
            gst[i]=18;
            }
            else
            {
                gst[i]=0;
            }
        total[i] = price[i]+((gst[i]*price[i])*0.01)-((discount[i]*price[i])*0.01);
        if(id==product_id[i])
        {
        fprintf(f,"\n%d\t%s\t%.2f\n",product_id[i],productName[i],total[i]);
        fclose(f);
        }
       }
        fgetc(stdin);
       printf("Do you want to add more product to cart y/n \n");
       scanf("%c",&ch);
       fgetc(stdin);
       if(ch=='n')
       {
        newMenu();
        printf("\n\t\t\t\t\t\tWelcome %s",usr.fullName);
        printf("\n\n|Full Name:\t%s",usr.fullName);
        printf("\n|Email:\t\t%s",usr.email);
        printf("\n|Username:\t%s",usr.username);
        printf("\n|Contact no:\t%s",usr.phone);
        afterLogin();
       }
     }while(ch=='y');
       fclose(f);
       break;
     case 2:
     cart();
    break;
     case 3:
     mainMenu();
     break;
     default:
     printf("invalid choice");
 }
}
void delete()
{
    system("cls");
    printf("****************************************************\n");
    printf("****************************************************\n");
    printf("*               Delete Items From Cart             *\n");
    printf("****************************************************\n");
    printf("****************************************************\n");
    FILE *f,*f1;
    char ch,option,c;
    int i=0,id;

    f = fopen("cart.txt","r");
   do
    {
    ch = fgetc(f); 
    putchar(ch);   
    } while (ch!=EOF);
    fclose(f);
    fgetc(stdin);
     printf("Do you want to continue y/n \n");
     scanf("%c",&c);
       fgetc(stdin);
       if(c=='n')
       {
        cart();
       }
       else if(c=='y')
       {
        printf("Enter the id of product you want to delete\n");
        f=fopen("cart.txt","r");
        f1=fopen("temp.txt","a");
        scanf("%d",&id);
        rewind(f);
         while(fscanf(f, "%d %s %f",&item[i].item_id,item[i].product_name,&item[i].buy_price)!= EOF)
        {
        if(item[i].item_id!=id)
        {
        fprintf(f1,"\n%d\t%s\t%.2f\n",item[i].item_id,item[i].product_name,item[i].buy_price);
        }
         i++;
        }
        fclose(f);
        fclose(f1);
        remove("cart.txt");
        rename("temp.txt","cart.txt");
       }
       fgetc(stdin);
      printf("Do you want to delete more y/n \n");
     scanf("%c",&option);
     fgetc(stdin);
     if(option=='y')
     {
      delete();
     }
     else if(option=='n')
       {
        cart();
       }
}
void cart() //add product to cart
{
    system("cls");
    printf("****************************************************\n");
    printf("****************************************************\n");
    printf("*                   Shopping Cart                  *\n");
    printf("****************************************************\n");
    printf("****************************************************\n");
    FILE *f2;
    char ch;
    int choice;
    f2 = fopen("cart.txt","r");
    do
    {
    ch = fgetc(f2);
    putchar(ch);
    } while (ch!=EOF); 
    fclose(f2);
    
    printf("\n****************************************************\n");
    printf("****************************************************\n");
    printf("*               1.Place Order                      *\n");
    printf("*               2.Delete                           *\n");
    printf("*               3.Back                             *\n");
    printf("****************************************************\n");
    printf("****************************************************\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        placeOrder();
    }
    else if(choice==2)
    {
       delete(); 
    }
    else if(choice==3)
    {
        newMenu();
        printf("\n\t\t\t\t\t\tWelcome %s",usr.fullName);
        printf("\n\n|Full Name:\t%s",usr.fullName);
        printf("\n|Email:\t\t%s",usr.email);
        printf("\n|Username:\t%s",usr.username);
        printf("\n|Contact no:\t%s",usr.phone);
        afterLogin();
    }
    else
    {
        printf("invalid");
        exit(EXIT_SUCCESS);
    }
}
void placeOrder()
{
system("cls");
printf("********************************************\n");
printf("********************************************\n");
printf("*          THANK YOU FOR SHOPPING          *\n");
printf("********************************************\n");
printf("********************************************\n");
FILE *fp;
float total_mrp=0;
char ch;
fp = fopen("cart.txt","r");
int i=0;
while( fscanf(fp, "%d %s %f",&item[i].item_id,item[i].product_name,&item[i].buy_price)!= EOF )
    {
        printf("%d\t\t%s\t\t%.2f\n",item[i].item_id,item[i].product_name,item[i].buy_price);
       total_mrp+= item[i].buy_price;
        i++;
    }
    printf("\n\t\tTotal price : %.2f",total_mrp);
    fclose(fp);
    printf("\n\n");
    printf("||Name:- %s\n",usr.fullName);
    printf("||Delivery Address:- %s\n",usr.address);
    printf("||Contact No:- %s\n",usr.phone);
    printf("||email :- %s\n",usr.email);
    fgetc(stdin);
    printf("\n");
    printf("Are you sure,you want to place order y/n\n");
     scanf("%c",&ch);
       fgetc(stdin);
       if(ch=='n')
       {
       /* newMenu();
        afterLogin();*/
        cart();
       }
       if(ch=='y')
       {
        printf("Your order has been placed\n");
        int rem = remove("cart.txt");
        if(rem==0)
       {
        printf("\nThank you for shopping.Your order will be delivered within 7-8 days");
        Continue();
       }
       }
       
        //fgetc(stdin);
}
void signUp() //user registration
{
    system("cls");
   printf("*****************************************\n");
   printf("*****************************************\n");
   printf("**               SignUp                **\n");
   printf("*****************************************\n");
   printf("*****************************************\n");
fgetc(stdin);
printf("Enter your full name\n");
takeinput(user.fullName);
printf("Enter your email\n");
takeinput(user.email);
printf("Enter your address\n");
takeinput(user.address);
printf("Enter your contact no\n");
takeinput(user.phone);
printf("Enter your password\n");
scanf("%s",user.password);
printf("Confirm your password\n");
scanf("%s",password2);
if(!strcmp(user.password,password2)){
generateUsername(user.email,user.username);
fp = fopen("Users.dat","a+");
fwrite(&user,sizeof(struct user),1,fp);
if(fwrite != 0) printf("\nYou are successfully registered, Your username is %s",user.username);
else printf("\n\nSorry! Something went wrong :(");
fclose(fp);
}
else{
printf("\n\nPassword donot matched");
}
Continue();
}
void signIn()   //Login Page
{
system("cls");
printf("*****************************************\n");
printf("*****************************************\n");
printf("**               SignIn                **\n");
printf("*****************************************\n");
printf("*****************************************\n");
fgetc(stdin);

printf("\nEnter your username:\t");
takeinput(username);
printf("Enter your password:\t");
scanf("%s",pword);
fp = fopen("Users.dat","r");
while(fread(&usr,sizeof(struct user),1,fp))
{
if(!strcmp(usr.username,username))
{
if(!strcmp(usr.password,pword))
{
//system("cls");
 newMenu();//after login menu call
printf("\n\t\t\t\t\t\tWelcome %s",usr.fullName);
printf("\n\n|Full Name:\t%s",usr.fullName);
printf("\n|Email:\t\t%s",usr.email);
printf("\n|Username:\t%s",usr.username);
printf("\n|Contact no:\t%s",usr.phone);
getch();	
}
else {
printf("\n\nInvalid Password!");
}
usrFound = 1;
}
}
if(!usrFound){
printf("\n\nYou are not registered!");
Continue();
}
fclose(fp);
afterLogin();
}
void contactUs() //contact us
 {
    system("cls");
    printf("***********************************\n");
    printf("***********************************\n");
    printf("**             Contact Us        **\n");
    printf("***********************************\n");
    printf("***********************************\n");
    int z;
    FILE *fptr;
    char ch;
    fptr = fopen("cont.txt","r");
    if(fptr ==NULL)
    {
        printf("unable to open file");
        exit(EXIT_FAILURE);
    }
    do
    {
    ch = fgetc(fptr);
    putchar(ch);
    } while (ch!=EOF); 
    fclose(fptr);
    printf("\n");
     printf("press 1 to continue or 0 to exit\n");
    scanf("%d",&z);
    switch(z)
    {
     case 1:
     mainMenu();
     break;
     case 0:
     exit(0);
      break;
     default:
     printf("Invalid option");
     break;
    } 
    getch();
 }
