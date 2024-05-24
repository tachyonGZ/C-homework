/*�������������ֱ���Teacher(��ʦ)���Cadre(�ɲ�)�࣬���ö��ؼ̳з�ʽ��������������������Teacher_Cadre(��ʦ��ɲ�)��Ҫ��

�� �����������ж�������������������(������Date���Ӷ���)���Ա�����ݳ�Ա��

�� ��Teacher���л��������ݳ�Աtitle(ְ��)����Cadre���л��������ݳ�Աpost(ְ��)�� ��Teacher_Cadre���л��������ݳ�Աwages(����)��

�� �����������е��������������ڡ��Ա�����ݳ�Ա����ͬ�����֣���������Щ���ݳ�Աʱ��ָ��������

    �� ��������������Ա�����������ⶨ���Ա������

 �� ��������Teacher_Cadre�ĳ�Ա����show()�е���Teacher���е�display()����������������������ڡ��Ա�ְ�ƣ�Ȼ������cout������ְ���빤�ʡ����main()��ɲ��ԡ�

��������ʽ����
�������ʽ�����������ĸ������ݳ�Ա��ֵ���˴��Կո�����

���������롿��
�����������LiHong 1967/10/12 f  professor Header 8000.00

������˵���������ݣ�"LiHong",1967,10,12,'f',"professor","Header",8000.00��ʼ��Teacher_Cadre�������main()�в���show()��������й����ݡ�

�����ֱ�׼������50�֣�1�����Ե㡣*/

#include <iostream>
#include <string>
#include <iomanip>

class Date
{
private:
    int year,month,day;
public:
    Date(int y, int m, int d);
    friend std::ostream &operator<<(std::ostream &out, const Date &);
};

std::ostream &operator<<(std::ostream &out, const Date &date)
{
    return out << date.year << "/" << date.month << "/" << date.day;
}

Date::Date(int y, int m, int d)
    : year(y), month(m), day(d)
{
    ;
}

class Teacher
{
private:
    std::string name;
    Date birthday;
    char sex;
    std::string title;
public:
    Teacher(const char *n, Date &&date, char s, const char *t);
    void display();
};

Teacher::Teacher(const char *n, Date &&date, char s, const char *t)
    : name(n), birthday(date), sex(s), title(t)
{
    ;
}

void Teacher::display()
{
    std::cout << name << " " << birthday << " " << sex << " " << title << " ";
}

class Cadre
{
private:
    std::string name;
    Date birthday;
    char sex;
    std::string post;
public:
    Cadre(const char *n, Date &&date, char s, const char *p);
    const std::string &get_post();
};

Cadre::Cadre(const char *n, Date &&date, char s, const char *p)
    : name(n), birthday(date), sex(s), post(p)
{
    ;
}

const std::string &Cadre::get_post()
{
    return post;
}

class Teacher_Cadre : public Teacher, public Cadre
{
private:
    double wages;
public:
    explicit Teacher_Cadre(const char *n, int y, int m, int d, char s, const char *t, const char *p, double w);
    void show();
};

Teacher_Cadre::Teacher_Cadre(const char *n, int y, int m, int d, char s, const char *t, const char *p, double w)
    : Teacher(n, Date(y, m, d), s, t), Cadre(n, Date(y, m ,d), s, p), wages(w)
{
    ;
}

void Teacher_Cadre::show()
{
    Teacher::display();
    std::cout << Cadre::get_post() << " " << std::setiosflags(std::ios::fixed) << std::setprecision(2) << wages << " ";
}

int main(int argc, char **argv)
{
    Teacher_Cadre tc("LiHong",1967,10,12,'f',"professor","Header",8000.00);
    tc.show();
    return 0;
}