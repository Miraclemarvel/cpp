//泛型编程和STL技术
#include<iostream>
using namespace std;
#include<algorithm>
#include<random>

// //交换两个整型的函数
// void swapInt(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// //交换两个浮点型的函数
// void swapDouble(double &a, double &b){
//     double temp = a;
//     a = b;
//     b = temp;
// }
// //函数模板
// template<typename T>
// void mySwap(T &a, T &b){
//     T temp = a;
//     a = b;
//     b = temp;
// }
// void test02(){
//     int a = 10, b = 20;
//     double c = 1.1, d = 2.2;
//     mySwap(a, b); //自动类型推导
//     mySwap(c, d);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     cout << "c = " << c << endl;
//     cout << "d = " << d << endl;
//     mySwap<int>(a, b); //显示指定类型
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
//     cout << "func 的调用" << endl;
// }
// void test01(){
//     // func(); //无法自动推导!!
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
//     cout << mAdd01(a, c) << endl; //在运算时将字符c隐式转换为ASCII码
//     cout << mAdd02(a, c) << endl; //模板自动推导无法转换
//     cout << mAdd02<int>(a, c) << endl; //显示指定类型可以转换
// }
/*****************************************************/
// void myPrint(int a, int b){
//     cout << "调用普通函数" << endl;
// }
// template<class T>
// void myPrint(T a, T b){
//     cout << "调用函数模板" << endl;
// }
// template<class T>
// void myPrint(T a, T b, T c){
//     cout << "调用重载函数模板" << endl;
// }
// void test01(){
//     int a = 10, b = 20, c = 30;
//     myPrint(a, b);
// //通过空模板参数列表调用函数模板
//     myPrint<>(a, b);
//     myPrint(a, b, c);
// //如果函数模板可以产生更好的匹配, 优先调用模板
//     char _a = 'a', _b = 'b';
//     myPrint(_a, _b);
// }
/*****************************************************/
//对比两个数是否相等
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
// //利用具体化Person的版本实现代码,具体化优先调用
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
//     Person<string, int> p1("孙悟空", 999);
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
//     //1.类模板没有自动类型推导的使用方式
//     // Person p1("孙悟空", 1000); //错误,无法用自动类型推导
//     Person<string, int> p1("孙悟空", 1000);
//     p1.showPerson();
// }
//     //2.类模板在模板参数列表中有默认参数
// void test02(){
//     Person<string> p2("猪八戒", 999);
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
//     //类模板中的成员函数
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
//         cout << "姓名: " << this->m_Name << " " << "年龄: " << this->m_Age << endl;
//     }
//     T1 m_Name;
//     T2 m_Age;
// };
// //1.指定传入的类型
// void printPerson1(Person<string, int>&p){
//     p.showPerson();
// }
// void test01(){
//     Person<string, int> p("孙悟空", 999);
//     printPerson1(p);
// }
// //2.参数模板化
// template<class T1, class T2>
// void printPerson2(Person<T1, T2>&p){
//     p.showPerson();
//     cout << "T1的类型为: " << typeid(T1).name() << endl;
//     cout << "T2的类型为: " << typeid(T2).name() << endl;
// }
// void test02(){
//     Person<string, int>p("猪八戒", 999);
//     printPerson2(p);
// }
// //3.整个类模板化
// template<class T>
// void printPerson3(T &p){
//     p.showPerson();
//     cout << "T的类型为: " << typeid(T).name() << endl;
// }
// void test03(){
//     Person<string, int> p("唐僧", 30);
//     printPerson3(p);
// }
/*****************************************************/   
// template<class T>
// class Base{
// public:
//     T m;
// };
// // class Son : public Base{}//错误,必须知道父类中的T类型,才能继承给子类
// class Son : public Base<int>{};
// void test01(){
//     Son s1;
//     s1.m = 114514;   
// }
// template<class T1, class T2>
// class Son2 : public Base<T2>{
// public:
//     Son2(){
//         cout << "T1的类型为: " << typeid(T1).name() << endl;
//         cout << "T2的类型为: " << typeid(T2).name() << endl;
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
//         // cout << "姓名: " << this->m_Name << endl;
//         // cout << "年龄: " << this->m_Age << endl;
//     //}
//     T1 m_Name;
//     T2 m_Age;
// };
// //构造函数的类外实现
// template<class T1, class T2>
// Person<T1, T2>::Person(T1 name, T2 age){
//     this->m_Name = name;
//     this->m_Age = age;
// }
// //成员函数的类外实现
// template<class T1, class T2>
// void Person<T1, T2>::showPerson(){
//     cout << "姓名: " << this->m_Name << endl;
//     cout << "年龄: " << this->m_Age << endl;
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
//     cout << "姓名: " << this->m_Name << endl;
//     cout << "年龄: " << this->m_Age << endl;
// }
// #include"Person.cpp" //第一种解决方式:直接包含源文件
// #include"Person.hpp" //第二种解决方式:将.h与.cpp中的内容写到一起,将后缀名改为.hpp文件
// void test01(){
//     Person<string, int> p("Jerry", 18);
//     p.showPerson();
// }
/*****************************************************/ 
//通过全局函数 打印Person信息
// template<class T1, class T2>
// class Person;
// template<class T1, class T2>
// void printPerson2(Person<T1, T2> p){
//     cout << "姓名: " << p.m_Name << " " << "年龄: " << p.m_Age << endl;
// }
// template<class T1, class T2>
// class Person{
//     // //全局函数 类内实现
//     // friend void printPerson1(Person<T1, T2> p){
//     //     cout << "姓名: " << p.m_Name << " " << "年龄: " << p.m_Age << endl;
//     // }
//     //全局函数类外实现
//     //加空模板参数列表
//     //如果全局函数是类外实现,需要让编译器知道这个函数的存在(将实现代码剪切至最顶部,并且将Person类提前声明)(第340行)
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
// //     cout << "姓名: " << p.m_Name << " " << "年龄: " << p.m_Age << endl;
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
//     vector<int> v; //创建一个vectoe容器,数组
//     //向容器中插入数据(尾插)
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     //通过迭代器访问容器中的数据
//     vector<int>::iterator itBegin = v.begin(); //起始迭代器: 指向容器中第一个元素
//     vector<int>::iterator itEnd = v.end();     //结束迭代器: 指向容器中的最后一个元素的下一个位置
//     //第一种遍历方式(比较复杂,不常用)
//     // while(itBegin!= itEnd){
//     //     cout << *itBegin << endl;
//     //     itBegin++;
//     // }
//     //第二种遍历方式(常用)
//     // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
//     //     cout << *it << endl;
//     // }
//     //第三种遍历方式(利用STL提供的遍历算法)
//     for_each(v.begin(), v.end(), myPrint);
// }
/*****************************************************/
//vector容器存放自定义数据类型
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
// //vector容器存放自定义数据类型指针
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
//     string s1; //默认构造

//     const char* str = "hello world";
//     string s2(str);  //使用字符串s初始化 string(const char* s)
//     cout << "s2 = " << s2 << endl;

//     string s3(s2); //拷贝构造 string(const string& str)
//     cout << "s3 = " << s3 << endl;

//     string s4(10, 'a'); //string(int n , char c) 使用n个字符c初始化
//     cout << "s4 = " << s4 << endl;

// }
/*****************************************************/
// /*
//   string& operator=(const char* s);     //char*类型字符串 赋值给当前的字符串
//   string& operator=(const string &s);   //把字符串赋给当前的字符串
//   string& operator=(char c);            //字符赋值给当前的字符串
//   string& assign(const char *s);        //把字符串s赋给当前的字符串
//   string& assign(const char *s, int n); //把字符串s的前n个字符赋给当前的字符串
//   string& assign(const string *s);      //把字符串s赋给当前字符串
//   string& assign(int n, char c);        //用n个字符c赋给当前字符串
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
// string& operator+=(const char* str);           //重载+=操作符
// string& operator+=(const char c);              //重载+=操作符
// string& operator+=(const string& str);         //重载+=操作符
// string& append(const char *s);                 //把字符串s连接到当前字符串结尾
// string& append(const char *s, int n);          //把字符串s的前n个字符连接到当前字符串结尾
// string& append(const string &s);               //同operator+=(const string& str)
// string&append(const string &s,int pos，int n)；//字符串s中从pos开始的n个字符连接到字符串结尾
// */
// void test01(){
//     string str1 = "我";

//     str1 += "爱玩游戏";
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
//     str3.append(str2, 6, 14);  //参数2:从哪个位置开始截, 参数3:截取字符个数
//     cout << "str3 = " << str3 << endl;
// }
/*****************************************************/
// /*
// int find(const string& str, int pos = 0) const;     //查找str第一次出现位置,从pos开始查找
// int find(const char* s, int pos = 0) const;         //查找S第一次出现位置,从pos开始查找
// int find(const char*s, int pos, int n) const;       //从pos位置查找s的前n个字符第一次位置
// int find(const char c, int pos = 0) const;          //查找字符C第一次出现位置
// int rfind(const string& str, int pos = npos) const; //查找str最后一次位置,从pos开始查找
// int rfind(const char* s, int pos = npos) const;     //查找S最后一次出现位置,从pos开始查找
// int rfind(const char* s, int pos, int n) const;     //从pos查找s的前n个字符最后一次位置
// int rfind(const char c,int pos = 0) const;          //查找字符C最后一次出现位置
// string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
// string& replace(int pos, int n,const char* s);      //替换从pos开始的n个字符为字符串S
// */
// //查找
// void test01(){
//     string str1 = "abcdefg";
//     int pos = str1.find("de");
//     if (pos == -1) cout << "未找到字符串" << endl;
//     else cout << "pos = " << pos << endl;
//     pos = str1.rfind("de");  //rfind从右往左查找,find从左往右查找
//     cout << "pos = " << pos << endl;
// }
// //替换
// void test02(){
//     string str1 = "abcdefg";
//     str1.replace(1, 3, "1111");
//     cout << "str1 = " << str1 << endl;
// }
/*****************************************************/
// //比较返回值: = -> 0; > -> 1; < -> -1
// //用来比较两字符串是否相等,判断谁大谁小意义不大
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
//     //通过[]访问单个字符
//     for(int i = 0; i < str1.size(); i++){
//         cout << str1[i] << " ";
//     }
//     cout << endl;
//     //通过at方式访问单个字符
//     for(int i = 0; i < str1.size(); i++){
//         cout << str1.at(i) << " ";
//     }
//     cout << endl;
//     //修改单个字符
//     str1[0] = 'x';
//     cout << "str1 = " << str1 << endl;
//     str1.at(1) = 'x';
//     cout << "str1 = " << str1 << endl;
// }
/*****************************************************/
/*
string& insert(int pos, const char* s);    //插入字符串
string&insert(int pos, const string& str); //插入字符串
string&insert(int pos, int n, char c);     //在指定位置插入n个字符C
string&erase(int pos, int n = npos);       //删除从Pos开始的n个字符
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
// //实用操作
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
//     vector<int> v1; //默认构造 无参构造(常用)
//     for (int i = 0; i < 10; i++){
//         v1.push_back(i);
//     }
    
//     for_each(v1.begin(), v1.end(), myPrint);
//     printVector(v1);

//     vector<int>v2(v1.begin(), v1.end()); //通过区间方式进行构造
//     printVector(v2);

//     vector<int>v3(10, 100);  //n个elem方式构造(n在前,elem在后)
//     printVector(v3);

//     vector<int>v4(v3);  //拷贝构造(常用)
//     printVector(v4);
// }
/*****************************************************/
/*
vector& operator=(const vector &vec)；//重载等号操作符
assign(beg, end);                     //将[beg，end)区间中的数据拷贝赋值给本身。T
assign(n; elem);                      //将n个elem拷贝赋值给本身。
*/
// void test01(){
//   vector<int> v1; //默认构造 无参构造(常用)
//   for (int i = 0; i < 10; i++){
//       v1.push_back(i);
//   }
//   printVector(v1);
//   vector<int>v2;
//   v2 = v1;  //赋值 operator=
//   printVector(v1);

//   vector<int>v3;
//   v3.assign(v1.begin(), v1.end());  //赋值assign
//   printVector(v3);

//   vector<int>v4;
//   v4.assign(10, 100);   //assign赋值 n个elem n在前,elem在后
//   printVector(v4);
// }
/*****************************************************/
/*
empty();              //判断容器是否为空
capacity();           //容器的容量
size();               //返回容器中元素的个数
resize(int num);      //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
                      //如果容器变短，则末尾超出容器长度的元素被删除。
resize(int num,elem)；//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
                      //如果容器变短，则末尾超出容器长度的元素被删除
*/
// void test01(){
//   vector<int>v1;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//   }
//   printVector(v1);

//   if(v1.empty()) cout << "v1为空" << endl;
//   else{
//     cout << "v1不为空" << endl;
//     cout << "v1的容量为: " << v1.capacity() << endl;
//     cout << "v1的大小为: " << v1.size() << endl;
//   }

//   //v1.resize(15);
//   v1.resize(15, 100); //利用重载版本可以指定默认的填充值, 即参数2
//   printVector(v1); //如果重新指定的比原来长了,默认用0填充新的位置
//   v1.resize(5);
//   printVector(v1); //如果重新指定的比原来短了,超出部分会删除掉
// }
/*****************************************************/
/*
push_back(ele);                                  //尾部插入元素ele
pop_back();                                      //删除最后一个元素
insert(const_iterator pos,ele);                  //迭代器指向位置pos插入元素ele
insert(const_iterator pos,int count,ele)；       //迭代器指向位置pos插入count个元素ele
erase(const_iterator pos);                       //删除迭代器指向的元素
erase(const_iterator start, const_iterator end)；//删除迭代器从start到end之间的元素
clear();                                         //删除容器中所有元素
*/
// void test01(){
//   vector<int>v1;
//   //尾插
//   v1.push_back(10);
//   v1.push_back(20);
//   v1.push_back(30);
//   v1.push_back(40);
//   v1.push_back(50);
//   printVector(v1);
//   //尾删
//   v1.pop_back();  
//   printVector(v1);
//   //插入  第一个参数是迭代器
//   v1.insert(v1.begin(),100);
//   printVector(v1);
//   v1.insert(v1.begin(), 2, 1000);  //插入n个elem(n为第二个参数, elem为第三个参数)
//   printVector(v1);
//   //删除  参数也是迭代器
//   v1.erase(v1.begin());
//   printVector(v1);
//   v1.erase(v1.begin(), v1.begin()+2);  //删除区间
//   printVector(v1);
//   //清空
//   v1.clear();
//   printVector(v1);
// }
/*****************************************************/
/*
at(int idx); //返回索引idx所指的数据
operator[];  //返回索引idx所指的数据
front();     //返回容器中第一个数据元素
back();      //返回容题中最后一个数据元素
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
//   //获取第一个元素
//   cout << "第一个元素为: " << v1.front() << endl;
//   //获取最后一个元素
//   cout << "最后一个元素为: " << v1.back() << endl;
// }
/*****************************************************/
//swap(vec);将vec与本身的元素互换
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
// //实际用途(巧用swap可以收缩内存空间)
// void test02(){
//   vector<int>v3;
//   for(int i = 0; i < 100000; i++){
//     v3.push_back(i);
//   }
//   cout << "v3的容量为: " << v3.capacity() << endl;
//   cout << "v3的大小为: " << v3.size() << endl;
//   v3.resize(3);
//   cout << "v3的容量为: " << v3.capacity() << endl;
//   cout << "v3的大小为: " << v3.size() << endl;
//   vector<int>(v3).swap(v3); //匿名对象
//   cout << "v3的容量为: " << v3.capacity() << endl;
//   cout << "v3的大小为: " << v3.size() << endl;
// }
/*****************************************************/
//reserve(int len); //容器预留len个元素长度,预留位置不初始化,元素不可访问(用来减少vector在动态扩展容量时的扩展次数)
// void test01(){
//   vector<int> v1;
//   //利用reserve预留空间
//   v1.reserve(100000);
//   int num = 0; //统计开辟次数
//   int *p = NULL;
//   for(int i = 0; i < 100000; i++){
//     v1.push_back(i);
//     if(p != &v1[0]){
//       p = &v1[0];
//       num++;
//     } 
//   }
//   cout << "扩展次数为num: " << num << endl;
// }
/*****************************************************/
#include<deque>
void printDeque(const deque<int> &d){  //只读
  for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++){
    //*it = 100;  //防止数据操作
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

//   if(d1.empty()) cout << "d1为空" << endl;
//   else{
//     cout << "d1的大小为: " << d1.size() << endl;  //注:deque容器没有capacity的接口,没有容量的概念
//   }

//   d1.resize(15);
//   printDeque(d1);
//   d1.resize(20, 100);
//   printDeque(d1);
//   d1.resize(5);
//   printDeque(d1);
// } 
/*****************************************************/
//两端操作
// void test01(){
//   deque<int>d1;
//   //尾插
//   d1.push_back(10);
//   d1.push_back(20);
//   //头插
//   d1.push_front(100);
//   d1.push_front(200);
//   printDeque(d1);
//   //尾删
//   d1.pop_back();
//   //头删
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
//   //删除
//   deque<int>::iterator it = d1.begin();
//   it++;
//   d1.erase(it);
//   printDeque(d1);
//   //按区间删除
//   d1.erase(it, it+2);
//   printDeque(d1);
//   //清空
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

//   cout << "第一个元素为: " << d1.front() << endl;
//   cout << "最后一个元素为: " << d1.back() << endl;
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

//   cout << "排序前: " << endl;
//   printDeque(d1);
//   cout << "排序后: " << endl;
//   sort(d1.begin(), d1.end()); //默认升序,对于随机访问的迭代器,都可以利用sort进行排序
//   printDeque(d1);
// }
/*****************************************************/
#include<stack>
// void test01(){
//   stack<int>s;
//   //入栈
//   s.push(10);
//   s.push(20);
//   s.push(30);
//   s.push(40);
//   cout << "栈的大小为: " << s.size() << endl; 
//   //只要栈不为空.查看栈顶,并且执行出栈操作
//   while(!s.empty()){
//     cout << "栈顶元素为: " << s.top() << endl;  //查看栈顶元素
//     s.pop(); //出栈
//   }
//   cout << "栈的大小为: " << s.size() << endl; 
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
//   //创建队列
//   queue<Person>q;
//   Person p1("唐僧", 30);
//   Person p2("孙悟空", 1000);
//   Person p3("猪八戒", 900);
//   Person p4("沙僧", 800);
//   //入队
//   q.push(p1);
//   q.push(p2);
//   q.push(p3);
//   q.push(p4);
//   cout << "队列的大小为: " << q.size() << endl;
//   //判断只要队列不为空.查看队头和队尾,出队
//   while(!q.empty()){
//     //查看队头
//     cout << "队头元素--姓名: " << q.front().m_Name << " 年龄: " << q.front().m_Age << endl;
//     //查看队尾
//     cout << "队尾元素--姓名: " << q.back().m_Name << " 年龄: " << q.back().m_Age << endl;
//     //出队
//     q.pop();
//   }
//   cout << "队列的大小为: " << q.size() << endl;
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
//   //创建list容器
//   list<int>L1;
//   //添加数据
//   L1.push_back(10);
//   L1.push_back(20);
//   L1.push_back(30);
//   L1.push_back(40);
//   //遍历容器
//   printList(L1);
//   for_each(L1.begin(), L1.end(), myPrint);
//   //区间方式构造
//   list<int>L2(L1.begin(), L1.end());
//   printList(L2);
//   //拷贝构造
//   list<int>L3(L2);
//   printList(L3);
//   //n个elem
//   list<int>L4(10, 1000);
//   printList(L4);
// }
/*****************************************************/
// //赋值
// void test01(){
//   list<int>L1;
//   L1.push_back(10);
//   L1.push_back(20);
//   L1.push_back(30);
//   L1.push_back(40);
//   printList(L1);
//   //赋值
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
// //交换
// void test02(){
//   list<int>L1;
//   L1.push_back(10);
//   L1.push_back(20);
//   L1.push_back(30);
//   L1.push_back(40);
  
//   list<int>L2;
//   L2.assign(10, 100);

//   cout << "交换前: " << endl;
//   printList(L1);
//   printList(L2);
//   cout << "交换后: " << endl;
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

//   if(L1.empty()) cout << "L1为空";
//   else{
//     cout << "L1的元素个数为: " << L1.size() << endl;
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
push_back(elem);      //在容器尾部加入一个元素
pop_back();           //删除容器中最后一个元素
push_front(elem);     //在容器开头插入一个元素
pop_front();          //从容器开头移除第一个元素
insert(pos,elem);     //在pos位置插elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem);   //在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end);  //在pos位置插入[beg，end)区间的数据，无返回值。
clear();              //移除容器的所有数据
erase(beg,end);       //删除[beg，end)区间的数据，返回下一个数据的位置。
erase(pos);           //删除pos位置的数据，返回下一个数据的位置。
remove(elem);         //删除容器中所有与elem值匹配的元素。
*/
// void test01(){
//   list<int>L1;
//   //尾插
//   L1.push_back(10);
//   L1.push_back(20);
//   L1.push_back(30);
//   //头插
//   L1.push_front(100);
//   L1.push_front(200);
//   L1.push_front(300);
//   printList(L1);
//   //尾删
//   L1.pop_back();
//   //头删
//   L1.pop_front();
//   printList(L1);
//   //insert插入
//   list<int>::iterator it = L1.begin();
//   L1.insert(++it, 1000);
//   printList(L1);
//   //删除
//   it = L1.begin();
//   L1.erase(++it);
//   printList(L1);
//   //移除
//   it = L1.begin();
//   L1.insert(it, 10, 10000);
//   printList(L1);
//   L1.remove(10000);
//   printList(L1);
//   //清空
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
//   //L1[0]和L1.at(0)都是不合法的,原因是list本质是链表,不是用连续线性空间存储数据,迭代器也是不支持随机访问的
//   cout << "L1的第一个元素为: " << L1.front() << endl;
//   cout << "L1的最后一个元素为: " << L1.back() << endl;
//   //验证迭代器是不支持随机访问的
//   list<int>::iterator it = L1.begin();
//   it++;
//   //it+=1; //支持++或者--(双向),不支持随机访问
// }
/*****************************************************/
//reverse() //反转排序
//sort()    //链表排序
// void test01(){
//   //反转
//   list<int>L1;
//   L1.push_back(20);
//   L1.push_back(10);
//   L1.push_back(50);
//   L1.push_back(40);
//   L1.push_back(30);
//   cout << "反转前: " << endl;
//   printList(L1);
//   cout << "反转后: " << endl;
//   L1.reverse();
//   printList(L1);
// }
// bool myCompare(int v1, int v2){
//   //降序 就让第一个数 > 第二个数
//   //若返回值为true,则让两个参数进行交换,若返回值为false则不动
//   return v1 > v2;
// }
// void test02(){
//   //排序
//   list<int>L1;
//   L1.push_back(20);
//   L1.push_back(10);
//   L1.push_back(50);
//   L1.push_back(40);
//   L1.push_back(30);
//   cout << "排序前: " << endl;
//   //所有不支持随机访问迭代器的容器,不可以用标准算法
//   //不支持随机访问迭代器的容器,内部都会提供对应的一些算法
//   //sort(L1.begin(), L1.end());
//   L1.sort(); //默认排序规则: 从小到大 升序
//   cout << "排序后: " << endl;
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
//   //插入数据,只有insert的方式
//   s1.insert(10);
//   s1.insert(40);
//   s1.insert(30);
//   s1.insert(20);
//   s1.insert(30);
//   //遍历容器
//   //set容器特点: 所有元素插入时候自动排序,不允许插入重复值
//   printSet(s1);
//   for_each(s1.begin(), s1.end(), myPrint);
//   //拷贝构造
//   set<int>s2(s1);
//   printSet(s2);
//   //赋值
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
//   //大小
//   if(s1.empty()) cout << "s1为空" << endl;
//   else cout << "s1的元素个数为: " << s1.size() << endl;
//   //交换
//   set<int>s2;
//   s2.insert(100);
//   s2.insert(400);
//   s2.insert(300);
//   s2.insert(200);
//   cout << "交换前: " << endl;
//   printSet(s1);
//   s1.swap(s2);
//   cout << "交换后: " << endl;
//   printSet(s1);
//   //注意:set容器不支持resize(),因为resize()后可能出现相同的0
// }
/*****************************************************/
// void test01(){
//   set<int>s1;
//   //插入  
//   s1.insert(30);
//   s1.insert(10);
//   s1.insert(40);
//   s1.insert(20);
//   //遍历
//   printSet(s1);
//   //删除
//   s1.erase(s1.begin());
//   printSet(s1); //删除为排序后的结果
//   s1.erase(30);
//   printSet(s1);
//   s1.erase(s1.begin(), ++s1.begin());
//   printSet(s1);
//   //清空
//   s1.clear();
//   printSet(s1);
// }
/*****************************************************/
//find(key) 查找key是否存在,若存在,则返回该键的迭代器,若不存在,返回set.end();
//count(key) 统计key的元素个数
// void test01(){
//   set<int>s1;
//   s1.insert(10);
//   s1.insert(40);
//   s1.insert(30);
//   s1.insert(20);
//   printSet(s1);
//   //查找
//   //set<int>::iterator pos = s1.find(30);
//   set<int>::iterator pos = s1.find(50);
//   if(pos != s1.end()) cout << "找到元素: " << *pos << endl;
//   else cout << "未找到该元素" << endl;
// }
// //统计
// void test02(){
//   set<int>s1;
//   s1.insert(10);
//   s1.insert(40);
//   s1.insert(30);
//   s1.insert(20);
//   int num = s1.count(30); //对于set而言统计的结果只有0和1
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
//   cout << *(++pos); //查找结果为元素第一次出现的迭代器
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
//   //insert之后会有两个返回值,一个迭代器一个bool
//   pair<set<int>::iterator, bool> ret = s.insert(10);
//   if(ret.second) cout << "第一次插入成功" << endl;
//   else cout << "第一次插入失败" << endl;
//   ret = s.insert(10);
//   if(ret.second) cout << "第二次插入成功" << endl;
//   else cout << "第二次插入失败" << endl;
//   multiset<int>ms;
//   //允许插入重复值
//   //insert之后只有一个返回值,即迭代器
//   ms.insert(10);
//   ms.insert(10);
//   printMultiset(ms);
// }
/*****************************************************/
//pair<type, type> p (value1, value2);
//pair<type, type> p =make_pair(value1, value2);
// void test01(){
//   //第一种方式
//   pair<string, int> p1("Tom", 20);
//   cout << "姓名: " << p1.first << " " << "年龄: " << p1.second << endl;
//   //第二种方式
//   pair<string, int> p2 = make_pair("Jerry", 30);
//   cout << "姓名: " << p2.first << " " << "年龄: " << p2.second << endl;
// }
/*****************************************************/
// class Mycompare{
// public:
//   bool operator()(int v1, int v2){
//     return v1 > v2;
//  }
// };
// //存放内置数据类型
// void test01(){
//   set<int>s1;
//   //默认排序为升序
//   s1.insert(10);
//   s1.insert(40);
//   s1.insert(20);
//   s1.insert(50);
//   s1.insert(30);
//   printSet(s1);
//   //指定排序规则为从大到小
//   set<int,Mycompare>s2;
//   //默认排序为升序
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
//     //按照年龄 降序
//     return p1.m_Age > p2.m_Age;
//   }
// };
// //存放自定义数据类型
// void test01(){
//   //自定义数据类型都会指定排序规则
//   set<Person, comparePerson>s;
//   Person p1("刘备", 24);
//   Person p2("关羽", 28);
//   Person p3("张飞", 25);
//   Person p4("赵云", 21);

//   s.insert(p1);
//   s.insert(p2);
//   s.insert(p3);
//   s.insert(p4);

//   for(set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++){
//     cout << "姓名: " << it->m_Name << " " << "年龄: " << it->m_Age << endl;
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
//   //创建map容器
//   map<int, int> m;
//   m.insert(pair<int, int>(3, 30));
//   m.insert(pair<int, int>(1, 10));
//   m.insert(pair<int, int>(4, 40));
//   m.insert(pair<int, int>(2, 20));
//   printMap(m);
//   //拷贝构造
//   map<int, int>m2(m);
//   printMap(m);
//   //赋值
//   map<int, int>m3;
//   m3 = m2;
//   printMap(m3);
// }
/*****************************************************/
// //大小
// void test01(){
//   map<int, int> m;
//   m.insert(pair<int, int>(3, 30));
//   m.insert(pair<int, int>(1, 10));
//   m.insert(pair<int, int>(4, 40));
//   m.insert(pair<int, int>(2, 20));
//   if(m.empty()) cout << "m为空" << endl;
//   else cout << "m的元素个数为: " << m.size() << endl;
// }
// //交换
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
//   cout << "交换前: " << endl;
//   printMap(m);
//   printMap(m2);
//   cout << "交换后: " << endl;
//   m.swap(m2);
//   printMap(m);
//   printMap(m2);
// }
/*****************************************************/
// void test01(){
//   //插入
//   map<int, int> m;
//   //第一种
//   m.insert(pair<int, int>(3, 30));
//   //第二种(常用)
//   m.insert(make_pair(1, 10));
//   //第三种
//   m.insert(map<int, int>::value_type(4, 40));
//   //第四种(嘿嘿,[]不过不太建议用来插入,因为如果插错了或者插了一个key不存在的数,他会自动创建一个value为0元素)
//   //通常用此来利用key来访问value
//   m[2] = 20;
//   printMap(m);
//   //删除
//   //按照迭代器来删除
//   m.erase(m.begin()++);
//   printMap(m);
//   //按照key来删除
//   m.erase(3);
//   printMap(m);
//   //按照区间来删除
//   m.erase(m.begin(), ++m.begin());
//   printMap(m);
//   //清空
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
//   //查找
//   map<int, int>::iterator pos = m.find(3);
//   if(pos != m.end()){
//     cout << "查找到了元素key = " << pos->first << " value = " << pos->second << endl;
//   }
//   else{
//     cout << "未找到该元素" << endl;
//   }
//   //统计
//   int num = m.count(3); //map容器不允许插入重复的key,所以count结果只有0或者1,而multimap的count可以大于1
//   cout << "num = " << num << endl;
// }
/*****************************************************/
//map容器默认排序规则为按照key值进行从小到大的升序排序
//利用仿函数改变排序规则
// class myCompare{
// public:
//   bool operator()(int v1, int v2){
//     //降序
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
//   Person p1("刘备", 24);
//   Person p2("关羽", 28);
//   Person p3("张飞", 25);
//   Person p4("赵云", 21);
//   //m.insert(make_pair(p1, 1));
//   m[p1] = 1;
//   //m.insert(make_pair(p2, 2));
//   m[p2] = 2;
//   //m.insert(make_pair(p3, 3));
//   m[p3] = 3;
//   //m.insert(make_pair(p4, 4));
//   m[p4] = 4;
//   for(map<Person, int, comparePerson>::const_iterator it = m.begin(); it != m.end(); it++){
//     cout << "key: " << "姓名: " << it->first.m_Name << "年龄: " << it->first.m_Age << " value: " << it->second << endl;
//   }
// }
/*****************************************************/
// class MyAdd{
// public:
//   int operator()(int v1, int v2){
//     return v1 + v2;
//   }
// };
// //1.函数对象在使用时,可以像普通函数那样调用,也可以有参数,可以有返回值
// void test01(){
//   MyAdd myAdd;
//   cout << myAdd(10, 10) << endl;
// }
// //2.函数对象超出普通函数的概念,函数对象可以有自己的状态
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
//   cout << "_myPrint调用的次数为: " << _myPrint.count << endl;
// }
// //3.函数对象可以作为参数传递
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
//   //查找容器中 有没有大于5的数字
//   //GreaterFive()匿名函数对象
//   vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//   if(it == v.end()) cout << "未找到" << endl;
//   else cout << "找到了大于5的数字: " << *it <<endl;
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
//     //使用函数对象,改变算法策略,变为排序规则为从大到小
//     sort(v.begin(), v.end(), myCompare());
//     printVector(v);
// }
/*****************************************************/
#include<functional>
// template<class T> T plus<T>       //加法仿函数
// template<class T> T minus<T>      //减法仿函数
// template<class T> T multiplies<T> //乘法仿函数
// template<class T> T divides<T>    //除法仿函数
// template<class T> T modulus<T>    //取模仿函数
// template<class T> T negate<T>     //取反仿函数
//negate一元仿函数 取反仿函数
// void test01(){
//   negate<int>n;
//   cout << n(50) << endl;
// }
// //plus 二元仿函数 加法
// void test02(){
//   plus<int> p; //默认传同种数据类型
//   cout << p(10, 20) << endl;
// }
/*****************************************************/
// template<class T> bool equal_to<T>      //等于
// template<class T> bool not_equal_to<T>  //不等于
// template<class T> bool greater<T>       //大于
// template<class T> bool greater_equal<T> //大于等于
// template<class T> bool less<T>          //小于
// template<class T> bool less_equal<T>    //小于等于
//大于 greater (最常用)
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
//   //降序
//   //sort(v.begin(), v.end(), myCompare());
//   //greater<int>() 内建函数对象
//   sort(v.begin(), v.end(), greater<int>());
//   printVector(v);
// }
/*****************************************************/
// template<class T> bool logical_and<T> //逻辑与
// template<class T> bool logical_or<T>  //逻辑或
// template<class T> bool logical_not<T> //逻辑非
//逻辑非(常用)
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
//   //利用逻辑非,将容器v搬运到容器v2中,并执行取反操作
//   vector<bool>v2;
//   v2.resize(v.size());
//   transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//     for(vector<bool>::iterator it = v2.begin(); it != v2.end(); it++){
//     cout << *it << " ";
//   }
//   cout << endl;
// }
/*****************************************************/
//for_each(iterator beg, iterator end, _func); //遍历容器
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
//   //普通函数(传函数名,即不带括号)
//   for_each(v.begin(), v.end(), print01);
//   cout << endl;
//   //仿函数(传匿名对象,即带括号)
//   for_each(v.begin(), v.end(), print02());
//   cout << endl;
// }
/*****************************************************/
//transform(iterator beg1, iterator end1, iterator beg2, _func); //搬运容器到另一个容器中
//beg1 源容器开始迭代器
//end1 源容器结束迭代器
//beg2 目标容器开始迭代器
//_func 函数或者函数对象
// class Transform{
// public:
//   int operator()(int v){
//     return v + 100; //仿函数可以进行一些逻辑运算
//   }
// };
// void test01(){
//   vector<int>v;
//   for(int i = 0; i < 10; i++){
//     v.push_back(i);
//   }
//   vector<int>vTarget;
//   vTarget.resize(v.size()); //目标容器需要提前开辟空间
//   transform(v.begin(), v.end(), vTarget.begin(), Transform());
//   printVector(vTarget);
// }
/*****************************************************/
//find(iterator beg, iterator end, value)
//按值查找元素,找到返回指定位置的迭代器,找不到返回结束迭代器位置
//查找 内置数据类型
// void test01(){
//   vector<int>v;
//   for(int i = 0; i < 10; ++i){
//     v.push_back(i);
//   }
//   auto pos = find(v.begin(), v.end(), 5);
//   if(pos == v.end()) cout << "没有找到!" << endl;
//   else cout << "找到指定元素: " << *pos << endl;
// }
//查找 自定义数据类型
// class Person{
// public:
//   string m_Name;
//   int m_Age;
//   Person(string name, int age) : m_Name(name), m_Age(age){}
//   //重载 == 底层find知道如何对比Person数据类型
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
//   if(pos == v.end()) cout << "没有找到!" << endl;
//   else cout << "找到元素 姓名: " << pos->m_Name  << " 年龄: " << pos->m_Age << endl;
// }
/*****************************************************/
//find_if(iterator beg, iterator end, _Pred)
//按值查找元素,找到返回指定位置迭代器,找不到返回结束迭代器位置
//_Pred函数或者谓词(返回bool类型的仿函数)
//查找 自定义数据类型
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
//   if(pos == v.end()) cout << "没有找到!" << endl;
//   else cout << "找到大于5的元素: " << *pos << endl;
// }
// //查找 自定义数据类型
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
//   if(pos == v.end()) cout << "没有找到!" << endl;
//   else cout << "找到目标 姓名: " << pos->m_Name << " 年龄: " << pos->m_Age;
// }
/*****************************************************/
//adjacent_find(iterator beg,iterator end);
//查找相邻重复元素,返回相邻元素的第一个位置的迭代器
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
//   if(pos == v.end()) cout << "未找到相邻重复元素" << endl;
//   else cout << "找到相邻重复元素: " << *pos << endl;
// }
/*****************************************************/ 
//bool binary_search(iterator beg, iterator end, value);
//查找指定的元素,查到返回true,否则返回false
//注意: 在无序序列中不可用(因为其底部逻辑为二分查找,查找效率高但是需要有序序列)
// auto test01(){
//   vector<int>v;
//   for(int i = 0; i < 10; i++){
//     v.push_back(i);
//   }
//   //v.push_back(2); //如果是无序序列,结果未知!
//   auto ret = binary_search(v.begin(), v.end(), 9);
//   if(ret) cout << "找到了元素" << endl;
//   else cout << "未找到" << endl;
// }
/*****************************************************/
//count(iterator beg, iterator end, value);
//统计元素出现次数
//统计内置数据类型
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
//   cout << "40的元素个数为: " << num << endl;
// }
// //统计自定义数据类型
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
//   Person p1("刘备", 35);
//   Person p2("关羽", 35);
//   Person p3("张飞", 35);
//   Person p4("赵云", 30);
//   Person p5("曹操", 40);
//   v.push_back(p1);
//   v.push_back(p2);
//   v.push_back(p3);
//   v.push_back(p4);
//   v.push_back(p5);
//   Person p("诸葛亮", 35);
//   int num = count(v.begin(), v.end(), p);
//   cout << "和诸葛亮同岁数的人员个数为: " << num << endl;
// }
/*****************************************************/
//count_if(iterator beg, iterator end, _Pred);
//按条件统计元素出现次数
//按条件统计 内置数据类型
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
//   cout << "大于20的数的个数为: " << num << endl;

// }
//按条件统计 自定义数据类型
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
//   Person p1("刘备", 35);
//   Person p2("关羽", 35);
//   Person p3("张飞", 35);
//   Person p4("赵云", 30);
//   Person p5("曹操", 40);
//   v.push_back(p1);
//   v.push_back(p2);
//   v.push_back(p3);
//   v.push_back(p4);
//   v.push_back(p5);
//   int num  = count_if(v.begin(), v.end(), AgeGreater20());
//   cout << "年龄大于等于35的人数为: " << num << endl;
// }
/*****************************************************/
//sort(iterator beg, iterator end, _Pred);
//对容器内元素进行排序,默认升序
// auto test01(){
//   vector<int>v;
//   v.push_back(10);
//   v.push_back(40);
//   v.push_back(30);
//   v.push_back(20);
//   v.push_back(50);
//   //默认排序(升序)
//   sort(v.begin(), v.end());
//   printVector(v);
//   //降序
//   sort(v.begin(), v.end(), greater<int>());
//   printVector(v);
// }
/*****************************************************/
// //random_shuffle(iterator beg, iterator end)
// //指定范围内的元素随机调整次序
// #include<ctime>
// auto test01(){
//   srand((unsigned int) time (NULL));
//   vector<int>v;
//   v.push_back(10);
//   v.push_back(40);
//   v.push_back(30);
//   v.push_back(20);
//   v.push_back(50);
//   //默认排序(升序)
//   sort(v.begin(), v.end());
//   printVector(v);
//   //洗牌
//   shuffle(v.begin(), v.end(), default_random_engine(time(0)));
//   printVector(v);
// }
/*****************************************************/
//merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//两个容器元素合并,并存储到另一个容器中
//注意:两容器必须是有序的(并且是同序)
//dest目标容器开始迭代器
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
//反转指定范围的元素
// auto test01(){
//   vector<int>v;
//   v.push_back(10);
//   v.push_back(40);
//   v.push_back(30);
//   v.push_back(20);
//   v.push_back(50);
//   cout << "反转前: " << endl;
//   printVector(v);
//   reverse(v.begin(), v.end());
//   cout << "反转后: " << endl;
//   printVector(v);
// }
/*****************************************************/
//copy(iterator beg, iterator end, iterator dest);
//将容器内指定范围的元素拷贝到另一个容器中(实际开发中常用=直接赋值)
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
//将区间内旧元素替换成为新元素
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
//   cout << "替换前: " << endl;
//   printVector(v);
//   replace(v.begin(), v.end(), 20, 2000);
//   cout << "替换后: " << endl;
//   printVector(v);
// }
/*****************************************************/
//replace_if(iterator beg, iterator end, _Pred, new value);
//按条件替换元素,满足条件的替换成指定元素
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
//   //将大于等于30的替换为3000;
//   cout << "替换前: " << endl;
//   printVector(v);
//   replace_if(v.begin(), v.end(), Greater_Equal30(), 3000);
//   cout << "替换后: " << endl;
//   printVector(v);
// }
/*****************************************************/
//swap(container c1, container c2);
//互换两个容器的元素(同种类型)
// auto test01(){
//   vector<int>v1;
//   vector<int>v2;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//     v2.push_back(i+100);
//   }
//   cout << "交换前: " << endl;
//   printVector(v1);
//   printVector(v2);
//   cout << "交换后: " << endl;
//   swap(v1, v2);
//   printVector(v1);
//   printVector(v2);  
// }
/*****************************************************/
#include<numeric>
//accumulate(iterator beg, iterator end, value)
//计算容器元素累计总和
//value为起始值
// auto test01(){
//   vector<int>v;
//   for(int i = 0; i <= 100; i++){
//     v.push_back(i);
//   }
//   int num = accumulate(v.begin(), v.end(), 0);
//   cout << "总和为: " << num << endl;
// }
/*****************************************************/
//fill(iterator beg, iterator end, value);
//向容器中填充元素
//value填充值
// auto test01(){
//   vector<int>v;
//   v.resize(10);
//   //用于后期重新填充
//   fill(v.begin(), v.end(), 100);
//   printVector(v);
// }
/*****************************************************/
//set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//求两容器交集
//注意: 两容器的元素必须为有序序列
// auto test01(){
//   vector<int>v1;
//   vector<int>v2;
//   vector<int>v3;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//     v2.push_back(i+5);
//   }
//   //最特殊情况 大容器包含小容器 开辟空间 取小容器的size即可
//   v3.resize(min(v1.size(),v2.size()));
//   auto itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin()); //会返回交集的结束迭代器
//   for_each(v3.begin(), itEnd, myPrint);
// }
/*****************************************************/
//set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
//求两个集合的并集
//注意: 两个集合必须是有序序列
// auto test01(){
//   vector<int>v1;
//   vector<int>v2;
//   vector<int>v3;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//     v2.push_back(i+5);
//   }
//   //最特殊情况 两个容器没有交集, 并集就是两个容器的size相加
//   v3.resize(v1.size()+v2.size());
//   auto itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//   for_each(v3.begin(), itEnd, myPrint);
// }
/*****************************************************/
//set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
//q求两个集合的差集
//注意: 两个集合必须为有序序列
// auto test01(){
//   vector<int>v1;
//   vector<int>v2;
//   vector<int>v3;
//   for(int i = 0; i < 10; i++){
//     v1.push_back(i);
//     v2.push_back(i+5);
//   }
//   //最特殊情况 两个容器没有交集,取两个容器中大的size作为目标容器的size
//   v3.resize(max(v1.size(),v2.size()));
//   cout << "v1和v2的差集为: " << endl;
//   auto itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//   for_each(v3.begin(), itEnd, myPrint);
//   cout << "v2和v1的差集为: " << endl;
//   itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v3.begin());
//   for_each(v3.begin(), itEnd, myPrint);
// }
/*****************************************************/


int main(){
//模板(概念特点:模板不可以直接使用,它只是一个框架; 模板的通用并不是万能的)   
  //函数模板
    //函数模板基本语法:template<typename T>  //第7行
    //     函数声明或定义
    //(template---声明创建模板, typename---表面其后面的符号是一种数据类型,可以用class代替, T---通用的数据类型,名称可以替换,通常为大写字母)
    //常规做法 //第43行
    // test01(); 
    // //模板做法(两种方式) //第20行
    // //1.自动类型推导; 2.显示指定类型
    // test02();
/*****************************************************/
    //函数模板注意事项
    //1.自动类型推导,必须推导出一致的数据类型T才可以使用
    //2.模板必须要确定出T的数据类型,才可以使用
    // test01(); //第53行
/*****************************************************/
    //函数模板案例
    //作业17
/*****************************************************/
    //普通函数与函数模板的区别(第62行)
    //1.普通函数调用时会发生自动类型转换(隐式类型转换)
    //2.函数模板调用时,如果利用自动类型推导,不会发生隐式类型转换
    //3.如果利用显示指定类型的方式,可以发生隐式类型转换.
    // test01();
    //使用函数模板时尽量采用显示指定类型
/*****************************************************/
    // //普通函数与函数模板的调用规则(第78行)
    // //1.如果普通函数和普通函数都可以实现,优先调用普通函数
    // //2.可以通过空模板参数列表来强制调用函数模板
    // //3.函数模板可以发生重载
    // //4.如果函数模板可以产生更好的匹配,优先调用函数模板
    // test01(); //均可调用优先调用普通函数
    //注:在平常开发时尽量不要让普通函数与函数模板同时存在
/*****************************************************/
    // //模板的局限性(模板的通用性并不是万能的)
    // //例如:
    // // template<class T>
    // // void func(T a, T b){
    // //     a = b;
    // // }  //如果传入的a和b是数组,则无法实现
    // //再如:
    // // template<class T>
    // // void f(T a, T b){
    // //     if(a > b){...}
    // // } //如果T的数据类型传入的像是Person这样的自定义数据类型,也无法正常运行
    // //因此cpp为了解决这种问题,提供模板的重载,可以为这些特定的类型提供具体化的模板(第100行)
    // test01();
    // // test02();
    // test03();
    //总结:利用具体化的模板,可以解决自定义数据类型的通用化; 学习模板并不是为了写模板,而是在STL能够运用系统提供的模板.
/*****************************************************/
  //类模板
    //类模板基本语法: template<class T> //第141行
    //类
    // test01();
/*****************************************************/
    // //类模板与函数模板的区别(第160行)
    // //1.类模板没有自动类型推导的使用方式
    // test01();
    // //2.类模板在模板参数列表中有默认参数
    // test02();
/*****************************************************/    
    //类模板中成员函数创建时机 (第186行)
    //类模板中成员函数在调用时才去创建
    // test01();
/*****************************************************/
    // //类模板对象做函数参数 (第216行)
    // //类模板实例化的对象, 向函数传参的方式
    // //1.指定传入的类型  --直接显示对象的数据类型 (第229行)
    // test01();
    // //2.参数模板化      --将对象中的参数变为模板进行传递 (第237行)
    // test02();
    // //3.整个类模板化    --将这个对象类型 模板化进行传递(第248行)
    // test03();
/*****************************************************/   
    //类模板与继承 (第259行)
    //当子类继承的父类是一个类模板时,子类在声明的时候,要指定出父类中T的类型
    //如果不指定,编译器无法给予子类分配内存
    //如果想灵活指定出父类中T的类型,子类也需变为类模板
    // test01();
    // test02();
/*****************************************************/ 
    //类模板成员函数类外实现(第283行)
    // test01();
/*****************************************************/ 
    //类模板文件的分文件编写(第314行)
    // test01();
    // #include"Person.cpp" //第一种解决方式:直接包含源文件
    // #include"Person.hpp" //第二种解决方式:将.h与.cpp中的内容写到一起,将后缀名改为.hpp文件
/*****************************************************/ 
    // 类模板与友元(第339行)
    // test01();
    // test02();
/*****************************************************/   
//STL初识(Standard Template Library)
    //广义上分为容器(container),算法(algorithm和迭代器(iterator)
    //容器通过迭代器与算法进行无缝连接
    //六大组件:容器(序列式容器,关联式容器),算法(质变算法,非质变算法),迭代器(常用双向迭代器,随机访问迭代器),仿函数,适配器(配接器),空间配置器
/*****************************************************/
  //vector存放内置数据类型(第379行)
    // test01(); 
/*****************************************************/
  //vector存放自定义数据类型(第403行)
    //test01(); //(自定义数据类型)
    //test02(); //(自定义数据类型指针)
/*****************************************************/
  //容器嵌套容器
  //test01(); //(第453行)
/*****************************************************/
 //string容器
  //string容器 构造函数
    //test01(); //第485行
/*****************************************************/
  //string容器 赋值操作
    //test01(); //第501行
/*****************************************************/
  //string容器 字符串拼接
    //test01(); //第540行
/*****************************************************/
  //string容器 字符串查找和替换
    // test01(); //查找 //第578行
    // test02(); //替换
/*****************************************************/
  //string容器 字符串比较(按字符串的ASCII码进行对比)
    //test01(); //第606行
/*****************************************************/
  //string容器 字符存取
    //test01(); //第617行
/*****************************************************/
  //string容器 插入和删除
    //test01(); //第637行
/*****************************************************/
  //string容器 子串获取
    // test01(); //第652行
    // test02();
/*****************************************************/
 //vector容器(也称为单端数组,可以动态扩展(动态扩展不是在原空间之后接新空间,而是找更大的内存空间,然后将原数据拷贝新空间,释放原空间))
 //vector容器的迭代器是支持随机访问的迭代器
  //vector容器 构造函数
    //test01(); //第674行
/*****************************************************/
  //vector容器 赋值操作
    //test01(); //第698行
/*****************************************************/
  //vector容器 容量和大小
    //test01(); //第726行
/*****************************************************/
  //vector容器 插入和删除
    //test01(); //第756行
/*****************************************************/
  //vector容器 数据存取
    //test01(); //第789行
/*****************************************************/
  //vector容器 互换容器
    //test01(); //第806行
    //test02();
/*****************************************************/
  //vector容器 预留空间
    //test01(); //第838行
/*****************************************************/
 //deque容器(双端数组,可以对头端进行插入删除操作,迭代去也是支持随机访问的)
  //deque容器 构造函数
    //test01(); //第860行
/*****************************************************/
  //deque容器 赋值操作
    //test01(); //第881行
/*****************************************************/
  //deque容器 大小操作
    //test01(); //第901行
/*****************************************************/
  //deque容器 插入和删除
    //test01(); //第922行
    //test02(); //第937行
    //test03(); //第957行
/*****************************************************/
  //deque容器 数据存取
    //test01(); //第977行
/*****************************************************/
  //deque容器 排序操作
    //test01(); //第996行
/*****************************************************/
 //stack容器(先进后出的数据结构,它只有一个出口)(栈不允许有遍历行为)
  //可以判断容器是否为空(empty),可以返回元素个数(size)
  //stack容器 常用接口
    //test01(); //第1012行
/*****************************************************/
 //queue容器(先进先出的数据结构,它有两个出口)(队列)
 //只有对头和队尾能被外界访问,因此不允许遍历行为
  //queue容器 常用接口
      //test01(); //第1030行
/*****************************************************/
 //list容器(链表可以对任意位置进行快速插入或删除元素,容器遍历速度没有数组快,占用空间比数组大)
 //STL中的链表是一个双向循环链表,由于其存储方式并不是连续的内存空间,因此链表list的迭代器只支持前移和后移,属于双向迭代器
 //list的插入操作和删除操作不会造成原有的list迭代器失效,这在vector是不成立的
  //list容器 构造函数
    //test01(); //第1068行
/*****************************************************/
  //list容器 赋值和交换
    //test01(); //第1091行
    //test02();
/*****************************************************/
  //list容器 大小操作
    //test01(); //第1131行
/*****************************************************/
  //list容器 插入和删除
    //test01(); //第1165行
/*****************************************************/
  //list容器 数据存取
    //test01(); //第1200行
/*****************************************************/
  //list容器 反转和排序
    //test01(); //第1217行
    //test02();
/*****************************************************/
 //set/multiset容器(集合,关联式容器,底层结构是用二叉树实现的.所有元素会在插入时自动排序)
 //set不允许容器中有重复的元素,而multiset允许容器中有重复的元素
  //set容器 构造和赋值
     //test01(); //第1262行
/*****************************************************/
  //set容器 大小和交换
    //test01(); //第1283行
/*****************************************************/
  //set容器 插入和删除
    //test01(); //第1307行
/*****************************************************/
  //set容器 查找和统计
    //test01(); //第1330行
    //test02();
/*****************************************************/
  //set容器 set和multiset的区别
    //test01(); //第1374行
/*****************************************************/
  //pair对组创建
    //test01(); //第1393行
/*****************************************************/
  //set容器 内置类型指定排序规则
    //test01(); //第1402行
/*****************************************************/
  //set容器 自定义数据类型指定排序规则
    //test01(); //第1446行
/*****************************************************/
 //map容器(所有元素都是pair,pair中第一个元素为key(键值),起到索引作用第二个元素为value(实值),所有元素会根据元素的键值自动排序)
 //本质属于关联式容器,底层结构是用二叉树实现
 //优点: 可以根据key值快速找到value值
 //map和multimap的区别: map不允许容器中有重复的key值元素,而multimap允许容器中有重复的key值元素
  //map容器 构造和赋值
    //test01(); //第1470行
/*****************************************************/
  //map容器 大小和交换
    //test01(); //第1488行
    //test02();
/*****************************************************/
  //map容器 插入和删除
    //test01(); //第1517行
/*****************************************************/
  //map容器 查找和统计
    //test01(); //第1545行
/*****************************************************/
  //map容器 排序
    //test01(); //第1573行
    //test02();
/*****************************************************/
 //STL函数对象
  //函数对象概念:重载函数调用操作符的类,其对象称为函数对象,函数对象使用重载的()时,行为类似函数调用,也叫仿函数
  //本质:函数对象(仿函数)是一个类,不是一个函数
  //使用特点:函数对象在使用时,可以像普通函数那样调用,也可以有参数,可以有返回值
  //         函数对象超出普通函数的概念,函数对象可以有自己的状态
  //         函数对象可以作为参数传递
  //函数对象基本使用
    //test01(); //第1615行
    //test02(); //第1638行
    //test03();
/*****************************************************/
  //谓词 一元谓词
  //返回bool类型的仿函数称为谓词,如果operat()接受一个参数,那么叫做一元谓词,如果operator()接受两个参数,那么叫做二元谓词
    //test01(); //第1656行
/*****************************************************/
  //谓词 二元谓词
    //test01(); //第1674行
/*****************************************************/
  //内建函数对象 算术仿函数(需包含头文件functional)
    //test01(); //第1703行
    //test02();
/*****************************************************/
  //内建函数对象 关系仿函数
    //test01(); //第1720行
/*****************************************************/
  //内建函数对象 逻辑仿函数
    //test01(); //第1745行
/*****************************************************/
 //常用算法(主要有头文件<algorithm>,<functional>,<numeric>组成)
 //<algorithm>是所有STL头文件中最大的一个,范围涉及到比较,交换,查找,遍历操作,复制,修改等等
 //<numeric>体积很小,只包括几个在序列上面进行简单数学运算的函数模板
 //functional>定义了一些模板类,用以声明函数对象
  //常用遍历算法 for_each(实际开发中最常用的遍历算法)
    //test01(); //第1776行
/*****************************************************/
  //常用遍历算法 transform
    //test01(); //第1794行
/*****************************************************/
  //常用查找算法 find
    //test01(); //第1814行
    //test02(); //第1837行
/*****************************************************/
  //常用查找算法 find_if
    //test01(); //第1857行
    //test02(); //第1873行
/*****************************************************/
  //常用查找算法 adjacent_find
    //test01(); //第1904行
/*****************************************************/
  //常用查找算法 binary_search
    //test01(); //第1923行
/*****************************************************/
  //常用查找算法 count
    //test01(); //第1937行
    //test02(); //第1960行
/*****************************************************/
  //常用查找算法 count_if
    //test01(); //第1986行
    //test02(); //第2015行
/*****************************************************/
  //常用排序算法 sort
    //test01(); //第2033行
/*****************************************************/
  //常用排序算法 random_shuffle(洗牌算法)
  //////////////////该算法已被移除///////////////////////
    //test01(); //第2049行
/*****************************************************/
  //常用排序算法 merge
    //test01(); //第2066行
/*****************************************************/
  //常用排序算法 reverse
    //test01(); //第2085行
/*****************************************************/
  //常用拷贝和替换算法 copy
    //test01(); //第2101行
/*****************************************************/
  //常用拷贝和替换算法 replace
    //test01(); //第2114行
/*****************************************************/
  //常用拷贝和替换算法 replace_if
    //test01(); //第2139行
/*****************************************************/
  //常用拷贝替换算法 swap
    //test01(); //第2159行
/*****************************************************/
  //常用算术生成算法(小型算法<numeric>) accumulate
    //test01(); //第2179行
/*****************************************************/
  //常用算术生成算法(小型算法<numeric>) fill
    //test01(); //第2191行
/*****************************************************/
  //常用集合算法 set_intersection(求交集)
    //test01(); //第2202行
/*****************************************************/
  //常用集合算法 set_union(求并集)
    //test01(); //第2219行
/*****************************************************/
  //常用集合算法 set_difference(求差集)
    //test01(); //第2235行
/*****************************************************/





    system("pause");

    return 0;
}