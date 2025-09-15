#include <stdio.h>

int main() {
    char name[50], roll[20];
    float cgpa;

    printf("Enter Name of Student: ");
    scanf("%s", name);
    printf("Roll Number: ");
    scanf("%s", roll);
    printf("Enter CGPA/percentage: ");
    scanf("%f", &cgpa);

    printf("Name of Student: %s\n", name);
    printf("Roll Number: %s\n", roll);
    printf("Percentage Score Secured: %.1f%%\n", cgpa);
    return 0;
}
