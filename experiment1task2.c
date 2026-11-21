#include <stdio.h>

int main() {
    float physics, chemistry, maths;
    float total, average;

    // Input marks for PCM
    printf("Enter Physics marks (out of 100): ");
    scanf("%f", &physics);

    printf("Enter Chemistry marks (out of 100): ");
    scanf("%f", &chemistry);

    printf("Enter Mathematics marks (out of 100): ");
    scanf("%f", &maths);

    // Validate mark inputs
    if (physics < 0 || physics > 100 || 
        chemistry < 0 || chemistry > 100 || 
        maths < 0 || maths > 100) {
        printf("\nError: Marks must be between 0 and 100.\n");=
        return 1;
    }

