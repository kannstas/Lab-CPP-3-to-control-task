////Task 01 - template func for array
//#include <iostream>
//using namespace std;
//template<class T>
//auto summarize(T arr[], int size) {
//	double sum{ 0 };
//	for (int i = 0; i < size; i++) {
//		sum += arr[i];
//	}
//	return sum/size;
//}
//int main()
//{
//	int arr[] = { 9,3,17,6,5,4,31,2,12 };
//  double arr1[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
//	int k1 = sizeof(arr) / sizeof(arr[0]);
//	auto sum = summarize(arr, k1);
//	cout << "median sum of the array: " << sum;
//	}

//Task 02 - Template func for stream output
#include <iostream>
#include <vector>
using namespace std;
template<class T>
void Print(const T& data, string delim)
{
    for (auto& item : data)
    {
        cout << item;
        cout << delim;
    }
    cout << "\n";
}


int main() {
    std::vector<int> data = { 1, 2, 3 };
    Print(data, ", ");
}
