#include <stdlib.h>
#include <stdio.h>

#define N 5
int *duplicate(int *v1, int nElements)
{
    int *v2 = (int *)malloc(nElements * sizeof(int));
    for (int i = 0; i < nElements; i++)
    {
        v2[i] = v1[i];
    }
    return v2;
}

int main()
{
    int v1[N] = {3, -8, 63, 1, 7};
    int *v2 = duplicate(v1, N);
    for (int i = 0; i < N; i++)
    {
        printf("%d %d\n", v1[i], v2[i]);
    }

    // missing free statement
    free(v2);
    v2 = NULL;
    return 0;
}