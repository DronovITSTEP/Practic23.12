#include <iostream>

using namespace std;


// передача массива в функцию
void f(int array[], int s) {
    for (int i = 0; i < s; i++) {
        array[i] += 10;
    }
    cout << endl;
}

void f2(int a) {
    a += 10;
}
/*
Написать функцию, определяющую минимум
и максимум (значение и номер) элементов передаваемого
ей массива.
*/
void MinMaxArray(int[], int); // прототип

/*
Написать функцию, меняющую порядок следования элементов 
передаваемого ей массива на противоположный.
*/
void ReversArray(int[], int);

/*
Написать функцию, возвращающую количество простых чисел в 
передаваемом ей массиве.
*/
int CountSimpleNum(int[], int);

/*
Дан массив чисел размерностью 10 элементов. Написать функцию, 
которая сортирует массив по
возрастанию или по убыванию, в зависимости от третьего параметра функции. 
Если он равен true, сортировка
идет по убыванию, если false, то по возрастанию. Первые
2 параметра функции — это массив и его размер, третий
параметр по умолчанию равен false.
*/
void SortArray(int[], int , bool);


int main()
{
    int arr[5]{ 5,8,4,63,1 };
    //f(arr, 5);
    //for (int i = 0; i < 5; i++) {
    //    cout << arr[i] << " ";
    //}
    //int num = 10;
   // cout << num << endl;
    //f2(num);
    //cout << num << endl;



    //MinMaxArray(arr, 5);
    /*for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    ReversArray(arr, 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int count = CountSimpleNum(arr, 5);
    cout << count;*/

    
}

void MinMaxArray(int arr[], int size) {
    int max = arr[0], min = arr[0];
    int imax, imin;

    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
            imax = i;
        }
        if (min > arr[i]) {
            min = arr[i];
            imin = i;
        }
    }

    cout << "Min = " << min << " index = " << imin << endl;
    cout << "Max = " << max << " index = " << imax << endl;
}
void ReversArray(int arr[], int size) {
    int temp;
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
     }

    /*for (int i = 0, j = size - 1; i < j; i++, j--) {
        swap(arr[i], arr[j]);
    }*/
}
int CountSimpleNum(int arr[], int size) {
    int count = 0;
    int j;
    for (int i = 0; i < size; i++) {
        for (j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) break;
        }
        if (j == arr[i] / 2 || arr[i] == 1) count++;
    }
    return count;
}
void SortArray(int arr[], int size, bool f = false) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if ((f) ? arr[j] > arr[j + 1] : arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}