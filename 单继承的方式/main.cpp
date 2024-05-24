/*��������������Ա���ǳ���̶ȸ��ߵ��࣬���������˵Ĺ��Եĳ���������һ����Ա�ࣨPerson ����
����3�����ݳ�Ա��name����������age�����䣩��sex���Ա𣩣�2����Ա���������캯������������Ϣ�ĺ���display()��
���õ��̳еķ�ʽ����һ��ѧ����Student�������࣬��������2�����ݳ�Ա��grade���꼶����score����ѧ�֣���3����Ա���������캯�����������show()������ѧ�ֵĺ���add()��
add()ԭ��Ϊ��void add(float s)�����У�s��ʾĳ�ſε�ѧ�֣���s���뵽��ѧ��score�С�
Ҫ����main()�ж�����������󣬳�ʼ��������Ϊ������"Xu Li"������20���Ա�'f'���꼶2����ѧ��25.4��ĳ�ſε�ѧ��Ϊ2.6������Ҫ�����show()��add()������

��������ʽ����
�������ʽ�����������ĸ������ݳ�Ա��ֵ���˴��Կո�����

���������롿��
�����������Xu Li 20 f 2 28

������˵�����Ը�����ֵ��ʼ����������󣬵���add()��show()������ѧ�ֲ�������������䡢�Ա��꼶����ѧ�֡�
�����ֱ�׼������50�֣�1�����Ե㡣*/
#include <iostream>
#include <string>
class Person
{
private:
	std::string name;
	int age;
	char sex;
public:
	Person(const char *n, int a, char s)
		: name(n), age(a), sex(s)
	{
		
	}

	void display()
	{
		std::cout << name << " " << age << " "<< sex << " ";
	}
};

class Student : public Person
{
private:
	int grade;
	float score;
public:
	Student(const char *n, int a, char s, int g, float sc)
		: Person(n, a, s), grade(g), score(sc)
	{
		;
	}

	Student &add(float s)
	{
		score += s;
		return *this;
	}

	void show()
	{
		Person::display();
		std::cout << grade << " " << score << " ";
	}
};

int main(int argc, char **argv)
{
	Student s("Xu Li", 20, 'f', 2, 25.4f);
	s.add(2.6f).show();
	return 0;
}