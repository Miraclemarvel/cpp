#include <iostream>
using namespace std;

// //ȫ�ֱ���
// int g_a = 10;
// int g_b = 10;
// //const���ε�ȫ�ֱ���(ȫ�ֳ���)
// const int c_g_a = 10;
// const int c_g_b = 10;
// //ջ��ע������
// int* func(int b){  //�β�����Ҳ�����ջ��
//     b = 100;
//     int a = 10;
//     return &a;
// }
// int * func(){
//     //����new�ؼ��� ���Խ����ݿ��ٵ�����
//     //ָ�뱾��Ҳ�Ǿֲ�����,����ջ��,ָ�뱣������ݷ��ڶ���
//     int * p = new int(10); //new ���ص��� ���������͵�ָ��
//     return p;
// }
// void func(){
//     int * arr = new int[10];
//     for(int i = 0; i < 10; i++){
//         arr[i] = i + 100;
//     }
//     for(int i = 0; i < 10; i++){
//         cout << arr[i] << endl;
//     }
//     delete[] arr;  //�ͷ�����ʱҪ��[]�ſ���
// }
// void f(){
//         int * (*arr) = new int*[2];
//         for (int i = 0; i < 2; i++){
//             arr[i] = new int[3];
//         }
//         for (int i = 0; i < 2; i++){
//             for (int j = 0; j < 3; j++){
//                 arr[i][j] = rand()%100 + 1;
//             }
//         }
//         for (int i = 0; i < 2; i++){
//             delete[] arr[i];
//         }
//         delete[] arr;
//         for(int i = 0; i < 2; i++){
//             for(int j = 0; j < 3; j++){
//                 cout << arr[i][j] << "\t";
//             }
//             cout << endl;
//         }
//     }
// void swap01(int a, int b){  //ֵ����:�ββ����޸�ʵ��
//     int temp = a;
//     a = b;
//     b = temp;
//     return;
// }
// void swap02(int *a, int *b){ //��ַ����:�βο�������ʵ��
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     return;
// }
// void swap03(int &a, int &b){  //���ô���:Ч�����ַ����һ��
//     int temp = a;
//     a = b;
//     b = temp;
//     return;
// }
// int& test01(){
//     int a = 10;
//     return a;
// }
// int& test02(){
//     static int a = 10;
//     return a;
// }
// void showValue(const int &val){ //Ϊ��ֹ�޸��β�,����const
//     // val = 1000; (�����)
//     cout << "val = " << val << endl;
//     return;
// }
// int func(int a, int b = 20, int c = 30){
//     return a + b + c;
// }
// void func(int a, int = 10, int){
//     cout << "this is func" << endl;
// }
// void func(){
//     cout << "func�ĵ���" << endl;
// }
// void func(int a){
//     cout << "func(int a)�ĵ���" << endl;
// }
// void func(double a){
//     cout << "func(double a)�ĵ���" << endl;
// }
// void func(int a, double b){
//     cout << "func(int a, double b)�ĵ���" << endl;
// }
// void func( double a, int b){
//     cout << "func(double a, int b)�ĵ���" << endl;
// }
// int func( double a, int b){  //���� �������ط���ֵ���Ͳ�ͬ����������
//     cout << "func(double a, int b)�ĵ���" << endl;
// }
// void func(int &a){  //int &a = 10;���Ϸ�
//     cout << "func(int &a)����" << endl;
// }
// void func(const int &a){  //const int &a = 10; �Ϸ�
//     cout << "func(const int &a)����" << endl;
// }
// void func2(int a, int b = 10){
//     cout << "func(int a, int b)�ĵ���" << endl;
// }
// void func2(int a, ){
//     cout << "func(int a)�ĵ���" << endl;
// }
// const double PI = 3.14;
// class Circle{
// public:
//     int m_r;
//     double calculateZC(){
//         return 2*PI*m_r;
//     }
// };
#include <string>
// class Person{
// public:
//     string m_Name;
// protected:
//     string m_Car;
// private:
//     int m_Password;
// public:
//     void func(){
//         m_Name = "����";
//         m_Car = "������";
//         m_Password = 114514;
//     }
// };
// class C1{
//     int m_A; //Ĭ��Ȩ����˽��
// };
// struct C2{
//     int m_A; //Ĭ��Ȩ���ǹ���
// };
// class Person{
// public:
//     void setName(string name){
//         m_Name = name;
//     }
//     string getName(){
//         return m_Name;
//     }
//     int getAge(){
//         m_Age = 0;
//         return m_Age;
//     }
//     void setAge(int age){
//         if (age > 150 || age < 0){  //�ж�������Ч��
//             m_Age = 0;
//             cout << "�����������" << endl;
//             return;
//         }
//         m_Age = age;
//     }
//     void setLover(string name){
//         m_Lover = name;
//     }
// private:
//     string m_Name;  //�ɶ���д
//     int m_Age;      //ֻ��
//     string m_Lover; //ֻд
// };
// class Person{
// public:
//     Person(){   //���캯��
//         cout << "Person ���캯���ĵ���" << endl;
//     }
//     ~Person(){  //���캯��
//         cout << "Person ���������ĵ���" << endl;
//     }
// };
// void test01(){
//     Person p1;
// }
// class Person{
// public:
//     Person(){
//         cout << "Person �޲ι��캯���ĵ���" << endl;
//     }
//     Person(int a){
//         age = a;
//         cout << "Person �вι��캯���ĵ���" << endl;
//     }
//     Person(const Person &p){ //��������, ������Ϊ��ͨ����
//         age = p.age;     //������������ϵ��������Կ�����������
//         cout << "Person �������캯���ĵ���" << endl;
//     }
//     ~Person(){
//         cout << "Person ���������ĵ���" << endl;
//     }
//     int age;
// };
// void test01(){
    // //���ŷ�(����)
    // Person p1; //Ĭ�Ϲ��캯������
    // Person p2(10); //�вι��캯��
    // Person p3(p2); //�������캯��
    // //ע������:����Ĭ�Ϲ��캯��ʱ��Ҫ��() ��Person p1(); �������Ὣ����Ϊ�Ǻ���������,������Ϊ�ڴ�������
    // cout << "p2������Ϊ: " << p2.age << endl;
    // cout << "p3������Ϊ: " << p3.age << endl;
    // // ��ʾ��
    // Person p1;
    // Person p2 = Person(10); //�вι���
    // Person p3 = Person(p2); //��������
    // Person(10); //��������, �ص�: ��ǰִ�н�����,ϵͳ������������������ 
    // cout << "aaaA" << endl; //����������ڵ��ú���������,�����Ķ�����ڳ��������ʱ������,�����������ڲ�ͬ
    //ע������: ��Ҫ���ÿ������캯����ʼ���������� Person(p3); ����������Ϊ�Ƕ��������
    // //��ʽת����
    // Person p4 = 10; //�൱��д�� Person p4 = Person(10)
    // Person p5 = p4; //�������� 
// }
// class Person{
// public:
//     Person(){
//         cout << "Person Ĭ�Ϲ��캯������" << endl;
//     }
//     Person(int age){
//         m_Age = age;
//         cout << "Person �вι��캯������" << endl;
//     }
//     Person(const Person &p1){
//         m_Age = p1.m_Age;
//         cout << "Person �������캯������" << endl;
//     }
//     ~Person(){
//         cout << "Person ������������" << endl;
//     }
//     int m_Age;
// };
// void test01(){
//     Person p1(20);
//     Person p2(p1);
//     cout << "p2������Ϊ: " << p2.m_Age << endl;
// }
// void doWork1(Person p){   
// }
// void test02(){
//     Person p;
//     doWork1(p);
// }
// Person doWork2(){
//     Person p1;
//     cout << (long long*)&p1 << endl;
//     return p1;
// }
// void test03(){
//     Person p3 = doWork2();
//     cout << (long long*)&p3 << endl;
// }
// class Person{
// public:
//     // Person(){
//     //     cout << "Person ��Ĭ�Ϲ������" << endl;
//     // }
//     int m_Age;
//     Person(int age){
//         cout << "Person ���вι��캯��" << endl;
//         m_Age = age;
//     }
//     ~Person(){
//         cout << "Person ��������������" << endl;
//     }
//     // Person(const Person &p){
//     //     m_Age = p.m_Age;
//     //     cout << "Person �Ŀ������캯������" << endl;
//     // }
// };
// // void test01(){
// //     Person P;
// //     P.m_Age = 18;
// //     Person P2(P);
// //     cout << "p2������Ϊ: " << P2.m_Age << endl;
// // }
// void test02(){
//     Person p2(18);
//     Person p3(p2);
//     cout << "p3������Ϊ: " << p3.m_Age << endl;
// }
// class Person{
// public:
//     Person(){
//         cout << "Person ��Ĭ�Ϲ��캯������" << endl;
//     }
//     int m_Age;
//     int * m_Height;
//     Person(int age, int height){
//         m_Age = age;
//         m_Height = new int (height); 
//         cout << "Person ���вι��캯������" << endl;
//     }
//     ~Person(){
//         //��������, ���������ٵ��������ͷŲ���
//         if (m_Height != NULL){
//             delete m_Height;
//             m_Height = NULL;
//         }
//         cout << "Person ��������������" << endl;
//     }
//     Person(const Person &p){
//         cout << "Person �������캯������" << endl;
//         m_Age = p.m_Age;
//         //m_Height = p.m_Height :������Ĭ��ʵ�ֵ����д���,����ǳ����
//         m_Height = new int(*p.m_Height);
//     }
// };
// void test01(){
//     Person p1(18, 160);
//     cout << "p1������Ϊ: " << p1.m_Age << "\t" << "p1�����Ϊ: " << *p1.m_Height << endl;
//     Person p2(p1);
//     cout << "p2������Ϊ: " << p2.m_Age << "\t" << "p2�����Ϊ: " << *p2.m_Height << endl;
// }
// class Person{
// public:
//     int m_A, m_B, m_C;
//     // Person(int a, int b, int c){  //��ͳ��ʼ������
//     //     m_A = a;
//     //     m_B = b;
//     //     m_C = c;
//     // }
//     //��ʼ���б��ʼ������(�����������������Ƕ����ֱ�Ӷ����н��и�ֵ,ֻ��Ҫ����һ�κ���ʵ�ֶ���಻ͬ���Գ�ʼ��)
//     // Person() : m_A(10) ,m_B(20), m_C(30){
//     // }
//     Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c){       
//     }
//     int m_A, m_B, m_C;
// };
// void test01(){
//     // Person p(10, 20, 30);
//     // Person p;
//     Person p(20, 45, 78);
//     cout << "m_A = " << p.m_A << "\t"
//          << "m_B = " << p.m_B << "\t"
//          << "m_C = " << p.m_C << endl;
// }
// class Phone{
// public:
//     string m_PName;
//     Phone(string PName){
//         cout << "Phone �Ĺ��캯������" << endl;
//         m_PName = PName;
//     }
//     ~Phone(){
//         cout << "Phone ��������������" << endl;
//     }
// };
// class Person{
// public:
//     string m_Name;
//     Phone m_Phone;
//     Person(string Name, string pName) : m_Name(Name), m_Phone(pName){
//         cout << "Person �Ĺ��캯������" << endl;
//     }
//     ~Person(){
//         cout << "Person ��������������" << endl;
//     }
// };
// //�������������Ϊ�����Ա,����ʱ�ȹ��������,�ٹ�������;������ʱ��˳���෴
// void test01(){
//     Person p("����", "ƻ��max");
//     cout << p.m_Name << "����: " << p.m_Phone.m_PName << endl;
// }
// class Person{
// public:
//     static int m_A;
//     //��̬��Ա����Ҳ���з���Ȩ�޵�
// private:
//     static int m_B;
// };
// // void test01(){
// //     Person p;
// //     cout << p.m_A << endl;
// //     Person p2;
// //     p2.m_A = 200;
// //     cout << p.m_A << endl;
// // }
// void test02(){ //��̬��Ա����������ĳ��������,���ж��󶼹���ͬһ������,��˾�̬��Ա���������ַ��ʷ�ʽ
//     //1.ͨ��������з���
//     Person p;
//     cout << p.m_A << endl;
//     //2.ͨ���������з���
//     cout << Person::m_A << endl;
//     // cout << Person::m_B << endl;

// }
// int Person::m_A = 100;
// // int Person::m_B = 200;
// class Person{
// public:
//     static void func(){
//         m_A = 100; //��̬��Ա�������Է��� ��̬��Ա����
//         // m_B = 50;  //��̬��Ա�������ɷ��� �Ǿ�̬��Ա���� �޷����ֵ������ĸ������m_B����
//         cout << "static void func����" << endl;
//     }
//     static int m_A;
//     int m_B;
//     //��̬��Ա����Ҳ�з���Ȩ��
// private:
//     static void test02(){
//         cout << "static void test02 ����" << endl:
//     }
// };
// int Person::m_A = 100;
// void test01(){
//     Person p;
//     //1.ͨ���������
//     p.func();
//     //2.ͨ����������
//     Person::func();
//     // Person::test02(); //������ʲ���˽�о�̬��Ա����
// }
// class Person{
// public:
//     int m_A; //�Ǿ�̬��Ա���� ������Ķ�����
//     static int m_B; //��̬��Ա���� ��������Ķ�����
//     void func01(){} //�Ǿ�̬��Ա���� ��������Ķ�����
//     static void func02(){} //��̬��Ա���� ��������Ķ�����
//     //ֻ�зǾ�̬��Ա��������Ķ�����
// };
// void test01(){
//     Person p;
//     //�ն���ռ���ڴ�ռ�:1;  cpp���������ÿ���ն���Ҳ����һ���ֽڿռ�,��Ϊ�����ֿն���ռ�ڴ��λ��  ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
//     cout << "size of p = " << sizeof(p) << endl;
// }
// void test02(){
//     Person p;
//     cout << "size of p = " << sizeof(p) << endl;
//     //�ڴ����: ��32λ����ϵͳ��,�����ձ��õ�gcc��������vs����������Ĭ�ϰ���4����С�����ڴ�����
//     //Ҳ����˵�ṹ������е��ڴ����Ĭ���ǰ���4���ֽڵı������з����
// }
// int Person::m_B = 0;
// class Person{
// public:
//     int age;
//     Person(int age){
//         //thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//         this -> age = age;
//     }
//     Person& PersonAddAge01(Person &p){
//         this -> age += p.age;
//         return *this;
//     }
//     Person PersonAddAge02(Person &p){
//         this -> age += p.age;
//         return *this;
//     }
// };
// //������Ƴ�ͻ
// void test01(){
//     Person p1(18);
//     cout << "p1������Ϊ: " << p1.age << endl;
// }
// //���ض�������*this
// void test02(){
//     Person p1(10);
//     Person p2(20);
//     //��ʽ���˼��
//     p2.PersonAddAge01(p1).PersonAddAge01(p1).PersonAddAge01(p1);
//     cout << "p2������Ϊ: " << p2.age << endl;
//     //�������캯��p2',p2''
//     p2.PersonAddAge02(p1).PersonAddAge02(p1).PersonAddAge02(p1);
//     cout << "p2������Ϊ: " << p2.age << endl;
// }
// class Person{
// public:
//     void showClassName(){
//         cout << "this is Person class" << endl;
//     }
//     void showPersonAge(){
//         //����ԭ������Ϊ�����ָ����ΪNULL
//         if(this == NULL){
//             return;
//         }
//         cout << "age = " << m_Age << endl;
//     }
//     int m_Age;
// };
// void test01(){
//     Person *p = NULL;
//     p->showClassName();
//     p->showPersonAge();
// }
// class Person{
// public:
//     // thisָ��ı�����ָ�볣��,ָ��ָ�򲻿��޸�
//     //Person * const this:
//     //�ڳ�Ա���������const,���ε���thisָ��,��ָ��ָ���ֵ�������޸�
//     Person(){
//         m_A = 0;
//     }
//     void showPerson() const {
//         this->m_B = 100;
//         m_B = 200;
//         // this->m_A = 100;
//         // this = NULL; //thisָ�벻�����޸�ָ��
//         cout << "m_B = " << m_B << endl;
//     }
//     int m_A;
//     mutable int m_B;
// };
// void test01(){
//     Person p;
//     p.showPerson();
// }
// void test02(){
//     const Person p1; //������
//     // p.m_A = 200;
//     p1.m_B = 300; //m_B������ֵ,�ڳ�������Ҳ�����޸�
//     p1.showPerson();
//     //������ֻ�ܵ��ó�����;�����󲻿��Ե�����ͨ��Ա����
// }
// class Building{
//     // //GoodGuyȫ�ֺ�����Building�ĺ�����,���Է���Building��˽�г�Ա
//     // friend void GoodGuy(Building *building);
//     // //GoodGuy���Ǳ���ĺ�����,���Է��ʱ�����˽�г�Ա
//     friend class GoodGuy;
//     //���߱����� GoodGuy���µ�visit2��Ա������Ϊ����ĺ�����,���Է���˽�г�Ա
//     friend void GoodGuy::visit2();
// public:
//     Building(){
//         m_SittingRoom = "����";
//         m_BedRoom = "����";
//     }
//     string m_SittingRoom;
// private:
//     string m_BedRoom;
// };
// class Building;
// // //1.ȫ�ֺ���
// // void GoodGuy(Building *building){
// //     cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��� : " << building->m_SittingRoom << endl;
// //     cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��� : " << building->m_BedRoom << endl;
// // }
// // void test01(){
// //     Building building;
// //     GoodGuy(&building);
// // }
// //2.������Ԫ
// class GoodGuy{
// public:
//     Building *building;
//     GoodGuy();
//     void visit();  //��visit���Է���Building��˽�г�Ա
//     void visit2(); //��visit2���������Է���Building��˽�г�Ա
// };
// class Building{
//     friend void GoodGuy::visit2();
//     friend void GoodGuy::visit();
// public:
//     string m_SittingRoom;
//     Building();
// private:
//     string m_BedRoom;
// };
// Building::Building(){
//     m_SittingRoom = "����";
//     m_BedRoom = "����";
// }
// GoodGuy::GoodGuy(){
//     building = new Building; //new building����visit����ǰ��,Building���GoodGuy����
// }
// void GoodGuy::visit(){
//     cout << "�û������ڷ���: " << building->m_SittingRoom << endl;
//     cout << "�û������ڷ���: " << building->m_BedRoom << endl;
// }
// void test02(){
//     class GoodGuy gg;
//     gg.visit();
// }
// //3.��Ա��������Ԫ
// void GoodGuy::visit2(){
//     cout << "visit2�������ڷ���: " << building->m_SittingRoom << endl;
//     cout << "visit2�������ڷ���: " << building->m_BedRoom << endl;
// }
// void test03(){
//     class GoodGuy gg;
//     gg.visit();
//     gg.visit2();
// }
// class Person{
// public:
//     // Person operator+(Person &p){
//     //     Person temp; 
//     //     temp.m_A = this->m_A + p.m_A;
//     //     temp.m_B = this->m_B + p.m_B;
//     //     return temp;
//     // }
//     //�������صİ汾
//     Person operator+(Person &p1, int num){
//     Person temp;
//     temp.m_A = p1.m_A + num;
//     temp.m_B = p1.m_B + num;
//     return temp;
// }
//     int m_A, m_B;
// };
// Person operator+(Person &p1, Person &p2){
//     Person temp;
//     temp.m_A = p1.m_A + p2.m_A;
//     temp.m_B = p1.m_B + p2.m_B;
//     return temp;
// }
// void test01(){
//     Person p1;
//     p1.m_A = 10;
//     p1.m_B = 10;
//     Person p2;
//     p2.m_A = 10;
//     p2.m_B = 10;
//     //��Ա�������ر��ʵ���
//     Person p3 = p1.operator+(p2);
//     //ȫ�ֺ������ر��ʵ���
//     Person p3 = operator+(p1, p2);
//     Person p3 = p1 + p2;
//���������Ҳ���Է�����������
//      Person p4 = p1 + 100;
//     cout << p3.m_A << endl;
//     cout << p3.m_B << endl;
//     cout << p4.m_A << endl;
//     cout << p4.m_B << endl;
// }
// class Person{
// public:
//     int m_A, m_B;
//     //һ�㲻�ó�Ա�������������������,��Ϊ�޷�ʵ��cout�����
// };
// ostream & operator<<(ostream &cout, Person p){   //operator<<(cout, p) �� cout << p
//     cout << "m_A = " << p.m_A << " " << "m_B = " << p.m_B << endl;
//     return cout;
// }; 
// void test01(){
//     Person p;
//     p.m_A = 10;
//     p.m_B = 10;
//     cout << p << "hello world" << endl;
// }
// class MyInteger{
//     friend ostream & operator<<(ostream &cout, MyInteger myint);
// public:
//     MyInteger(){
//         m_Num = 0;
//     }
//     //����ǰ��++����� (����������Ϊ�˶�ͬһ�����ݽ��в���)
//     MyInteger& operator++(){
//         m_Num++;
//         return *this;
//     }
//     //���غ���++�����
//     //int����ռλ���� ������������ǰ�úͺ��õ���
//     MyInteger operator++(int){
//         MyInteger temp = *this;
//         m_Num++;
//         return temp;
//     }
// private:
//     int m_Num;
// };
// ostream & operator<<(ostream &cout, MyInteger myint){
//     cout << "m_Num = " << myint.m_Num << endl;
//     return cout;
// }
// void test01(){
//     MyInteger myint;
//     cout << ++(++myint) << endl;
//     cout << myint << endl;
// }
// void test02(){
//     MyInteger myint;
//     cout << myint++ << endl;
//     cout << myint << endl;
// }
// class Person{
// public:
//     Person(int age){
//         m_Age = new int(age);
//     }
//     //���� ��ֵ�����
//     Person & operator=(Person &p){
//         if(m_Age != NULL){
//             delete m_Age;
//             m_Age = NULL;
//         }
//         m_Age = new int(*p.m_Age);
//         return *this;
//     }
//     int *m_Age;
// };
// void test01(){
//     Person p1(18);
//     Person p2(20);
//     Person p3(30);
//     p3 = p2 = p1;
//     cout << "p1������Ϊ: " << *p1.m_Age << endl;
//     cout << "p2������Ϊ: " << *p2.m_Age << endl;
//     cout << "p3������Ϊ: " << *p3.m_Age << endl;
// }
// class Person{
// public:
//     int m_Age;
//     string m_Name;
//     Person(int age, string name){
//         m_Age = age;
//         m_Name = name;
//     }
//     bool operator==(Person &p2){
//         if (this->m_Age == p2.m_Age && this->m_Name == p2.m_Name){
//             return true;
//         }
//         return false;
//     }
//     bool operator!=(Person &p){
//         if (this->m_Age != p.m_Age || this->m_Name != p.m_Name){
//             return false;
//         }
//         return true;
//     }
// };
// void test01(){
//     Person p1(18, "Tom");
//     Person p2(18, "Jerry");
//     if (p1 == p2){
//         cout << "p1��p2���" << endl;
//     }
//     else{
//         cout << "p1��p2���" << endl;
//     }
// }
// class MyPrint{
// public:
//     //���غ������������
//     void operator()(string test){
//         cout << test << endl;
//     }
// };
// void test01(){
//     MyPrint myprint;
//     myprint("hello world");//����ʹ�������ǳ������ں�������,��˳�Ϊ�º���
// }
// void Myprint02(string test){
//     cout << test << endl;
// }
// void test02(){
//     MyPrint myprint;
//     Myprint02("hello world");
// }
// class MyAdd{
// public:
//     int operator()(int num1, int num2){
//         return num1 + num2;
//     }
// };
// void test03(){
//     MyAdd myadd;
//     int ret;
//     ret = myadd(10, 20);
//     cout << ret << endl;
//     //������������
//     cout << MyAdd()(100, 100) << endl;
// }
// class BasePage{
// public:
//     void header(){
//         cout << "��ҳ, ������, ��¼, ע��...(����ͷ��)" << endl;
//     }
//     void footer(){
//         cout << "��������, ��������, վ�ڵ�ͼ...(�����ײ�)" << endl;
//     }
//     void left(){
//         cout << "Java, Python, C++,...(���������б�)" << endl;
//     }
// };
// //Javaҳ��
// class Java: public BasePage{
// public:
//     void content(){
//         cout << "Java��ѧ��Ƶ" << endl;
//     }
// };
// class Python: public BasePage{
// public:
//     void content(){
//         cout << "Python��ѧ��Ƶ" << endl;
//     }
// };
// class cpp: public BasePage{
// public:
//     void content(){
//         cout << "cpp��ѧ��Ƶ" << endl;
//     }
// };
// void test01(){
//     Java ja;
//     ja.header();
//     ja.footer();
//     ja.left();
//     ja.content();
// }
// void test02(){
//     Python py;
//     py.header();
//     py.footer();
//     py.left();
//     py.content();
// }
// void test03(){
//     cpp cp;
//     cp.header();
//     cp.footer();
//     cp.left();
//     cp.content();
// }
// class Base1{
// public:
//     int m_A;
// protected:
//     int m_B;
// private:
//     int m_C;
// };
//�����̳�
// class Son1: public Base1{
// public:
//     void func(){
//         m_A = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
//         m_B = 20;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
//         // m_C = 30;//�����е�˽��Ȩ�޳�Ա ������ʲ���
//     }
// };
// void test01(){
//     Son1 s1;
//     s1.m_A = 100;
//     // s1.m_B = 200; //��son1��m_B�Ǳ���Ȩ�� ������ʲ���
// }
//�����̳�
// class Son2: protected Base1{
// public:
//     void func(){
//         m_A = 100;//�����еĹ�����Ա�������Ϊ����Ȩ��
//         m_B = 100;//�����еı�����Ա�������Ϊ����Ȩ��
//         // m_C = 100;//�����е�˽�г�Ա ������ʲ���
//     }
// };
// void test02(){
//     Son2 s2;
//     // s2.m_A = 100; //��Son2��m_A��Ϊ����Ȩ��,���������ʲ���
//     // s2.m_B = 100; //��Son2��m_B����Ȩ��,�����Է���
// }
//˽�м̳�
// class Son3: private Base1{
// public:
//     void func(){
//         m_A = 100; //�����й�����Ա�������б�Ϊ˽�г�Ա
//         m_B = 100; //�����б�����Ա�������б�Ϊ˽�г�Ա
//         m_C = 100; //������˽�г�Ա,������ʲ���
//     }
// };
// void test03(){
//     Son3 s3;
//     // s3.m_A = 100; //��Son3�б�Ϊ˽�г�Ա ������ʲ���
//     // s3.m_B = 100; //��Son3�б�Ϊ˽�г�Ա ������ʲ���
// }
// class Grandson: public Son3{
// public:
//     void func(){
//         // m_A = 100; //����Son3��m_A��Ϊ˽��,��ʹ�Ƕ���Ҳ���ʲ���
//         // m_B = 100; //����Son3��m_B��Ϊ˽��,��ʹ�Ƕ���Ҳ���ʲ���

//     }
// }
// class Base{
// public:
//     int m_A;
// protected:
//     int m_B;
// private:
//     int m_C;
// };
// class Son: public Base{
// public:
//     int m_D;
// };
// //���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
// //����˽�г�Ա�����Ǳ�������������,��˷��ʲ���,����ȷʵ���̳���ȥ��
// void test01(){
//     cout << "size of Son = " << sizeof(Son) << endl;
// }
// class Base{
// public:
//     Base(){
//         cout << "Base���캯��!" << endl;
//     }
//     ~Base(){
//         cout << "Base��������!" << endl;
//     }
// };
// class Son: public Base{
// public:
//     Son(){
//         cout << "Son���캯��!" << endl;
//     }
//     ~Son(){
//         cout << "Son��������!" << endl;
//     }
// };
// void test01(){
//     // Base b;
//     Son s; //�̳��й���������˳��:�ȹ��츸��,�ٹ�������,����˳���빹���෴
// }
// class Base{
// public:
//     Base(){
//         m_A = 100;
//     }
//     int m_A;
//     void func(){
//         cout << "Base ��func�ĵ���" << endl;
//     }
//     void func(int a){
//         cout << "Base ��func(int a)�ĵ���" << endl;
//     }
// };
// class Son: public Base{
// public:
//     Son(){
//         m_A = 200;
//     }
//     void func(){
//         cout << "Son ��func�ĵ���" << endl;
//     }
//     int m_A;
// };
// void test01(){
//     Son s;
//     cout << " Base��m_A " << s.Base::m_A << endl;
//     //���ͨ�����������ʸ�����ͬ����Ա,��Ҫ��������
//     cout << " Son��m_A = " << s.m_A << endl;
// }
// void test02(){
//     Son s;
//     s.func();
//     s.Base::func();
//     //��������г��ֺ͸���ͬ���ĳ�Ա����,�����ͬ�����������ص�����������ͬ���ĳ�Ա����
//     //�������ʵ������б����ص�ͬ����Ա����,��Ҫ��������
//     s.Base::func(100);
// }
// class Base{
// public:
//     static int m_A; 
//     static void func(){
//         cout << "Base-static void func()" << endl;
//     }
//     static void func(int a){
//         cout << "Base-static void func(int a)" << endl;
//     }
// };
// int Base::m_A = 100;
// class Son: public Base{
// public:
//     static int m_A;
//     static void func(){
//         cout << "Son-static void func()" << endl;
//     }
// };
// int Son::m_A = 200;
// //ͬ����̬��Ա����
// void test01(){
//     Son s;
//     //ͨ���������
//     cout << "Son��m_A = " << s.m_A << endl;
//     cout << "Base��m_A = " << s.Base::m_A << endl;
//     //ͨ����������
//     cout << "Son��m_A = " << Son::m_A << endl;
//     cout << "Base��m_A = " << Son::Base::m_A << endl;//��һ��::����ͨ��������ʽ���� �ڶ���::������ʸ���������
// }
// //ͬ����̬����
// void test02(){
//     //ͨ���������
//     Son s;
//     s.func();
//     s.Base::func();
//     //ͨ����������
//     Son::func();
//     Son::Base::func();
//     //������ֺ͸���ͬ���ľ�̬��Ա����,Ҳ�����ظ���������ͬ����Ա����
//     //�������ʸ����б�����ͬ����Ա,��Ҫ��������
//     Son::Base::func(10);
// }
// class Base1{
// public:
//     Base1(){
//         m_A = 100;
//     }
//     int m_A;
// };
// class Base2{
// public: 
//     Base2(){
//         m_A = 200;
//     }
//     int m_A;
// };
// class Son : public Base1, public Base2{
// public:
//     Son(){
//         m_C = 300;
//         m_D = 400;
//     }
//     int m_C, m_D;
// };
// void test01(){
//     Son s;
//     cout << "sizeo Son = " << sizeof(Son) << endl;
//     //�������г���ͬ����Ա,��Ҫ������������
//     cout << "Base1��m_A = " << s.Base1::m_A << endl;
//     cout << "Base2��m_A = " << s.Base2::m_A << endl;
// }
// class Animal{
// public:
//     int m_Age;
// };
// //������̳� ������μ̳е����� �ڼ̳�֮ǰ���Ϲؼ���virtual��Ϊ��̳�
// //Animal���Ϊ�����
// class Sheep : virtual public Animal{};
// class Camel : virtual public Animal{};
// class Alpaca : public Sheep, public Camel{
// };
// void test01(){
//     Alpaca alpaca;
//     alpaca.Sheep::m_Age = 18;
//     alpaca.Camel::m_Age = 28;
//     //�����μ̳�,��������ӵ����ͬ����,��Ҫ��������������
//     cout << "alpaca.Sheep::m_Age = " << alpaca.Sheep::m_Age << endl;
//     cout << "alpaca.Camel::m_Age = " << alpaca.Camel::m_Age << endl;
//     cout << "alpaca.m.age = " << alpaca.m_Age << endl;
// }
// class Animal{
// public:
//     virtual void speak(){
//         cout << "������˵��" << endl;
//     }
// };
// class Cat : public Animal{
// public:
//     void speak(){
//         cout << "Сè��˵��" << endl;
//     }
// };
// class Dog : public Animal{
// public:
//     void speak(){
//         cout << "С����˵��" << endl;
//     }
// };
// //��ַ��� �ڱ���׶�ȷ��������ַ
// //�����ִ����è˵��,��ô���������ַ�Ͳ�����ǰ��,��Ҫ�����н׶ν��а�,����ַ���
// void dospeak(Animal &animal){ //�����ָ�����ֱ��ָ������
//     animal.speak();
// }
// void test01(){
//     Cat cat;
//     dospeak(cat);
//     Dog dog;
//     dospeak(dog);
// }
// class Base{
// public:
//     virtual void func() = 0;
// };
// // void test01(){
// //     // Base b;    //�������޷�ʵ��������
// //     // new Base;  //�������޷�ʵ��������
// // }
// class Son : public Base{
// public:
//     void func(){
//         cout << "func�����ĵ���" << endl;
//     }
// };
// void test02(){
//     Base *base = new Son;
//     base->func();
// }
// class Animal{
// public:
//     Animal (){
//         cout << "Animal���캯������" << endl;
//     }
//     //�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
//     // virtual ~Animal(){
//     //     cout << "Animal������������" << endl;
//     // }
//     virtual ~Animal() = 0;
//     virtual void speak() = 0;
// };
// Animal::~Animal(){
//     cout << "Animal�������������ĵ���" << endl;
// }
// class Cat : public Animal{
// public:
//     void speak(){
//         cout << *m_Name << "��è��˵��" << endl;
//     }
//     Cat(string name){
//         cout << "Cat���캯������" << endl;
//         m_Name = new string(name);
//     }
//     string *m_Name;
//     ~Cat(){
//         if (m_Name != nullptr){
//             cout << "Cat ������������" << endl;
//             delete m_Name;
//             m_Name = nullptr;
//         }
//     }
// };
// void test01(){
//     Animal * animal = new Cat("Tom");
//     animal->speak();
//     //����ָ���ڹ���ʱ�� ���������������������, ������������ж�������, �����ڴ�й©
//     delete animal;
// }
#include<fstream>
// void test01(){
//     ofstream ofs;
//     ofs.open("test.txt", ios::out);
//     ofs << "����: ����" << endl;
//     ofs << "�Ա�: ��" << endl;
//     ofs << "����: 18" << endl;
//     ofs.close();
// }

// void test02(){
//     ifstream ifs;
//     ifs.open("test.txt", ios::in);
//     if(!ifs.is_open()){
//         cout << "�ļ���ʧ��" << endl;
//         return;
//     }
//     //������(4��)
//     // char buf[1024] = {0}; //��һ��
//     // while(ifs >> buf){
//     //     cout << buf << endl;
//     // }

//     // char buf[1024] = {0}; //�ڶ���
//     // while(ifs.getline(buf,sizeof(buf))){
//     //     cout << buf << endl;
//     // }

//     // string buf; //������
//     // while(getline(ifs,buf)){
//     //     cout << buf << endl;
//     // }
//     // ifs.close();

//     char c;  //������
//     while((c = ifs.get()) != EOF){  //EOF = end of file
//         cout << c;  //ע�ⲻҪ��endl
//     }
// }

// class Person{
// public:
//     char m_Name[64]; //ע��˴�������cpp��string,Ӧ����c�е��ַ�������
//     int m_Age;
// };

// void test01(){
//     ofstream ofs("Person.txt", ios::out | ios::binary);
//     Person p = {"����", 17};
//     ofs.write((const char *)&p, sizeof(Person));
//     ofs.close();
// }

// void test02(){
//     ifstream ifs;
//     ifs.open("Person.txt", ios::in | ios::binary);
//     if(!ifs.is_open()){
//         cout << "�ļ���ʧ��" << endl;
//         return;
//     }
//     Person p;
//     ifs.read((char *)&p, sizeof(Person));
//     cout << "����: " << p.m_Name << " ����: " << p.m_Age << endl;
//     ifs.close();
// }

int main(){
//cpp���ı��(�������)
  //�ڴ����ģ��(������,ȫ����,ջ��,����)
   //��������ǰ
   //������(����,ֻ��)
/*****************************************************/
//    //ȫ����(ȫ�ֱ���,��̬����,����)(����������ɲ���ϵͳ�ͷ�)
//     //�ֲ�����
//     int a = 10;
//     int b = 10;
//     cout << "�ֲ�����a�ĵ�ַΪ: " << (long long)&a << endl;
//     cout << "�ֲ�����b�ĵ�ַΪ: " << (long long)&b << endl;
//     //ȫ�ֱ���(��4��)(���ں������еı���)
//     cout << "ȫ�ֱ���g_a�ĵ�ַΪ " << (long long)&g_a << endl;
//     cout << "ȫ�ֱ���g_b�ĵ�ַΪ " << (long long)&g_b << endl;
//     //��̬����:����ͨ����ǰ��static,���ھ�̬����
//     static int s_a = 10;
//     static int s_b = 10;
//     cout << "��̬����s_a�ĵ�ַΪ: " << (long long)&s_a << endl;
//     cout << "��̬����s_b�ĵ�ַΪ: " << (long long)&s_b << endl;
//     //����(�ַ�������,const���εı���)
//     //�ַ�������
//     cout << "�ַ��������ĵ�ַΪ " << (long long)&"hello world" << endl;
//     //const���εı���(const���ε�ȫ�ֱ���,const���εľֲ�����)
//     //const���ε�ȫ�ֱ���(��7��)
//     cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ: " << (long long)&c_g_a << endl;
//     cout << "ȫ�ֳ���c_g_b�ĵ�ַΪ: " << (long long)&c_g_b << endl;
//     //const���εľֲ�����
//     const int c_l_a = 10; //c-const, g-global,l-local)
//     const int c_l_b = 10; 
//     cout << "�ֲ�����c_l_a�ĵ�ַΪ: " << (long long)&c_l_a << endl;
//     cout << "�ֲ�����c_l_b�ĵ�ַΪ: " << (long long)&c_l_b << endl;
//         //����ȫ����: �ֲ�����,const���εľֲ�����(�ֲ�����); ȫ����: ȫ�ֱ���,��̬����(static�ؼ���),����(�ַ�������,const���ε�ȫ�ֱ���(ȫ�ֳ���))
//         //�곣��������exe֮ǰ�ͻ��Զ��滻����ͨ����
/*****************************************************/
    //ջ��(�ɱ������Զ������ͷ�,��ź����Ĳ���ֵ,�ֲ�������)
    //(ע������:��Ҫ���ؾֲ������ĵ�ַ,ջ�����ٵ������ɱ������Զ��ͷ�)(��ʮ��)
    // int * p = func();
    // cout << *p << endl;
/*****************************************************/
    // //����(�ɳ���Ա�����ͷ�,������Ա���ͷ�,�������ʱ�ɲ���ϵͳ����)(��cpp����Ҫ����new�ڶ�����������)
    // int * p = func();
    // cout << *p << endl;
    //new������((new ��������)(�ͷ����ò�����delete)
    // //�ڶ���������������(��16��)
    // int * p = func();
    // cout << *p << endl; 
    // delete p; //�ͷ��ڴ�: ָ��ָ��ĵ�ַ����,��ַָ����ڴ汻�ͷ���(�黹��ϵͳ)
    // cout << *p << endl; 
    //�ڶ�������new��������
    // func();
    //��չ:��������&�ͷŶ�ά����
    // void f(){
    //     int * (*arr) = new int*[2];
    //     for (int i = 0; i < 2; i++){
    //         arr[i] = new int[3];
    //     }
    //     for (int i = 0; i < 2; i++){
    //         for (int j = 0; j < 3; j++){
    //             arr[i][j] = rand()%100 + 1;
    //         }
    //     }
    //     for(int i = 1; i < 2; i++){
    //         for(int j = 0; j < 3; j++){
    //             cout << arr[i][j] << "\t";
    //         }
    //         cout << endl;
    //     }
    // }
    // f();
/*****************************************************/
  //����(�����������)(�������� &���� = ԭ��)(������һ��ָ�볣��,ָ��ָ���ֵ�����޸�,��ַ�����޸�)
    //���û����﷨
    // int a = 10;
    // int &b = a;
    // cout << "ԭ��a =  " << a << "\t"
    //      << "����b =  " << b << endl;
    // b = 100;  //ͨ���������¸�ֵ
    // cout << "ԭ��a =  " << a << "\t"
    //      << "����b =  " << b << endl;
/*****************************************************/ 
    // //����ע������(�����ʼ��,��ʼ���󲻿ɸı�)
    // // int &b; //����,�����ʼ��
    // int a = 10;
    // int c = 20;
    // int &b = a;
    // // int &b = c; //����: ��ʼ���󲻿ɸı�(ָ�볣���������޸ĵ�ַ)
    // b = c; //��ֵ����,�����Ǹ�������
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "c = " << c << endl;
/*****************************************************/
    //��������������(��������ʱ,�����������õļ������β�����ʵ��)(���Լ�ָ���޸�ʵ��)
    // int a = 10;
    // int b = 20;
    // swap01(a, b); //��53��
    // cout << "ֵ������a = " << a << endl;
    // cout << "ֵ������b = " << b << endl; 
    // swap02(&a, &b); //��59��
    // cout << "��ַ������a = " << a << endl;
    // cout << "��ַ������b = " << b << endl; 
    // swap03(a, b); //��65��
    // cout << "���ô�����a = " << a << endl;
    // cout << "���ô�����b = " << b << endl; 
/*****************************************************/
    //��������������ֵ(��Ҫ���ؾֲ���������)(�÷�:����������Ϊ��ֵ)
    // int &ref1 = test01();
    // cout << "ref = " << ref << endl;  //���ܷ��ؾֲ�����(��71��)
    // int &ref2 = test02(); //��75��
    // cout << "ref2 = " << ref2 << endl; 
    // test02() = 1000; //��������ķ���ֵ������,����������ÿ�����Ϊ��ֵ
    // cout << "ref2 = " << ref2 << endl; 
/*****************************************************/
    //���õı���(���ñ�����cpp�ڲ�ʵ����һ��ָ�볣��)
    //cpp�Ƽ������ü���,��Ϊ�뷢�ű�,���ñ�����ָ�볣��,�������е�ָ�����������������������
/*****************************************************/
    //��������(�����β�,��ֹ�����)
    // int a = 10;
    // // int &ref = 10; //����:���ñ�����һ��Ϸ����ڴ�ռ�
    // const int &ref = 10;  //����const֮��,�������������޸� int temp = 10; const int &ref = temp;
    // // ref = 20; //����const֮���Ϊֻ��,�������޸�
    // int a = 100;
    // showValue(a);
/*****************************************************/
  //�����������
    // //����Ĭ�ϲ���(�������β��б��е��β��ǿ�����Ĭ��ֵ��)(����ֵ���� ������ (���� = Ĭ��ֵ){})
    // cout << func(10) << endl;  //��84��
    // cout << func(10, 30) << endl; //��������Լ���������,�����Լ�������,���û��,��ô��Ĭ��ֵ
    // //ע������:1.���ĳ��λ���Ѿ�����Ĭ�ϲ���,��ô�����λ������,�������Ҷ�������Ĭ��ֵ
    // //         2.�������������Ĭ�ϲ���,����ʵ�־Ͳ�����Ĭ�ϲ���(������ʵ��������һ����Ĭ�ϲ���)
/*****************************************************/
    //����ռλ����(�β��б��п�����ռλ����,������ռλ,���ú���ʱ�������λ��)(����ֵ���� ������ (��������){})
    // // func(10) //����  //��87��
    // func(10, 10);
    // //Ŀǰ�׶ε�ռλ�������ǻ��ò���,����γ̻��õ�;ռλ������������Ĭ�ϲ���
/*****************************************************/
    //��������(������������ͬ,��߸�����)(��������:ͬһ����������,����������ͬ,�����������Ͳ�ͬ���߸�����ͬ����˳��ͬ)
    //ע��:�����ķ���ֵ��������Ϊ�������صĵ�����
    // func();  //��90��
    // func(10);
    // func(3.14);
    // func(10, 3.14);
    // func(3.14, 10);
/*****************************************************/
    //��������ע������(������Ϊ��������,����������������Ĭ�ϲ���)
    // int a = 10;
    // func(a); 
    // func(10);  //��108��
    // func2(); //��114��  //��������������Ĭ�ϲ���,���ֶ�����,����,���������������
/*****************************************************/
  //��Ͷ���(����������������:��װ,�̳кͶ�̬)
    //��װ(�����Ժ���Ϊ��Ϊһ��������������е�����,�����Ժ���Ϊ����Ȩ�޿���)
    // class ����{����Ȩ��: ����/��Ϊ};
    // Circle c1;  //ʵ����: ͨ��һ���� ����һ������Ĺ���  //��120��  
    // c1.m_r = 10;
    // cout << "Բ���ܳ�Ϊ: " << c1.calculateZC() << endl;
    //���е����Ժ���Ϊͳ��Ϊ��Ա
    //���� ��Ա����,��Ա����
    //��Ϊ ��Ա����,��Ա����
/*****************************************************/
    //��װ-����Ȩ��(�������ʱ���԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���¼��Կ���)(public ����Ȩ��;protected ����Ȩ��;private ˽��Ȩ��)
    //����Ȩ�� public:          ��Ա ���ڿ��Է���,����Ҳ���Է���
    //����Ȩ�� protected:       ��Ա ���ڿ��Է���,���ⲻ���Է���(�̳���������Է��ʸ����еı�������)
    //˽��Ȩ�� private:         ��Ա ���ڿ��Է���,���ⲻ���Է���(�̳������಻���Է��ʸ����е�˽������)
    // Person p1;  //��129��
    // p1.m_Name = "����";
    // // p1.m_Car = "����";          //����Ȩ������,��������ʲ���
    // // p1.m_Password = 123456;     //˽��Ȩ������,������ʲ���
    // p1.func();
/*****************************************************/
    //��װ-struct��class����(Ĭ�ϵķ���Ȩ�޲�ͬ:structĬ�Ϲ���public,classĬ��˽��private)
    // C1 c1; //��143��
    // // c1.m_A = 100; //Ĭ��˽��,���ɷ���
    // C2 c2;
    // c2.m_A = 100;   //Ĭ�Ϲ���,���Է���
/*****************************************************/
    //��װ-��Ա��������Ϊ˽��(�ŵ�:1.�����Լ����ƶ�дȨ��;2.����дȨ��,���ǿ��Լ�����ݵ���Ч��)
    // Person p1;  //��149��
    // p1.setName("����"); //�ɶ���д
    // cout << "����: " << p1.getName() << endl;
    // cout << "����: " << p1.getAge() << "��" << endl; //ֻ��
    // p1.setLover("�־�");  //ֻд
    // p1.setAge(1000); 
    // p1.setAge(50);
/*****************************************************/
   //��������
   //����ĳ�ʼ��������
    //���캯������������
    //���캯��(����(){}):�ڴ�������ʱΪ����ĳ�Ա���Ը�ֵ,���캯��ʱ�������Զ�����,�����ֶ�����(���캯�����г�ʼ������)
    //1.û�з���ֵ,Ҳ����дvoid; 2.��������������ͬ; 3.�����в���,���Է�������; 4.ֻ�����һ��   
    //��������(~����(){}):�ڶ�������ǰϵͳ�Զ�����,ִ��һЩ������(�������������������)
    //1.û�з���ֵ,Ҳ����дvoid; 2.��������������ͬ,������ǰ����~; 3.�������в���,����������; 4.ֻ�����һ��
    // test01(); //��177�� // ��ջ�ϵ�����,test01ִ����Ϻ��ͷ��������
    // Person p;   //û����������Ϊ����������
/*****************************************************/
    //���캯���ķ���͵���(���ַ��෽ʽ:������: �вι�����޲ι���;������: ��ͨ����Ϳ�������)(���ֵ��÷�ʽ: ���ŷ�,��ʾ��,��ʽת����)
    //����(��189��)
    //����(��207��)
    // test01(); //��Ϊ��������������,ÿ������������test01����ʱ��������,������ʾ��������
/*****************************************************/ 
    // �������캯������ʱ��(1.ʹ��һ���Ѵ�����ϵĶ�������ʼ��һ���¶���; 2.ֵ���ݵķ�ʽ������������ֵ; 3.��ֵ��ʽ���ؾֲ�����)
    // test01(); //��226��
    // test02(); //��249��
    // test03(); //��255�� //����g++�������ķ���ֵ�Ż�,û�п�������
/*****************************************************/ 
    //���캯���ĵ��ù���(cpp���ÿ���඼���������������: Ĭ�Ϲ���(��ʵ��), ��������(��ʵ��), ��������(ֵ����))   
    //1.����û������вι��캯��,cpp�����ṩĬ���޲ι���,���ǻ��ṩĬ�Ͽ�������
    // test01(); //��264��
    //2.����û����忽�����캯��,cpp�������ṩ����Ĭ�Ϲ��캯��,��Ȼ�ṩ��������    
    // test02(); //��288��
    //3.�������д�˿������캯��,�������Ͳ����ṩ������ͨ���캯��
/*****************************************************/ 
    //�����ǳ����(ǳ����: �򵥵ĸ�ֵ��������; ���: �ڶ�����������ռ�,���п�������)
    // test01(); //��293��
/*****************************************************/ 
    //��ʼ���б�(���캯��(): ����1(ֵ1), ����2(ֵ2)...{})
    // test01(); //��326��
/*****************************************************/
    //�������Ϊ���Ա(cpp���еĳ�Ա��������һ����Ķ���,���ǳ�֮Ϊ�����Ա)
    // test01(); //��349��
/*****************************************************/
    //��̬��Ա(�ؼ���static)(��̬��Ա����,��̬��Ա����)
    //��̬��Ա����: ���ж�����ͬһ������;�ڱ���׶η����ڴ�;��������,�����ʼ��
    // test01(); //��376��
    // test02();
    //��̬��Ա����: ���ж�����ͬһ������; ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
    // test01(); //��401��
/*****************************************************/
   //cpp����ģ�ͺ�thisָ��
    //��Ա�����ͳ�Ա�����ֿ��洢(��cpp��,���ڵĳ�Ա�����ͳ�Ա�����ֿ��洢,ֻ�зǾ�̬��Ա������������Ķ�����)
    // test01(); //��425��
/*****************************************************/
    //thisָ�����(thisָ��ָ�򱻵��õĳ�Ա���������Ķ���)(������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��(������Ҫ����,����ֱ��ʹ��))
    //(��;:1. ���βκͳ�Ա����ͬ��ʱ,����thisָ��������;2. ����ķǾ�̬��Ա�������ض�����,����return *this)
    // test01(); //��455��
    // test02();
/*****************************************************/    
    //��ָ����ʳ�Ա����(cpp�п�ָ����õ��ó�Ա����)
    // test01();//��477��
/*****************************************************/ 
    //const���γ�Ա����(������: ��Ա�������const��;�������޸ĳ�Ա����,��Ա��������ʱ�ӹؼ���mutable��,�ڳ���������Ȼ�����޸�)
    //(������:��������ǰ��const;������ֻ�ܵ��ó�����)
    // test01();//��496��
    // test02();
/*****************************************************/
    //��Ԫ(��һ�����������������һ������˽�г�Ա)
    //1.ȫ�ֺ�������Ԫ
    // test01();//��525��
    //2.������Ԫ
    // test02();
    //3.��Ա��������Ԫ
    // test03();
/*****************************************************/
    //���������
    // //�Ӻ����������
    // //1.��Ա��������+��(��593��)
    // test01();
    // //2.ȫ�ֺ�������+��
    // test01();
    //�������õ��������͵ı��ʽ��������ǲ����ܸı��
    //��Ҫ�������������
/*****************************************************/
    //�������������("<<")(�����Զ����������)
    //ͨ����ȫ�ֺ������������������
    // test01(); //��635��
/*****************************************************/
    //�������������(ͨ�����ص��������,ʵ���Լ�����������)
    // //ǰ��++(��������Ϊ����)
    // test01();//��650��
    // //����++(��������Ϊֵ)
    // test02();
/*****************************************************/
    //��ֵ���������
    //cpp���������ٸ�һ��������ĸ�����
    //1.Ĭ�Ϲ��캯��(�޲�,������Ϊ��)
    //2.Ĭ����������(�޲�,������Ϊ��)
    //3.Ĭ�Ͽ������캯��,�����Խ���ֵ����
    //4.Ĭ�������operator=�����Խ���ֵ����
    // test01();//��685��
/*****************************************************/
    //��ϵ���������(���ع�ϵ�����,�����������Զ������Ͷ�����жԱȲ���)(>, <, =, !=)
    // test01();//��710��
/*****************************************************/
    //�����������������
    //�������������()Ҳ��������,�������غ�ʹ�õķ�ʽ�ǳ������ĵ���,��˳�Ϊ�º���,�º���û�й̶�д��,�ǳ����
    // test01();//��741��
    // test02();
    // test03();
/*****************************************************/
  //�̳�
    //�̳еĻ����÷�(��773��)
    //�̳еĺô�:�����ظ�����
    //�﷨: class ����: �̳з�ʽ ����
    //����Ҳ��Ϊ������;����Ҳ��Ϊ����
    //�������еĳ�Ա,�������󲿷�: һ���Ǵӻ���̳й�����,һ�����Լ����ӵĳ�Ա.�ӻ���̳й����ı����乲��,�������ĳ�Ա���������.
    // test01();
    // test02();
    // test03();
/*****************************************************/    
    //�̳з�ʽ(�﷨: class ����: �̳з�ʽ ����)(��825��)
    //1.�����̳�(���๫����Ϊ���๫��,���ౣ����Ϊ���ౣ��,����˽�������޷�����)(��833��)
    //2.�����̳�(���๫���뱣����Ϊ���ౣ��,����˽�������޷�����)(��847��)
    //3.˽�м̳�(���๫���뱣����Ϊ����˽��,����˽�����಻�ɷ���)(��861��)
/*****************************************************/  
    //�̳��еĶ���ģ��
    // test01();//��883��
    //���ÿ�����Ա������ʾ���߲鿴����ģ��
    //��ת�̷� 
    //��ת�ļ�·�� cd ����·����
    //�鿴����
    //c1 / d1 reportSingleClassLayout���� �ļ���
/*****************************************************/  
    //�̳��й��������˳��(����̳и����,�������������,Ҳ����ø��๹�캯��)
    // test01(); //��900��
/*****************************************************/
    //�̳�ͬ����Ա����ʽ
    //��������ͬ����Ա:ֱ�ӷ��ʼ���
    //���ʸ���ͬ����Ա:��Ҫ��������
    // test01(); //��922��
    // test02();
/*****************************************************/
    //�̳�ͬ����̬��Ա����ʽ
    //��̬��Ա�ͷǾ�̬��Ա����ͬ��,����ʽһ��
    //��������ͬ����Ա ֱ�ӷ��ʼ���
    //���ʸ���ͬ����Ա ��Ҫ��������    
    // test01(); //��959��
    // test02();
/*****************************************************/
    //��̳��﷨(cpp����һ����̳ж����)
    //�﷨: class ���� : �̳з�ʽ ����1 , �̳з�ʽ ����2, ...
    //��̳п���������������ͬ����Ա����,��Ҫ������������(cppʵ�ʿ����в������ö�̳�)
    // test01(); //��1001��
/*****************************************************/
    //���μ̳�(����������̳�ͬһ������,����ĳ����ͬʱ�̳�����������,����̳б���Ϊ���μ̳л�����ʯ�̳�)
    // test01(); //��1030��
/*****************************************************/
  //��̬(��Ϊ��̬��̬: ��������,��������� �� ��̬��̬: ���������麯��ʵ������ʱ��̬)
    //����:��̬��̬�ĺ�����ַ���-����׶�ȷ��������ַ; ��̬��̬�ĺ�����ַ���-����ʱȷ��������ַ
    //��̬��̬��������:1.�м̳й�ϵ; 2.������д������麯��(��д:��������ֵ����,������,�����б���ȫ��ͬ)
    //��̬��̬��ʹ��: ����ָ���������ָ������Ķ���
    // test01(); //��1049��
/*****************************************************/
    //��̬��ԭ������
    //�����е��麯��ָ��ָ�����е��麯����(��¼�����еĺ�����ַ),��������麯��ָ��ָ������ʱ
    //������麯����Ḳ�Ǹ�����麯����
/*****************************************************/
    //���麯���������(virtual ����ֵ���� ������ (�����б�) = 0;)(���������˴��麯��,�����Ҳ��Ϊ������)
    //�������ص�:��ʵ��������, ���������д�������еĴ��麯��,����Ҳ���ڳ�����
    // test02(); //��1078��
/*****************************************************/
    //�������봿������(���Խ������ָ���ͷ��������; ����Ҫ����ĺ���ʵ��)
    //����: ����Ǵ�������, �������ڳ�����, �޷�ʵ��������
    //�鹹: virtual ~����(){}
    //��������: virtual ~����() = 0 
    //          ����::~����(){}
    // test01(); //��1096��
/*****************************************************/
  //�ļ�����(ͨ���ļ������ݳ־û�)(�����ͷ�ļ�<fstream>)(�����ļ�������:1.ofstream:д����;2.ifstream:������;3.fstream:��д����)
   //�ı��ļ�(�ļ����ı���ASCII����ʽ�洢�ڼ������)
    //д�ļ�����:
    //1.����ͷ�ļ�;(#include<fstream>)
    //2.����������;(ofstream ofs;)
    //3.���ļ�;(ofs.open("�ļ�·��", �򿪷�ʽ);)
    //4.д����;(ofs << "д�������";)
    //5.�ر��ļ�;(ofs.close();)
    //�ļ��򿪷�ʽ: ios::in(Ϊ���ļ������ļ�); ios::out(Ϊд�ļ������ļ�); ios::ate(��ʼλ��:�ļ�β); ios::app(׷���ļ�д�ļ�); 
    //             ios::trunc(����ļ�������ɾ��,�ٴ���); ios::binary(�����Ʒ�ʽ)
    //ע��: �ļ��򿪷�ʽ�������ʹ��,���� | ������(�� ios::binary | ios::out)
    // test01(); //��1136��
/*****************************************************/
    //���ļ�����:
    //1.����ͷ�ļ�;(#include<fstream>)
    //2.����������(ifstream ifs;)
    //3.���ļ����ж��ļ��Ƿ�򿪳ɹ�(ifs.open("�ļ�·��","�򿪷�ʽ");)
    //4.������;(���ַ�ʽ��ȡ)
    //5.�ر��ļ�(ifs.close();)
    // test02(); //��1145��
/*****************************************************/
   //�������ļ�(ָ���򿪷�ʽΪios::binary)
    //д����
    //����ԭ��: ostream& write (const char * buffer, int len)
    //�ַ�ָ��bufferָ���ڴ��е�һ�δ洢�ռ�,len�Ƕ�д���ֽ���
    // test01(); //��1175��
/*****************************************************/
    //���ļ�
    //����ԭ��:ifstream read(char *buffer, int len)
    //�ַ�ָ��bufferָ���ڴ��е�һ�δ洢�ռ�,len�Ƕ�д���ֽ���
    // test02(); //��1188��
    
    system("pause");

    return 0;
}