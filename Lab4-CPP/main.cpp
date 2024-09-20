//Roots

//#include <iostream>
//using namespace std;
//int Myroot(double, double, double, double&, double&);
//int main()
//{
//	double a = 1;
//	double b = 2;
//	double c = 0;
//	double x1 = 0 , x2 = 0;
//	cout << "a = " << a << "; b = " << b << "; c = " << c << "; x1 = " << x1 << "; x2 = " << x2 << std::endl;
//	int res = Myroot(a, b, c, x1, x2);
//	cout << "a = " << a << "; b = " << b << "; c = " << c << "; x1 = " << x1 << "; x2 = " << x2 << std::endl;
//	cout << "Result = " << res;
//	return 0;
//
//}
//
//int Myroot(double a, double b, double c, double& x1, double& x2)
//{
//	double discr = pow(b, 2) - 4 * a * c;
//	if (discr > 0)
//	{
//		x1 = (-b - sqrt(discr)) / 2.0 * a ;
//		x2 = (-b + sqrt(discr)) / 2.0 * a;
//		return 1;
//	}
//	else if (discr == 0)
//	{
//		x1 = (-b ) / 2.0 * a;
//		x2 = x1;
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//}

//Data input
#include <iostream>
using namespace std;
bool Input(int&, int&);
int main()
{
    int a, b;
    if (Input(a, b) == false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    return 0;
}
bool Input(int& a, int& b)
{
    int atest, btest;
    cout << "a = "<< endl;
    cin >> atest;
    cout << "b = " << endl;
    cin >> btest;
    if (atest > 10 && btest > 10)
    {
        a = atest;
        b = btest;
        return true;
    }
    else
        return false;
}


//#include <iostream>
//void fum_value(double, double, double);
//void fum_ptr(double, double*, double*);
//void fum_ref(double, double&, double&);
//void print(double, double);
//
//int main()
//{
//    double k = 2.5;
//    double xv = 10;
//    double yv = 10;
//    print(xv, yv);
//    fum_value(k, xv, yv); // Ïåðåäà÷à â ôóíêöèþ îáû÷íîãî ïàðàìåòðà
//    print(xv, yv);
//    fum_ptr(k, &xv, &yv); // Ïåðåäà÷à â ôóíêöèþ ïàðàìåòðà óêàçàòåëÿ
//    print(xv, yv);
//    fum_ref(k, xv, yv); // Ïåðåäà÷à â ôóíêöèþ ïàðàìåòðà ññûëêè
//    print(xv, yv);
//    return 0;
//}
//
//void fum_value(double k, double x, double y)
//{
//    x = x + k;
//    y = y + k;
//}
//
//void fum_ptr(double k, double* x, double* y)
//{
//    *x = *x + k;
//    *y = *y + k;
//}
//
//void fum_ref(double k, double& x, double& y)
//{
//    x = x + k;
//    y = y + k;
//}
//
//void print(double x, double y)
//{
//    std::cout << "x = " << x << "; y = " << y << std::endl;
//}

//#include <iostream>
//void swap(int*, int*);
//void swap(int&, int&);
//
//int main()
//{
//	int x = 5, y = 10;
//	swap(&x, &y);
//	std::cout << "x = " << x << "; y = " << y << std::endl;
//	swap(x, y);
//	std::cout << "x = " << x << "; y = " << y << std::endl;
//}
//
//void swap(int* x, int* y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void swap(int& x, int& y)
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}
