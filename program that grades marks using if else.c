#include<stdio.h>
int main()
{
int score;
char grade;

printf("Enter score(0-100):");
scanf("%d",&score);

if(score<0||score>100)
{
printf("Invalid score");
return 0;
}
//find grade for given score
//for score>=70
if(score>=70 &&score<=100)
grade='A';

//for score>=60 and <70
else if(score>=60)
grade='B';

//for score>=50 and <60
else if(score>=50)
grade='C';

//for score>=40 and <50
else if(score>=40)
grade='D';

//for score<40
else
grade='E';

//display grade
printf("Grade:%c\n",grade);
return 0;
}
