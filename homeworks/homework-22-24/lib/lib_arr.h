#pragma once
const int COL = 5;

//  Функции принимает одномерный массив, его размер и выводит массив на экран.
void show(int arr[], const int SIZE, bool direction = true);
//---------------------------------------------------
// Функции принимает матрицу, количество строк и выводит матрицу на экран.
void show(int arr[][COL],const int ROW);
//---------------------------------------------------
/*
    Функция принимает в качестве
    параметра матрицу(двумерный массив) и инициализирует ее значения
    в переданном в качестве параметров диапазоне.
*/
void fill_this(int arr[][COL],const int ROW, int a = 1, int b = 10);
//---------------------------------------------------
/*
    Функция принимает в качестве
    параметра массив и инициализирует ее значения
    в переданном в качестве параметров диапазоне.
*/
void fill_this(int arr[],const int SIZE, int a = 1, int b = 10);
//---------------------------------------------------
// Функция возвращает среднее арифметическое одномерного массива
double average(int numbers[], const int SIZE);
//---------------------------------------------------
// Функция определяет, присутствует ли значение в массиве
bool find(int arr[], const int SIZE, int disered_number);
//---------------------------------------------------
// Смотрит количество повторений числа в массиве
bool repeations(int arr[], const int SIZE, int disered_number);
//---------------------------------------------------
// Смотрит есть ли число в массиве и возрощает индекс
int find_index(int arr[],const  int SIZE, int disered_number);
/*
    Функция, принимает одномерный массив,его размер	и определяет, 
    является ли массив палиндромом.
*/
bool is_palindrom(int arr[], const int SIZE);
//---------------------------------------------------
// Сортирует массив методом выбора
void sort(int arr[], const int SIZE, bool direction = true);
//---------------------------------------------------
