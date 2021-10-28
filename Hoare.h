#ifndef HOARE_H
#define HOARE_H

#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <time.h>
#include <fstream>
#include <string>


int HoarePartition(int arr[], int low, int high);
void HoareQuickSort(int arr[], int low, int high);

#endif
