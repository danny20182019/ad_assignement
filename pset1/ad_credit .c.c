#include <stdio.h>
#include <cs50.h>



int main (void)
{
 long long number;

int count=0;
//* allow the user to insert his card number(positif one)

    do{
        number=get_long_long("please your card number: ");

    }
    while (number<0);

//* assign ccdigit to number and count digit of number

long long ccdigit = number;
while(ccdigit>0)
{
    ccdigit=ccdigit/10;
    count++;
}
//* cheking if digit of the card is valid
if(count!=13 && count!=15 && count!=16)
{
    printf("this is an invalid card number");      //* Dan Nana Samaila Ahmed
}
//* starting from the last number
 ccdigit = number ;  //* reset the initialization
 int sum=0;

for(int i=1; i<=count; i++)
{
    int dig =ccdigit%10;
 if (i%2==0)    //* condition when i equal to a even position
 {
     dig=dig*2; //*  then multiply this number by 2
 }
 if(i%2!=0)     //* condition when i equal to an odd position
 {
     dig=dig*1;  //* keep the same digit
 }
 if(dig>9)       //* condition when digit greater than 9
 {
     dig=dig-9;  //* substract by 9 it is the same than breaking the number and add  digit together
 }
 sum=sum+dig;          //* store all in variable sum
 ccdigit=ccdigit/10;   //* and divide the number by 10 to make i moving


}

if (sum%10!=0)
{
 printf("invalid card");
}else{
    printf("this card is valid  ");
}
ccdigit=number;
while (ccdigit>100)
{
    ccdigit=ccdigit/10;
}
int firstd = ccdigit;
if ((firstd==34 ||firstd==37)&&( count ==15)&&(sum%10==0))
{
    printf(" from Amex ");
}
else if ((firstd>50 && firstd<56&&count==16)&&(sum%10==0))
{
    printf(" from Mastercard");
}
else if ((firstd/10==4 )&&(count==13 || count==16)&&(sum%10==0))
{
printf("  from visa");
}
else
{
    printf("card number from another bank");
}


}
