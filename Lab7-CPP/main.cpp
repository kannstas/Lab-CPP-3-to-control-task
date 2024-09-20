// Task 01 - Time structure

//#include <iostream>
//#include <windows.h>
//using namespace std;
//struct Time
//{
//	int hours;
//	int mins;
//	int sec;
//
//	void Showsec()
//	{
//		int total = hours * 3600 + mins * 60 + sec;
//		cout << "Total sec:" << total << '\n';
//	}
//
//	Time Settime()
//	{
//		Time t;
//		cout << "Hours" << '\n';
//		cin >> t.hours;
//		cout << "Mins" << '\n';
//		cin >> t.mins;
//		cout << "Secs" << '\n';
//		cin >> t.sec;
//
//		if (t.sec > 59)
//		{
//			int buf = t.sec / 60;
//			t.mins += buf;
//			t.sec = t.sec % 60;
//		}
//		if (t.mins > 59)
//		{
//			int buf = t.mins / 60;
//			t.hours += buf;
//			t.mins = t.mins % 60;
//		}
//		return t;
//	}
//	Time Addtime(const Time& t1, const Time& t2)
//	{
//		Time t3;
//		int buf;
//		t3.sec = t1.sec + t2.sec;
//		if (t3.sec > 59)
//		{
//			buf = t3.sec / 60;
//			t3.mins += buf;
//			t3.sec = t3.sec % 60;
//		}
//		t3.mins += t1.mins + t2.mins;
//		if (t3.mins > 59)
//		{
//			buf = t3.mins / 60;
//			t3.hours += buf;
//			t3.mins = t3.mins % 60;
//		}
//		t3.hours += t1.hours + t2.hours;
//		return t3;
//
//	}
//	Time Decrtime(const Time& t1, const Time& t2)
//	{
//		Time t3;
//		int buf;
//		if (t1.hours < t2.hours)
//		{
//			t3.hours = 0;
//			t3.mins = 0;
//			t3.sec = 0;
//			return t3;
//		}
//		else
//		{
//			t3.hours = t1.hours - t2.hours;
//			if (t1.mins < t2.mins)
//			{
//				buf = t1.mins + 60;
//				t3.mins = buf - t2.mins;
//				t3.hours--;
//			}
//			else
//			{
//				t3.mins = t1.mins - t2.mins;
//			}
//			if (t1.sec < t2.sec)
//			{
//				buf = t1.sec + 60;
//				t3.sec = buf - t2.sec;
//				t3.mins--;
//			}
//			else
//			{
//				t3.sec = t1.sec - t2.sec;
//			}
//
//			return t3;
//		}
//	}
//
//};
//
//void Printtime(Time t)
//{
//	cout << "Hours: " << t.hours << " Mins: " << t.mins << " Seconds: " << t.sec << '\n';
//}
//
//int main()
//{
//	Time t1 = t1.Settime();
//	Printtime(t1);
//	Time t2 = t2.Settime();
//	Printtime(t2);
//	Time t3 = t3.Decrtime(t1, t2);
//	Printtime(t3);
//}

//Task 02 - Roots
//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//struct Roots
//{
//	int flag;
//	double x1;
//	double x2;
//	Roots Myroot(double a, double b, double c)
//	{
//		Roots r;
//		double discr = pow(b, 2) - 4 * a * c;
//		if (discr > 0)
//		{
//			r.x1 = (-b - sqrt(discr)) / 2.0 * a;
//			r.x2 = (-b + sqrt(discr)) / 2.0 * a;
//			r.flag = 1;
//			return r;
//		}
//		else if (discr == 0)
//		{
//			r.x1 = (-b) / 2.0 * a;
//			r.x2 = r.x1;
//			r.flag = 0;
//			return r;
//		}
//		else
//		{
//			r.flag = -1;
//			return r;
//		}
//	}
//};
//
//int main()
//{
//	Roots r = r.Myroot(1, 5, 10);
//	cout << "Flag: " << r.flag << " x1: " << r.x1 << " x2: " << r.x2 << '\n';
//}

//Task 03 - Roots v2
#include <iostream>
#include <windows.h>
#include <tuple>
using namespace std;
using Tuple = tuple<double, double, int>;

Tuple Myroot(double, double, double);
int main()
{
	double a = 1;
	double b = 2;
	double c = 0;
	Tuple res = Myroot(a, b, c);
	cout << "("
				<< std::get<0>(res) << ", "
				<< std::get<1>(res) << ", "
				<< std::get<2>(res) << ")" << endl;
	return 0;

}

Tuple Myroot(double a, double b, double c)
{
	double discr = pow(b, 2) - 4 * a * c;
	if (discr > 0)
	{
		double x1 = (-b - sqrt(discr)) / 2.0 * a ;
		double x2 = (-b + sqrt(discr)) / 2.0 * a;
		int flag = 1;
		return make_tuple(x1,x2, flag);
	}
	else if (discr == 0)
	{
		double x1 = (-b ) / 2.0 * a;
		double x2 = x1;
		int flag = 0;
		return make_tuple(x1, x2, flag);
	}
	else
	{
		int flag = -1;
		return make_tuple(0, 0, flag);
	}
}
