#include<stdio.h>
#include<stdlib.h>

#define Pepsi(num_drinks) (num_drinks*50)
#define Sprite(num_drinks) (num_drinks*50)
#define Redbull(num_drinks) (num_drinks*250)
#define Dew(num_drinks) (num_drinks*50)
#define Sting(num_drinks) (num_drinks*60)
#define Fanta(num_drinks) (num_drinks*50)

void P();   /// Pepsi
void S();   /// Sprite
void RB();  /// RedBull
void D();   /// Dew
void ST();  /// Sting
void F();   /// Fanta




int main()
{
     char cont;
       int select;
 //       FILE *h ;
   //     h = fopen("Vendi Data.txt","w");
     //   fprintf(h,"\n\t\tSoftDrink Vendi\n\n");
       // fclose(h);

    system("COLOR fc");

do{


    printf("\n    Welcome To SoftDrink Vendi    \n\n");
    printf(" Press 1 for Pepsi     =/ 50  PKR \n");
    printf(" press 2 for Sprite    =/ 50  PKR \n");
    printf(" press 3 for Redbull   =/ 250 PKR \n");
    printf(" press 4 for Dew       =/ 50  PKR \n");
    printf(" Press 5 for Sting     =/ 60  PKR \n");
    printf(" Press 6 for Fanta     =/ 50  PKR \n\n ");
    printf("\n\t Press 0 for Exit \n\n");

    printf("\n Enter Your SoftDrinks Code =\t");
    scanf("\t%d",&select);

    switch(select)
    {

	case 0:
    puts("\n Hope to see you soon Fella !!\n");
    exit(0);
    break;
    case 1:
    puts("\n Pepsi. The Choice of a New Generation !!\n");
    P();
    break;
    case 2:
    puts("\n Great Lymon Taste !!\n");
    S();
    break;
    case 3:
    puts("\n It Gives You Wiiiings !!\n");
    RB();
    break;
    case 4:
    puts("\n Do the Dew. !!\n");
    D();
    break;
    case 5:
    puts("\n Drink Fanta, stay Bamboocha. !!\n");
    ST();
    break;
    case 6:
    puts("\n Thunderrrrr Storm. !!\n");
    F();
    break;
    default:
    printf("\n \t\t\t\tyou \n Enter wrong no.");

    }
        printf("\nDo You want to continue (Y/N)?");
        scanf("\n%c",&cont);

    }
        while(cont == 'y' && cont != 'n' || cont == 'Y' && cont != 'N');

}

void P()
{
        int num_drinks,Total_Bill,deposite;

do{
        printf("\n Enter the Amount of Drinks :\t");
        scanf("%d",&num_drinks);

        if(num_drinks>10)
            {
                Total_Bill=Pepsi(num_drinks);
                Total_Bill=Total_Bill-50;
                printf("\nYou Got a Discount of 50rs on your Entire Bill ");
                printf("\n Your Total bill is %d",Total_Bill);

            }
            else if(num_drinks>30)
                {
                    Total_Bill=Pepsi(num_drinks);
                    Total_Bill=Total_Bill-100;
                    printf("\n You Got a Discount of 100rs on your Entire Bill ");
                    printf("\n Your Total bill is %d",Total_Bill);

                }
                else if(num_drinks<=0)
                    {
                        printf("\n\n You entered wrong Number !!\n");
                        printf(" Try Again !!\n\n");
                    }
                    else
                        {
                            Total_Bill=Pepsi(num_drinks);
                            printf("\n Your total bill is %d\n ",Total_Bill);
                        }

}while(num_drinks<=0);

                printf("\n Enter the payment :\t");
                scanf("%d",&deposite);

        if(Total_Bill<=deposite)
        {

        FILE *pf ;
        pf = fopen("Vendi Data.txt","a");

            int receipt=Total_Bill-deposite;

                printf("\n *************\n ");          fprintf(pf,"\nPEPSI\n");
            printf("\n Total_Bill=%d",Total_Bill);    fprintf(pf,"\t%d",Total_Bill);
            printf("\n Deposite=%d",deposite);     fprintf(pf,"\n\t%d",deposite);
            printf("\n Balance=%d",receipt);            fprintf(pf,"\n\t%d\n\n",receipt);
            printf("\n *****************");
            printf("\n Thanks for Shopping \n");

         fclose(pf);
         }
        else {

            int reciept=deposite-Total_Bill;
            printf("\n \n Enter more %d",reciept);
            printf("\n Not Enough Try Again !! \n");
            }
}

void S()
{
        int num_drinks,Total_Bill,deposite;

do{

        printf("\n Enter the Amount of Drinks :\t");
        scanf("%d",&num_drinks);
        if(num_drinks>10)
            {
                Total_Bill=Sprite(num_drinks);
                Total_Bill=Total_Bill-50;
                printf("\nYou Got a Discount of 50rs on your Entire Bill ");
                printf("\n Your Total bill is %d",Total_Bill);
            }
            else if(num_drinks>30)
                {
                    Total_Bill=Sprite(num_drinks);
                    Total_Bill=Total_Bill-100;
                    printf("\n You Got a Discount of 100rs on your Entire Bill ");
                    printf("\n Your Total bill is %d",Total_Bill);
                }
                else if(num_drinks<=0)
                    {
                        printf("\n\n You entered wrong Number !!\n");
                        printf(" Try Again !!\n\n");
                    }
                    else
                        {
                            Total_Bill=Sprite(num_drinks);
                            printf("\n \n Your total bill is %d\n ",Total_Bill);
                        }
}while(num_drinks<=0);
                printf("\n ");
                printf("\n \n Enter the payment :\t");
                scanf("%d",&deposite);

       if(Total_Bill<=deposite)
        {

        FILE *pf ;
        pf = fopen("Vendi Data.txt","a");

            int receipt=Total_Bill-deposite;

                printf("\n *************\n ");          fprintf(pf,"\nSprite\n");
            printf("\n Total_Bill=%d",Total_Bill);    fprintf(pf,"\t%d",Total_Bill);
            printf("\n Deposite=%d",deposite);     fprintf(pf,"\n\t%d",deposite);
            printf("\n Balance=%d",receipt);            fprintf(pf,"\n\t%d\n\n",receipt);
            printf("\n *****************");
            printf("\n Thanks for Shopping \n");

         fclose(pf);
         }
         else {
            int reciept=deposite-Total_Bill;
            printf("\n \n Enter more %d\n ",reciept);
            printf("\n Not Enough Try Again !! \n");
        }
}

void RB()
{
        int num_drinks,Total_Bill,deposite;
do{
        printf(" \n Enter the Amount of Drinks :\t");
        scanf("%d",&num_drinks);
        if(num_drinks>10)
        {
            Total_Bill=Redbull(num_drinks);
            Total_Bill=Total_Bill-50;
            printf("\n You Got a Discount of 100rs on your Entire Bill ");
            printf("\n Your Total bill is %d",Total_Bill);
        }
        else if(num_drinks>30)
            {
                Total_Bill=Redbull(num_drinks);
                Total_Bill=Total_Bill-100;
                printf("\n You Got a Discount of 100rs on your Entire Bill ");
                printf("\n Your Total bill is %d",Total_Bill);
            }
              else if(num_drinks<=0)
                    {
                        printf("\n\n You entered wrong Number !!\n");
                        printf(" Try Again !!\n\n");
                    }
                    else
                        {
                            Total_Bill=Redbull(num_drinks);
                            printf(" \n Your total bill is %d",Total_Bill);
                        }
}while(num_drinks<=0);
                printf("\n \n Enter the payment :\t");
                scanf("%d",&deposite);

       if(Total_Bill<=deposite)
        {

        FILE *pf ;
        pf = fopen("Vendi Data.txt","a");

            int receipt=Total_Bill-deposite;

                printf("\n *************\n ");          fprintf(pf,"\nRedBull\n");
            printf("\n Total_Bill=%d",Total_Bill);    fprintf(pf,"\t%d",Total_Bill);
            printf("\n Deposite=%d",deposite);     fprintf(pf,"\n\t%d",deposite);
            printf("\n Balance=%d",receipt);            fprintf(pf,"\n\t%d\n\n",receipt);
            printf("\n *****************");
            printf("\n Thanks for Shopping \n");

         fclose(pf);
         }
         else {
            int reciept=deposite-Total_Bill;
            printf("\n \n Enter more %d",reciept);
            printf("\n Not Enough Try Again !!\n\n");
        }
}

void D()
{
        int num_drinks,Total_Bill,deposite;

do{
        printf(" \n Enter the Amount of Drinks :\t");
        scanf("%d",&num_drinks);
        if(num_drinks>10)
            {
                Total_Bill=Dew(num_drinks);
                Total_Bill=Total_Bill-50;
                printf("\n You Got a Discount of 50rs on your Entire Bill ");
                printf("\n Your Total bill is %d",Total_Bill);
        }
        else if(num_drinks>30)
            {
                Total_Bill=Dew(num_drinks);
                Total_Bill=Total_Bill-100;
                printf("\n You Got a Discount of 100rs on your Entire Bill ");
                printf("\n Your Total bill is %d",Total_Bill);
            }
              else if(num_drinks<=0)
                    {
                        printf("\n\n You entered wrong Number !!\n");
                        printf(" Try Again !!\n\n");
                    }
                    else
                        {
                            Total_Bill=Dew(num_drinks);
                            printf("\n Your total bill is %d",Total_Bill);
                        }
}while(num_drinks<=0);
            printf("\n Enter the payment :\t");
            scanf("%d",&deposite);

       if(Total_Bill<=deposite)
        {

        FILE *pf ;
        pf = fopen("Vendi Data.txt","a");

            int receipt=Total_Bill-deposite;

                printf("\n *************\n ");          fprintf(pf,"\nDEW\n");
            printf("\n Total_Bill=%d",Total_Bill);    fprintf(pf,"\t%d",Total_Bill);
            printf("\n Deposite=%d",deposite);     fprintf(pf,"\n\t%d",deposite);
            printf("\n Balance=%d",receipt);            fprintf(pf,"\n\t%d\n\n",receipt);
            printf("\n *****************");
            printf("\n Thanks for Shopping \n");

         fclose(pf);
         }
         else {
            int reciept=deposite-Total_Bill;
            printf("\n Enter more %d",reciept);
            printf("\n Not Enough Try Again !!\n\n");
        }
}

void ST()
{
        int num_drinks,Total_Bill,deposite;
do{
        printf("\n Enter the Amount of Drinks :\t");
        scanf("%d",&num_drinks);

        if(num_drinks>10)
            {
                Total_Bill=Sting(num_drinks);
                Total_Bill=Total_Bill-50;
                printf("\nYou Got a Discount of 50rs on your Entire Bill ");
                printf("\n Your Total bill is %d",Total_Bill);
            }
            else if(num_drinks>30)
                {
                    Total_Bill=Sting(num_drinks);
                    Total_Bill=Total_Bill-100;
                    printf("\n You Got a Discount of 100rs on your Entire Bill ");
                    printf("\n Your Total bill is %d",Total_Bill);
                }
                else if(num_drinks<=0)
                    {
                        printf("\n\n You entered wrong Number !!\n");
                        printf(" Try Again !!\n\n");
                    }
                    else
                        {
                            Total_Bill=Sting(num_drinks);
                            printf("\n Your total bill is %d",Total_Bill);
                        }
}while(num_drinks<=0);
            printf("\n Enter the payment :\t");
            scanf("%d",&deposite);

       if(Total_Bill<=deposite)
        {

        FILE *pf ;
        pf = fopen("Vendi Data.txt","a");

            int receipt=Total_Bill-deposite;

                printf("\n *************\n ");          fprintf(pf,"\nSting\n");
            printf("\n Total_Bill=%d",Total_Bill);    fprintf(pf,"\t%d",Total_Bill);
            printf("\n Deposite=%d",deposite);     fprintf(pf,"\n\t%d",deposite);
            printf("\n Balance=%d",receipt);            fprintf(pf,"\n\t%d\n\n",receipt);
            printf("\n *****************");
            printf("\n Thanks for Shopping \n");

         fclose(pf);
         }
         else {
            int reciept=deposite-Total_Bill;
            printf("\n Enter more %d money",reciept);
            printf("\n Not Enough Try Again !!\n\n");
        }
}

void F()
{
        int num_drinks,Total_Bill,deposite;

do{

        printf("\n Enter the Amount of Drinks :\t");
        scanf("%d",&num_drinks);

        if(num_drinks>10)
            {
                Total_Bill=Fanta(num_drinks);
                Total_Bill=Total_Bill-50;
                printf("\nYou Got a Discount of 50rs on your Entire Bill ");
                printf("\n Your Total bill is %d",Total_Bill);
            }
            else if(num_drinks>30)
                {
                    Total_Bill=Fanta(num_drinks);
                    Total_Bill=Total_Bill-100;
                    printf("\n You Got a Discount of 100rs on your Entire Bill ");
                    printf("\n Your Total bill is %d",Total_Bill);
                }
              else if(num_drinks<=0)
                    {
                        printf("\n\n You entered wrong Number !!\n");
                        printf(" Try Again !!\n\n");
                    }
                    else
                        {
                            Total_Bill=Fanta(num_drinks);
                            printf("\n \n Your total bill is %d\n ",Total_Bill);
                        }
}while(num_drinks<=0);
                    printf("\n Enter the payment :\t");
                    scanf("%d",&deposite);

       if(Total_Bill<=deposite)
        {

        FILE *pf ;
        pf = fopen("Vendi Data.txt","a");

            int receipt=Total_Bill-deposite;

                printf("\n *************\n ");          fprintf(pf,"\nFanta\n");
            printf("\n Total_Bill=%d",Total_Bill);    fprintf(pf,"\t%d",Total_Bill);
            printf("\n Deposite=%d",deposite);     fprintf(pf,"\n\t%d",deposite);
            printf("\n Balance=%d",receipt);            fprintf(pf,"\n\t%d\n\n",receipt);
            printf("\n *****************");
            printf("\n Thanks for Shopping \n");

         fclose(pf);
         }
         else{
            int reciept=deposite-Total_Bill;
            printf("\n Enter more %d",reciept);
            printf("\n Not Enough Try Again !!\n\n");
        }
}
