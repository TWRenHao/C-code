/*���������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ���
���磬���롱They are students.���͡�aeiou����
��ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.��*/

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
		while ((str = a.find(b[i])) != -1)//û�ҵ�--���� string::npos(���� -1 ��ʾ������)
		{
			a.erase(str, 1);//ɾ����str��ʼ��1���ַ�
		}
	}
	cout << a << endl;
	system("pause");
	return 0;
}