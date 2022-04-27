#include <stdio.h>
#include <stdlib.h>
#include "SortingAlgorithms.h"

//BubbleSort
void bubble_sort(int *v, int n){//v é o vetor a ser ordenado e n seu tamanho
	int i, j, temp, troca;
	for(i=n-1; i>0; i--){
		troca = 0;
		for(j=0; j<i; j++){
			if(v[j]> v[j+1]){
			temp = v[j]; // Troca
			v[j] = v[j+1];
			v[j+1] = temp;
			troca = 1;
			}
		}
		if(troca==0)
			return;
	}
}

//QuickSort
void quick_sort(int *v, int n){//v é o vetor a ser ordenado e n seu tamanho
	if(n>1){
		int x = v[0];
		int a =1; int b = n-1;
		while(1){
			while(a<n && v[a] <=x) a++;
			while(v[b]>x) b--;
			if(a<b){
				int temp = v[a];
				v[a] = v[b];
				v[b] = temp;
				a++;b--;
			}else
				break;
		}
		v[0] = v[b];
		v[b] = x;
		quick_sort(v,b);
		quick_sort(&v[a], n-a);
	}
}

//InsertionSort
void insertion_sort(int *v, int n){//v é o vetor a ser ordenado e n seu tamanho
	int i, j, aux;
	for(i = 1; i < n; i++){
		aux = v[i];
		for(j = i; (j > 0) && (aux < v[j -1]); j--)
			v[j] = v[j - 1];
		v[j] = aux;
	}
}

//MergeSort
void mergeSort_ordena(int *v, int esq, int dir){
	if (esq == dir)
		return;
	int meio = (esq + dir) / 2;
	mergeSort_ordena(v, esq, meio);
	mergeSort_ordena(v, meio+1, dir);
	mergeSort_intercala(v, esq, meio, dir);
	return;
}

void mergeSort_intercala(int *v, int esq, int meio, int dir){
	int i, j, k;
	int a_tam = meio-esq+1;
	int b_tam = dir-meio;
	int *a = (int*) malloc(sizeof(int) * a_tam);
	int *b = (int*) malloc(sizeof(int) * b_tam);
	
	for (i = 0; i < a_tam; i++) a[i] = v[i+esq];
	for (i = 0; i < b_tam; i++) b[i] = v[i+meio+1];
	
	for (i = 0, j = 0, k = esq; k <= dir; k++) {
	if (i == a_tam) v[k] = b[j++];
	else if (j == b_tam) v[k] = a[i++];
	else if (a[i] < b[j]) v[k] = a[i++];
	else v[k] = b[j++];
	}
	free(a); free(b);
}

void merge_sort(int *v, int n) {//v é o vetor a ser ordenado e n seu tamanho
	mergeSort_ordena(v, 0, n-1);
}

//HeapSort
void max_heapfy(int *v, int ind, int n){
	int Left = (2*ind+1);
	int Right = (2*ind+2);
	int maior;
	
	if(Left < n && v[Left] > v[ind]){
		maior = Left;	
	}else{
		maior = ind;
	}
	
	if(Right < n && v[Right] > v[maior]){
		maior = Right;
	}
	
	if(maior != ind){
		int aux = v[ind];
		v[ind] = v[maior];
		v[maior] = aux;
		max_heapfy(v, maior, n);
	}
}

void build_max_heapfy(int *v, int n){
	int i;
	for(i = (int)((n-2)/2); i >= 0; i--){
		max_heapfy(v, i, n);
	}
}

void heap_sort(int *v, int n){//v é o vetor a ser ordenado e n seu tamanho
	build_max_heapfy(v, n);
	
	while(n > 1){
		int aux = v[n-1];
		v[n-1] = v[0];
		v[0] = aux;
		n--;
		max_heapfy(v, 0, n);
	}
}
