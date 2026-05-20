#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int roll_no;
    char name[30];
    float marks;
}Student;

int main()
{

FILE*fp, *temp;
 Student s;
int i, n, m, deleteroll;

fp=fopen("stduents.dat","wb");
printf("Enter number of records:");
scanf("%d",&n);

for(int i=0;i<n;i++){


printf("\nEnter Roll No:");
scanf("%d",&s.roll_no);

printf("Enter Name:");
scanf("%s",s.name);

printf("Enter Marks:");
scanf("%f",&s.marks);

fwrite(&s, sizeof(s), 1, fp);
}

fclose(fp);


fp=fopen("stduents.dat","rb");

printf("Enter record number to display:");
scanf("%d",&m);

fseek(fp, (m-1)*sizeof(s),SEEK_SET);

fread(&s, sizeof(s), 1, fp);

printf("\nRecord Found\n");
printf("Roll no=%d\n", s.roll_no);
printf("Name=%s\n", s.name);
printf("Marks=%.2f\n", s.marks);

fclose(fp);

fp=fopen("students.dat","rb");
temp=fopen("temp.dat","rb");

printf("\nEnter ID to delete:");
scanf("%d",&deleteroll);

while(fread(&s, sizeof(s), 1, fp))
{
    if(s.roll_no!=deleteroll){
        fwrite(&s, sizeof(s),1, temp);
    }
}
fclose(fp);
fclose(temp);

remove("student.dat");
rename("temp.dat","student.dat");

printf("\nRecord deleted successfully");

return 0;

}