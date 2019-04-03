#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int a; int sum_n = 0;

    /*Open File */

    if((fp = fopen("C:\\numbers.txt", "a+")) == NULL )
    {
        fprintf(stderr, "Error opening file. \n ");
        exit(1);
    }

    /* Read File */

    while(fscanf(fp, "%d", &a) != EOF)
    {
        printf("%d \n", a);
        sum_n = sum_n + a; /*create sum*/ /* another way would be: sum_n+ = a; */
    }

    printf("The sum is: %d", sum_n);

    /* Write sum in the file */

    fprintf(fp, "%d", sum_n);

    fclose(fp);

    return 0;
}
