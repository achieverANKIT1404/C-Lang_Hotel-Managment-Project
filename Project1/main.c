#include <stdio.h>
#include <stdlib.h>

int bill,choice;

void menu()
{
        printf("****************::WELCOME TO HOTEL VILLA::****************\n");
        printf("\n");
        printf(":::::::::::FOOD MENU::::::::::\n");
        printf("1) BIRYANI      160 Rs/-\n");
        printf("2) VEG PULLAV   85 Rs/-\n");
        printf("3) SANDWITCH    40 Rs/-\n");
        printf("4) COFEE        20 Rs/-\n");
        printf("0) EXIT\n");
        printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n");
}
void order()
{
    int i=1,price,plate,rec_Cash,ret_Cash,total;
    while(i)
    {
        if(choice!=0)
        {
            printf("\n");
            printf(":::::::FOOD MENU::::::::\n");
            printf("1) BIRYANI      160 Rs/-\n");
            printf("2) VEG PULLAV   85 Rs/-\n");
            printf("3) SANDWITCH    40 Rs/-\n");
            printf("4) COFEE        20 Rs/-\n");
            printf("0) EXIT\n");
            printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n");
        }
        printf("CHOICE YOUR FOOD = ");
        scanf("%d",&choice);

        switch(choice)
        {
             case 1:
             price=160;
             printf("HOW MANY PLATES YOU WANT? = ");
             scanf("%d",&plate);
             printf("OK,NICE CHOICE....!\nANYTHING YOU WANT?\n");
              bill=bill+price*plate;
             break;

             case 2:
             price=85;
             printf("HOW MANY PLATES YOU WANT? = ");
             scanf("%d",&plate);
             printf("OK,NICE CHOICE....!\nANYTHING YOU WANT?\n");
             bill=bill+price*plate;
             break;

             case 3:
             price=40;
             printf("HOW MANY PLATES YOU WANT? = ");
             scanf("%d",&plate);
             printf("OK,NICE CHOICE....!\nANYTHING YOU WANT?\n");
             bill=bill+price*plate;
             break;

             case 4:
             price=20;
             printf("HOW MANY PLATES YOU WANT? = ");
             scanf("%d",&plate);
             printf("OK,NICE CHOICE....!\nANYTHING YOU WANT?\n");
             bill=bill+price*plate;
             break;

             case 0:
             printf("EXIT\n");
             printf("\n");
             printf("   ::::ORDER BILL RECIEPT::::\n");
             printf("\n");
             printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
             printf("YOUR BILL IS = %d"" Rs/-\n",bill);
             printf("\n");
     y:     printf("HOW MUCH CASH YOU HAVE GIVEN? = ");
             scanf("%d",&rec_Cash);
             printf("\n");
             printf("RECIVED CASH = %d"" Rs/-\n",rec_Cash);
             printf("\n");
             if(rec_Cash<bill)
             {
                 bill=bill-rec_Cash;
                 printf("NEED %d Rs/- MORE CASH..!\n",bill);
                 printf("\n");
                 goto y;
             }
             else
             {
                 ret_Cash=rec_Cash-bill;
                 printf("RETURN CASH = %d"" Rs/-\n",ret_Cash);
                 printf("\n");
             }

             if(rec_Cash>bill)
             {
                 total=ret_Cash/2000;
                 printf("%d Note(s) of 2000 Rs/-\n",total);
                 ret_Cash=ret_Cash-(total*2000);

                  total=ret_Cash/500;
                  printf("%d Note(s) of 500 Rs/-\n",total);
                  ret_Cash=ret_Cash-(total*500);

                  total=ret_Cash/200;
                  printf("%d Note(s) of 200 Rs/-\n",total);
                  ret_Cash=ret_Cash-(total*200);

                  total=ret_Cash/100;
                  printf("%d Note(s) of 100 Rs/-\n",total);
                  ret_Cash=ret_Cash-(total*100);

                  total=ret_Cash/50;
                  printf("%d Note(s) of 50 Rs/-\n",total);
                  ret_Cash=ret_Cash-(total*50);

                  total=ret_Cash/20;
                  printf("%d Note(s) of 20 Rs/-\n",total);
                  ret_Cash=ret_Cash-(total*20);

                  total=ret_Cash/10;
                  printf("%d Note(s) of 10 Rs/-\n",total);
                  ret_Cash=ret_Cash-(total*10);

                  total=ret_Cash/5;
                  printf("%d Note(s) of 5 Rs/-\n",total);
                  ret_Cash=ret_Cash-(total*5);

                  total=ret_Cash/2;
                  printf("%d Note(s) of 2 Rs/-\n",total);
                  ret_Cash=ret_Cash-(total*2);

                  total=ret_Cash/1;
                  printf("%d Note(s) of 1 Rs/-\n",total);
                  ret_Cash=ret_Cash-(total*1);
             }
             printf("\n");
             printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");\
             printf("\n");
             printf("************************THANK YOU!,VISIT AGAIN....!************************");
             i=0;
             break;

             default:
             printf("Invalid user choice..!");
        }
    }
}
int main()
{
    menu();
    order();
    return 0;
}
