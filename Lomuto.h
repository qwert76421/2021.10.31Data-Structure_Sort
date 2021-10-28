#ifndef LOMUTO_H
#define LOMUTO_H

#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <time.h>
#include <fstream>
#include <string>

using namespace std;

int LomutoPartition(int arr[], int low, int high);
void LomutoQuickSort(int arr[], int low, int high);

#endif
