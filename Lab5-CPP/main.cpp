// Task 01 - Tranferring array to function

//#include <iostream>
//using namespace std;
//void Arr_transfer1(int[],int);
// //void Arr_transfer2(int[],int);
//int main()
//{
//    const int n = 5;
//    int a[n] = { 1,5,7,11,22 };
//    Arr_transfer1(a, n);
//    Arr_transfer2(a, n);
//
//}
//void Arr_transfer1(int Arr[],int n)
//{
//    int s = 0;
//    for (int i = 0; i < n; i++)
//    {
//        s += mas[i];
//    }
//    cout << "sum = " << s << endl;
//}
//void Arr_transfer2(int a[], int N)
//{
//    int min = 0;
//    int buf = 0;
//    for (int i = 0; i < N; i++)
//    {
//        min = i;
//        for (int j = i + 1; j < N; j++)
//            min = (a[j] < a[min]) ? j : min;
//
//        if (i != min)
//        {
//            buf = a[i];
//            a[i] = a[min];
//            a[min] = buf;
//        }
//    }
//    for (int i = 0; i < N : I++)
//        cout << i << '\t';
//}

//Task 2 - returning array from function
//#include <iostream>
//using namespace std;
//int* max_vect(int, int*, int*);
//int main()
//{
//    int a[] = { 1,2,3,4,5,6,7,2 };
//    int b[] = { 7,6,5,4,3,2,1,3 };
//    int kc = sizeof(a) / sizeof(a[0]);
//    int* c;
//    c = max_vect(kc, a, b);
//    for (int i = 0;i < kc; i++)
//        cout << c[i] << " ";
//    cout << endl;
//    delete[]c;
//}
//
//int* max_vect(int n, int* a, int* b)
//{
//    int* z = new int[n];
//    for (int i = 0; i < n; i++)
//    {
//        z[i] = a[i] > b[i] ? a[i] : b[i];
//    }
//    return z;
//}

//Task 3 - Transposition algorhitm search
//#include <iostream>
//using namespace std;
//void Transsrch(int*, const int, int);
//int main()
//{
//	const int n = 10;
//	int key = 5;
//	int a[n] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i : a)
//		cout << i << '\t';
//	Transsrch(a, n, key);
//	for (int i : a)
//		cout << i << '\t';
//}
//
//void Transsrch(int *mas, const int n,int key)
//{
//	int buf{ };
//	for (int i = 0; i < n; i++)
//	{
//		if (i != 0 && mas[i] == key)
//		{
//			cout << "i = " << i << endl;
//			mas[i] = buf;
//			cout << "buf = " << buf << endl;
//			mas[i] = mas[i - 1];
//			mas[i - 1] = buf;
//			cout << "key found on index: " << mas[i] << endl;
//		}
//		else if (i == 0 && mas[i] == key)
//		{
//			cout << "key found on index: " << mas[i] << endl;
//			break;
//		}
//			
//		else
//			continue;
//	}
//}

//Task 4 - Input arguments into the programm
#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char* argv[])
{
    const char* a = "-a";
    const char* m = "-m";
    int x{}, y{}, sum{};
    if (argc < 4) {
        printf("Missing arguements.\n");
        return 0;
    }
    if ((strncmp(argv[1], a, 2) != 0) || (strncmp(argv[1], m, 2) != 0))
    {
        printf("Wrong arguement no 2.\n");
        return 0;
    }
    for (int i{}; i < argc; ++i)
    {
        std::cout << argv[i] << std::endl;
    }
    x = atoi(argv[2]);
    x = atoi(argv[3]);
    if ((strncmp(argv[2], a, 2) == 0))
    {
        sum = x + y;
    }
    else if ((strncmp(argv[3], m, 2) == 0))
    {
        sum = x - y;
    }
    else
        cout << "Somthing went wrong or parameters are not set properly";

    cout << "Result :" << sum;

}



// Lab_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int n = 10;
//    int mas[n];
//    for (int i = 0; i < n; i++)
//    {
//        cout << "mas[" << i << "]=";
//        cin >> mas[i];
//    }
//    int s = 0;
//    for (int i = 0; i < n; i++)
//    {
//        s += mas[i];
//    }
//    cout << "sum = " << s << endl;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int N = 10;
//    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
//    int min = 0;
//    int buf = 0;
//    for (int i = 0; i < N; i++)
//    {
//        min = i;
//        for (int j = i + 1; j < N; j++)
//            min = (a[j] < a[min]) ? j : min;
//
//        if (i != min)
//        {
//            buf = a[i];
//            a[i] = a[min];
//            a[min] = buf;
//        }
//    }
//    for (int i : a)
//        cout << i << '\t';
//}
//
//#include <iostream>
//using namespace std;
//void show_array(const int[], const int);
//bool from_min(const int, const int);
//bool from_max(const int, const int);
//void bubble_sort(int[], const int, bool (*compare)(int, int));
//
//int main()
//{
//
//    const int n = 10;
//    int my_choose = 0;
//    int A[n] = { 9,8,7,6,1,2,3,5,4,9 };
//    cout << "1. Sort by INC \n";
//    cout << "2. Sort by DESC\n";
//    cin >> my_choose;
//    cout << "Original data: ";
//    show_array(A, n);
//    switch (my_choose)
//    {
//    case 1: bubble_sort(A, n, from_min); break;
//    case 2: bubble_sort(A, n, from_max); break;
//    default: cout << "\rÍåèçâåñòíàÿ îïåðàöèÿ ";
//    }
//    show_array(A, n);
//    return 0;
//}
//void show_array(const int Arr[], const int N)
//{
//    for (int i = 0; i < N; i++)
//        cout << Arr[i] << " ";
//    cout << "\n";
//}
//bool from_min(const int a, const int b)
//{
//    return a > b;
//}
//bool from_max(const int a, const int b)
//{
//    return a < b;
//}
//void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
//{
//    for (int i = 1;i < N;i++)
//    {
//        for (int j = 0;j < N - 1;j++)
//        {
//            if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
//        }
//    }
//}

//#include <iostream>
//using namespace std;
//void show_array(const int[], const int);
//bool from_min(const int, const int);
//bool from_max(const int, const int);
//void bubble_sort(int[], const int, bool (*compare)(int, int));
//
//int main()
//{
//    int n{};
//    cout << "Amount of numbers bn array: \n";
//    cin >> n;
//    int* myArray = new int[n];
//    for (int i = 0;i < n;i++)
//        {
//            cout << i << " th number of the array" << '\t';
//            cin >> myArray[i];
//        }
//       
//    bool (*from_f[2])(int, int) = { from_min,from_max };
//    int my_choose = 0;
//    //int A[n] = { 9,8,7,6,1,2,3,5,4,9 };
//    cout << "1. Sort by INC \n";
//    cout << "2. Sort by DESC\n";
//    cin >> my_choose;
//    cout << "Original data: ";
//    show_array(myArray, n);
//    bubble_sort(myArray, n, (*from_f[my_choose - 1]));
//    /*switch (my_choose)
//    {
//    case 1: bubble_sort(A, n, from_min); break;
//    case 2: bubble_sort(A, n, from_max); break;
//    }*/
//    show_array(myArray, n);
//    delete[] myArray;
//    return 0;
//}
//void show_array(const int Arr[], const int N)
//{
//    for (int i = 0; i < N; i++)
//        cout << Arr[i] << " ";
//    cout << "\n";
//}
//bool from_min(const int a, const int b)
//{
//    return a > b;
//}
//bool from_max(const int a, const int b)
//{
//    return a < b;
//}
//void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
//{
//    for (int i = 1;i < N;i++)
//    {
//        for (int j = 0;j < N - 1;j++)
//        {
//            if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
//        }
//    }
//}