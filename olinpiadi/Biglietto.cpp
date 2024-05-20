#include <stdio.h>
#include <assert.h>
int maxCarnet(int N,int M){
    return N/M;
}
int restoCarnet(int N,int M){
    int resto=N-M*maxCarnet(N,M);
    return resto;
}
int costototale(int N,int M,int A,int B){
    return maxCarnet(N,M)*B+restoCarnet(N,M)*A
;}

int  compra(int N, int M, int A, int B)
{
    int tot = 0;
    int n_carnet = 0;
    
    if(N>M){
        double costo_singolo = (double) B / (double) M;
        n_carnet = N / M;
        if(A<costo_singolo)
            tot = n_carnet * A * M;
        else
            tot = n_carnet * B;
    }
    
    N = N - M * n_carnet;
    if(N * A < B)
        tot += N * A;
    else
        tot += B;
    return tot;
}

int main()
{
    FILE *fr, *fw;
    int N, M, A, B;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

    fprintf(fw, "%d\n", compra(N, M, A, B));
    fclose(fr);
    fclose(fw);
    return 0;
}
