//���ͱ�̺�STL����
#include<iostream>
using namespace std;
#include<algorithm>
#include<random>

// //�����������͵ĺ���
// void swapInt(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// //�������������͵ĺ���
// void swapDouble(double &a, double &b){
//     double temp = a;
//     a = b;
//     b = temp;
// }
// //����ģ��
// template<typename T>
// void mySwap(T &a, T &b){
//     T temp = a;
//     a = b;
//     b = temp;
// }
// void test02(){
//     int a = 10, b = 20;
//     double c = 1.1, d = 2.2;
//     mySwap(a, b); //�Զ������Ƶ�
//     mySwap(c, d);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     cout << "c = " << c << endl;
//     cout << "d = " << d << endl;
//     mySwap<int>(a, b); //��ʾָ������
//     mySwap<double>(c, d);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     cout << "c = " << c << endl;
//     cout << "d = " << d << endl;  
// }
// void test01(){
//     int a = 10, b = 20;
//     double c = 1.1, d = 2.2;
//     swapInt(a, b);
//     swapDouble(c, d);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     cout << "c = " << c << endl;
//     cout << "d = " << d << endl;
// }
/*****************************************************/
// template<typename T>
// void func(){
//     cout << "func �ĵ���" << endl;
// }
// void test01(){
//     // func(); //�޷��Զ��Ƶ�!!
//     func<int>();
// }
/*****************************************************/
// int mAdd01(int a, int b){
//     return a+b;
// }
// template<class T>
// int mAdd02(T a, T b){
//     return a+b;
// }

// void test01(){
//     int a = 10, b = 20;
//     char c = 'c';
//     cout << mAdd01(a, c) << endl; //������ʱ���ַ�c��ʽת��ΪASCII��
//     cout << mAdd02(a, c) << endl; //ģ���Զ��Ƶ��޷�ת��
//     cout << mAdd02<int>(a, c) << endl; //��ʾָ�����Ϳ���ת��
// }
/*****************************************************/
// void myPrint(int a, int b){
//     cout << "������ͨ����" << endl;
// }
// template<class T>
// void myPrint(T a, T b){
//     cout << "���ú���ģ��" << endl;
// }
// template<class T>
// void myPrint(T a, T b, T c){
//     cout << "�������غ���ģ��" << endl;
// }
// void test01(){
//     int a = 10, b = 20, c = 30;
//     myPrint(a, b);
// //ͨ����ģ������б���ú���ģ��
//     myPrint<>(a, b);
//     myPrint(a, b, c);
// //�������ģ����Բ������õ�ƥ��, ���ȵ���ģ��
//     char _a = 'a', _b = 'b';
//     myPrint(_a, _b);
// }
/*****************************************************/
//�Ա��������Ƿ����
// class Person{
// public:
//     Person(string name, int age){
//         this->m_Name  = name;
//         this->m_Age = age;
//     }
//     string m_Name;
//     int m_Age;
// };
// template<class T>
// bool myCompare(T &a, T &b){
//     if (a == b) return true;
//     else return false;
// }
// void test01(){
//     int a = 10, b = 20;
//     bool ret = myCompare(a, b);
//     if (ret) cout << "a == b" << endl;
//     else cout << "a != b" << endl;
// }
// // void test02(){
// //     Person p1("Tom", 10);
// //     Person p2("Tom", 10);
// //     bool ret = myCompare(p1, p2);
// //     if (ret) cout << "p1 == p2" << endl;
// //     else cout << "p1 != p2" << endl;
// // }
// //���þ��廯Person�İ汾ʵ�ִ���,���廯���ȵ���
// template<> bool myCompare(Person &p1, Person &p2){
//     if (p1.m_Age = p2.m_Age && p1.m_Name == p2.m_Name) return true;
//     else return false;
// }
// void test03(){
//     Person p1("Tom", 10);
//     Person p2("Tom", 10);
//     bool ret = myCompare(p1, p2);
//     if (ret) cout << "p1 == p2" << endl;
//     else cout << "p1 != p2" << endl;
// }
/*****************************************************/
// template<class NameType, class AgeType>
// class Person{
// public:
//     Person(NameType name, AgeType age){
//         this->m_Name = name;
//         this->m_Age = age;
//     }
//     void showPerson(){
//         cout << "name: " << this->m_Name << endl;
//         cout << "age: " << this->m_Age << endl;
//     }
//     NameType m_Name;
//     AgeType m_Age;
// };
// void test01(){
//     Person<string, int> p1("�����", 999);
//     p1.showPerson();
// }
/*****************************************************/
// template<class NameType, class AgeType = int>
// class Person{
// public:
//     Person(NameType name, AgeType age){
//         this->m_Name = name;
//         this->m_Age = age;
//     }
//     void showPerson(){
//         cout << "name: " << this->m_Name << endl;
//         cout << "age: " << this->m_Age << endl;
//     }
//     NameType m_Name;
//     AgeType m_Age;
// };
// void test01(){
//     //1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//     // Person p1("�����", 1000); //����,�޷����Զ������Ƶ�
//     Person<string, int> p1("�����", 1000);
//     p1.showPerson();
// }
//     //2.��ģ����ģ������б�����Ĭ�ϲ���
// void test02(){
//     Person<string> p2("��˽�", 999);
//     p2.showPerson();
// }
/*****************************************************/
// class Person1{
// public:
//     void showPerson1(){
//         cout << "Person1 show" << endl;
//     }
// };
// class Person{
// public:
//     void showPerson2(){
//         cout << "Person2 show" << endl;
//     }
// };
// template<class T>
// class MyClass{
// public:
//     T obj;
//     //��ģ���еĳ�Ա����
//     void func1(){
//         obj.showPerson1();
//     }
//     void func2(){
//         obj.showPerson2();
//     }
// };
// void test01(){
//     MyClass<Person1>m;
//     m.func1();
//     // m.func2();
// }
/*****************************************************/   
// template<class T1, class T2>
// class Person{
// public:
//     Person(T1 name, T2 age){
//         this->m_Name = name;
//         this->m_Age = age;
//     }
//     void showPerson(){
//         cout << "����: " << this->m_Name << " " << "����: " << this->m_Age << endl;
//     }
//     T1 m_Name;
//     T2 m_Age;
// };
// //1.ָ�����������
// void printPerson1(Person<string, int>&p){
//     p.showPerson();
// }
// void test01(){
//     Person<string, int> p("�����", 999);
//     printPerson1(p);
// }
// //2.����ģ�廯
// template<class T1, class T2>
// void printPerson2(Person<T1, T2>&p){
//     p.showPerson();
//     cout << "T1������Ϊ: " << typeid(T1).name() << endl;
//     cout << "T2������Ϊ: " << typeid(T2).name() << endl;
// }
// void test02(){
//     Person<string, int>p("��˽�", 999);
//     printPerson2(p);
// }
// //3.������ģ�廯
// template<class T>
// void printPerson3(T &p){
//     p.showPerson();
//     cout << "T������Ϊ: " << typeid(T).name() << endl;
// }
// void test03(){
//     Person<string, int> p("��ɮ", 30);
//     printPerson3(p);
// }
/*****************************************************/   
// template<class T>
// class Base{
// public:
//     T m;
// };
// // class Son : public Base{}//����,����֪�������е�T����,���ܼ̳и�����
// class Son : public Base<int>{};
// void test01(){
//     Son s1;
//     s1.m = 114514;   
// }
// template<class T1, class T2>
// class Son2 : public Base<T2>{
// public:
//     Son2(){
//         cout << "T1������Ϊ: " << typeid(T1).name() << endl;
//         cout << "T2������Ϊ: " << typeid(T2).name() << endl;
//     }
//     T2 obj;
// };
// void test02(){
//     Son2<int, char> s2;
// }
/*****************************************************/ 
// template<class T1, class T2>
// class Person{
// public:
//     Person(T1 name, T2 age);//{
//         // this->m_Name = name;
//         // this->m_Age = age;
//     //}
//     void showPerson();//{
//         // cout << "����: " << this->m_Name << endl;
//         // cout << "����: " << this->m_Age << endl;
//     //}
//     T1 m_Name;
//     T2 m_Age;
// };
// //���캯��������ʵ��
// template<class T1, class T2>
// Person<T1, T2>::Person(T1 name, T2 age){
//     this->m_Name = name;
//     this->m_Age = age;
// }
// //��Ա����������ʵ��
// template<class T1, class T2>
// void Person<T1, T2>::showPerson(){
//     cout << "����: " << this->m_Name << endl;
//     cout << "����: " << this->m_Age << endl;
// }
// void test01(){
//     Person<string, int> p("Tom", 20);
//     p.showPerson();
// }
/*****************************************************/ 
// template<class T1, class T2>
// class Person{
// public:
//     Person(T1 name, T2 age);
//     void showPerson();
//     T1 m_Name;
//     T2 m_Age;
// };
// template<class T1, class T2>
// Person<T1, T2>::Person(T1 name, T2 age){
//     this->m_Name = name;
//     this->m_Age = age;
// }
// template<class T1, class T2>
// void Person<T1, T2>::showPerson(){
//     cout << "����: " << this->m_Name << endl;
//     cout << "����: " << this->m_Age << endl;
// }
// #include"Person.cpp" //��һ�ֽ����ʽ:ֱ�Ӱ���Դ�ļ�
// #include"Person.hpp" //�ڶ��ֽ����ʽ:��.h��.cpp�е�����д��һ��,����׺����Ϊ.hpp�ļ�
// void test01(){
//     Person<string, int> p("Jerry", 18);
//     p.showPerson();
// }
/*****************************************************/ 
//ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ
// template<class T1, class T2>
// class Person;
// template<class T1, class T2>
// void printPerson2(Person<T1, T2> p){
//     cout << "����: " << p.m_Name << " " << "����: " << p.m_Age << endl;
// }
// template<class T1, class T2>
// class Person{
//     // //ȫ�ֺ��� ����ʵ��
//     // friend void printPerson1(Person<T1, T2> p){
//     //     cout << "����: " << p.m_Name << " " << "����: " << p.m_Age << endl;
//     // }
//     //ȫ�ֺ�������ʵ��
//     //�ӿ�ģ������б�
//     //���ȫ�ֺ���������ʵ��,��Ҫ�ñ�����֪����������Ĵ���(��ʵ�ִ�����������,���ҽ�Person����ǰ����)(��340��)
//     friend void printPerson2<>(Person<T1, T2> p);
// public:
//     Person(T1 name, T2 age){
//         this->m_Name = name;
//         this->m_Age = age;
//     }
// private:
//     T1 m_Name;
//     T2 m_Age;
// };
// // template<class T1, class T2>
// // void printPerson2(Person<T1, T2> p){
// //     cout << "����: " << p.m_Name << " " << "����: " << p.m_Age << endl;
// // }
// // void test01(){
// //     Person<string,int> p("Tom", 20);
// //     printPerson1(p);
// // }
// void test02(){
//     Person<string, int> p("Jerry", 18);
//     printPerson2(p);
// }
/*****************************************************/ 
#include<vector>
// void myPrint(int val){cout << val << endl;}
// void test01(){
//     vector<int> v; //����һ��vectoe����,����
//     //�������в�������(β��)
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     //ͨ�����������������е�����
//     vector<int>::iterator itBegin = v.begin(); //��ʼ������: ָ�������е�һ��Ԫ��
//     vector<int>::iterator itEnd = v.end();     //����������: ָ�������е����һ��Ԫ�ص���һ��λ��
//     //��һ�ֱ�����ʽ(�Ƚϸ���,������)
//     // while(itBegin!= itEnd){
//     //     cout << *itBegin << endl;
//     //     itBegin++;
//     // }
//     //�ڶ��ֱ�����ʽ(����)
//     // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
//     //     cout << *it << endl;
//     // }
//     //�����ֱ�����ʽ(����STL�ṩ�ı����㷨)
//     for_each(v.begin(), v.end(), myPrint);
// }
/*****************************************************/
//vector��������Զ�����������
// class Person{
// public:
//     Person(string name, int age):m_Name(name),m_Age(age){};
//     string m_Name;
//     int m_Age;
// };
// // void myPrint(Person p){
// //     cout << p.m_Name << " " << p.m_Age << endl;
// // }
// // void test01(){
// //     vector<Person> v;
// //     Person p1("aaa", 10);
// //     Person p2("bbb", 20);
// //     Person p3("ccc", 30);
// //     Person p4("ddd", 40);
// //     Person p5("eee", 50);
// //     v.push_back(p1);
// //     v.push_back(p2);
// //     v.push_back(p3);
// //     v.push_back(p4);
// //     v.push_back(p5);
// //     for (vector<Person>::iterator it = v.begin(); it != v.end(); it++){
// //         cout << (*it).m_Name << " " << (*it).m_Age << endl;
// //         cout << it->m_Name << " " << it->m_Age << endl;
// //     }
// //     for_each(v.begin(), v.end(), myPrint);
// // }
// //vector��������Զ�����������ָ��
// void myPrint(Person* p){
//     cout << p->m_Name << " " << p->m_Age << endl;
// }
// void test02(){
//     vector<Person*> v;
//     Person p1("aaa", 10);
//     Person p2("bbb", 20);
//     Person p3("ccc", 30);
//     Person p4("ddd", 40);
//     Person p5("eee", 50);
//     v.push_back(&p1);
//     v.push_back(&p2);
//     v.push_back(&p3);
//     v.push_back(&p4);
//     v.push_back(&p5);
//     for(vector<Person*>::iterator it = v.begin(); it != v.end(); it++){
//         cout << (*it)->m_Name << " " << (*it)->m_Age << endl;
//     }
//     for_each(v.begin(), v.end(), myPrint);
// }
/*****************************************************/
// void myPrint(vector<int> v){
//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
//         cout << *it << " ";
//     }
//     cout << endl;
// }
// void test01(){
//     vector<vector<int>> v;
//     vector<int>v1;
//     vector<int>v2;
//     vector<int>v3;
//     vector<int>v4;
//     for (int i = 0; i < 4; i++){
//         v1.push_back(i+1);
//         v2.push_back(i+2);
//         v3.push_back(i+3);
//         v4.push_back(i+4);
//     }
//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);
//     v.push_back(v4);
//     // for(vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++){
//     //     for(vector<int>::iterator _it = (*it).begin(); _it != (*it).end(); _it++){
//     //         cout << *_it << " ";
//     //     }
//     //     cout << endl;
//     // }
//     for_each(v.begin(), v.end(), myPrint);
// }
/*****************************************************/
#include<string>
// void test01(){
//     string s1; //Ĭ�Ϲ���

//     const char* str = "hello world";
//     string s2(str);  //ʹ���ַ���s��ʼ�� string(const char* s)
//     cout << "s2 = " << s2 << endl;

//     string s3(s2); //�������� string(const string& str)
//     cout << "s3 = " << s3 << endl;

//     string s4(10, 'a'); //string(int n , char c) ʹ��n���ַ�c��ʼ��
//     cout << "s4 = " << s4 << endl;

// }
/*****************************************************/
// /*
//   string& operator=(const char* s);     //char*�����ַ��� ��ֵ����ǰ���ַ���
//   string& operator=(const string &s);   //���ַ���������ǰ���ַ���
//   string& operator=(char c);            //�ַ���ֵ����ǰ���ַ���
//   string& assign(const char *s);        //���ַ���s������ǰ���ַ���
//   string& assign(const char *s, int n); //���ַ���s��ǰn���ַ�������ǰ���ַ���
//   string& assign(const string *s);      //���ַ���s������ǰ�ַ���
//   string& assign(int n, char c);        //��n���ַ�c������ǰ�ַ���
//   */
//  void test01(){
//     string str1;
//     str1 = "hello world";
//     cout << "str1 = " << str1 << endl;

//     string str2;
//     str2 = str1;
//     cout << "str2 = " << str2 << endl;

//     string str3;
//     str3 = 'a';
//     cout << "str3 = " << str3 << endl;

//     string str4;
//     str4.assign("hello C++");
//     cout << "str4 = " << str4 << endl;

//     string str5;
//     const char* s = "hello C++";
//     str5.assign(s, 5);
//     cout << "str5 = " << str5 << endl;

//     string str6;
//     str6.assign(str5);
//     cout << "str6 = " << str6 << endl;

//     string str7;
//     str7.assign(10, 'w');
//     cout << "str7 = " << str7 << endl;
//  }
/*****************************************************/
// /*
// string& operator+=(const char* str);           //����+=������
// string& operator+=(const char c);              //����+=������
// string& operator+=(const string& str);         //����+=������
// string& append(const char *s);                 //���ַ���s���ӵ���ǰ�ַ�����β
// string& append(const char *s, int n);          //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
// string& append(const string &s);               //ͬoperator+=(const string& str)
// string&append(const string &s,int pos��int n)��//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
// */
// void test01(){
//     string str1 = "��";

//     str1 += "������Ϸ";
//     cout << "str1 = " << str1 << endl;

//     str1 += ':';
//     cout << "str1 = " << str1 << endl;

//     string str2 = "CSGO, Genshin impact";
//     str1 += str2;
//     cout << "str1 = " << str1 << endl;

//     string str3 = "I";
//     str3.append(" love ");
//     cout << "str3 = " << str3 << endl;

//     str3.append("gameabcde", 4);
//     cout << "str3 = " << str3 << endl;

//     //str3.append(str2);
//     //cout << "str3 = " << str3 << endl;

//     //str3.append(str2, 0, 4);
//     //cout << "str3 = " << str3 << endl;
//     str3.append(str2, 6, 14);  //����2:���ĸ�λ�ÿ�ʼ��, ����3:��ȡ�ַ�����
//     cout << "str3 = " << str3 << endl;
// }
/*****************************************************/
// /*
// int find(const string& str, int pos = 0) const;     //����str��һ�γ���λ��,��pos��ʼ����
// int find(const char* s, int pos = 0) const;         //����S��һ�γ���λ��,��pos��ʼ����
// int find(const char*s, int pos, int n) const;       //��posλ�ò���s��ǰn���ַ���һ��λ��
// int find(const char c, int pos = 0) const;          //�����ַ�C��һ�γ���λ��
// int rfind(const string& str, int pos = npos) const; //����str���һ��λ��,��pos��ʼ����
// int rfind(const char* s, int pos = npos) const;     //����S���һ�γ���λ��,��pos��ʼ����
// int rfind(const char* s, int pos, int n) const;     //��pos����s��ǰn���ַ����һ��λ��
// int rfind(const char c,int pos = 0) const;          //�����ַ�C���һ�γ���λ��
// string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
// string& replace(int pos, int n,const char* s);      //�滻��pos��ʼ��n���ַ�Ϊ�ַ���S
// */
// //����
// void test01(){
//     string str1 = "abcdefg";
//     int pos = str1.find("de");
//     if (pos == -1) cout << "δ�ҵ��ַ���" << endl;
//     else cout << "pos = " << pos << endl;
//     pos = str1.rfind("de");  //rfind�����������,find�������Ҳ���
//     cout << "pos = " << pos << endl;
// }
// //�滻
// void test02(){
//     string str1 = "abcdefg";
//     str1.replace(1, 3, "1111");
//     cout << "str1 = " << str1 << endl;
// }
/*****************************************************/
// //�ȽϷ���ֵ: = -> 0; > -> 1; < -> -1
// //�����Ƚ����ַ����Ƿ����,�ж�˭��˭С���岻��
// void test01(){
//     string str1 = "hello";
//     string str2 = "hello";

//     if(str1.compare(str2) == 0) cout << "str1 = str2" << endl;
//     else if(str1.compare(str2) > 0) cout << "str1 > str2" << endl;
//     else cout << "str1 < str2" << endl;
// }
/*****************************************************/
// void test01(){
//     string str1 = "hello";
//     cout << "str1 = " << str1 << endl;
//     //ͨ��[]���ʵ����ַ�
//     for(int i = 0; i < str1.size(); i++){
//         cout << str1[i] << " ";
//     }
//     cout << endl;
//     //ͨ��at��ʽ���ʵ����ַ�
//     for(int i = 0; i < str1.size(); i++){
//         cout << str1.at(i) << " ";
//     }
//     cout << endl;
//     //�޸ĵ����ַ�
//     str1[0] = 'x';
//     cout << "str1 = " << str1 << endl;
//     str1.at(1) = 'x';
//     cout << "str1 = " << str1 << endl;
// }
/*****************************************************/
/*
string& insert(int pos, const char* s);    //�����ַ���
string&insert(int pos, const string& str); //�����ַ���
string&insert(int pos, int n, char c);     //��ָ��λ�ò���n���ַ�C
string&erase(int pos, int n = npos);       //ɾ����Pos��ʼ��n���ַ�
*/
// void test01(){
//     string str1 = "hello";
//     str1.insert(1, "111");
//     cout << "str1 = " << str1 << endl;

//     str1.erase(1, 3);
//     cout << "str1 = " << str1 << endl;
// }
/*****************************************************/
// void test01(){
//     string str1 = "abcdef";
//     string subStr = str1.substr(1, 3);
//     cout << "subStr = " << subStr << endl;
// }
// //ʵ�ò���
// void test02(){
//     string email = "zhangsan@sina.com";
//     int pos = email.find("@");
//     string m_Name = email.substr(0, pos);
//     cout << "m_Name = " << m_Name << endl;
// }
/*****************************************************/
void myPrint(int val){
    cout << val << " ";
}
void printVector(vector<int>& v){
  for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }
  cout << endl;
}
// void test01(){
//     vector<int> v1; //Ĭ�Ϲ��� �޲ι���(����)
//     for (int i = 0; i < 10; i++){
//         v1.push_back(i);
//     }
    
//     for_each(v1.begin(), v1.end(), myPrint);
//     printVector(v1);

//     vector<int>v2(v1.begin(), v1.end()); //ͨ�����䷽ʽ���й���
//     printVector(v2);

//     vector<int>v3(10, 100);  //n��elem��ʽ����(n��ǰ,elem�ں�)
//     printVector(v3);

//     vector<int>v4(v3);  //��������(����)
//     printVector(v4);
// }
/*****************************************************/
/*
vector& operator=(const vector &vec)��//���صȺŲ�����
assign(beg, end);                     //��[beg��end)�����е����ݿ�����ֵ������T
assign(n; elem);                      //��n��elem������ֵ������
*/
// void test01(){
//   vector<int> v1; //Ĭ�Ϲ��� �޲ι���(����)
//   for (int i = 0; i < 10; i++){
//       v1.push_back(i);
//   }
//   printVector(v1);
//   vector<int>v2;
//   v2 = v1;  //��ֵ operator=
//   printVector(v1);

//   vector<int>v3;
//   v3.assign(v1.begin(), v1.end());  //��ֵassign
//   printVector(v3);

//   vector<int>v4;
//   v4.assign(10, 100);   //assign��ֵ n��elem n��ǰ,elem�ں�
//   printVector(v4);
// }
/*****************************************************/
/*
empty();              //�ж������Ƿ�Ϊ��
capacity();           //����������
size();               //����������Ԫ�صĸ���
resize(int num);      //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
                      //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
resize(int num,elem)��//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
                      //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
*/
// void test01(){
//   vector<int>v1;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//   }
//   printVector(v1);

//   if(v1.empty()) cout << "v1Ϊ��" << endl;
//   else{
//     cout << "v1��Ϊ��" << endl;
//     cout << "v1������Ϊ: " << v1.capacity() << endl;
//     cout << "v1�Ĵ�СΪ: " << v1.size() << endl;
//   }

//   //v1.resize(15);
//   v1.resize(15, 100); //�������ذ汾����ָ��Ĭ�ϵ����ֵ, ������2
//   printVector(v1); //�������ָ���ı�ԭ������,Ĭ����0����µ�λ��
//   v1.resize(5);
//   printVector(v1); //�������ָ���ı�ԭ������,�������ֻ�ɾ����
// }
/*****************************************************/
/*
push_back(ele);                                  //β������Ԫ��ele
pop_back();                                      //ɾ�����һ��Ԫ��
insert(const_iterator pos,ele);                  //������ָ��λ��pos����Ԫ��ele
insert(const_iterator pos,int count,ele)��       //������ָ��λ��pos����count��Ԫ��ele
erase(const_iterator pos);                       //ɾ��������ָ���Ԫ��
erase(const_iterator start, const_iterator end)��//ɾ����������start��end֮���Ԫ��
clear();                                         //ɾ������������Ԫ��
*/
// void test01(){
//   vector<int>v1;
//   //β��
//   v1.push_back(10);
//   v1.push_back(20);
//   v1.push_back(30);
//   v1.push_back(40);
//   v1.push_back(50);
//   printVector(v1);
//   //βɾ
//   v1.pop_back();  
//   printVector(v1);
//   //����  ��һ�������ǵ�����
//   v1.insert(v1.begin(),100);
//   printVector(v1);
//   v1.insert(v1.begin(), 2, 1000);  //����n��elem(nΪ�ڶ�������, elemΪ����������)
//   printVector(v1);
//   //ɾ��  ����Ҳ�ǵ�����
//   v1.erase(v1.begin());
//   printVector(v1);
//   v1.erase(v1.begin(), v1.begin()+2);  //ɾ������
//   printVector(v1);
//   //���
//   v1.clear();
//   printVector(v1);
// }
/*****************************************************/
/*
at(int idx); //��������idx��ָ������
operator[];  //��������idx��ָ������
front();     //���������е�һ������Ԫ��
back();      //�������������һ������Ԫ��
*/
// void test01(){
//   vector<int>v1;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//   }
//   for(int i = 0; i < v1.size(); i++){
//     cout << v1.at(i) << " ";
//     cout << v1[i] << " ";
//   }
//   cout << endl;
//   //��ȡ��һ��Ԫ��
//   cout << "��һ��Ԫ��Ϊ: " << v1.front() << endl;
//   //��ȡ���һ��Ԫ��
//   cout << "���һ��Ԫ��Ϊ: " << v1.back() << endl;
// }
/*****************************************************/
//swap(vec);��vec�뱾���Ԫ�ػ���
// void test01(){
//   vector<int>v1;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//   }
//   printVector(v1);
//   vector<int>v2;
//   for(int i = 10; i > 0; i--){
//     v2.push_back(i);
//   }
//   printVector(v2);
//   v1.swap(v2);
//   printVector(v1);
//   printVector(v2);
// }
// //ʵ����;(����swap���������ڴ�ռ�)
// void test02(){
//   vector<int>v3;
//   for(int i = 0; i < 100000; i++){
//     v3.push_back(i);
//   }
//   cout << "v3������Ϊ: " << v3.capacity() << endl;
//   cout << "v3�Ĵ�СΪ: " << v3.size() << endl;
//   v3.resize(3);
//   cout << "v3������Ϊ: " << v3.capacity() << endl;
//   cout << "v3�Ĵ�СΪ: " << v3.size() << endl;
//   vector<int>(v3).swap(v3); //��������
//   cout << "v3������Ϊ: " << v3.capacity() << endl;
//   cout << "v3�Ĵ�СΪ: " << v3.size() << endl;
// }
/*****************************************************/
//reserve(int len); //����Ԥ��len��Ԫ�س���,Ԥ��λ�ò���ʼ��,Ԫ�ز��ɷ���(��������vector�ڶ�̬��չ����ʱ����չ����)
// void test01(){
//   vector<int> v1;
//   //����reserveԤ���ռ�
//   v1.reserve(100000);
//   int num = 0; //ͳ�ƿ��ٴ���
//   int *p = NULL;
//   for(int i = 0; i < 100000; i++){
//     v1.push_back(i);
//     if(p != &v1[0]){
//       p = &v1[0];
//       num++;
//     } 
//   }
//   cout << "��չ����Ϊnum: " << num << endl;
// }
/*****************************************************/
#include<deque>
void printDeque(const deque<int> &d){  //ֻ��
  for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++){
    //*it = 100;  //��ֹ���ݲ���
    cout << *it << " ";  
  }
  cout << endl;
}
// void test01(){
//   deque<int>d1;
//   for(int i = 0; i < 10; i++){
//     d1.push_back(i);
//   }
//   printDeque(d1); 
//   for_each(d1.begin(), d1.end(), myPrint);
//   cout << endl;

//   deque<int>d2(d1.begin(), d1.end());
//   printDeque(d2);

//   deque<int>d3(10, 100);
//   printDeque(d3);

//   deque<int>d4(d3);
//   printDeque(d4);
// }
/*****************************************************/
// void test01(){
//   deque<int>d1;
//   for(int i = 0; i < 10; i++){
//     d1.push_back(i);
//   }
//   printDeque(d1);

//   deque<int>d2;
//   d2 = d1;
//   printDeque(d2);

//   deque<int>d3;
//   d3.assign(d1.begin(), d1.end());
//   printDeque(d3);

//   deque<int>d4;
//   d4.assign(10, 100);
//   printDeque(d4);
// }
/*****************************************************/
// void test01(){
//   deque<int>d1;
//   for(int i = 0; i < 10; i++){
//     d1.push_back(i);
//   }
//   printDeque(d1);

//   if(d1.empty()) cout << "d1Ϊ��" << endl;
//   else{
//     cout << "d1�Ĵ�СΪ: " << d1.size() << endl;  //ע:deque����û��capacity�Ľӿ�,û�������ĸ���
//   }

//   d1.resize(15);
//   printDeque(d1);
//   d1.resize(20, 100);
//   printDeque(d1);
//   d1.resize(5);
//   printDeque(d1);
// } 
/*****************************************************/
//���˲���
// void test01(){
//   deque<int>d1;
//   //β��
//   d1.push_back(10);
//   d1.push_back(20);
//   //ͷ��
//   d1.push_front(100);
//   d1.push_front(200);
//   printDeque(d1);
//   //βɾ
//   d1.pop_back();
//   //ͷɾ
//   d1.pop_front();
//   printDeque(d1);
// }
// void test02(){
//   deque<int>d1;
//   d1.push_back(10);
//   d1.push_back(20);
//   d1.push_front(100);
//   d1.push_front(200);
//   printDeque(d1);

//   d1.insert(d1.begin(), 1000);
//   printDeque(d1);
//   d1.insert(d1.begin(), 2, 10000);
//   printDeque(d1);
  
//   deque<int>d2;
//   d2.push_back(1);
//   d2.push_back(2);
//   d2.push_back(3);
//   d1.insert(d1.begin(), d2.begin(), d2.end());
//   printDeque(d1);
//}
// void test03(){
//   deque<int>d1;
//   d1.push_back(10);
//   d1.push_back(20);
//   d1.push_front(100);
//   d1.push_front(200);
//   printDeque(d1);
//   //ɾ��
//   deque<int>::iterator it = d1.begin();
//   it++;
//   d1.erase(it);
//   printDeque(d1);
//   //������ɾ��
//   d1.erase(it, it+2);
//   printDeque(d1);
//   //���
//   d1.clear();
//   printDeque(d1);
// }
/*****************************************************/
// void test01(){
//   deque<int>d1;
//   d1.push_back(10);
//   d1.push_back(20);
//   d1.push_back(30);
//   d1.push_back(100);
//   d1.push_back(200);
//   d1.push_back(300);

//   for(int i = 0; i < d1.size(); i++){
//     cout << d1[i] << " ";
//     cout << d1.at(i) << " ";
//   }

//   cout << "��һ��Ԫ��Ϊ: " << d1.front() << endl;
//   cout << "���һ��Ԫ��Ϊ: " << d1.back() << endl;
// }
/*****************************************************/
//sort(iterator beg, iterator end)
// void test01(){
//   deque<int>d1;
//   d1.push_back(10);
//   d1.push_back(20);
//   d1.push_back(30);
//   d1.push_back(100);
//   d1.push_back(200);
//   d1.push_back(300);

//   cout << "����ǰ: " << endl;
//   printDeque(d1);
//   cout << "�����: " << endl;
//   sort(d1.begin(), d1.end()); //Ĭ������,����������ʵĵ�����,����������sort��������
//   printDeque(d1);
// }
/*****************************************************/
#include<stack>
// void test01(){
//   stack<int>s;
//   //��ջ
//   s.push(10);
//   s.push(20);
//   s.push(30);
//   s.push(40);
//   cout << "ջ�Ĵ�СΪ: " << s.size() << endl; 
//   //ֻҪջ��Ϊ��.�鿴ջ��,����ִ�г�ջ����
//   while(!s.empty()){
//     cout << "ջ��Ԫ��Ϊ: " << s.top() << endl;  //�鿴ջ��Ԫ��
//     s.pop(); //��ջ
//   }
//   cout << "ջ�Ĵ�СΪ: " << s.size() << endl; 
// }
/*****************************************************/
#include<queue>
// class Person{
// public:
//   Person(string name, int age):m_Name(name),m_Age(age){}
//   string m_Name;
//   int m_Age;
// };
// void test01(){
//   //��������
//   queue<Person>q;
//   Person p1("��ɮ", 30);
//   Person p2("�����", 1000);
//   Person p3("��˽�", 900);
//   Person p4("ɳɮ", 800);
//   //���
//   q.push(p1);
//   q.push(p2);
//   q.push(p3);
//   q.push(p4);
//   cout << "���еĴ�СΪ: " << q.size() << endl;
//   //�ж�ֻҪ���в�Ϊ��.�鿴��ͷ�Ͷ�β,����
//   while(!q.empty()){
//     //�鿴��ͷ
//     cout << "��ͷԪ��--����: " << q.front().m_Name << " ����: " << q.front().m_Age << endl;
//     //�鿴��β
//     cout << "��βԪ��--����: " << q.back().m_Name << " ����: " << q.back().m_Age << endl;
//     //����
//     q.pop();
//   }
//   cout << "���еĴ�СΪ: " << q.size() << endl;
// }
/*****************************************************/
#include<list>
void printList(const list<int> &L){
  for(list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
}
// void test01(){
//   //����list����
//   list<int>L1;
//   //�������
//   L1.push_back(10);
//   L1.push_back(20);
//   L1.push_back(30);
//   L1.push_back(40);
//   //��������
//   printList(L1);
//   for_each(L1.begin(), L1.end(), myPrint);
//   //���䷽ʽ����
//   list<int>L2(L1.begin(), L1.end());
//   printList(L2);
//   //��������
//   list<int>L3(L2);
//   printList(L3);
//   //n��elem
//   list<int>L4(10, 1000);
//   printList(L4);
// }
/*****************************************************/
// //��ֵ
// void test01(){
//   list<int>L1;
//   L1.push_back(10);
//   L1.push_back(20);
//   L1.push_back(30);
//   L1.push_back(40);
//   printList(L1);
//   //��ֵ
//   list<int>L2;
//   L2 = L1;
//   printList(L2);

//   list<int>L3;
//   L3.assign(L2.begin(), L2.end());
//   printList(L3);

//   list<int>L4;
//   L4.assign(10, 100);
//   printList(L4);
// }
// //����
// void test02(){
//   list<int>L1;
//   L1.push_back(10);
//   L1.push_back(20);
//   L1.push_back(30);
//   L1.push_back(40);
  
//   list<int>L2;
//   L2.assign(10, 100);

//   cout << "����ǰ: " << endl;
//   printList(L1);
//   printList(L2);
//   cout << "������: " << endl;
//   L1.swap(L2);
//   printList(L1);
//   printList(L2);
// }
/*****************************************************/
// void test01(){
//   list<int>L1;
//   L1.push_back(10);
//   L1.push_back(20);
//   L1.push_back(30);
//   L1.push_back(40);
//   printList(L1);

//   if(L1.empty()) cout << "L1Ϊ��";
//   else{
//     cout << "L1��Ԫ�ظ���Ϊ: " << L1.size() << endl;
//   }

//   L1.resize(10);
//   printList(L1);
//   L1.resize(15, 10000);
//   printList(L1);
//   L1.resize(2);
//   printList(L1);
// }
/*****************************************************/
/*
push_back(elem);      //������β������һ��Ԫ��
pop_back();           //ɾ�����������һ��Ԫ��
push_front(elem);     //��������ͷ����һ��Ԫ��
pop_front();          //��������ͷ�Ƴ���һ��Ԫ��
insert(pos,elem);     //��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
insert(pos,n,elem);   //��posλ�ò���n��elem���ݣ��޷���ֵ��
insert(pos,beg,end);  //��posλ�ò���[beg��end)��������ݣ��޷���ֵ��
clear();              //�Ƴ���������������
erase(beg,end);       //ɾ��[beg��end)��������ݣ�������һ�����ݵ�λ�á�
erase(pos);           //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
remove(elem);         //ɾ��������������elemֵƥ���Ԫ�ء�
*/
// void test01(){
//   list<int>L1;
//   //β��
//   L1.push_back(10);
//   L1.push_back(20);
//   L1.push_back(30);
//   //ͷ��
//   L1.push_front(100);
//   L1.push_front(200);
//   L1.push_front(300);
//   printList(L1);
//   //βɾ
//   L1.pop_back();
//   //ͷɾ
//   L1.pop_front();
//   printList(L1);
//   //insert����
//   list<int>::iterator it = L1.begin();
//   L1.insert(++it, 1000);
//   printList(L1);
//   //ɾ��
//   it = L1.begin();
//   L1.erase(++it);
//   printList(L1);
//   //�Ƴ�
//   it = L1.begin();
//   L1.insert(it, 10, 10000);
//   printList(L1);
//   L1.remove(10000);
//   printList(L1);
//   //���
//   L1.clear();
//   printList(L1);
// }
/*****************************************************/
// void test01(){
//   list<int>L1;
//   L1.push_back(10);
//   L1.push_back(20);
//   L1.push_back(30);
//   L1.push_back(40);
//   //L1[0]��L1.at(0)���ǲ��Ϸ���,ԭ����list����������,�������������Կռ�洢����,������Ҳ�ǲ�֧��������ʵ�
//   cout << "L1�ĵ�һ��Ԫ��Ϊ: " << L1.front() << endl;
//   cout << "L1�����һ��Ԫ��Ϊ: " << L1.back() << endl;
//   //��֤�������ǲ�֧��������ʵ�
//   list<int>::iterator it = L1.begin();
//   it++;
//   //it+=1; //֧��++����--(˫��),��֧���������
// }
/*****************************************************/
//reverse() //��ת����
//sort()    //��������
// void test01(){
//   //��ת
//   list<int>L1;
//   L1.push_back(20);
//   L1.push_back(10);
//   L1.push_back(50);
//   L1.push_back(40);
//   L1.push_back(30);
//   cout << "��תǰ: " << endl;
//   printList(L1);
//   cout << "��ת��: " << endl;
//   L1.reverse();
//   printList(L1);
// }
// bool myCompare(int v1, int v2){
//   //���� ���õ�һ���� > �ڶ�����
//   //������ֵΪtrue,���������������н���,������ֵΪfalse�򲻶�
//   return v1 > v2;
// }
// void test02(){
//   //����
//   list<int>L1;
//   L1.push_back(20);
//   L1.push_back(10);
//   L1.push_back(50);
//   L1.push_back(40);
//   L1.push_back(30);
//   cout << "����ǰ: " << endl;
//   //���в�֧��������ʵ�����������,�������ñ�׼�㷨
//   //��֧��������ʵ�����������,�ڲ������ṩ��Ӧ��һЩ�㷨
//   //sort(L1.begin(), L1.end());
//   L1.sort(); //Ĭ���������: ��С���� ����
//   cout << "�����: " << endl;
//   printList(L1);
//   L1.sort(myCompare);
//   printList(L1);
// }
/*****************************************************/
#include<set>
void printSet(const set<int>& s1){
  for(set<int>::const_iterator it = s1.begin(); it != s1.end(); it++){
    cout << (*it) << " ";
  }
  cout << endl;
}
// void test01(){
//   set<int>s1;
//   //��������,ֻ��insert�ķ�ʽ
//   s1.insert(10);
//   s1.insert(40);
//   s1.insert(30);
//   s1.insert(20);
//   s1.insert(30);
//   //��������
//   //set�����ص�: ����Ԫ�ز���ʱ���Զ�����,����������ظ�ֵ
//   printSet(s1);
//   for_each(s1.begin(), s1.end(), myPrint);
//   //��������
//   set<int>s2(s1);
//   printSet(s2);
//   //��ֵ
//   set<int>s3;
//   s3 = s2;
//   printSet(s3);
// }
/*****************************************************/
// void test01(){
//   set<int>s1;
//   s1.insert(10);
//   s1.insert(40);
//   s1.insert(30);
//   s1.insert(20);
//   printSet(s1);
//   //��С
//   if(s1.empty()) cout << "s1Ϊ��" << endl;
//   else cout << "s1��Ԫ�ظ���Ϊ: " << s1.size() << endl;
//   //����
//   set<int>s2;
//   s2.insert(100);
//   s2.insert(400);
//   s2.insert(300);
//   s2.insert(200);
//   cout << "����ǰ: " << endl;
//   printSet(s1);
//   s1.swap(s2);
//   cout << "������: " << endl;
//   printSet(s1);
//   //ע��:set������֧��resize(),��Ϊresize()����ܳ�����ͬ��0
// }
/*****************************************************/
// void test01(){
//   set<int>s1;
//   //����  
//   s1.insert(30);
//   s1.insert(10);
//   s1.insert(40);
//   s1.insert(20);
//   //����
//   printSet(s1);
//   //ɾ��
//   s1.erase(s1.begin());
//   printSet(s1); //ɾ��Ϊ�����Ľ��
//   s1.erase(30);
//   printSet(s1);
//   s1.erase(s1.begin(), ++s1.begin());
//   printSet(s1);
//   //���
//   s1.clear();
//   printSet(s1);
// }
/*****************************************************/
//find(key) ����key�Ƿ����,������,�򷵻ظü��ĵ�����,��������,����set.end();
//count(key) ͳ��key��Ԫ�ظ���
// void test01(){
//   set<int>s1;
//   s1.insert(10);
//   s1.insert(40);
//   s1.insert(30);
//   s1.insert(20);
//   printSet(s1);
//   //����
//   //set<int>::iterator pos = s1.find(30);
//   set<int>::iterator pos = s1.find(50);
//   if(pos != s1.end()) cout << "�ҵ�Ԫ��: " << *pos << endl;
//   else cout << "δ�ҵ���Ԫ��" << endl;
// }
// //ͳ��
// void test02(){
//   set<int>s1;
//   s1.insert(10);
//   s1.insert(40);
//   s1.insert(30);
//   s1.insert(20);
//   int num = s1.count(30); //����set����ͳ�ƵĽ��ֻ��0��1
//   cout << num << endl;
//   multiset<int>ms1;
//   ms1.insert(10);
//   ms1.insert(30);
//   ms1.insert(10);
//   ms1.insert(20);
//   ms1.insert(10);
//   ms1.insert(50);
//   ms1.insert(10);
//   int _num = ms1.count(10);
//   cout << _num << endl;
//   multiset<int>::iterator pos = ms1.find(10);
//   ++pos;
//   ++pos;
//   cout << *(++pos); //���ҽ��ΪԪ�ص�һ�γ��ֵĵ�����
// }
/*****************************************************/
void printMultiset(const multiset<int>& ms1){
  for(multiset<int>::const_iterator it = ms1.begin(); it != ms1.end(); it++){
    cout << *it << " ";
  }
  cout << endl;
}
// void test01(){
//   set<int>s;
//   //insert֮�������������ֵ,һ��������һ��bool
//   pair<set<int>::iterator, bool> ret = s.insert(10);
//   if(ret.second) cout << "��һ�β���ɹ�" << endl;
//   else cout << "��һ�β���ʧ��" << endl;
//   ret = s.insert(10);
//   if(ret.second) cout << "�ڶ��β���ɹ�" << endl;
//   else cout << "�ڶ��β���ʧ��" << endl;
//   multiset<int>ms;
//   //��������ظ�ֵ
//   //insert֮��ֻ��һ������ֵ,��������
//   ms.insert(10);
//   ms.insert(10);
//   printMultiset(ms);
// }
/*****************************************************/
//pair<type, type> p (value1, value2);
//pair<type, type> p =make_pair(value1, value2);
// void test01(){
//   //��һ�ַ�ʽ
//   pair<string, int> p1("Tom", 20);
//   cout << "����: " << p1.first << " " << "����: " << p1.second << endl;
//   //�ڶ��ַ�ʽ
//   pair<string, int> p2 = make_pair("Jerry", 30);
//   cout << "����: " << p2.first << " " << "����: " << p2.second << endl;
// }
/*****************************************************/
// class Mycompare{
// public:
//   bool operator()(int v1, int v2){
//     return v1 > v2;
//  }
// };
// //���������������
// void test01(){
//   set<int>s1;
//   //Ĭ������Ϊ����
//   s1.insert(10);
//   s1.insert(40);
//   s1.insert(20);
//   s1.insert(50);
//   s1.insert(30);
//   printSet(s1);
//   //ָ���������Ϊ�Ӵ�С
//   set<int,Mycompare>s2;
//   //Ĭ������Ϊ����
//   s2.insert(10);
//   s2.insert(40);
//   s2.insert(20);
//   s2.insert(50);
//   s2.insert(30);
//   for(set<int, Mycompare>::iterator it = s2.begin(); it != s2.end(); it++){
//     cout << (*it) << " ";
//   }
//   cout << endl;
// }
/*****************************************************/
// class Person{
// public:
//   Person(string name, int age) : m_Name(name), m_Age(age){}
//   string m_Name;
//   int m_Age;
// };
// class comparePerson{
// public:
//   bool operator()(const Person &p1, const Person &p2){
//     //�������� ����
//     return p1.m_Age > p2.m_Age;
//   }
// };
// //����Զ�����������
// void test01(){
//   //�Զ����������Ͷ���ָ���������
//   set<Person, comparePerson>s;
//   Person p1("����", 24);
//   Person p2("����", 28);
//   Person p3("�ŷ�", 25);
//   Person p4("����", 21);

//   s.insert(p1);
//   s.insert(p2);
//   s.insert(p3);
//   s.insert(p4);

//   for(set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++){
//     cout << "����: " << it->m_Name << " " << "����: " << it->m_Age << endl;
//   }
// }
/*****************************************************/
#include<map>
void printMap(const map<int, int>&m){
  for(map<int, int>::const_iterator it = m.begin(); it != m.end(); it++){
    cout << "key: " << it->first << " value: " << it->second << endl;
  }
}
// void test01(){
//   //����map����
//   map<int, int> m;
//   m.insert(pair<int, int>(3, 30));
//   m.insert(pair<int, int>(1, 10));
//   m.insert(pair<int, int>(4, 40));
//   m.insert(pair<int, int>(2, 20));
//   printMap(m);
//   //��������
//   map<int, int>m2(m);
//   printMap(m);
//   //��ֵ
//   map<int, int>m3;
//   m3 = m2;
//   printMap(m3);
// }
/*****************************************************/
// //��С
// void test01(){
//   map<int, int> m;
//   m.insert(pair<int, int>(3, 30));
//   m.insert(pair<int, int>(1, 10));
//   m.insert(pair<int, int>(4, 40));
//   m.insert(pair<int, int>(2, 20));
//   if(m.empty()) cout << "mΪ��" << endl;
//   else cout << "m��Ԫ�ظ���Ϊ: " << m.size() << endl;
// }
// //����
// void test02(){
//   map<int, int> m;
//   m.insert(pair<int, int>(3, 30));
//   m.insert(pair<int, int>(1, 10));
//   m.insert(pair<int, int>(4, 40));
//   m.insert(pair<int, int>(2, 20));
//   map<int, int>m2;
//   m2.insert(pair<int, int>(4, 100));
//   m2.insert(pair<int, int>(5, 200));
//   m2.insert(pair<int, int>(6, 300));
//   cout << "����ǰ: " << endl;
//   printMap(m);
//   printMap(m2);
//   cout << "������: " << endl;
//   m.swap(m2);
//   printMap(m);
//   printMap(m2);
// }
/*****************************************************/
// void test01(){
//   //����
//   map<int, int> m;
//   //��һ��
//   m.insert(pair<int, int>(3, 30));
//   //�ڶ���(����)
//   m.insert(make_pair(1, 10));
//   //������
//   m.insert(map<int, int>::value_type(4, 40));
//   //������(�ٺ�,[]������̫������������,��Ϊ�������˻��߲���һ��key�����ڵ���,�����Զ�����һ��valueΪ0Ԫ��)
//   //ͨ���ô�������key������value
//   m[2] = 20;
//   printMap(m);
//   //ɾ��
//   //���յ�������ɾ��
//   m.erase(m.begin()++);
//   printMap(m);
//   //����key��ɾ��
//   m.erase(3);
//   printMap(m);
//   //����������ɾ��
//   m.erase(m.begin(), ++m.begin());
//   printMap(m);
//   //���
//   m.clear();
//   printMap(m);
// }
/*****************************************************/
// void test01(){
//   map<int, int>m;
//   m.insert(make_pair(1, 10));
//   m[2] = 20;
//   m.insert(map<int, int>::value_type(3, 30));
//   m.insert(pair<int, int>(4, 40));
//   //����
//   map<int, int>::iterator pos = m.find(3);
//   if(pos != m.end()){
//     cout << "���ҵ���Ԫ��key = " << pos->first << " value = " << pos->second << endl;
//   }
//   else{
//     cout << "δ�ҵ���Ԫ��" << endl;
//   }
//   //ͳ��
//   int num = m.count(3); //map��������������ظ���key,����count���ֻ��0����1,��multimap��count���Դ���1
//   cout << "num = " << num << endl;
// }
/*****************************************************/
//map����Ĭ���������Ϊ����keyֵ���д�С�������������
//���÷º����ı��������
// class myCompare{
// public:
//   bool operator()(int v1, int v2){
//     //����
//     return v1 > v2;
//   }
// };
// void test01(){
//   map<int, int, myCompare>m;
//   m.insert(make_pair(1, 10));
//   m[2] = 20;
//   m.insert(map<int, int>::value_type(3, 30));
//   m.insert(pair<int, int>(4, 40));
//   m.insert(make_pair(5, 50));
//   for(map<int, int, myCompare>::const_iterator it = m.begin(); it != m.end(); it++){
//     cout << "key: " << it->first << " value: " << it->second << endl;
//   }
// }
// class Person{
// public:
//   Person(string name, int age) : m_Name(name), m_Age(age){}
//   string m_Name;
//   int m_Age;
// };
// class comparePerson{
// public:
//   bool operator()(const Person &p1, const Person &p2){
//     return p1.m_Age < p2.m_Age;
//   }
// };
// void test02(){
//   map<Person, int, comparePerson>m;
//   Person p1("����", 24);
//   Person p2("����", 28);
//   Person p3("�ŷ�", 25);
//   Person p4("����", 21);
//   //m.insert(make_pair(p1, 1));
//   m[p1] = 1;
//   //m.insert(make_pair(p2, 2));
//   m[p2] = 2;
//   //m.insert(make_pair(p3, 3));
//   m[p3] = 3;
//   //m.insert(make_pair(p4, 4));
//   m[p4] = 4;
//   for(map<Person, int, comparePerson>::const_iterator it = m.begin(); it != m.end(); it++){
//     cout << "key: " << "����: " << it->first.m_Name << "����: " << it->first.m_Age << " value: " << it->second << endl;
//   }
// }
/*****************************************************/
// class MyAdd{
// public:
//   int operator()(int v1, int v2){
//     return v1 + v2;
//   }
// };
// //1.����������ʹ��ʱ,��������ͨ������������,Ҳ�����в���,�����з���ֵ
// void test01(){
//   MyAdd myAdd;
//   cout << myAdd(10, 10) << endl;
// }
// //2.�������󳬳���ͨ�����ĸ���,��������������Լ���״̬
// class MyPrint{
// public:
//   MyPrint(){
//     count = 0;
//   }
//   void operator()(string test){
//     cout << test << endl;
//     count++;
//   }
//   int count;
// };
// void test02(){
//   MyPrint _myPrint;
//   _myPrint("hello world");
//   _myPrint("hello world");
//   _myPrint("hello world");
//   _myPrint("hello world");
//   _myPrint("hello world");
//   cout << "_myPrint���õĴ���Ϊ: " << _myPrint.count << endl;
// }
// //3.�������������Ϊ��������
// void doPrint(MyPrint &mp, string test){
//   mp(test);
// }
// void test03(){
//   MyPrint _myPrint;
//   doPrint(_myPrint, "Hello c++");
// }
/*****************************************************/
// class GreaterFive{
// public:
//   bool operator()(int val){
//     return val > 5;
//   }
// };
// void test01(){
//   vector<int>v;
//   for(int i = 0; i < 10; i++){
//     v.push_back(i);
//   }
//   //���������� ��û�д���5������
//   //GreaterFive()������������
//   vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//   if(it == v.end()) cout << "δ�ҵ�" << endl;
//   else cout << "�ҵ��˴���5������: " << *it <<endl;
// }
/*****************************************************/
// class myCompare{
// public: 
//   bool operator()(int v1, int v2){
//     return v1 > v2;
//   }
// };
// void test01(){
//     vector<int>v;
//     v.push_back(10);
//     v.push_back(40);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(50);
//     printVector(v);
//     sort(v.begin(), v.end());
//     printVector(v);
//     //ʹ�ú�������,�ı��㷨����,��Ϊ�������Ϊ�Ӵ�С
//     sort(v.begin(), v.end(), myCompare());
//     printVector(v);
// }
/*****************************************************/
#include<functional>
// template<class T> T plus<T>       //�ӷ��º���
// template<class T> T minus<T>      //�����º���
// template<class T> T multiplies<T> //�˷��º���
// template<class T> T divides<T>    //�����º���
// template<class T> T modulus<T>    //ȡģ�º���
// template<class T> T negate<T>     //ȡ���º���
//negateһԪ�º��� ȡ���º���
// void test01(){
//   negate<int>n;
//   cout << n(50) << endl;
// }
// //plus ��Ԫ�º��� �ӷ�
// void test02(){
//   plus<int> p; //Ĭ�ϴ�ͬ����������
//   cout << p(10, 20) << endl;
// }
/*****************************************************/
// template<class T> bool equal_to<T>      //����
// template<class T> bool not_equal_to<T>  //������
// template<class T> bool greater<T>       //����
// template<class T> bool greater_equal<T> //���ڵ���
// template<class T> bool less<T>          //С��
// template<class T> bool less_equal<T>    //С�ڵ���
//���� greater (���)
// class myCompare{
// public:
//   bool operator()(int v1, int v2){
//     return v1 > v2;
//   }
// };
// void test01(){
//   vector<int>v;
//   v.push_back(10);
//   v.push_back(40);
//   v.push_back(20);
//   v.push_back(30);
//   v.push_back(50);
//   printVector(v);
//   //����
//   //sort(v.begin(), v.end(), myCompare());
//   //greater<int>() �ڽ���������
//   sort(v.begin(), v.end(), greater<int>());
//   printVector(v);
// }
/*****************************************************/
// template<class T> bool logical_and<T> //�߼���
// template<class T> bool logical_or<T>  //�߼���
// template<class T> bool logical_not<T> //�߼���
//�߼���(����)
// void test01(){
//   vector<bool>v;
//   v.push_back(true);
//   v.push_back(false);
//   v.push_back(true);
//   v.push_back(false);

//   for(vector<bool>::iterator it = v.begin(); it != v.end(); it++){
//     cout << *it << " ";
//   }
//   cout << endl;
//   //�����߼���,������v���˵�����v2��,��ִ��ȡ������
//   vector<bool>v2;
//   v2.resize(v.size());
//   transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//     for(vector<bool>::iterator it = v2.begin(); it != v2.end(); it++){
//     cout << *it << " ";
//   }
//   cout << endl;
// }
/*****************************************************/
//for_each(iterator beg, iterator end, _func); //��������
// void print01(int val){
//   cout << val << " ";
// }
// class print02{
// public:
//   void operator()(int val){
//     cout << val << " ";
//   }
// };
// void test01(){
//   vector<int>v;
//   for(int i = 0; i < 10; i++){
//     v.push_back(i);
//   }
//   //��ͨ����(��������,����������)
//   for_each(v.begin(), v.end(), print01);
//   cout << endl;
//   //�º���(����������,��������)
//   for_each(v.begin(), v.end(), print02());
//   cout << endl;
// }
/*****************************************************/
//transform(iterator beg1, iterator end1, iterator beg2, _func); //������������һ��������
//beg1 Դ������ʼ������
//end1 Դ��������������
//beg2 Ŀ��������ʼ������
//_func �������ߺ�������
// class Transform{
// public:
//   int operator()(int v){
//     return v + 100; //�º������Խ���һЩ�߼�����
//   }
// };
// void test01(){
//   vector<int>v;
//   for(int i = 0; i < 10; i++){
//     v.push_back(i);
//   }
//   vector<int>vTarget;
//   vTarget.resize(v.size()); //Ŀ��������Ҫ��ǰ���ٿռ�
//   transform(v.begin(), v.end(), vTarget.begin(), Transform());
//   printVector(vTarget);
// }
/*****************************************************/
//find(iterator beg, iterator end, value)
//��ֵ����Ԫ��,�ҵ�����ָ��λ�õĵ�����,�Ҳ������ؽ���������λ��
//���� ������������
// void test01(){
//   vector<int>v;
//   for(int i = 0; i < 10; ++i){
//     v.push_back(i);
//   }
//   auto pos = find(v.begin(), v.end(), 5);
//   if(pos == v.end()) cout << "û���ҵ�!" << endl;
//   else cout << "�ҵ�ָ��Ԫ��: " << *pos << endl;
// }
//���� �Զ�����������
// class Person{
// public:
//   string m_Name;
//   int m_Age;
//   Person(string name, int age) : m_Name(name), m_Age(age){}
//   //���� == �ײ�find֪����ζԱ�Person��������
//   bool operator==(const Person &p){
//     if(this->m_Name == p.m_Name && this->m_Age == p.m_Age){
//       return true;
//     }
//     else return false;
//   }
// };
// void test02(){
//   vector<Person>v;
//   Person p1("aaa", 10);
//   Person p2("bbb", 20);
//   Person p3("ccc", 30);
//   Person p4("ddd", 40);
//   v.push_back(p1);
//   v.push_back(p2);
//   v.push_back(p3);
//   v.push_back(p4);

//   Person pp("bbb", 20);
//   auto pos = find(v.begin(), v.end(), pp);
//   if(pos == v.end()) cout << "û���ҵ�!" << endl;
//   else cout << "�ҵ�Ԫ�� ����: " << pos->m_Name  << " ����: " << pos->m_Age << endl;
// }
/*****************************************************/
//find_if(iterator beg, iterator end, _Pred)
//��ֵ����Ԫ��,�ҵ�����ָ��λ�õ�����,�Ҳ������ؽ���������λ��
//_Pred��������ν��(����bool���͵ķº���)
//���� �Զ�����������
// class Greater5{
// public:
//   bool operator()(int val){
//     return val > 5;
//   }
// };
// void test01(){
//   vector<int>v;
//   for(int i = 0; i < 10; i++){
//     v.push_back(i);
//   }
//   auto pos = find_if(v.begin(), v.end(), Greater5());
//   if(pos == v.end()) cout << "û���ҵ�!" << endl;
//   else cout << "�ҵ�����5��Ԫ��: " << *pos << endl;
// }
// //���� �Զ�����������
// class Person{
// public:
//   string m_Name;
//   int m_Age;
//   Person(string name, int age) : m_Name(name), m_Age(age){}
// };
// class Greater20{
// public:
//   bool operator()(const Person& p){
//     return p.m_Age > 20;
//   }
// };
// auto test02(){
//   vector<Person>v;
//   Person p1("aaa", 10);
//   Person p2("bbb", 20);
//   Person p3("ccc", 30);
//   Person p4("ddd", 40);
//   v.push_back(p1);
//   v.push_back(p2);
//   v.push_back(p3);
//   v.push_back(p4);

//   auto pos = find_if(v.begin(), v.end(), Greater20());
//   if(pos == v.end()) cout << "û���ҵ�!" << endl;
//   else cout << "�ҵ�Ŀ�� ����: " << pos->m_Name << " ����: " << pos->m_Age;
// }
/*****************************************************/
//adjacent_find(iterator beg,iterator end);
//���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õĵ�����
// auto test01(){
//   vector<int>v;
//   v.push_back(0);
//   v.push_back(2);
//   v.push_back(0);
//   v.push_back(3);
//   v.push_back(1);
//   v.push_back(4);
//   v.push_back(3);
//   v.push_back(3);

//   auto pos = adjacent_find(v.begin(), v.end());
//   if(pos == v.end()) cout << "δ�ҵ������ظ�Ԫ��" << endl;
//   else cout << "�ҵ������ظ�Ԫ��: " << *pos << endl;
// }
/*****************************************************/ 
//bool binary_search(iterator beg, iterator end, value);
//����ָ����Ԫ��,�鵽����true,���򷵻�false
//ע��: �����������в�����(��Ϊ��ײ��߼�Ϊ���ֲ���,����Ч�ʸߵ�����Ҫ��������)
// auto test01(){
//   vector<int>v;
//   for(int i = 0; i < 10; i++){
//     v.push_back(i);
//   }
//   //v.push_back(2); //�������������,���δ֪!
//   auto ret = binary_search(v.begin(), v.end(), 9);
//   if(ret) cout << "�ҵ���Ԫ��" << endl;
//   else cout << "δ�ҵ�" << endl;
// }
/*****************************************************/
//count(iterator beg, iterator end, value);
//ͳ��Ԫ�س��ִ���
//ͳ��������������
// auto test01(){
//   vector<int> v;
//   v.push_back(10);
//   v.push_back(40);
//   v.push_back(30);
//   v.push_back(40);
//   v.push_back(20);
//   v.push_back(40);
//   v.push_back(10);
//   int num = count(v.begin(), v.end(), 40);
//   cout << "40��Ԫ�ظ���Ϊ: " << num << endl;
// }
// //ͳ���Զ�����������
// class Person{
// public:
//   string m_Name;
//   int m_Age;
//   Person(string name, int age) : m_Name(name), m_Age(age){}
//   auto operator==(const Person& p){
//     if(this->m_Age == p.m_Age) return true;
//     else return false;
//   }
// };
// auto test02(){
//   vector<Person>v;
//   Person p1("����", 35);
//   Person p2("����", 35);
//   Person p3("�ŷ�", 35);
//   Person p4("����", 30);
//   Person p5("�ܲ�", 40);
//   v.push_back(p1);
//   v.push_back(p2);
//   v.push_back(p3);
//   v.push_back(p4);
//   v.push_back(p5);
//   Person p("�����", 35);
//   int num = count(v.begin(), v.end(), p);
//   cout << "�������ͬ��������Ա����Ϊ: " << num << endl;
// }
/*****************************************************/
//count_if(iterator beg, iterator end, _Pred);
//������ͳ��Ԫ�س��ִ���
//������ͳ�� ������������
// class Greater20{
// public:
//   bool operator()(int val){
//     return val > 20;
//   }
// };
// auto test01(){
//   vector<int>v;
//   v.push_back(10);
//   v.push_back(40);
//   v.push_back(30);
//   v.push_back(20);
//   v.push_back(40);
//   v.push_back(20);
//   v.push_back(10);
//   v.push_back(50);

//   int num = count_if(v.begin(), v.end(), Greater20());
//   cout << "����20�����ĸ���Ϊ: " << num << endl;

// }
//������ͳ�� �Զ�����������
// class Person{
// public:
//   string m_Name;
//   int m_Age;
//   Person(string name, int age) : m_Name(name), m_Age(age){}
// };
// class AgeGreater20{
// public:
//   bool operator()(const Person& p){
//     if(p.m_Age >= 35) return true;
//     else return false;
//   }
// };
// auto test02(){
//   vector<Person> v;
//   Person p1("����", 35);
//   Person p2("����", 35);
//   Person p3("�ŷ�", 35);
//   Person p4("����", 30);
//   Person p5("�ܲ�", 40);
//   v.push_back(p1);
//   v.push_back(p2);
//   v.push_back(p3);
//   v.push_back(p4);
//   v.push_back(p5);
//   int num  = count_if(v.begin(), v.end(), AgeGreater20());
//   cout << "������ڵ���35������Ϊ: " << num << endl;
// }
/*****************************************************/
//sort(iterator beg, iterator end, _Pred);
//��������Ԫ�ؽ�������,Ĭ������
// auto test01(){
//   vector<int>v;
//   v.push_back(10);
//   v.push_back(40);
//   v.push_back(30);
//   v.push_back(20);
//   v.push_back(50);
//   //Ĭ������(����)
//   sort(v.begin(), v.end());
//   printVector(v);
//   //����
//   sort(v.begin(), v.end(), greater<int>());
//   printVector(v);
// }
/*****************************************************/
// //random_shuffle(iterator beg, iterator end)
// //ָ����Χ�ڵ�Ԫ�������������
// #include<ctime>
// auto test01(){
//   srand((unsigned int) time (NULL));
//   vector<int>v;
//   v.push_back(10);
//   v.push_back(40);
//   v.push_back(30);
//   v.push_back(20);
//   v.push_back(50);
//   //Ĭ������(����)
//   sort(v.begin(), v.end());
//   printVector(v);
//   //ϴ��
//   shuffle(v.begin(), v.end(), default_random_engine(time(0)));
//   printVector(v);
// }
/*****************************************************/
//merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//��������Ԫ�غϲ�,���洢����һ��������
//ע��:�����������������(������ͬ��)
//destĿ��������ʼ������
// auto test01(){
//   vector<int> v1;
//   vector<int> v2;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//     v2.push_back(i+1);
//   }
//     vector<int>vTarget;
//     vTarget.resize(v1.size()+v2.size());
//     merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//     printVector(vTarget);
// }
/*****************************************************/
//reverse(iterator beg, iterator end);
//��תָ����Χ��Ԫ��
// auto test01(){
//   vector<int>v;
//   v.push_back(10);
//   v.push_back(40);
//   v.push_back(30);
//   v.push_back(20);
//   v.push_back(50);
//   cout << "��תǰ: " << endl;
//   printVector(v);
//   reverse(v.begin(), v.end());
//   cout << "��ת��: " << endl;
//   printVector(v);
// }
/*****************************************************/
//copy(iterator beg, iterator end, iterator dest);
//��������ָ����Χ��Ԫ�ؿ�������һ��������(ʵ�ʿ����г���=ֱ�Ӹ�ֵ)
// auto test01(){
//   vector<int>v1;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//   }
//   vector<int>v2;
//   v2.resize(v1.size());
//   copy(v1.begin(), v1.end(), v2.begin());
//   printVector(v2);
// }
/*****************************************************/
//replace(iterator beg, iterator end, old value, new value);
//�������ھ�Ԫ���滻��Ϊ��Ԫ��
// auto test01(){
//   vector<int>v;
//   v.push_back(10);
//   v.push_back(20);
//   v.push_back(40);
//   v.push_back(20);
//   v.push_back(30);
//   v.push_back(20);
//   v.push_back(50);
//   v.push_back(20);
//   cout << "�滻ǰ: " << endl;
//   printVector(v);
//   replace(v.begin(), v.end(), 20, 2000);
//   cout << "�滻��: " << endl;
//   printVector(v);
// }
/*****************************************************/
//replace_if(iterator beg, iterator end, _Pred, new value);
//�������滻Ԫ��,�����������滻��ָ��Ԫ��
// class Greater_Equal30{
// public: 
//   bool operator()(int val){
//     return val >= 30;
//   }
// };
// auto test01(){
//   vector<int>v;
//   v.push_back(10);
//   v.push_back(20);
//   v.push_back(40);
//   v.push_back(20);
//   v.push_back(30);
//   v.push_back(20);
//   v.push_back(50);
//   v.push_back(20);
//   //�����ڵ���30���滻Ϊ3000;
//   cout << "�滻ǰ: " << endl;
//   printVector(v);
//   replace_if(v.begin(), v.end(), Greater_Equal30(), 3000);
//   cout << "�滻��: " << endl;
//   printVector(v);
// }
/*****************************************************/
//swap(container c1, container c2);
//��������������Ԫ��(ͬ������)
// auto test01(){
//   vector<int>v1;
//   vector<int>v2;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//     v2.push_back(i+100);
//   }
//   cout << "����ǰ: " << endl;
//   printVector(v1);
//   printVector(v2);
//   cout << "������: " << endl;
//   swap(v1, v2);
//   printVector(v1);
//   printVector(v2);  
// }
/*****************************************************/
#include<numeric>
//accumulate(iterator beg, iterator end, value)
//��������Ԫ���ۼ��ܺ�
//valueΪ��ʼֵ
// auto test01(){
//   vector<int>v;
//   for(int i = 0; i <= 100; i++){
//     v.push_back(i);
//   }
//   int num = accumulate(v.begin(), v.end(), 0);
//   cout << "�ܺ�Ϊ: " << num << endl;
// }
/*****************************************************/
//fill(iterator beg, iterator end, value);
//�����������Ԫ��
//value���ֵ
// auto test01(){
//   vector<int>v;
//   v.resize(10);
//   //���ں����������
//   fill(v.begin(), v.end(), 100);
//   printVector(v);
// }
/*****************************************************/
//set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//������������
//ע��: ��������Ԫ�ر���Ϊ��������
// auto test01(){
//   vector<int>v1;
//   vector<int>v2;
//   vector<int>v3;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//     v2.push_back(i+5);
//   }
//   //��������� ����������С���� ���ٿռ� ȡС������size����
//   v3.resize(min(v1.size(),v2.size()));
//   auto itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin()); //�᷵�ؽ����Ľ���������
//   for_each(v3.begin(), itEnd, myPrint);
// }
/*****************************************************/
//set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
//���������ϵĲ���
//ע��: �������ϱ�������������
// auto test01(){
//   vector<int>v1;
//   vector<int>v2;
//   vector<int>v3;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//     v2.push_back(i+5);
//   }
//   //��������� ��������û�н���, ������������������size���
//   v3.resize(v1.size()+v2.size());
//   auto itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//   for_each(v3.begin(), itEnd, myPrint);
// }
/*****************************************************/
//set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
//q���������ϵĲ
//ע��: �������ϱ���Ϊ��������
// auto test01(){
//   vector<int>v1;
//   vector<int>v2;
//   vector<int>v3;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//     v2.push_back(i+5);
//   }
//   //��������� ��������û�н���,ȡ���������д��size��ΪĿ��������size
//   v3.resize(max(v1.size(),v2.size()));
//   cout << "v1��v2�ĲΪ: " << endl;
//   auto itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//   for_each(v3.begin(), itEnd, myPrint);
//   cout << "v2��v1�ĲΪ: " << endl;
//   itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v3.begin());
//   for_each(v3.begin(), itEnd, myPrint);
// }
/*****************************************************/


int main(){
//ģ��(�����ص�:ģ�岻����ֱ��ʹ��,��ֻ��һ�����; ģ���ͨ�ò��������ܵ�)   
  //����ģ��
    //����ģ������﷨:template<typename T>  //��7��
    //     ������������
    //(template---��������ģ��, typename---���������ķ�����һ����������,������class����, T---ͨ�õ���������,���ƿ����滻,ͨ��Ϊ��д��ĸ)
    //�������� //��43��
    // test01(); 
    // //ģ������(���ַ�ʽ) //��20��
    // //1.�Զ������Ƶ�; 2.��ʾָ������
    // test02();
/*****************************************************/
    //����ģ��ע������
    //1.�Զ������Ƶ�,�����Ƶ���һ�µ���������T�ſ���ʹ��
    //2.ģ�����Ҫȷ����T����������,�ſ���ʹ��
    // test01(); //��53��
/*****************************************************/
    //����ģ�尸��
    //��ҵ17
/*****************************************************/
    //��ͨ�����뺯��ģ�������(��62��)
    //1.��ͨ��������ʱ�ᷢ���Զ�����ת��(��ʽ����ת��)
    //2.����ģ�����ʱ,��������Զ������Ƶ�,���ᷢ����ʽ����ת��
    //3.���������ʾָ�����͵ķ�ʽ,���Է�����ʽ����ת��.
    // test01();
    //ʹ�ú���ģ��ʱ����������ʾָ������
/*****************************************************/
    // //��ͨ�����뺯��ģ��ĵ��ù���(��78��)
    // //1.�����ͨ��������ͨ����������ʵ��,���ȵ�����ͨ����
    // //2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
    // //3.����ģ����Է�������
    // //4.�������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��
    // test01(); //���ɵ������ȵ�����ͨ����
    //ע:��ƽ������ʱ������Ҫ����ͨ�����뺯��ģ��ͬʱ����
/*****************************************************/
    // //ģ��ľ�����(ģ���ͨ���Բ��������ܵ�)
    // //����:
    // // template<class T>
    // // void func(T a, T b){
    // //     a = b;
    // // }  //��������a��b������,���޷�ʵ��
    // //����:
    // // template<class T>
    // // void f(T a, T b){
    // //     if(a > b){...}
    // // } //���T���������ʹ��������Person�������Զ�����������,Ҳ�޷���������
    // //���cppΪ�˽����������,�ṩģ�������,����Ϊ��Щ�ض��������ṩ���廯��ģ��(��100��)
    // test01();
    // // test02();
    // test03();
    //�ܽ�:���þ��廯��ģ��,���Խ���Զ����������͵�ͨ�û�; ѧϰģ�岢����Ϊ��дģ��,������STL�ܹ�����ϵͳ�ṩ��ģ��.
/*****************************************************/
  //��ģ��
    //��ģ������﷨: template<class T> //��141��
    //��
    // test01();
/*****************************************************/
    // //��ģ���뺯��ģ�������(��160��)
    // //1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
    // test01();
    // //2.��ģ����ģ������б�����Ĭ�ϲ���
    // test02();
/*****************************************************/    
    //��ģ���г�Ա��������ʱ�� (��186��)
    //��ģ���г�Ա�����ڵ���ʱ��ȥ����
    // test01();
/*****************************************************/
    // //��ģ��������������� (��216��)
    // //��ģ��ʵ�����Ķ���, �������εķ�ʽ
    // //1.ָ�����������  --ֱ����ʾ������������� (��229��)
    // test01();
    // //2.����ģ�廯      --�������еĲ�����Ϊģ����д��� (��237��)
    // test02();
    // //3.������ģ�廯    --������������� ģ�廯���д���(��248��)
    // test03();
/*****************************************************/   
    //��ģ����̳� (��259��)
    //������̳еĸ�����һ����ģ��ʱ,������������ʱ��,Ҫָ����������T������
    //�����ָ��,�������޷�������������ڴ�
    //��������ָ����������T������,����Ҳ���Ϊ��ģ��
    // test01();
    // test02();
/*****************************************************/ 
    //��ģ���Ա��������ʵ��(��283��)
    // test01();
/*****************************************************/ 
    //��ģ���ļ��ķ��ļ���д(��314��)
    // test01();
    // #include"Person.cpp" //��һ�ֽ����ʽ:ֱ�Ӱ���Դ�ļ�
    // #include"Person.hpp" //�ڶ��ֽ����ʽ:��.h��.cpp�е�����д��һ��,����׺����Ϊ.hpp�ļ�
/*****************************************************/ 
    // ��ģ������Ԫ(��339��)
    // test01();
    // test02();
/*****************************************************/   
//STL��ʶ(Standard Template Library)
    //�����Ϸ�Ϊ����(container),�㷨(algorithm�͵�����(iterator)
    //����ͨ�����������㷨�����޷�����
    //�������:����(����ʽ����,����ʽ����),�㷨(�ʱ��㷨,���ʱ��㷨),������(����˫�������,������ʵ�����),�º���,������(�����),�ռ�������
/*****************************************************/
  //vector���������������(��379��)
    // test01(); 
/*****************************************************/
  //vector����Զ�����������(��403��)
    //test01(); //(�Զ�����������)
    //test02(); //(�Զ�����������ָ��)
/*****************************************************/
  //����Ƕ������
  //test01(); //(��453��)
/*****************************************************/
 //string����
  //string���� ���캯��
    //test01(); //��485��
/*****************************************************/
  //string���� ��ֵ����
    //test01(); //��501��
/*****************************************************/
  //string���� �ַ���ƴ��
    //test01(); //��540��
/*****************************************************/
  //string���� �ַ������Һ��滻
    // test01(); //���� //��578��
    // test02(); //�滻
/*****************************************************/
  //string���� �ַ����Ƚ�(���ַ�����ASCII����жԱ�)
    //test01(); //��606��
/*****************************************************/
  //string���� �ַ���ȡ
    //test01(); //��617��
/*****************************************************/
  //string���� �����ɾ��
    //test01(); //��637��
/*****************************************************/
  //string���� �Ӵ���ȡ
    // test01(); //��652��
    // test02();
/*****************************************************/
 //vector����(Ҳ��Ϊ��������,���Զ�̬��չ(��̬��չ������ԭ�ռ�֮����¿ռ�,�����Ҹ�����ڴ�ռ�,Ȼ��ԭ���ݿ����¿ռ�,�ͷ�ԭ�ռ�))
 //vector�����ĵ�������֧��������ʵĵ�����
  //vector���� ���캯��
    //test01(); //��674��
/*****************************************************/
  //vector���� ��ֵ����
    //test01(); //��698��
/*****************************************************/
  //vector���� �����ʹ�С
    //test01(); //��726��
/*****************************************************/
  //vector���� �����ɾ��
    //test01(); //��756��
/*****************************************************/
  //vector���� ���ݴ�ȡ
    //test01(); //��789��
/*****************************************************/
  //vector���� ��������
    //test01(); //��806��
    //test02();
/*****************************************************/
  //vector���� Ԥ���ռ�
    //test01(); //��838��
/*****************************************************/
 //deque����(˫������,���Զ�ͷ�˽��в���ɾ������,����ȥҲ��֧��������ʵ�)
  //deque���� ���캯��
    //test01(); //��860��
/*****************************************************/
  //deque���� ��ֵ����
    //test01(); //��881��
/*****************************************************/
  //deque���� ��С����
    //test01(); //��901��
/*****************************************************/
  //deque���� �����ɾ��
    //test01(); //��922��
    //test02(); //��937��
    //test03(); //��957��
/*****************************************************/
  //deque���� ���ݴ�ȡ
    //test01(); //��977��
/*****************************************************/
  //deque���� �������
    //test01(); //��996��
/*****************************************************/
 //stack����(�Ƚ���������ݽṹ,��ֻ��һ������)(ջ�������б�����Ϊ)
  //�����ж������Ƿ�Ϊ��(empty),���Է���Ԫ�ظ���(size)
  //stack���� ���ýӿ�
    //test01(); //��1012��
/*****************************************************/
 //queue����(�Ƚ��ȳ������ݽṹ,������������)(����)
 //ֻ�ж�ͷ�Ͷ�β�ܱ�������,��˲����������Ϊ
  //queue���� ���ýӿ�
      //test01(); //��1030��
/*****************************************************/
 //list����(������Զ�����λ�ý��п��ٲ����ɾ��Ԫ��,���������ٶ�û�������,ռ�ÿռ�������)
 //STL�е�������һ��˫��ѭ������,������洢��ʽ�������������ڴ�ռ�,�������list�ĵ�����ֻ֧��ǰ�ƺͺ���,����˫�������
 //list�Ĳ��������ɾ�������������ԭ�е�list������ʧЧ,����vector�ǲ�������
  //list���� ���캯��
    //test01(); //��1068��
/*****************************************************/
  //list���� ��ֵ�ͽ���
    //test01(); //��1091��
    //test02();
/*****************************************************/
  //list���� ��С����
    //test01(); //��1131��
/*****************************************************/
  //list���� �����ɾ��
    //test01(); //��1165��
/*****************************************************/
  //list���� ���ݴ�ȡ
    //test01(); //��1200��
/*****************************************************/
  //list���� ��ת������
    //test01(); //��1217��
    //test02();
/*****************************************************/
 //set/multiset����(����,����ʽ����,�ײ�ṹ���ö�����ʵ�ֵ�.����Ԫ�ػ��ڲ���ʱ�Զ�����)
 //set���������������ظ���Ԫ��,��multiset�������������ظ���Ԫ��
  //set���� ����͸�ֵ
     //test01(); //��1262��
/*****************************************************/
  //set���� ��С�ͽ���
    //test01(); //��1283��
/*****************************************************/
  //set���� �����ɾ��
    //test01(); //��1307��
/*****************************************************/
  //set���� ���Һ�ͳ��
    //test01(); //��1330��
    //test02();
/*****************************************************/
  //set���� set��multiset������
    //test01(); //��1374��
/*****************************************************/
  //pair���鴴��
    //test01(); //��1393��
/*****************************************************/
  //set���� ��������ָ���������
    //test01(); //��1402��
/*****************************************************/
  //set���� �Զ�����������ָ���������
    //test01(); //��1446��
/*****************************************************/
 //map����(����Ԫ�ض���pair,pair�е�һ��Ԫ��Ϊkey(��ֵ),���������õڶ���Ԫ��Ϊvalue(ʵֵ),����Ԫ�ػ����Ԫ�صļ�ֵ�Զ�����)
 //�������ڹ���ʽ����,�ײ�ṹ���ö�����ʵ��
 //�ŵ�: ���Ը���keyֵ�����ҵ�valueֵ
 //map��multimap������: map���������������ظ���keyֵԪ��,��multimap�������������ظ���keyֵԪ��
  //map���� ����͸�ֵ
    //test01(); //��1470��
/*****************************************************/
  //map���� ��С�ͽ���
    //test01(); //��1488��
    //test02();
/*****************************************************/
  //map���� �����ɾ��
    //test01(); //��1517��
/*****************************************************/
  //map���� ���Һ�ͳ��
    //test01(); //��1545��
/*****************************************************/
  //map���� ����
    //test01(); //��1573��
    //test02();
/*****************************************************/
 //STL��������
  //�����������:���غ������ò���������,������Ϊ��������,��������ʹ�����ص�()ʱ,��Ϊ���ƺ�������,Ҳ�зº���
  //����:��������(�º���)��һ����,����һ������
  //ʹ���ص�:����������ʹ��ʱ,��������ͨ������������,Ҳ�����в���,�����з���ֵ
  //         �������󳬳���ͨ�����ĸ���,��������������Լ���״̬
  //         �������������Ϊ��������
  //�����������ʹ��
    //test01(); //��1615��
    //test02(); //��1638��
    //test03();
/*****************************************************/
  //ν�� һԪν��
  //����bool���͵ķº�����Ϊν��,���operat()����һ������,��ô����һԪν��,���operator()������������,��ô������Ԫν��
    //test01(); //��1656��
/*****************************************************/
  //ν�� ��Ԫν��
    //test01(); //��1674��
/*****************************************************/
  //�ڽ��������� �����º���(�����ͷ�ļ�functional)
    //test01(); //��1703��
    //test02();
/*****************************************************/
  //�ڽ��������� ��ϵ�º���
    //test01(); //��1720��
/*****************************************************/
  //�ڽ��������� �߼��º���
    //test01(); //��1745��
/*****************************************************/
 //�����㷨(��Ҫ��ͷ�ļ�<algorithm>,<functional>,<numeric>���)
 //<algorithm>������STLͷ�ļ�������һ��,��Χ�漰���Ƚ�,����,����,��������,����,�޸ĵȵ�
 //<numeric>�����С,ֻ��������������������м���ѧ����ĺ���ģ��
 //functional>������һЩģ����,����������������
  //���ñ����㷨 for_each(ʵ�ʿ�������õı����㷨)
    //test01(); //��1776��
/*****************************************************/
  //���ñ����㷨 transform
    //test01(); //��1794��
/*****************************************************/
  //���ò����㷨 find
    //test01(); //��1814��
    //test02(); //��1837��
/*****************************************************/
  //���ò����㷨 find_if
    //test01(); //��1857��
    //test02(); //��1873��
/*****************************************************/
  //���ò����㷨 adjacent_find
    //test01(); //��1904��
/*****************************************************/
  //���ò����㷨 binary_search
    //test01(); //��1923��
/*****************************************************/
  //���ò����㷨 count
    //test01(); //��1937��
    //test02(); //��1960��
/*****************************************************/
  //���ò����㷨 count_if
    //test01(); //��1986��
    //test02(); //��2015��
/*****************************************************/
  //���������㷨 sort
    //test01(); //��2033��
/*****************************************************/
  //���������㷨 random_shuffle(ϴ���㷨)
  //////////////////���㷨�ѱ��Ƴ�///////////////////////
    //test01(); //��2049��
/*****************************************************/
  //���������㷨 merge
    //test01(); //��2066��
/*****************************************************/
  //���������㷨 reverse
    //test01(); //��2085��
/*****************************************************/
  //���ÿ������滻�㷨 copy
    //test01(); //��2101��
/*****************************************************/
  //���ÿ������滻�㷨 replace
    //test01(); //��2114��
/*****************************************************/
  //���ÿ������滻�㷨 replace_if
    //test01(); //��2139��
/*****************************************************/
  //���ÿ����滻�㷨 swap
    //test01(); //��2159��
/*****************************************************/
  //�������������㷨(С���㷨<numeric>) accumulate
    //test01(); //��2179��
/*****************************************************/
  //�������������㷨(С���㷨<numeric>) fill
    //test01(); //��2191��
/*****************************************************/
  //���ü����㷨 set_intersection(�󽻼�)
    //test01(); //��2202��
/*****************************************************/
  //���ü����㷨 set_union(�󲢼�)
    //test01(); //��2219��
/*****************************************************/
  //���ü����㷨 set_difference(��)
    //test01(); //��2235��
/*****************************************************/





    system("pause");

    return 0;
}