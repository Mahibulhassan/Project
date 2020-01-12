#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
 
int sum(int a,int b, int c, int d, int e)
{
    return a+b+c+d+e;
}
//declar global varialle....
 
int flag[10000];
 
//  Declear the structer for sub and student...
 
struct subjecttype
{
    int bangla,english,ict,math,programming;
};
struct studenttype
{
 
    int id;
    int total;
    struct subjecttype sub;
};
 
int main()
{
    struct studenttype student[100],swaping;
    int i,j,number_of_student,merit=0;
    printf ("How many student in your class : ");
    scanf("%d",&number_of_student);
 
     // Taking all the details for every student....
 
    for (i=0; i<number_of_student; i++)
    {
        printf("Give the id Number %d:",i+1);
        scanf("%d",&student[i].id);
        printf("Give the number of Bangla %d:",i+1);
        scanf ("%d",&student[i].sub.bangla);
        printf("Give the number of English %d:",i+1);
        scanf ("%d",&student[i].sub.english);
        printf("Give the number of Ict %d:",i+1);
        scanf ("%d",&student[i].sub.ict);
        printf("Give the number of Math %d:",i+1);
        scanf ("%d",&student[i].sub.math);
        printf("Give the number of Programming %d:",i+1);
        scanf ("%d",&student[i].sub.programming);
 
        // store total mark every student...
 
        student[i].total=sum(student[i].sub.bangla, student[i].sub.english ,    student[i].sub.ict, student[i].sub.math,    student[i].sub.programming);
 
    }
 
    // sorting by merit position......
 
    for (i=0; i<number_of_student-1; i++)
    {
        for (j=0; j<number_of_student-1-i; j++)
        {
            if (student[j].total < student[j+1].total)
            {
 
                swaping = student[j];
                student[j]=student[j+1];
                student[j+1] = swaping;
 
            }
        }
    }
 
    //  taking flag whose student fail.....
 
    for(i=0;i<number_of_student;i++)
    {
      if (student[i].sub.bangla<40 || student[i].sub.english<50 ||student[i].sub.math<55||student[i].sub.ict<40||student[i].sub.programming<17)
        {
            flag[i]=10;
        }
        else flag[i]=0;
    }
 
    printf ("\n\n\n");
    printf ("Print the result..........................\n\n\n");
 
    for (i=0;i<number_of_student;i++)
    {
        if (flag[i]==0)
        {
            merit++;
            printf("%d Roll get Total number : %d and Merit position :%d\n",student[i].id,student[i].total,merit);
        }
    }
 
    for (i=0;i<number_of_student;i++)
    {
        if (flag[i]==10)
        {
            merit++;
            printf("%d Roll get total number : %d and Merit position : %d\n",student[i].id,student[i].total,merit);
        }
    }
 
    return 0;
}
 
