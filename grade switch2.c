int main()
{
  int a, mar, n, i=0;

  printf("Enter Submission Turns: ");
  scanf("%d",&n);
do{

  printf("\nEnter your marks :\n");
scanf("%d", &a);
if(a>=90 && a<=100){
  mar=1;
  }
else if(a>=80 && a<=89){
  mar=2;
  }
else if(a>=70 && a<=79){
  mar=3;
  }
else if(a>=60 && a<=69){
  mar=4;
  }
else if(a>=50 && a<=59){
  mar=5;
}
else if(a>=0 && a<=49){mar=6;}

switch(mar){
  case 1 :printf("\n\nYour Grade is A+ \n\n'Prefect Score' ");
  break;
  case 2 :printf("\n\nYour Grade is A \n\n'Better luck next time' ");
  break;
  case 3 :printf("\n\nYour Grade is B \n\n'You need to study more' ");
  break;
  case 4 :printf("\n\nYour Grade is C \n\n'Be attentive to your studies' ");
  break;
  case 5 :printf("\n\nYour Grade is D \n\n'Go home you are drunk' ");
  break;
  case 6 :printf("You failed\n" );
  break;

  }

  i++;

}while(i<n);

return 0;

}
