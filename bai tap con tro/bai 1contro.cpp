#include <stdio.h>

int main()
{
    float e, f;
    printf("nhap e va f: ");
    scanf("%f %f", &e, &f);
    float *ptre, *ptrf;
    ptre = &e;
    ptrf = &f;
    float temp = *ptre;
    *ptre = *ptrf;
    *ptrf = temp;
    printf("Gia tri cua a va b sau khi hoan doi: %g va %g", *ptre, *ptrf);
    return 0;
}
