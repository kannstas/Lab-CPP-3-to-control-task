//Snils with functions
//#include <iostream>
//#include <string>
//using namespace std;
//bool sn_check(string);
//int main()
//{
//	string input;
//	bool result;
//	cout << "Enter snils number (Format: xxxxxxxxx(9 digits) + space + xx (2 digits)" << endl;
//	getline(cin, input);
//	result = sn_check(input);
//	cout << "Your SNILS is valid: " << boolalpha << result<< endl;
//}
//bool sn_check(string snils)
//{
//	string str = snils.substr(0, 9);
//	char temp;
//	int counter = 0, sum = 0;
//	int res;
//	bool final;
//	//cout << "enter SNILS number (9 digits + 2 digit control value) \n";
//	//Checking that Snils have 11 chars
//	if (snils.length() != 11)
//	{
//		cout << "Invalid SNILS.\n";
//		return final = false;
//	}
//	//Checking that chars are digitable only
//	for (char c : str)
//	{
//		if (!isdigit(c)) {
//			cout << "Invalid SNILS.\n";
//			return final = false;
//		}
//	}
//	//Checking that there are no more than 2 equal numbers in a row
//	for (int i = 1;i < 9;i++)
//	{
//		temp = str[i - 1];
//		cout << temp << "\n";
//		if (temp == str[i] && temp == str[i + 1])
//		{
//			cout << "Invalid SNILS.\n";
//			return final = false;
//		}
//
//	}
//	//Checking control value.
//	counter = 8;
//	for (int i = 1;i < 10;i++)
//	{
//		char t = str[counter];
//		sum = sum + i * ((str[counter]) - '0');
//		cout << "value : " << str[counter] << " i : " << i << " sum: " << sum << "\n";
//		counter--;
//	}
//	if (sum < 100)
//	{
//		cout << "Control value : " << sum;
//		res = sum;
//	}
//	else if (sum == 100 || sum == 101)
//	{
//		cout << "Control value : " << "00";
//		res = 0;
//	}
//	else if (sum > 101)
//	{
//		cout << "Control value : " << 101 % sum;
//		res = 101 % sum;
//	}
//	else if (sum > 101)
//	{
//		sum = 101 % sum;
//		if (sum < 100)
//		{
//			cout << "Control value : " << sum;
//			res = sum;
//		}
//		else if (sum == 100)
//		{
//			cout << "Control value : " << "00\n";
//			res = 0;
//		}
//	}
//	else
//	{
//		cout << "Something went terribly wrong";
//	}
//	int control_orig = stoi(str.substr(9, 2));
//	if (res == res)
//		return final = true;
//	else
//		return final = false;
//}


////Cubic root
//#include <iostream>
//#include <string>
//using namespace std;
//double cbc_rt(int);
//int main()
//{
//	int a;
//	double result;
//	cout << "Enter value : " << endl;
//	cin >> a;
//	result = cbc_rt(a);
//	cout << "cubic root : " << result<< endl;
//
//}
////double cbc_rt(int a)
////{
////	double res;
////	return res = pow(a, 1.0 / 3);
////}
//double cbc_rt(int a)
//{
//	double x = a;
//	cout << "x : " << x << endl;
//	double yi = x,
//		yi1 = 0;
//
//	while (true)
//	{
//		yi1 = 0.5 * (yi + 3 * x / (2 * yi * yi + x / yi));
//
//		if (abs(yi1 - yi) < pow(10.0, -5.0))
//			break;
//
//		yi = yi1;
//	}
//	return yi;
//}

//Triangles
//#include <iostream>
//#include <string>
//using namespace std;
//double calc_tri(int);
//double calc_tri(int,int,int);
//int main()
//{
//    int a, b, c;
//    char choice;
//    cout << "Triangle has equal sizes? (y/n)" << endl;
//    cin >> choice;
//    switch (choice)
//    {
//    case ('y'):
//        cout << "Enter one size" << endl;
//        cin >> a;
//        cout << "Square of the triangle : " << calc_tri(a) << endl;
//        break;
//    case('n'):
//        cout << "Enter a" << endl;
//        cin >> a;
//        cout << "Enter b" << endl;
//        cin >> b;
//        cout << "Enter c" << endl;
//        cin >> c;
//        cout << "Square of the triangle : " << calc_tri(a, b, c) << endl;
//        break;
//    default:
//        cout << "Wrong symbol!" << endl;
//        return 0;
//    }
//}
//double calc_tri(int a)
//{
//    double sum;
//    double p = (a * 3) / 2;
//    sum = sqrt(p * pow((p - a), 3));
//    return sum;
//}
//double calc_tri(int a, int b , int c)
//{
//    double sum;
//    double p = (a + b + c) / 2.0;
//    sum = sqrt(p * (p - a) * (p - b) * (p - c));
//    return sum;
//}


//Recursive line
//#include <iostream>
//#include <string>
//using namespace std;
//int recline(int n);
//int res;
//int main()
//{
//    int n{ 5 };
//    int sum = recline(n);
//    cout << "sum : " << sum << endl;
//}
//int recline(int a)
//{
//    cout << "a : " <<  a << endl;
//    if (a > 0)
//        return (a * 5 + recline(a - 1));
//    return 0;
//}

//Recursive binary code
#include <iostream>
#include <string>
using namespace std;
int reccode(int n);
int main()
{
    int n{ 11 };
    int result = reccode(n);
}
int reccode(int num)
{
    if (num > 1)
        (reccode(num / 2));
    cout << num%2;
    return num;
}


//#include <iostream>
//#include <string>
//using namespace std;
//string privet(string);
//void privet(string,int);
//
//int main()
//{
//    int a;
//    string name;
//    cout << "What is your name?" << endl;
//    cin >> name;
//    cout << privet(name);
//    cout << "Input number:" << endl;
//    cin >> a;
//    privet(name,a);
//    return 0;
//}
//
//string privet(string name)
//{
//    string str = "Hello , " + name;
//    return str;
//
//}
//void privet(string name, int k)
//{
//    cout << name << ", " << "hello! " << "you input " << k << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//long double firBinSearch(double, int);
//
//int main()
//{
//	int n;
//	double a;
//	cout << "Enter first number(1 - 1000. Up to 6 digits after dot)" << endl;
//	cin >> a;
//	cout << "Enter second number(1 - 10)" << endl;
//	cin >> n;
//	cout << "Result : " << firBinSearch(a, n);
//}
//
//long double firBinSearch(double a, int n)
//{
//	double L = 0;
//	double R = a;
//	while (R - L > 1e-10)
//	{
//		double M = (L + R) / 2;
//		if (pow(M, n) < a)
//		{
//			L = M;
//		}
//		else
//		{
//			R = M;
//		}
//	}
//	return R;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//int addNumders(int);
//int addNumders(int,int);
//int gcd(int, int);
//int main()
//{
//	int n,inter,a;
//	cout << "Enter number" << endl;
//	cin >> n;
//	cout << "Result : " << addNumders(n)<<endl;
//	cout << "Enter interval" << endl;
//	cin >> inter;
//	cout << "Result : " << addNumders(n,inter)<<endl;
//	cout << "Enter number" << endl;
//	cin >> n;
//	cout << "Enter number2" << endl;
//	cin >> a;
//	cout << "Result total : " << gcd(n, a) << endl;
//
//}
//int addNumders(int n)
//{
//	if (n == 1) return 1;
//	else return (n + addNumders(n - 1));
//}
//int addNumders(int n,int a)
//{
//	int sum =0;
//	for (int i = n; i <= a;i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
//int gcd(int m, int n)
//{
//	if (n == 0) return m;
//	//cout << gcd(n, m % n) << endl;
//	return gcd(n, m % n);
//}
