#include<stdio.h>
void main () {
// collect information of multiple person
          struct marksheet form int roll num;
          char name [101;
          char subjects [2] [10];
          int max marks;
          int obtained marks [2];
          int total_ obt marks;
        };
          struct marksheet form marksheet [21;
          char name [10] = "divyang";
          char subjects [2] [10] = {"math", "science");
          marksheet [0].roll num = 101;
          for (int i = 0; i < 10; i++)
          marksheet [01. name lil = nameril;
         }
         for (int i = 0; i < 2; i++) s
         for (int ¡ = 0; j < 10; j++) 1
        marksheet [0].subjects [i][j] = subjects [i]ljj;
        marksheet [0].max _marks = 100;
        marksheet [0].obtained_marks [0] = 50;
        marksheet [0] .obtained marks [1] = 40;
        marksheet [0].total obt marks = 0;
        
        for (int i = 0; 1 < 2; i++)
        marksheet [0].total obt marks += marksheet [0].obtained marks [i];
}
        printf("roll no.: %d\n", marksheet[0].roll_num);
        
        printf("name: %s\n", marsksheet[0]. name);
        printf("subjects: %s %s\n", marksheet[0]. subjects[0], marksheet[0]. subjects[1]);
        printf("obtained marks: %d %d\n", marksheet[0]. obtained_marks[0], marksheet[0]. obtained_marks[1]);
        printf("total obtained: %d\n", marksheet[0]. total_obt_marks);
}