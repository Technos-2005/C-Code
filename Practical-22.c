// #include<stdio.h>
// int main(){
    
//     int sum = 0, student = 0, sub, marks = 0;
    
//     for(student=0;student<5;student++){
        
//         sum = 0;
        
//         printf("\n Enter marks for student [%d] : ",student + 1);
        
//         for(sub=0;sub<3;sub++){
            
//             printf("\n Enter marks for sub [%d] : ",sub + 1);
//             scanf("%d",&marks);
            
//             sum = sum + marks;
//         }
        
//         printf("\n For student [%d] : ",student + 1);
        
//         printf("\n sum is [%d] : ",sum);
        
//         printf("\n Average [%.2f] : ",((float)sum/sub));
//     }
//     return 0;
// }
#include<stdio.h>

int main() {
  int student = 0, sum = 0, marks = 0, sub;
  for (student = 0; student < 5; student++) {
    sum = 0;
    printf("\n Enter Marks for Student - %d ", student + 1);
    for (sub = 0; sub < 3; sub++) {
      printf("\nEnter Marks for Subject - %d ", sub + 1);
      scanf("%d", & marks);
      sum = sum + marks;
    }
    printf("\n For Student - %d : ", student + 1);
    printf("\n Sum = %d", sum);
    printf("\n Average = %.2f", ((float) sum) / sub);
  }
  return 0;
}