#include "MergeSort.h"
#include "Lomuto.h"
#include "Hoare.h"
#include "DutchFlag.h"
#include "Heap.h"
#include <bits/stdc++.h>

using namespace std;

void printArray(int A[], int size);

int main(int argc, char *argv[]){
    clock_t begin,end;
    int k = atoi(argv[1]);
    long long a = pow(2,k);
    cout << a << endl;
//    srand( time(NULL) );
    int *arr = new int[a]{0};
    for(int i=0;i<a;i++){
        arr[i] = rand()%1000+1;
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    string method= "Lomuto" ; 
    begin = clock();
//  mergeSort(arr, 0, a-1); //done
//  LomutoQuickSort(arr,0,a-1); //done
//  DutchQuickSort(arr,0,a-1); //done
//  heapSort(arr,a);     //done
//  HoareQuickSort(arr,0,a-1); //done
//  printArray(arr, n);
    end = clock();
    double time =  double(end-begin) / double(CLOCKS_PER_SEC) ;
    cout << fixed << time << setprecision(5) <<" sec" << endl;
    delete [] arr;

    char* filename = new char[20];
    strcpy(filename,argv[2]);
    ofstream file;

    file.open("result2.csv", ios_base::app);
    file << method << ",";
    file << k << ",";
    file << a << ",";
    file << time << endl;

    return 0;

}

void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " " ;
}
