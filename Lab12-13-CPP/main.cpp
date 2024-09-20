// main.cpp
#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"
int main()
{
    std::vector<int> scores;

    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    student* stud = new student("Anton", "Anton", "Antonovich", scores);
    std::cout << stud->get_full_name() << std::endl;
    std::cout << " Average score : " << stud->get_average_score() << std::endl;

    unsigned int teacher_work_time = 40;
    teacher* tch = new teacher("Sergeev", "Dmitriy", "Sergeevich", teacher_work_time);
    //std::cout << tch->get_full_name() << std::endl;
    //std::cout << "Amount of hours: " << tch->get_work_time() << std::endl;
    stud->get_total_info();
    tch->get_total_info();
    return 0;
}

//#include <iostream>
//#include <string>
//#include <windows.h>
//using namespace std;
//class Item
//{
//private:
//	string title;
//	double price;
//public:
//	virtual void getdata()
//	{
//		cout << "\nEnter header : ";
//		cin >> title;
//		cout << "Enter price : ";
//		cin >> price;
//	}
//	virtual void putdata()
//	{
//		cout << "\nHeader: " << title;
//		cout << "\nPrice:" << price;
//	}
//};
//class Paperbook : public Item
//{
//private:
//	int pages;
//public:
//	void getdata()
//	{
//		Item::getdata();
//		cout << "Enter amount of pages : ";
//		cin >> pages;
//	}
//	void putdata()
//	{
//		Item::putdata();
//		cout << "\nPages:" << pages;
//	}
//};
//class AudioBook : public Item
//{
//private:
//	double time;
//public:
//	void getdata()
//	{
//		Item::getdata();
//		cout << "Listening time : ";
//		cin >> time;
//	}
//	void putdata()
//	{
//		Item::putdata();
//		cout << "Listening time : " << time;
//	}
//};
//int main()
//{
//	SetConsoleOutputCP(1251);
//	Item* pubarr[100];
//	int n = 0;
//	char choice;
//	do
//	{
//		cout << "Вводить данные для книги или звукового файла (b/a) ? ";
//		cin >> choice;
//		if (choice == 'b')
//			pubarr[n] = new Paperbook;
//		else
//			pubarr[n] = new AudioBook;
//		pubarr[n++]->getdata();
//		cout << Продолжать((у/n)? ";
//		cin >> choice;
//	} while (choice == 'y');
//	for (int j = 0; j < n; j++)
//		pubarr[j]->putdata();
//	cout << endl;
//	return 0;
//}