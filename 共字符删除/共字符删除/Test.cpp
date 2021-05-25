/*输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。
例如，输入”They are students.”和”aeiou”，
则删除之后的第一个字符串变成”Thy r stdnts.”*/

#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

int main()
{
	string a;
	string b;
	getline(cin, a);
	getline(cin, b);
	int t = b.size();
	for (int i = 0; i < t; i++)
	{
		int str;
		while ((str = a.find(b[i])) != -1)//没找到--返回 string::npos(代表 -1 表示不存在)
		{
			a.erase(str, 1);//删除从str开始的1个字符
		}
	}
	cout << a << endl;
	system("pause");
	return 0;
}