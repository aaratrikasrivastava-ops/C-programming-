#include<stdio.h>
struct Student 
{ 
  int rollno;
  char name[30];
  int marks[5];
  float avg;
  char grade;
};
void inputStudent(struct Student *s) 
{
  printf("Enter Roll no. :");
  scanf("%d",&s->rollno);
  printf("Enter the name of the student:");
  scanf("%s", s->name);
  printf("Enter 5 marks :");
  int sum=0;
  for(int i=0;i<5;i++)
    {
    scanf("%d", &s->marks[i]);
    sum+= s->marks[i];
    }
  s->avg=sum/5.0;
}
void calculateGrade(struct Student *s) 
{
  float average= s->avg;
  if(average>=90)
  s->grade = 'A';
  else if(average>=75)
  s->grade = 'B';
  else if(average>=64)
  s->grade = 'C';
  else
  s->grade = 'D';
}
void displayStudent(struct Student s)
{
printf("Roll no. : %d\n",s.rollno);
printf("Name : %s\n",s.name);
printf("Marks: ");
  for(int i=0;i<5;i++)
    {
    printf("%d\n", s.marks[i]);
    }
printf("Average : %.2f\n",s.avg);
printf("Grade : %c\n",s.grade);
}
int main()
{
struct Student s;
inputStudent(&s);
calculateGrade(&s);
displayStudent(s);
return 0;
}
