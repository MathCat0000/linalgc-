#include <stdio.h>
#include <stdlib.h>

#include "matrixCraft.h"


void matrix_print(Matrix matrix);

int main() {

    MatrixErr errore;

    Matrix *matrice_p = matrix_create(2,2,&errore);

    matrix_print(*matrice_p);

    matrix_free(matrice_p);
    
    
    return 0;
}

double matrix_get(const Matrix *m, int r, int c);
void   matrix_set(Matrix *m, int r, int c, double value);


Matrix  *matrix_create(int rows, int cols, MatrixErr *err) {

    if (err) *err = MATRIX_OK;
    
    Matrix *m = malloc(sizeof(Matrix));
    
    m->rows = rows;
    m->cols = cols;
    
    if(!m) {
        if(err) *err = MATRIX_ERR_ALLOC;
        free(m);
        return NULL;
    }
    /*Allocazioni successive*/
    
    /*“Creo un array di rows puntatori, ognuno dei quali potrà puntare a una riga della matrice.”
    Allocazione delle righe (array di puntatori)

    */
    
    m ->data = malloc(rows * sizeof *m -> data);

    //Allocazione per le colonne 

    for (int r = 0; r < rows ; r++)
    {
        m -> data[r] = malloc(cols * sizeof *m-> data[r]);
    }
    

    for(int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++)
        {
            m -> data[i][j] = 0.0;
        }
        
    }

    return  m;
}


void matrix_free(Matrix *matrix) {

    if(!matrix) {
        return;
    }

    //1. Liberare array di puntatori
    for (int r  = 0; r < matrix -> cols; r++)
    {
        free(matrix ->data[r]);
    }
    
    //2. Liberare "indici" delle righe

    free(matrix -> data);


    //3. Liberare struttura

    free(matrix);

    //REGOLA GENERALE

    /*
    Regola generale astratta (riutilizzabile):
    Deallocazione = allocazione in ordine inverso di dipendenza.
    */
}
    


void matrix_print(Matrix matrix) {

    int r = matrix.rows;
    int c = matrix.cols;
    for (int i = 0; i < r; i++)
    {
        printf("|");
        for(int j = 0; j < c; j++) {
            printf("%.2lf  ", matrix.data[i][j]);
            if( j == c - 1 ) printf("|");
        }
        
        puts("");
    }
    
}



/*
Matrix *
→ la funzione alloca memoria e restituisce l’indirizzo della struttura

rows, cols
→ parametri di costruzione

MatrixErr *err
→ canale separato per comunicare l’esito (successo / errore)

È una firma canonica in C per oggetti con ownership esplicita.
*/



