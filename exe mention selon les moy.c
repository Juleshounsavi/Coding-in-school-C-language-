#include <stdio.h>

int main(void) {
  float grades[100];
  int i;

  for( i = 0; i < 100; i++){
    printf("Enter the grade for student %d: ", i + 1);
    scanf("%f", &grades[i]);
  }

  for (i = 0; i < 100; i++) {
    if (grades[i] >= 16) {
      printf("Student %d: Très bien\n", i + 1);
    } else if (grades[i] >= 14) {
      printf("Student %d: Bien\n", i + 1);
    } else if (grades[i] >= 12) {
      printf("Student %d: Assez bien\n", i + 1);
    } else if (grades[i] >= 10) {
      printf("Student %d: Moyen\n", i + 1);
    } else {
      printf("Student %d: Insuffisant\n", i + 1);
    }
  }

  return 0;
}
