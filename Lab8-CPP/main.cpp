#include <iostream>
using namespace std;
class Time
{
public:
    Time() : hours{0},mins{0},sec{0}
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
        cout << "sec "<< s << endl;
        cout << "min " << m << endl;
        cout << "hours  " << h << endl;
        Setsec(s);
        Setmins(m);
        Sethours(h);
    }
    void Sethours(int h)
    {
        hours = h;
    }
    void Setmins(int m)
    {
        mins = m;
    }
    void Setsec(int s)
    {
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
        int temp_sec{0}, temp_min{ 0 }, temp_hour{ 0 };
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
    Time t1 = Time(20,1,5);
    Time t2 = Time(1, 62, 5);
    Time t3 = Time();
    cout << t1.Gethours() << " , " << t1.Getmin() << " , " << t1.Getsec();
    //t1.Printtime();
    //t2.Printtime();
    //t3 = t1.Addtime(t2);
    //t3.Printtime();
}






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