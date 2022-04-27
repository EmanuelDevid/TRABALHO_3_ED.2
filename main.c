#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SortingAlgorithms.h"

int main(void) {
	int i;
	int *v = (int *)malloc(10*sizeof(int));//vetor a ser copiado e usado em cada algoritmo 
	int *v1 = (int *)malloc(10*sizeof(int));//vetor do BubbleSort
	int *v2 = (int *)malloc(10*sizeof(int));//vetor do QuickSort
	int *v3 = (int *)malloc(10*sizeof(int));//vetor do InsertionSort
	int *v4 = (int *)malloc(10*sizeof(int));//vetor do MergeSort
	int *v5 = (int *)malloc(10*sizeof(int));//vetor do HeapSort

	srand(time(NULL));//semente para a pseudo-aleatorização dos valores que preencheram o vetor
	for(i = 0; i < 10; i++)
		v[i] = rand();//preenchendo o vetor
    
    for(i = 0; i < 10; i++){//passando o mesmo vetor pra todos os vetores que serão usados em seus respectivos algoritmos
    	v1[i] = v[i]; v2[i] = v[i]; v3[i] = v[i]; v4[i] = v[i]; v5[i] = v[i];
	}

    clock_t tempo1;
    tempo1 = clock();
    bubble_sort(v1, 10);
    tempo1 = clock() - tempo1;//calculando o tempo de ordenação do BubbleSort, n = 1
    
    clock_t tempo2;
    tempo2 = clock();
    quick_sort(v2, 10);
    tempo2 = clock() - tempo2;//calculando o tempo de ordenção do QuickSort, n = 1
    
    clock_t tempo3;
    tempo3 = clock();
    insertion_sort(v3, 10);
    tempo3 = clock() - tempo3;//calculando o tempo de ordenação do InsertionSort, n = 1
    
    clock_t tempo4;
    tempo4 = clock();
    merge_sort(v4, 10);
    tempo4 = clock() - tempo4;//calculando o tempo de ordenação do MergeSort, n = 1
    
    clock_t tempo5;
    tempo5 = clock();
    heap_sort(v5, 10);
    tempo5 = clock() - tempo5;//calculando o tempo de ordenação do HeapSort, n = 1
	
	printf("\n======== TEMPO DE ORDENACAO PARA n = 1 ========");
	printf("\nBubbleSort: %.4lf", (double) tempo1*1000/CLOCKS_PER_SEC);
	printf("\nQuickSort: %.4lf", (double) tempo2*1000/CLOCKS_PER_SEC);
	printf("\nInsertionSort: %.4lf", (double) tempo3*1000/CLOCKS_PER_SEC);
	printf("\nMergeSort: %.4lf", (double) tempo4*1000/CLOCKS_PER_SEC);
	printf("\nHeapSort: %.4lf\n", (double) tempo5*1000/CLOCKS_PER_SEC);
	printf("===============================================\n");
	
	free(v); free(v1); free(v2); free(v3); free(v4); free(v5);
	
	v = (int *)malloc(100*sizeof(int));//vetor a ser copiado e usado em cada algoritmo 
	v1 = (int *)malloc(100*sizeof(int));//vetor do BubbleSort
	v2 = (int *)malloc(100*sizeof(int));//vetor do QuickSort
	v3 = (int *)malloc(100*sizeof(int));//vetor do InsertionSort
	v4 = (int *)malloc(100*sizeof(int));//vetor do MergeSort
	v5 = (int *)malloc(100*sizeof(int));//vetor do HeapSort

	srand(time(NULL));//semente para a pseudo-aleatorização dos valores que preencheram o vetor
	for(i = 0; i < 100; i++)
		v[i] = rand();//preenchendo o vetor
    
    for(i = 0; i < 100; i++){//passando o mesmo vetor pra todos os vetores que serão usados em seus respectivos algoritmos
    	v1[i] = v[i]; v2[i] = v[i]; v3[i] = v[i]; v4[i] = v[i]; v5[i] = v[i];
	}
	
	tempo1 = clock();
    bubble_sort(v1, 100);
    tempo1 = clock() - tempo1;//calculando o tempo de ordenação do BubbleSort, n = 2

    tempo2 = clock();
    quick_sort(v2, 100);
    tempo2 = clock() - tempo2;//calculando o tempo de ordenção do QuickSort, n = 2

    tempo3 = clock();
    insertion_sort(v3, 100);
    tempo3 = clock() - tempo3;//calculando o tempo de ordenação do InsertionSort, n = 2

    tempo4 = clock();
    merge_sort(v4, 100);
    tempo4 = clock() - tempo4;//calculando o tempo de ordenação do MergeSort, n = 2

    tempo5 = clock();
    heap_sort(v5, 100);
    tempo5 = clock() - tempo5;//calculando o tempo de ordenação do HeapSort, n = 2
	
	printf("\n======== TEMPO DE ORDENACAO PARA n = 2 ========");
	printf("\nBubbleSort: %.4lf", (double) tempo1*1000/CLOCKS_PER_SEC);
	printf("\nQuickSort: %.4lf", (double) tempo2*1000/CLOCKS_PER_SEC);
	printf("\nInsertionSort: %.4lf", (double) tempo3*1000/CLOCKS_PER_SEC);
	printf("\nMergeSort: %.4lf", (double) tempo4*1000/CLOCKS_PER_SEC);
	printf("\nHeapSort: %.4lf\n", (double) tempo5*1000/CLOCKS_PER_SEC);
	printf("===============================================\n");
	
	free(v); free(v1); free(v2); free(v3); free(v4); free(v5);
	
	v = (int *)malloc(1000*sizeof(int));//vetor a ser copiado e usado em cada algoritmo 
	v1 = (int *)malloc(1000*sizeof(int));//vetor do BubbleSort
	v2 = (int *)malloc(1000*sizeof(int));//vetor do QuickSort
	v3 = (int *)malloc(1000*sizeof(int));//vetor do InsertionSort
	v4 = (int *)malloc(1000*sizeof(int));//vetor do MergeSort
	v5 = (int *)malloc(1000*sizeof(int));//vetor do HeapSort

	srand(time(NULL));//semente para a pseudo-aleatorização dos valores que preencheram o vetor
	for(i = 0; i < 1000; i++)
		v[i] = rand();//preenchendo o vetor
    
    for(i = 0; i < 1000; i++){//passando o mesmo vetor pra todos os vetores que serão usados em seus respectivos algoritmos
    	v1[i] = v[i]; v2[i] = v[i]; v3[i] = v[i]; v4[i] = v[i]; v5[i] = v[i];
	}
	
	tempo1 = clock();
    bubble_sort(v1, 1000);
    tempo1 = clock() - tempo1;//calculando o tempo de ordenação do BubbleSort, n = 3

    tempo2 = clock();
    quick_sort(v2, 1000);
    tempo2 = clock() - tempo2;//calculando o tempo de ordenção do QuickSort, n = 3

    tempo3 = clock();
    insertion_sort(v3, 1000);
    tempo3 = clock() - tempo3;//calculando o tempo de ordenação do InsertionSort, n = 3

    tempo4 = clock();
    merge_sort(v4, 1000);
    tempo4 = clock() - tempo4;//calculando o tempo de ordenação do MergeSort, n = 3

    tempo5 = clock();
    heap_sort(v5, 1000);
    tempo5 = clock() - tempo5;//calculando o tempo de ordenação do HeapSort, n = 3
	
	printf("\n======== TEMPO DE ORDENACAO PARA n = 3 ========");
	printf("\nBubbleSort: %.4lf", (double) tempo1*1000/CLOCKS_PER_SEC);
	printf("\nQuickSort: %.4lf", (double) tempo2*1000/CLOCKS_PER_SEC);
	printf("\nInsertionSort: %.4lf", (double) tempo3*1000/CLOCKS_PER_SEC);
	printf("\nMergeSort: %.4lf", (double) tempo4*1000/CLOCKS_PER_SEC);
	printf("\nHeapSort: %.4lf\n", (double) tempo5*1000/CLOCKS_PER_SEC);
	printf("===============================================\n");
	
	free(v); free(v1); free(v2); free(v3); free(v4); free(v5);
	
	v = (int *)malloc(10000*sizeof(int));//vetor a ser copiado e usado em cada algoritmo 
	v1 = (int *)malloc(10000*sizeof(int));//vetor do BubbleSort
	v2 = (int *)malloc(10000*sizeof(int));//vetor do QuickSort
	v3 = (int *)malloc(10000*sizeof(int));//vetor do InsertionSort
	v4 = (int *)malloc(10000*sizeof(int));//vetor do MergeSort
	v5 = (int *)malloc(10000*sizeof(int));//vetor do HeapSort

	srand(time(NULL));//semente para a pseudo-aleatorização dos valores que preencheram o vetor
	for(i = 0; i < 10000; i++)
		v[i] = rand();//preenchendo o vetor
    
    for(i = 0; i < 10000; i++){//passando o mesmo vetor pra todos os vetores que serão usados em seus respectivos algoritmos
    	v1[i] = v[i]; v2[i] = v[i]; v3[i] = v[i]; v4[i] = v[i]; v5[i] = v[i];
	}
	
	tempo1 = clock();
    bubble_sort(v1, 10000);
    tempo1 = clock() - tempo1;//calculando o tempo de ordenação do BubbleSort, n = 4

    tempo2 = clock();
    quick_sort(v2, 10000);
    tempo2 = clock() - tempo2;//calculando o tempo de ordenção do QuickSort, n = 4

    tempo3 = clock();
    insertion_sort(v3, 10000);
    tempo3 = clock() - tempo3;//calculando o tempo de ordenação do InsertionSort, n = 4

    tempo4 = clock();
    merge_sort(v4, 10000);
    tempo4 = clock() - tempo4;//calculando o tempo de ordenação do MergeSort, n = 4

    tempo5 = clock();
    heap_sort(v5, 10000);
    tempo5 = clock() - tempo5;//calculando o tempo de ordenação do HeapSort, n = 4
	
	printf("\n======== TEMPO DE ORDENACAO PARA n = 4 ========");
	printf("\nBubbleSort: %.4lf", (double) tempo1*1000/CLOCKS_PER_SEC);
	printf("\nQuickSort: %.4lf", (double) tempo2*1000/CLOCKS_PER_SEC);
	printf("\nInsertionSort: %.4lf", (double) tempo3*1000/CLOCKS_PER_SEC);
	printf("\nMergeSort: %.4lf", (double) tempo4*1000/CLOCKS_PER_SEC);
	printf("\nHeapSort: %.4lf\n", (double) tempo5*1000/CLOCKS_PER_SEC);
	printf("===============================================\n");
	
	free(v); free(v1); free(v2); free(v3); free(v4); free(v5);
	
	v = (int *)malloc(100000*sizeof(int));//vetor a ser copiado e usado em cada algoritmo 
	v1 = (int *)malloc(100000*sizeof(int));//vetor do BubbleSort
	v2 = (int *)malloc(100000*sizeof(int));//vetor do QuickSort
	v3 = (int *)malloc(100000*sizeof(int));//vetor do InsertionSort
	v4 = (int *)malloc(100000*sizeof(int));//vetor do MergeSort
	v5 = (int *)malloc(100000*sizeof(int));//vetor do HeapSort

	srand(time(NULL));//semente para a pseudo-aleatorização dos valores que preencheram o vetor
	for(i = 0; i < 100000; i++)
		v[i] = rand();//preenchendo o vetor
    
    for(i = 0; i < 100000; i++){//passando o mesmo vetor pra todos os vetores que serão usados em seus respectivos algoritmos
    	v1[i] = v[i]; v2[i] = v[i]; v3[i] = v[i]; v4[i] = v[i]; v5[i] = v[i];
	}
	
	tempo1 = clock();
    bubble_sort(v1, 100000);
    tempo1 = clock() - tempo1;//calculando o tempo de ordenação do BubbleSort, n = 5

    tempo2 = clock();
    quick_sort(v2, 100000);
    tempo2 = clock() - tempo2;//calculando o tempo de ordenção do QuickSort, n = 5

    tempo3 = clock();
    insertion_sort(v3, 100000);
    tempo3 = clock() - tempo3;//calculando o tempo de ordenação do InsertionSort, n = 5

    tempo4 = clock();
    merge_sort(v4, 100000);
    tempo4 = clock() - tempo4;//calculando o tempo de ordenação do MergeSort, n = 5

    tempo5 = clock();
    heap_sort(v5, 100000);
    tempo5 = clock() - tempo5;//calculando o tempo de ordenação do HeapSort, n = 5
	
	printf("\n======== TEMPO DE ORDENACAO PARA n = 5 ========");
	printf("\nBubbleSort: %.4lf", (double) tempo1*1000/CLOCKS_PER_SEC);
	printf("\nQuickSort: %.4lf", (double) tempo2*1000/CLOCKS_PER_SEC);
	printf("\nInsertionSort: %.4lf", (double) tempo3*1000/CLOCKS_PER_SEC);
	printf("\nMergeSort: %.4lf", (double) tempo4*1000/CLOCKS_PER_SEC);
	printf("\nHeapSort: %.4lf\n", (double) tempo5*1000/CLOCKS_PER_SEC);
	printf("===============================================\n");
	
	free(v); free(v1); free(v2); free(v3); free(v4); free(v5);
	
	v = (int *)malloc(1000000*sizeof(int));//vetor a ser copiado e usado em cada algoritmo 
	v1 = (int *)malloc(1000000*sizeof(int));//vetor do BubbleSort
	v2 = (int *)malloc(1000000*sizeof(int));//vetor do QuickSort
	v3 = (int *)malloc(1000000*sizeof(int));//vetor do InsertionSort
	v4 = (int *)malloc(1000000*sizeof(int));//vetor do MergeSort
	v5 = (int *)malloc(1000000*sizeof(int));//vetor do HeapSort

	srand(time(NULL));//semente para a pseudo-aleatorização dos valores que preencheram o vetor
	for(i = 0; i < 1000000; i++)
		v[i] = rand();//preenchendo o vetor
    
    for(i = 0; i < 1000000; i++){//passando o mesmo vetor pra todos os vetores que serão usados em seus respectivos algoritmos
    	v1[i] = v[i]; v2[i] = v[i]; v3[i] = v[i]; v4[i] = v[i]; v5[i] = v[i];
	}
	
	tempo1 = clock();
    bubble_sort(v1, 1000000);
    tempo1 = clock() - tempo1;//calculando o tempo de ordenação do BubbleSort, n = 6

    tempo2 = clock();
    quick_sort(v2, 1000000);
    tempo2 = clock() - tempo2;//calculando o tempo de ordenção do QuickSort, n = 6

    tempo3 = clock();
    insertion_sort(v3, 1000000);
    tempo3 = clock() - tempo3;//calculando o tempo de ordenação do InsertionSort, n = 6

    tempo4 = clock();
    merge_sort(v4, 1000000);
    tempo4 = clock() - tempo4;//calculando o tempo de ordenação do MergeSort, n = 6

    tempo5 = clock();
    heap_sort(v5, 1000000);
    tempo5 = clock() - tempo5;//calculando o tempo de ordenação do HeapSort, n = 6
	
	printf("\n======== TEMPO DE ORDENACAO PARA n = 6 ========");
	printf("\nBubbleSort: %.4lf", (double) tempo1*1000/CLOCKS_PER_SEC);
	printf("\nQuickSort: %.4lf", (double) tempo2*1000/CLOCKS_PER_SEC);
	printf("\nInsertionSort: %.4lf", (double) tempo3*1000/CLOCKS_PER_SEC);
	printf("\nMergeSort: %.4lf", (double) tempo4*1000/CLOCKS_PER_SEC);
	printf("\nHeapSort: %.4lf\n", (double) tempo5*1000/CLOCKS_PER_SEC);
	printf("===============================================\n");
	
	free(v); free(v1); free(v2); free(v3); free(v4); free(v5);
	
	return 0;
}
