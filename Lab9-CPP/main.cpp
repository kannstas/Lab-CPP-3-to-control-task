//
//#include <iostream>
//#include <string>
//using namespace std;
//class DivideByZeroError
//{
//public:
//	DivideByZeroError (): message ("Dividing by zero") { }
//	void printMessage () const {cout << message << endl;}
//private:
//	string message;
//};
//float quotient(int numl, int num2)
//{
//	if (num2 == 0) throw DivideByZeroError();
//	return (float)numl / num2;
//}
//int main()
//{
//	cout << "Enter one digit:\n";
//	int number1, number2;
//	cin >> number1;
//	for (int i = -10; i < 10; i++)
//	{
//		try
//		{
//			float result = quotient(number1, i);
//			cout << "div equals " << result << endl; }
//		catch (DivideByZeroError& error)
//		{
//			cout << "Error: ";
//			error.printMessage();
//		}
//	}
//	return 0; // íîðìàëüíîå çàâåðøåíèå ïðîãðàììû
//}


//#include <iostream>
//#include <string>
//using namespace std;
//class Triangle
//{
//public:
//	class Exsides // our exception class
//	{
//		public:
//			Exsides() : message("One of the sides is more than sum of the two other sides") { }
//			void printMessage () const {cout << message << endl;}
//		private:
//			string message;
//	};
//	int a;
//	int b;
//	int c;
//	Triangle(int first, int second, int third)
//	{
//		a = first;
//		b = second;
//		c = third;
//	}
//	double Squarecalc()
//	{
//		if((a > (b+c)) || (b > (a + c)) || (c > (a + b)))
//			throw Exsides();
//		double p = a + b + c;
//		double s;
//		s = sqrt(p * (p - p / 3) * (p - p / 3) * (p - p / 3));
//	}
//};
//int main()
//{
//	Triangle t1 = Triangle(10, 3, 1);
//	cout << "Triangle sides: " << t1.a << " , " << t1.b << " , " << t1.c;
//	double sum = t1.Squarecalc();
//	//cout << "Triangle square: " << sum;
//}

#include <iostream>
using namespace std;
class Time
{
public:
    class Except_time // our exception class
    {
    public:
        Except_time() : message("Wrong time class handling!") { }
        void printMessage () const {cout << message << endl;}
    private:
        string message;
    };
    Time() : hours{ 0 }, mins{ 0 }, sec{ 0 }
    {
        cout << "Class has been created" << endl;
    }
    Time(int h, int m, int s)
    {
        cout << "Class has been created" << endl;
        if (s > 59)
        {
            int buf = s / 60;
            m += buf;
            s = s % 60;
        }
        if (m > 59)
        {
            int buf = m / 60;
            h += buf;
            m = m % 60;
        }
        cout << "sec " << s << endl;
        cout << "min " << m << endl;
        cout << "hours  " << h << endl;
        Setsec(s);
        Setmins(m);
        Sethours(h);
    }
    void Sethours(int h)
    {
        if (h > 100)
            throw Except_time();
        hours = h;
    }
    void Setmins(int m)
    {
        if (m > 59)
            throw Except_time();
        mins = m;
    }
    void Setsec(int s)
    {
        if (s > 59)
            throw Except_time();
        sec = s;
    }
    int Gethours()
    {
        return hours;
    }
    int Getmin()
    {
        return mins;
    }
    int Getsec()
    {
        return sec;
    }
    void Printtime()
    {
        cout << hours << " : " << mins << " : " << sec << '\n';
    }
    Time Addtime(Time b)
    {
        Time t;
        int temp_sec{ 0 }, temp_min{ 0 }, temp_hour{ 0 };
        temp_sec = sec + b.Getsec();
        if (temp_sec > 59)
        {
            int buf = temp_sec / 60;
            temp_min += buf;
            temp_sec = temp_sec % 60;
        }
        temp_min += mins + b.Getmin();
        if (temp_min > 59)
        {
            int buf = temp_min / 60;
            temp_hour += buf;
            temp_min = temp_min % 60;
        }
        temp_hour += hours + b.Gethours();
        t.Setsec(temp_sec);
        t.Setmins(temp_min);
        t.Sethours(temp_hour);
        return t;

    }
private:
    int hours;
    int mins;
    int sec;
};

int main()
{
    try
    {
        Time t1 = Time(200, 90, 5);
        Time t2 = Time(1, 62, 5);
        Time t3 = Time();
        t1.Printtime();
        t2.Printtime();
        t3 = t1.Addtime(t2);
        t3.Printtime();
    }
    catch(Time :: Except_time message)
    {
        message.printMessage();
        cout << "Error";
        return 1;
    }
    return 0;

}