#include<stdio.h>
int main(){

FILE *input;
 input= fopen("data.txt","r");
  if(input==NULL)
    {
        printf("File could not be opened\n\n");
        return 0;
    }
int ans=0, point=0;
int a[20],i,enter=0;
char ques[20][100],one[20][30],two[20][30],three[20][30],four[20][30];

printf("Press 1 to Enter and 2 to Exit : ");
scanf("%d",&enter);

if(enter==2)
{
    printf("Thanks");
}
else{




   fscanf(input,"%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]%d\n",&ques[1],&one[1],&two[1],&three[1],&four[1],&a[1]);

        printf("\n%s\n%s\n%s\n%s\n%s\n\n",ques[1],one[1],two[1],three[1],four[1]);

printf("ENTER ANSWER : ");
scanf("%d",&ans);


if(ans==a[1])
{
    printf("\nCORRECT , YOUR POINT IS 1\n");
    point=1;
  for(i=2;i<=10;i++)
{
   fscanf(input,"%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]%d\n",&ques[i],&one[i],&two[i],&three[i],&four[i],&a[i]);

        printf("\n%s\n%s\n%s\n%s\n%s\n\n",ques[i],one[i],two[i],three[i],four[i]);
        printf("\nENTER ANSWER : ");
        scanf("%d",&ans);
        if(ans!=a[i])
        {
            printf("\nWRONG ANSWER , YOUR LAST POINT WAS %d\n", point);
            break;
        }
point = point+1;
printf("\nCORRECT , YOUR POINT IS %d\n",point);

}
}




}
fclose(input);
}

