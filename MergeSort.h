#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <time.h>
#include <fstream>
#include <string>

void merge(int array[], int const left, int const mid, int const right);
void mergeSort(int array[], int const begin, int const end);

#endif