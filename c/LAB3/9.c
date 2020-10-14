#include<stdio.h>

int main()
{
    float attendence, assignment, class_test, midterm, final_exam, total_marks;
    int student,i;

    printf("Number of Student=\t");
    scanf("%d",&student);

    for(i=1;i<=student;++i){
        printf("\nEnter student Attendence ,Assignment ,Class_test, Midterm, Final_exam  marks =\t");
        scanf("%f%f%f%f%f",&attendence,&assignment,&class_test,&midterm,&final_exam);

        total_marks=attendence+assignment+class_test+(midterm*30/50)+(final_exam*40/100) ;

        printf("\nStudent %d: ",i);
        if(total_marks>=90 && total_marks<=100){
            printf("A");
        }
        else if(total_marks>=86){
            printf("A-");
        }
        else if(total_marks>=82){
            printf("B+");
        }
        else if(total_marks>=78){
            printf("B");
        }
        else if(total_marks>=74){
            printf("B-");
        }
        else if(total_marks>=70){
            printf("C+");
        }
        else if(total_marks>=66){
            printf("C");
        }
        else if(total_marks>=62){
            printf("C-");
        }
        else if(total_marks>=58){
            printf("D+");
        }
        else if(total_marks>=55){
            printf("D");
        }
        else{
            printf("F");
        }
    }
    return 0;
}
