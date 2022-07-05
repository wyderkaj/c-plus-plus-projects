#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	int h, m, s, a, e;
	e = a = 0;

	while (e == 0)
	{
		cout << "Enter hour" << endl;
		cin >> h;
		cout << "Enter minutes" << endl;
		cin >> m;
		cout << "Enter seconds" << endl;
		cin >> s;
		if (h < 24 && m < 60 && s < 60)
			e++;
		else
			system("cls");
	}
	while (a == 0)
	{
		system("cls");
		cout << h << " : " << m << " : " << s << endl;
		Sleep(1000);
		s++;
		if (s > 59)
		{
			s = 0;
			m++;
		}
		if (m > 60)
		{
			m = 0;
			h++;
		}
		if (h > 24)
		{
			h = 0;
		}
	}
	return 0;
}

