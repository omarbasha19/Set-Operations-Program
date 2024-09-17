#include <stdio.h>

int main()
{
    int A[100], B[100], C[100];
    int sizeA, sizeB, sizeC = 0, i, j, k, flag;

    // Read set A
    printf("Enter the size of set A: ");
    scanf("%d", &sizeA);
    printf("Enter the elements of set A:\n");
    for (i = 0; i < sizeA; i++)
    {
        scanf("%d", &A[i]);
    }

    // Read set B
    printf("Enter the size of set B: ");
    scanf("%d", &sizeB);
    printf("Enter the elements of set B:\n");
    for (i = 0; i < sizeB; i++)
    {
        scanf("%d", &B[i]);
    }

    // Union of A and B
    for (i = 0; i < sizeA; i++)
    {
        C[i] = A[i];
        sizeC++;
    }
    for (i = 0; i < sizeB; i++)
    {
        flag = 0;
        for (j = 0; j < sizeA; j++)
        {
            if (B[i] == A[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            C[sizeC] = B[i];
            sizeC++;
        }
    }
    printf("Union of A and B: ");
    for (i = 0; i < sizeC; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    // Intersection of A and B
    sizeC = 0;
    for (i = 0; i < sizeA; i++)
    {
        for (j = 0; j < sizeB; j++)
        {
            if (A[i] == B[j])
            {
                C[sizeC] = A[i];
                sizeC++;
                break;
            }
        }
    }
    printf("Intersection of A and B: ");
    for (i = 0; i < sizeC; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    // Difference of B and A
    sizeC = 0;
    for (i = 0; i < sizeB; i++)
    {
        flag = 0;
        for (j = 0; j < sizeA; j++)
        {
            if (B[i] == A[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            C[sizeC] = B[i];
            sizeC++;
        }
    }
    printf("Difference of B andA: ");
    for (i = 0; i < sizeC; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    // Subset relation of A and B
    flag = 1;
    for (i = 0; i < sizeA; i++)
    {
        for (j = 0; j < sizeB; j++)
        {
            if (A[i] == B[j])
            {
                break;
            }
        }
        if (j == sizeB)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("A is a subset of B\n");
    }
    else
    {
        printf("A is not a subset of B\n");
    }

    return 0;
}
