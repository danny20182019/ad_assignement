#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int fift = 500;
    int twofive = 250;            //* Dan Nana Samaila Ahmed
    int twice = 200;
    int ones = 100;
    int half = 50;
    int quarter = 25;
    int dimes = 10;
    int penny = 5;
    int one = 1 ;
int n = 0;
    int counter = 0;
    do
    {
        n = get_int("amount : ");
    }
    while (n<0);

    while(n>=fift)
    {
        counter++;
       n= n-fift;

    }
    while(n>=twofive)
    {
        counter++;
        n=n-twofive;


    }
    while(n>=twice){
        counter++;
        n=n-twice;
    }
    while(n>=ones){
        counter++;
        n=n-ones;
    }
while(n>=half){
    counter++;
    n=n-half;
}
while(n>=quarter){
    counter++;
    n=n-quarter;
}
while(n>=dimes){
    counter++;
    n=n-dimes;
}
while(n>=penny){
    counter++;
    n=n-penny;
}
while(n>=one){
    counter++;
    n=n-one;
}
printf("the max coins is %i :", counter);

}