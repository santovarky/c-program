#include<stdio.h>
int main()
{
    int x ,y ,n,i;
   printf(" enter the values:\n") ;
   scanf("%d",&x);
   scanf("%d",&y);
   /*printf(" enter the case:");
   scanf("%d",&n);*/

for(i=1;i<=7;i++)
 {
printf(" enter the case:");
   scanf("%d",&n);

if(n<=7){


   switch (n){

   case 1:
    if(x<y){
        printf(" TRUE");
        break;
    }
    else{
        printf(" FALSE");
        break;
    }
    case 2:
    if(x>y){
        printf(" TRUE");

    }
    else{
        printf(" FALSE");

    }
    break;

    case 3:
    if(x<=y){
        printf(" TRUE");

    }
    else{
        printf(" FALSE");

    }
    break;
    case 4:
    if((x*x-y)>(y*y-x)){
        printf(" TRUE");

    }
    else{
        printf(" FALSE");
    }
    break;
    case 5:
    if((x*x*x)<(y*x*x)){
        printf(" TRUE");
    }
    else{
        printf(" FALSE");
            }
            break;
    case 6:
    if((x*y)!=(y*x)){
        printf(" TRUE");

    }
    else{
        printf(" FALSE");
        }
        break;
    case 7:
    if((x*y)==(y*x)){
        printf(" TRUE");

    }
    else{
        printf(" FALSE");
    }
    break;
    }
    printf("\n");
    }
    else
        {

printf(" wrong input \n");
        }

 }
    }

