#include <iostream>

//#include <iostream>
//#include <cstring>
//#include <fstream>
//using namespace std;
//int main()
//{
//	double sum = 0;
//	int const n = 100;
//	double nums[n];
//	for (int i = 0; i < n; i++)
//	{
//		nums[i] = (rand() % 100);
//	}
//	ofstream out("test", ios::out | ios::binary);
//	if (!out) {
//		return 1;
//	}
//	out.write((char*)nums, sizeof(nums));
//	out.close();
//	ifstream in("test", ios::in | ios::binary);
//	if (!in) {
//		return 1;
//	}
//	in.read((char*)&nums, sizeof(nums));
//	int k = sizeof(nums) / sizeof(double);
//	for (int i = 0; i < k; i++)
//	{
//		sum = sum + nums[i];
//		cout << nums[i] << ' ';
//	}
//	cout << "\nsum = " << sum << endl;
//	in.close();
//}

//Task 1 - writing into txt file
//#include <iostream>
//#include <cstring>
//#include <fstream>
//#include <string>
//using namespace std;
//int main()
//{
//	string input{};
//	cout << "Enter something cheerful \n";
//	getline(cin, input);
//	ofstream out("Hello.txt", ios::out);
//	if (!out) {
//		cout << "Cant open the file\n";
//		return 1;
//	}
//	out << input;
//	//out.write((char*)input);
//	out.close();
//
//}

//Task 2 - Writing arrays to txt file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    ofstream out("Arrays.txt", ios::out);
    if (!out) {
        cout << "Cant open the file\n";
        return 1;
    }
    for (int i : a)
        out << i << '\t';
    int min = 0;
    int buf = 0;
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
    ofstream out2("Arrays.txt", ios::app);
    out2 <<'\n';
    for (int i : a)
        out2 << i << '\t';
    out.close();
    out2.close();
}
