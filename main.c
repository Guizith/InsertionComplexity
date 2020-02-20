#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*	Atividade 1 Analise e Complexidade de Algoritmos 
	Guilherme Henrique Moreira 22117039-2

	Este programa ira gerar um arquivo "g_data.txt" contendo a quatidade de itens e o tempo que cada vetor demorou para ser ordenado,
	também é gerado um arquivo "script_gnu.plt" contendo o script para plot do grafico na ferramenta Gnuplot
*/
	

void insertionSort(int vet[], int n){ 
    int i, ch, j; 
    for (i = 1; i < n; i++) { 
        ch = vet[i]; 
        j = i - 1; 
        while (j >= 0 && vet[j] > ch) { 
            vet[j + 1] = vet[j]; 
            j = j - 1; 
        } 
        vet[j + 1] = ch; 
    } 

} 

/*
void printv(int arr[], int n){ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
*/

int main(int argc, char *argv[]) {
	
	//numero de elementos em cada vetor 0-9
	int numvet0 = 1000;
	int numvet1 = 3500;
	int numvet2 = 7500;
	int numvet3 = 10000;
	int numvet4 = 15000;
	int numvet5 = 25000;
	int numvet6 = 35000;
	int numvet7 = 45000;
	int numvet8 = 65000;
	int numvet9 = 95000;

	
	//alocação de vetores 0-9
	int vet1[numvet1];
	int vet2[numvet2];
	int vet3[numvet3];
	int vet4[numvet4];
	int vet5[numvet5];
	int vet6[numvet6];
	int vet7[numvet7];
	int vet8[numvet8];
	int vet9[numvet9];
	int vet0[numvet0];
	
	//Preenchimento ramdom(0-100) dos vetores 0-9
	int i;
	for(i=1;i<=numvet1; i++){
		vet1[i]= rand()%100;
	}
		for(i=1;i<=numvet2; i++){
		vet2[i]= rand()%100;
	}
		for(i=1;i<=numvet3; i++){
		vet3[i]= rand()%100;
	}
		for(i=1;i<=numvet4; i++){
		vet4[i]= rand()%100;
	}
		for(i=1;i<=numvet5; i++){
		vet5[i]= rand()%100;
	}
		for(i=1;i<=numvet6; i++){
		vet6[i]= rand()%100;
	}
		for(i=1;i<=numvet7; i++){
		vet7[i]= rand()%100;
	}
		for(i=1;i<=numvet8; i++){
		vet8[i]= rand()%100;
	}
		for(i=1;i<=numvet9; i++){
		vet9[i]= rand()%100;
	}
		for(i=1;i<=numvet0; i++){
		vet0[i]= rand()%100;
	}
	
	//variaveis de armazenamento de tempo
	clock_t  t0,t1,t2,t3,t4,t5,t6,t7,t8,t9;
	
	//ordenação de cada vetor conometrada por Ti=clock();
	t0= clock();
	insertionSort(vet0,numvet0);
	t0= clock() -t0;
	printf("\n Tempo de execucao v0: %.1lf", ((double)t0)/((CLOCKS_PER_SEC/1000)));
	
	
	t1= clock();
	insertionSort(vet1,numvet1);
	t1= clock() -t1;
	printf("\n Tempo de execucao v1: %.1lf", ((double)t1)/((CLOCKS_PER_SEC/1000)));
	
	
	t2= clock();
	insertionSort(vet2,numvet2);
	t2= clock() -t2;
	printf("\n Tempo de execucao v2: %.1lf", ((double)t2)/((CLOCKS_PER_SEC/1000)));
	
	
	t3= clock();
	insertionSort(vet3,numvet3);
	t3= clock() -t3;
	printf("\n Tempo de execucao v3: %.1lf", ((double)t3)/((CLOCKS_PER_SEC/1000)));
	
	
	t4= clock();
	insertionSort(vet4,numvet4);
	t4= clock() -t4;
	printf("\n Tempo de execucao v4: %.1lf", ((double)t4)/((CLOCKS_PER_SEC/1000)));
	
	
	t5= clock();
	insertionSort(vet5,numvet5);
	t5= clock() -t5;
	printf("\n Tempo de execucao v5: %.1lf", ((double)t5)/((CLOCKS_PER_SEC/1000)));
	
	
	t6= clock();
	insertionSort(vet6,numvet6);
	t6= clock() -t6;
	printf("\n Tempo de execucao v6: %.1lf", ((double)t6)/((CLOCKS_PER_SEC/1000)));
	
	
	t7= clock();
	insertionSort(vet7,numvet7);
	t7= clock() -t7;
	printf("\n Tempo de execucao v7: %.1lf", ((double)t7)/((CLOCKS_PER_SEC/1000)));
	
	
	t8= clock();
	insertionSort(vet8,numvet8);
	t8= clock() -t8;
	printf("\n Tempo de execucao v8: %.1lf", ((double)t8)/((CLOCKS_PER_SEC/1000)));
	
	
	t9= clock();
	insertionSort(vet9,numvet9);
	t9= clock() -t9;
	printf("\n Tempo de execucao v9: %.0lf", ((double)t9)/((CLOCKS_PER_SEC/1000)));
	
	//save g_data.txt 
	FILE *sv = fopen("g_data.txt","w");
	fprintf(sv,"%d\t%lf\n",numvet0,(double)t0);
	fprintf(sv,"%d\t%lf\n",numvet1,(double)t1);
	fprintf(sv,"%d\t%lf\n",numvet2,(double)t2);
	fprintf(sv,"%d\t%lf\n",numvet3,(double)t3);
	fprintf(sv,"%d\t%lf\n",numvet4,(double)t4);
	fprintf(sv,"%d\t%lf\n",numvet5,(double)t5);
	fprintf(sv,"%d\t%lf\n",numvet6,(double)t6);
	fprintf(sv,"%d\t%lf\n",numvet7,(double)t7);
	fprintf(sv,"%d\t%lf\n",numvet8,(double)t8);
	fprintf(sv,"%d\t%lf\n",numvet9,(double)t9);
	fclose(sv);
	
	//Save script para exibir o grafico
	FILE *sc = fopen("script_gnu.plt", "w");
	fprintf(sc,"set title \"Ordenação Insertion Sort\"\n ");
	fprintf(sc,"set grid \n ");
	fprintf(sc,"set xlabel \"Quantidade de itens no vetor\"\n ");
	fprintf(sc,"set ylabel \"Tempo gasto para ordenar\"\n ");
	fprintf(sc,"plot \"g_data.txt\" with linespoints lc 1 \n ");
	fclose(sc);
	
	//chamada do script
	system("start script_gnu.plt");
	
	
	system("pause");
	return 0;
}
