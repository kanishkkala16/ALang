# include<stdio.h> 

int main()
{
    int n_students, n_subjects;
    n_students = 3;
    n_subjects = 5;

    int array[3][5];
    for(int i=0;i<3;i++){// simplicity lel
        for(int j=0;j<5;j++){
            printf("Enter the marks of student %d in subject %d\n",i+1, j+1);
            scanf("%d", &array[i][j]);
        }

    }
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("The marks of student %d in subject %d are: %d \n",i+1, j+1, array[i][j]);
        }

    }
    return 0;
}