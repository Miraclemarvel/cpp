#include <iostream>
using namespace std;

// //全局变量
// int g_a = 10;
// int g_b = 10;
// //const修饰的全局变量(全局常量)
// const int c_g_a = 10;
// const int c_g_b = 10;
// //栈区注意事项
// int* func(int b){  //形参数据也会放在栈区
//     b = 100;
//     int a = 10;
//     return &a;
// }
// int * func(){
//     //利用new关键字 可以将数据开辟到堆区
//     //指针本质也是局部变量,放在栈区,指针保存的数据放在堆区
//     int * p = new int(10); //new 返回的是 该数据类型的指针
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
//     delete[] arr;  //释放数组时要加[]才可以
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
// void swap01(int a, int b){  //值传递:形参不能修改实参
//     int temp = a;
//     a = b;
//     b = temp;
//     return;
// }
// void swap02(int *a, int *b){ //地址传递:形参可以修饰实参
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     return;
// }
// void swap03(int &a, int &b){  //引用传递:效果与地址传递一样
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
// void showValue(const int &val){ //为防止修改形参,加入const
//     // val = 1000; (误操作)
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
//     cout << "func的调用" << endl;
// }
// void func(int a){
//     cout << "func(int a)的调用" << endl;
// }
// void func(double a){
//     cout << "func(double a)的调用" << endl;
// }
// void func(int a, double b){
//     cout << "func(int a, double b)的调用" << endl;
// }
// void func( double a, int b){
//     cout << "func(double a, int b)的调用" << endl;
// }
// int func( double a, int b){  //错误 函数重载返回值类型不同不可以重载
//     cout << "func(double a, int b)的调用" << endl;
// }
// void func(int &a){  //int &a = 10;不合法
//     cout << "func(int &a)调用" << endl;
// }
// void func(const int &a){  //const int &a = 10; 合法
//     cout << "func(const int &a)调用" << endl;
// }
// void func2(int a, int b = 10){
//     cout << "func(int a, int b)的调用" << endl;
// }
// void func2(int a, ){
//     cout << "func(int a)的调用" << endl;
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
//         m_Name = "张三";
//         m_Car = "拖拉机";
//         m_Password = 114514;
//     }
// };
// class C1{
//     int m_A; //默认权限是私有
// };
// struct C2{
//     int m_A; //默认权限是公共
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
//         if (age > 150 || age < 0){  //判断数据有效性
//             m_Age = 0;
//             cout << "你这个老妖精" << endl;
//             return;
//         }
//         m_Age = age;
//     }
//     void setLover(string name){
//         m_Lover = name;
//     }
// private:
//     string m_Name;  //可读可写
//     int m_Age;      //只读
//     string m_Lover; //只写
// };
// class Person{
// public:
//     Person(){   //构造函数
//         cout << "Person 构造函数的调用" << endl;
//     }
//     ~Person(){  //析造函数
//         cout << "Person 析构函数的调用" << endl;
//     }
// };
// void test01(){
//     Person p1;
// }
// class Person{
// public:
//     Person(){
//         cout << "Person 无参构造函数的调用" << endl;
//     }
//     Person(int a){
//         age = a;
//         cout << "Person 有参构造函数的调用" << endl;
//     }
//     Person(const Person &p){ //拷贝构造, 其他均为普通构造
//         age = p.age;     //将传入的人身上的所有属性拷贝到我身上
//         cout << "Person 拷贝构造函数的调用" << endl;
//     }
//     ~Person(){
//         cout << "Person 析构函数的调用" << endl;
//     }
//     int age;
// };
// void test01(){
    // //括号法(常用)
    // Person p1; //默认构造函数调用
    // Person p2(10); //有参构造函数
    // Person p3(p2); //拷贝构造函数
    // //注意事项:调用默认构造函数时不要加() 如Person p1(); 编译器会将其认为是函数的声明,不会认为在创建对象
    // cout << "p2的年龄为: " << p2.age << endl;
    // cout << "p3的年龄为: " << p3.age << endl;
    // // 显示法
    // Person p1;
    // Person p2 = Person(10); //有参构造
    // Person p3 = Person(p2); //拷贝构造
    // Person(10); //匿名对象, 特点: 当前执行结束后,系统会立即回收匿名对象 
    // cout << "aaaA" << endl; //匿名对象会在调用后立刻销毁,有名的对象会在程序结束的时候销毁,两者生存周期不同
    //注意事项: 不要利用拷贝构造函数初始化匿名对象 Person(p3); 编译器会认为是对象的声明
    // //隐式转换法
    // Person p4 = 10; //相当于写了 Person p4 = Person(10)
    // Person p5 = p4; //拷贝构造 
// }
// class Person{
// public:
//     Person(){
//         cout << "Person 默认构造函数调用" << endl;
//     }
//     Person(int age){
//         m_Age = age;
//         cout << "Person 有参构造函数调用" << endl;
//     }
//     Person(const Person &p1){
//         m_Age = p1.m_Age;
//         cout << "Person 拷贝构造函数调用" << endl;
//     }
//     ~Person(){
//         cout << "Person 析构函数调用" << endl;
//     }
//     int m_Age;
// };
// void test01(){
//     Person p1(20);
//     Person p2(p1);
//     cout << "p2的年龄为: " << p2.m_Age << endl;
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
//     //     cout << "Person 的默认构造调用" << endl;
//     // }
//     int m_Age;
//     Person(int age){
//         cout << "Person 的有参构造函数" << endl;
//         m_Age = age;
//     }
//     ~Person(){
//         cout << "Person 的析构函数调用" << endl;
//     }
//     // Person(const Person &p){
//     //     m_Age = p.m_Age;
//     //     cout << "Person 的拷贝构造函数调用" << endl;
//     // }
// };
// // void test01(){
// //     Person P;
// //     P.m_Age = 18;
// //     Person P2(P);
// //     cout << "p2的年龄为: " << P2.m_Age << endl;
// // }
// void test02(){
//     Person p2(18);
//     Person p3(p2);
//     cout << "p3的年龄为: " << p3.m_Age << endl;
// }
// class Person{
// public:
//     Person(){
//         cout << "Person 的默认构造函数调用" << endl;
//     }
//     int m_Age;
//     int * m_Height;
//     Person(int age, int height){
//         m_Age = age;
//         m_Height = new int (height); 
//         cout << "Person 的有参构造函数调用" << endl;
//     }
//     ~Person(){
//         //析构代码, 将堆区开辟的数据做释放操作
//         if (m_Height != NULL){
//             delete m_Height;
//             m_Height = NULL;
//         }
//         cout << "Person 的析构函数调用" << endl;
//     }
//     Person(const Person &p){
//         cout << "Person 拷贝构造函数调用" << endl;
//         m_Age = p.m_Age;
//         //m_Height = p.m_Height :编译器默认实现的运行代码,属于浅拷贝
//         m_Height = new int(*p.m_Height);
//     }
// };
// void test01(){
//     Person p1(18, 160);
//     cout << "p1的年龄为: " << p1.m_Age << "\t" << "p1的身高为: " << *p1.m_Height << endl;
//     Person p2(p1);
//     cout << "p2的年龄为: " << p2.m_Age << "\t" << "p2的身高为: " << *p2.m_Height << endl;
// }
// class Person{
// public:
//     int m_A, m_B, m_C;
//     // Person(int a, int b, int c){  //传统初始化操作
//     //     m_A = a;
//     //     m_B = b;
//     //     m_C = c;
//     // }
//     //初始化列表初始化属性(这个方法可以用在类嵌套中直接对类中进行赋值,只需要调用一次函数实现多个类不同属性初始化)
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
//         cout << "Phone 的构造函数调用" << endl;
//         m_PName = PName;
//     }
//     ~Phone(){
//         cout << "Phone 的析构函数调用" << endl;
//     }
// };
// class Person{
// public:
//     string m_Name;
//     Phone m_Phone;
//     Person(string Name, string pName) : m_Name(Name), m_Phone(pName){
//         cout << "Person 的构造函数调用" << endl;
//     }
//     ~Person(){
//         cout << "Person 的析构函数调用" << endl;
//     }
// };
// //当其他类对象作为本类成员,构造时先构造对类象,再构造自身;析构的时候顺序相反
// void test01(){
//     Person p("张三", "苹果max");
//     cout << p.m_Name << "拿着: " << p.m_Phone.m_PName << endl;
// }
// class Person{
// public:
//     static int m_A;
//     //静态成员变量也是有访问权限的
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
// void test02(){ //静态成员变量不属于某个对象上,所有对象都共享同一份数据,因此静态成员变量有两种访问方式
//     //1.通过对象进行访问
//     Person p;
//     cout << p.m_A << endl;
//     //2.通过类名进行访问
//     cout << Person::m_A << endl;
//     // cout << Person::m_B << endl;

// }
// int Person::m_A = 100;
// // int Person::m_B = 200;
// class Person{
// public:
//     static void func(){
//         m_A = 100; //静态成员函数可以访问 静态成员变量
//         // m_B = 50;  //静态成员函数不可访问 非静态成员变量 无法区分到底是哪个对象的m_B属性
//         cout << "static void func调用" << endl;
//     }
//     static int m_A;
//     int m_B;
//     //静态成员函数也有访问权限
// private:
//     static void test02(){
//         cout << "static void test02 调用" << endl:
//     }
// };
// int Person::m_A = 100;
// void test01(){
//     Person p;
//     //1.通过对象访问
//     p.func();
//     //2.通过类名访问
//     Person::func();
//     // Person::test02(); //类外访问不到私有静态成员函数
// }
// class Person{
// public:
//     int m_A; //非静态成员变量 属于类的对象上
//     static int m_B; //静态成员变量 不属于类的对象上
//     void func01(){} //非静态成员函数 不属于类的对象上
//     static void func02(){} //静态成员函数 不属于类的对象上
//     //只有非静态成员变量在类的对象上
// };
// void test01(){
//     Person p;
//     //空对象占用内存空间:1;  cpp编译器会给每个空对象也分配一个字节空间,是为了区分空对象占内存的位置  每个空对象也应该有一个独一无二的内存地址
//     cout << "size of p = " << sizeof(p) << endl;
// }
// void test02(){
//     Person p;
//     cout << "size of p = " << sizeof(p) << endl;
//     //内存对齐: 在32位操作系统下,我们普遍用的gcc编译器和vs编译器都是默认按照4个大小进行内存对齐的
//     //也就是说结构体或类中的内存分配默认是按照4个字节的倍数进行分配的
// }
// int Person::m_B = 0;
// class Person{
// public:
//     int age;
//     Person(int age){
//         //this指针指向被调用的成员函数所属的对象
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
// //解决名称冲突
// void test01(){
//     Person p1(18);
//     cout << "p1的年龄为: " << p1.age << endl;
// }
// //返回对象本身用*this
// void test02(){
//     Person p1(10);
//     Person p2(20);
//     //链式编程思想
//     p2.PersonAddAge01(p1).PersonAddAge01(p1).PersonAddAge01(p1);
//     cout << "p2的年龄为: " << p2.age << endl;
//     //拷贝构造函数p2',p2''
//     p2.PersonAddAge02(p1).PersonAddAge02(p1).PersonAddAge02(p1);
//     cout << "p2的年龄为: " << p2.age << endl;
// }
// class Person{
// public:
//     void showClassName(){
//         cout << "this is Person class" << endl;
//     }
//     void showPersonAge(){
//         //报错原因是因为传入的指针是为NULL
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
//     // this指针的本质是指针常量,指针指向不可修改
//     //Person * const this:
//     //在成员函数后面加const,修饰的是this指向,让指针指向的值不可以修改
//     Person(){
//         m_A = 0;
//     }
//     void showPerson() const {
//         this->m_B = 100;
//         m_B = 200;
//         // this->m_A = 100;
//         // this = NULL; //this指针不可以修改指向
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
//     const Person p1; //常对象
//     // p.m_A = 200;
//     p1.m_B = 300; //m_B是特殊值,在常对象下也可以修改
//     p1.showPerson();
//     //常对象只能调用常函数;常对象不可以调用普通成员函数
// }
// class Building{
//     // //GoodGuy全局函数是Building的好朋友,可以访问Building中私有成员
//     // friend void GoodGuy(Building *building);
//     // //GoodGuy类是本类的好朋友,可以访问本类中私有成员
//     friend class GoodGuy;
//     //告诉编译器 GoodGuy类下的visit2成员函数作为本类的好朋友,可以访问私有成员
//     friend void GoodGuy::visit2();
// public:
//     Building(){
//         m_SittingRoom = "客厅";
//         m_BedRoom = "卧室";
//     }
//     string m_SittingRoom;
// private:
//     string m_BedRoom;
// };
// class Building;
// // //1.全局函数
// // void GoodGuy(Building *building){
// //     cout << "好基友的全局函数 正在访问 : " << building->m_SittingRoom << endl;
// //     cout << "好基友的全局函数 正在访问 : " << building->m_BedRoom << endl;
// // }
// // void test01(){
// //     Building building;
// //     GoodGuy(&building);
// // }
// //2.类做友元
// class GoodGuy{
// public:
//     Building *building;
//     GoodGuy();
//     void visit();  //让visit可以访问Building中私有成员
//     void visit2(); //让visit2函数不可以访问Building中私有成员
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
//     m_SittingRoom = "客厅";
//     m_BedRoom = "卧室";
// }
// GoodGuy::GoodGuy(){
//     building = new Building; //new building放在visit定义前面,Building类和GoodGuy后面
// }
// void GoodGuy::visit(){
//     cout << "好基友正在访问: " << building->m_SittingRoom << endl;
//     cout << "好基友正在访问: " << building->m_BedRoom << endl;
// }
// void test02(){
//     class GoodGuy gg;
//     gg.visit();
// }
// //3.成员函数做友元
// void GoodGuy::visit2(){
//     cout << "visit2函数正在访问: " << building->m_SittingRoom << endl;
//     cout << "visit2函数正在访问: " << building->m_BedRoom << endl;
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
//     //函数重载的版本
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
//     //成员函数重载本质调用
//     Person p3 = p1.operator+(p2);
//     //全局函数重载本质调用
//     Person p3 = operator+(p1, p2);
//     Person p3 = p1 + p2;
//运算符重载也可以发生函数重载
//      Person p4 = p1 + 100;
//     cout << p3.m_A << endl;
//     cout << p3.m_B << endl;
//     cout << p4.m_A << endl;
//     cout << p4.m_B << endl;
// }
// class Person{
// public:
//     int m_A, m_B;
//     //一般不用成员函数来重载左移运算符,因为无法实现cout在左侧
// };
// ostream & operator<<(ostream &cout, Person p){   //operator<<(cout, p) 简化 cout << p
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
//     //重载前置++运算符 (返回引用是为了对同一个数据进行操作)
//     MyInteger& operator++(){
//         m_Num++;
//         return *this;
//     }
//     //重载后置++运算符
//     //int代表占位参数 可以用于区分前置和后置递增
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
//     //重载 赋值运算符
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
//     cout << "p1的年龄为: " << *p1.m_Age << endl;
//     cout << "p2的年龄为: " << *p2.m_Age << endl;
//     cout << "p3的年龄为: " << *p3.m_Age << endl;
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
//         cout << "p1与p2相等" << endl;
//     }
//     else{
//         cout << "p1与p2相等" << endl;
//     }
// }
// class MyPrint{
// public:
//     //重载函数调用运算符
//     void operator()(string test){
//         cout << test << endl;
//     }
// };
// void test01(){
//     MyPrint myprint;
//     myprint("hello world");//由于使用起来非常类似于函数调用,因此称为仿函数
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
//     //匿名函数对象
//     cout << MyAdd()(100, 100) << endl;
// }
// class BasePage{
// public:
//     void header(){
//         cout << "首页, 公开课, 登录, 注册...(公共头部)" << endl;
//     }
//     void footer(){
//         cout << "帮助中心, 交流合作, 站内地图...(公共底部)" << endl;
//     }
//     void left(){
//         cout << "Java, Python, C++,...(公共分类列表)" << endl;
//     }
// };
// //Java页面
// class Java: public BasePage{
// public:
//     void content(){
//         cout << "Java教学视频" << endl;
//     }
// };
// class Python: public BasePage{
// public:
//     void content(){
//         cout << "Python教学视频" << endl;
//     }
// };
// class cpp: public BasePage{
// public:
//     void content(){
//         cout << "cpp教学视频" << endl;
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
//公共继承
// class Son1: public Base1{
// public:
//     void func(){
//         m_A = 10;//父类中的公共权限成员 到子类中依然是公共权限
//         m_B = 20;//父类中的保护权限成员 到子类中依然是保护权限
//         // m_C = 30;//父类中的私有权限成员 子类访问不到
//     }
// };
// void test01(){
//     Son1 s1;
//     s1.m_A = 100;
//     // s1.m_B = 200; //到son1中m_B是保护权限 类外访问不到
// }
//保护继承
// class Son2: protected Base1{
// public:
//     void func(){
//         m_A = 100;//父类中的公共成员到子类变为保护权限
//         m_B = 100;//父类中的保护成员到子类变为保护权限
//         // m_C = 100;//父类中的私有成员 子类访问不到
//     }
// };
// void test02(){
//     Son2 s2;
//     // s2.m_A = 100; //在Son2中m_A变为保护权限,因此类外访问不到
//     // s2.m_B = 100; //在Son2中m_B保护权限,不可以访问
// }
//私有继承
// class Son3: private Base1{
// public:
//     void func(){
//         m_A = 100; //父类中公共成员到子类中变为私有成员
//         m_B = 100; //父类中保护成员到子类中变为私有成员
//         m_C = 100; //父类中私有成员,子类访问不到
//     }
// };
// void test03(){
//     Son3 s3;
//     // s3.m_A = 100; //到Son3中变为私有成员 类外访问不到
//     // s3.m_B = 100; //到Son3中变为私有成员 类外访问不到
// }
// class Grandson: public Son3{
// public:
//     void func(){
//         // m_A = 100; //到了Son3中m_A变为私有,即使是儿子也访问不到
//         // m_B = 100; //到了Son3中m_B变为私有,即使是儿子也访问不到

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
// //父类中所有非静态成员属性都会被子类继承下去
// //父类私有成员属性是被编译器隐藏了,因此访问不到,但是确实被继承下去了
// void test01(){
//     cout << "size of Son = " << sizeof(Son) << endl;
// }
// class Base{
// public:
//     Base(){
//         cout << "Base构造函数!" << endl;
//     }
//     ~Base(){
//         cout << "Base析构函数!" << endl;
//     }
// };
// class Son: public Base{
// public:
//     Son(){
//         cout << "Son构造函数!" << endl;
//     }
//     ~Son(){
//         cout << "Son析构函数!" << endl;
//     }
// };
// void test01(){
//     // Base b;
//     Son s; //继承中构造与析构顺序:先构造父类,再构造子类,析构顺序与构造相反
// }
// class Base{
// public:
//     Base(){
//         m_A = 100;
//     }
//     int m_A;
//     void func(){
//         cout << "Base 下func的调用" << endl;
//     }
//     void func(int a){
//         cout << "Base 下func(int a)的调用" << endl;
//     }
// };
// class Son: public Base{
// public:
//     Son(){
//         m_A = 200;
//     }
//     void func(){
//         cout << "Son 下func的调用" << endl;
//     }
//     int m_A;
// };
// void test01(){
//     Son s;
//     cout << " Base下m_A " << s.Base::m_A << endl;
//     //如果通过子类对象访问父类中同名成员,需要加作用域
//     cout << " Son下m_A = " << s.m_A << endl;
// }
// void test02(){
//     Son s;
//     s.func();
//     s.Base::func();
//     //如果子类中出现和父类同名的成员函数,子类的同名函数会隐藏掉父类中所有同名的成员函数
//     //如果想访问到父类中被隐藏的同名成员函数,需要加作用域
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
// //同名静态成员属性
// void test01(){
//     Son s;
//     //通过对象访问
//     cout << "Son下m_A = " << s.m_A << endl;
//     cout << "Base下m_A = " << s.Base::m_A << endl;
//     //通过类名访问
//     cout << "Son下m_A = " << Son::m_A << endl;
//     cout << "Base下m_A = " << Son::Base::m_A << endl;//第一个::代表通过类名方式访问 第二个::代表访问父类作用域
// }
// //同名静态函数
// void test02(){
//     //通过对象访问
//     Son s;
//     s.func();
//     s.Base::func();
//     //通过类名访问
//     Son::func();
//     Son::Base::func();
//     //子类出现和父类同名的静态成员函数,也会隐藏父类中所有同名成员函数
//     //如果想访问父类中被隐藏同名成员,需要加作用域
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
//     //当父类中出现同名成员,需要加作用域区分
//     cout << "Base1下m_A = " << s.Base1::m_A << endl;
//     cout << "Base2下m_A = " << s.Base2::m_A << endl;
// }
// class Animal{
// public:
//     int m_Age;
// };
// //利用虚继承 解决菱形继承的问题 在继承之前加上关键字virtual变为虚继承
// //Animal类称为虚基类
// class Sheep : virtual public Animal{};
// class Camel : virtual public Animal{};
// class Alpaca : public Sheep, public Camel{
// };
// void test01(){
//     Alpaca alpaca;
//     alpaca.Sheep::m_Age = 18;
//     alpaca.Camel::m_Age = 28;
//     //当菱形继承,两个父类拥有相同数据,需要加以作用域区分
//     cout << "alpaca.Sheep::m_Age = " << alpaca.Sheep::m_Age << endl;
//     cout << "alpaca.Camel::m_Age = " << alpaca.Camel::m_Age << endl;
//     cout << "alpaca.m.age = " << alpaca.m_Age << endl;
// }
// class Animal{
// public:
//     virtual void speak(){
//         cout << "动物在说话" << endl;
//     }
// };
// class Cat : public Animal{
// public:
//     void speak(){
//         cout << "小猫在说话" << endl;
//     }
// };
// class Dog : public Animal{
// public:
//     void speak(){
//         cout << "小狗在说话" << endl;
//     }
// };
// //地址早绑定 在编译阶段确定函数地址
// //如果想执行让猫说话,那么这个函数地址就不能提前绑定,需要在运行阶段进行绑定,即地址晚绑定
// void dospeak(Animal &animal){ //父类的指针可以直接指向子类
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
// //     // Base b;    //抽象类无法实例化对象
// //     // new Base;  //抽象类无法实例化对象
// // }
// class Son : public Base{
// public:
//     void func(){
//         cout << "func函数的调用" << endl;
//     }
// };
// void test02(){
//     Base *base = new Son;
//     base->func();
// }
// class Animal{
// public:
//     Animal (){
//         cout << "Animal构造函数调用" << endl;
//     }
//     //利用虚析构可以解决 父亲指针释放子类对象时不干净的问题
//     // virtual ~Animal(){
//     //     cout << "Animal析构函数调用" << endl;
//     // }
//     virtual ~Animal() = 0;
//     virtual void speak() = 0;
// };
// Animal::~Animal(){
//     cout << "Animal纯虚析构函数的调用" << endl;
// }
// class Cat : public Animal{
// public:
//     void speak(){
//         cout << *m_Name << "修猫在说话" << endl;
//     }
//     Cat(string name){
//         cout << "Cat构造函数调用" << endl;
//         m_Name = new string(name);
//     }
//     string *m_Name;
//     ~Cat(){
//         if (m_Name != nullptr){
//             cout << "Cat 析构函数调用" << endl;
//             delete m_Name;
//             m_Name = nullptr;
//         }
//     }
// };
// void test01(){
//     Animal * animal = new Cat("Tom");
//     animal->speak();
//     //父类指针在构造时候 不会调用子类中析构函数, 导致子类如果有堆区属性, 出现内存泄漏
//     delete animal;
// }
#include<fstream>
// void test01(){
//     ofstream ofs;
//     ofs.open("test.txt", ios::out);
//     ofs << "姓名: 张三" << endl;
//     ofs << "性别: 男" << endl;
//     ofs << "年龄: 18" << endl;
//     ofs.close();
// }

// void test02(){
//     ifstream ifs;
//     ifs.open("test.txt", ios::in);
//     if(!ifs.is_open()){
//         cout << "文件打开失败" << endl;
//         return;
//     }
//     //读数据(4种)
//     // char buf[1024] = {0}; //第一种
//     // while(ifs >> buf){
//     //     cout << buf << endl;
//     // }

//     // char buf[1024] = {0}; //第二种
//     // while(ifs.getline(buf,sizeof(buf))){
//     //     cout << buf << endl;
//     // }

//     // string buf; //第三种
//     // while(getline(ifs,buf)){
//     //     cout << buf << endl;
//     // }
//     // ifs.close();

//     char c;  //第四种
//     while((c = ifs.get()) != EOF){  //EOF = end of file
//         cout << c;  //注意不要加endl
//     }
// }

// class Person{
// public:
//     char m_Name[64]; //注意此处不能用cpp的string,应该用c中的字符串数组
//     int m_Age;
// };

// void test01(){
//     ofstream ofs("Person.txt", ios::out | ios::binary);
//     Person p = {"张三", 17};
//     ofs.write((const char *)&p, sizeof(Person));
//     ofs.close();
// }

// void test02(){
//     ifstream ifs;
//     ifs.open("Person.txt", ios::in | ios::binary);
//     if(!ifs.is_open()){
//         cout << "文件打开失败" << endl;
//         return;
//     }
//     Person p;
//     ifs.read((char *)&p, sizeof(Person));
//     cout << "姓名: " << p.m_Name << " 年龄: " << p.m_Age << endl;
//     ifs.close();
// }

int main(){
//cpp核心编程(面向对象)
  //内存分区模型(代码区,全局区,栈区,堆区)
   //程序运行前
   //代码区(共享,只读)
/*****************************************************/
//    //全局区(全局变量,静态变量,常量)(程序结束后由操作系统释放)
//     //局部变量
//     int a = 10;
//     int b = 10;
//     cout << "局部变量a的地址为: " << (long long)&a << endl;
//     cout << "局部变量b的地址为: " << (long long)&b << endl;
//     //全局变量(第4行)(不在函数体中的变量)
//     cout << "全局变量g_a的地址为 " << (long long)&g_a << endl;
//     cout << "全局变量g_b的地址为 " << (long long)&g_b << endl;
//     //静态变量:在普通变量前加static,属于静态变量
//     static int s_a = 10;
//     static int s_b = 10;
//     cout << "静态变量s_a的地址为: " << (long long)&s_a << endl;
//     cout << "静态变量s_b的地址为: " << (long long)&s_b << endl;
//     //常量(字符串常量,const修饰的变量)
//     //字符串常量
//     cout << "字符串常量的地址为 " << (long long)&"hello world" << endl;
//     //const修饰的变量(const修饰的全局变量,const修饰的局部变量)
//     //const修饰的全局变量(第7行)
//     cout << "全局常量c_g_a的地址为: " << (long long)&c_g_a << endl;
//     cout << "全局常量c_g_b的地址为: " << (long long)&c_g_b << endl;
//     //const修饰的局部变量
//     const int c_l_a = 10; //c-const, g-global,l-local)
//     const int c_l_b = 10; 
//     cout << "局部常量c_l_a的地址为: " << (long long)&c_l_a << endl;
//     cout << "局部常量c_l_b的地址为: " << (long long)&c_l_b << endl;
//         //不在全局区: 局部变量,const修饰的局部变量(局部常量); 全局区: 全局变量,静态变量(static关键字),常量(字符串常量,const修饰的全局变量(全局常量))
//         //宏常量在生成exe之前就会自动替换成普通常量
/*****************************************************/
    //栈区(由编译器自动分配释放,存放函数的参数值,局部变量等)
    //(注意事项:不要返回局部变量的地址,栈区开辟的数据由编译器自动释放)(第十行)
    // int * p = func();
    // cout << *p << endl;
/*****************************************************/
    // //堆区(由程序员分配释放,若程序员不释放,程序结束时由操作系统回收)(在cpp中主要利用new在堆区开辟数据)
    // int * p = func();
    // cout << *p << endl;
    //new操作符((new 数据类型)(释放利用操作符delete)
    // //在堆区创建整型数据(第16行)
    // int * p = func();
    // cout << *p << endl; 
    // delete p; //释放内存: 指针指向的地址还在,地址指向的内存被释放了(归还给系统)
    // cout << *p << endl; 
    //在堆区利用new开辟数组
    // func();
    //拓展:堆区开辟&释放二维数组
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
  //引用(给变量起别名)(数据类型 &别名 = 原名)(本质是一个指针常量,指针指向的值可以修改,地址不可修改)
    //引用基本语法
    // int a = 10;
    // int &b = a;
    // cout << "原名a =  " << a << "\t"
    //      << "别名b =  " << b << endl;
    // b = 100;  //通过别名重新赋值
    // cout << "原名a =  " << a << "\t"
    //      << "别名b =  " << b << endl;
/*****************************************************/ 
    // //引用注意事项(必须初始化,初始化后不可改变)
    // // int &b; //错误,必须初始化
    // int a = 10;
    // int c = 20;
    // int &b = a;
    // // int &b = c; //错误: 初始化后不可改变(指针常量不可以修改地址)
    // b = c; //赋值操作,而不是更改引用
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "c = " << c << endl;
/*****************************************************/
    //引用做函数参数(函数传参时,可以利用引用的技术让形参修饰实参)(可以简化指针修改实参)
    // int a = 10;
    // int b = 20;
    // swap01(a, b); //第53行
    // cout << "值传递中a = " << a << endl;
    // cout << "值传递中b = " << b << endl; 
    // swap02(&a, &b); //第59行
    // cout << "地址传递中a = " << a << endl;
    // cout << "地址传递中b = " << b << endl; 
    // swap03(a, b); //第65行
    // cout << "引用传递中a = " << a << endl;
    // cout << "引用传递中b = " << b << endl; 
/*****************************************************/
    //引用做函数返回值(不要返回局部变量引用)(用法:函数调用作为左值)
    // int &ref1 = test01();
    // cout << "ref = " << ref << endl;  //不能返回局部变量(第71行)
    // int &ref2 = test02(); //第75行
    // cout << "ref2 = " << ref2 << endl; 
    // test02() = 1000; //如果函数的返回值是引用,这个函数调用可以作为左值
    // cout << "ref2 = " << ref2 << endl; 
/*****************************************************/
    //引用的本质(引用本质在cpp内部实现是一个指针常量)
    //cpp推荐用引用技术,因为与发放表,引用本质是指针常量,但是所有的指针操作编译器都帮我们做了
/*****************************************************/
    //常量引用(修饰形参,防止误操作)
    // int a = 10;
    // // int &ref = 10; //错误:引用必须引一块合法的内存空间
    // const int &ref = 10;  //加上const之后,编译器将代码修改 int temp = 10; const int &ref = temp;
    // // ref = 20; //加入const之后变为只读,不可以修改
    // int a = 100;
    // showValue(a);
/*****************************************************/
  //函数函数提高
    // //函数默认参数(函数的形参列表中的形参是可以有默认值的)(返回值类型 函数名 (参数 = 默认值){})
    // cout << func(10) << endl;  //第84行
    // cout << func(10, 30) << endl; //如果我们自己传入数据,就用自己的数据,如果没有,那么用默认值
    // //注意事项:1.如果某个位置已经有了默认参数,那么从这个位置往后,从左往右都必须有默认值
    // //         2.如果函数声明有默认参数,函数实现就不能有默认参数(声明和实现至多有一个有默认参数)
/*****************************************************/
    //函数占位参数(形参列表中可以有占位参数,用来做占位,调用函数时必须填补该位置)(返回值类型 函数名 (数据类型){})
    // // func(10) //错误  //第87行
    // func(10, 10);
    // //目前阶段的占位参数我们还用不到,后面课程会用到;占位参数还可以有默认参数
/*****************************************************/
    //函数重载(函数名可以相同,提高复用性)(满足条件:同一个作用域下,函数名称相同,函数参数类型不同或者个数不同或者顺序不同)
    //注意:函数的返回值不可以作为函数重载的的条件
    // func();  //第90行
    // func(10);
    // func(3.14);
    // func(10, 3.14);
    // func(3.14, 10);
/*****************************************************/
    //函数重载注意事项(引用作为重载条件,函数重载碰到函数默认参数)
    // int a = 10;
    // func(a); 
    // func(10);  //第108行
    // func2(); //第114行  //当函数重载碰到默认参数,出现二义性,报错,尽量避免这种情况
/*****************************************************/
  //类和对象(面向对象的三大特性:封装,继承和多态)
    //封装(将属性和行为作为一个整体表现生活中的事物,将属性和行为加以权限控制)
    // class 类名{访问权限: 属性/行为};
    // Circle c1;  //实例化: 通过一个类 创建一个对象的过程  //第120行  
    // c1.m_r = 10;
    // cout << "圆的周长为: " << c1.calculateZC() << endl;
    //类中的属性和行为统称为成员
    //属性 成员属性,成员变量
    //行为 成员函数,成员方法
/*****************************************************/
    //封装-访问权限(类在设计时可以把属性和行为放在不同的权限下加以控制)(public 公共权限;protected 保护权限;private 私有权限)
    //公共权限 public:          成员 类内可以访问,类外也可以访问
    //保护权限 protected:       成员 类内可以访问,类外不可以访问(继承中子类可以访问父类中的保护内容)
    //私有权限 private:         成员 类内可以访问,类外不可以访问(继承中子类不可以访问父类中的私有内容)
    // Person p1;  //第129行
    // p1.m_Name = "李四";
    // // p1.m_Car = "奔驰";          //保护权限内容,在类外访问不到
    // // p1.m_Password = 123456;     //私有权限内容,类外访问不到
    // p1.func();
/*****************************************************/
    //封装-struct和class区别(默认的访问权限不同:struct默认公共public,class默认私有private)
    // C1 c1; //第143行
    // // c1.m_A = 100; //默认私有,不可访问
    // C2 c2;
    // c2.m_A = 100;   //默认公共,可以访问
/*****************************************************/
    //封装-成员属性设置为私有(优点:1.可以自己控制读写权限;2.对于写权限,我们可以检测数据的有效性)
    // Person p1;  //第149行
    // p1.setName("张三"); //可读可写
    // cout << "姓名: " << p1.getName() << endl;
    // cout << "年龄: " << p1.getAge() << "岁" << endl; //只读
    // p1.setLover("仓井");  //只写
    // p1.setAge(1000); 
    // p1.setAge(50);
/*****************************************************/
   //对象特性
   //对象的初始化和清理
    //构造函数和析构函数
    //构造函数(类名(){}):在创建对象时为对象的成员属性赋值,构造函数时编译器自动调用,无须手动调用(构造函数进行初始化操作)
    //1.没有返回值,也不用写void; 2.函数名与类名相同; 3.可以有参数,可以发生重载; 4.只会调用一次   
    //析构函数(~类名(){}):在对象销毁前系统自动调用,执行一些清理工作(析构函数进行清理操作)
    //1.没有返回值,也不用写void; 2.函数名与类名相同,在名称前加上~; 3.不可以有参数,不可以重载; 4.只会调用一次
    // test01(); //第177行 // 在栈上的数据,test01执行完毕后释放这个对象
    // Person p;   //没有析构是因为程序还在运行
/*****************************************************/
    //构造函数的分类和调用(两种分类方式:按参数: 有参构造和无参构造;按类型: 普通构造和拷贝构造)(三种调用方式: 括号法,显示法,隐式转换法)
    //分类(第189行)
    //调用(第207行)
    // test01(); //因为声明了两个变量,每个变量都会在test01结束时调用析构,所以显示两次析构
/*****************************************************/ 
    // 拷贝构造函数调用时机(1.使用一个已创建完毕的对象来初始化一个新对象; 2.值传递的方式给函数参数传值; 3.以值方式返回局部对象)
    // test01(); //第226行
    // test02(); //第249行
    // test03(); //第255行 //由于g++编译器的返回值优化,没有拷贝过程
/*****************************************************/ 
    //构造函数的调用规则(cpp会给每个类都添加至少三个函数: 默认构造(空实现), 析构函数(空实现), 拷贝构造(值拷贝))   
    //1.如果用户定义有参构造函数,cpp不再提供默认无参构造,但是会提供默认拷贝构造
    // test01(); //第264行
    //2.如果用户定义拷贝构造函数,cpp不会再提供其它默认构造函数,依然提供拷贝构造    
    // test02(); //第288行
    //3.如果我们写了拷贝构造函数,编译器就不再提供其他普通构造函数
/*****************************************************/ 
    //深拷贝与浅拷贝(浅拷贝: 简单的赋值拷贝操作; 深拷贝: 在堆区重新申请空间,进行拷贝操作)
    // test01(); //第293行
/*****************************************************/ 
    //初始化列表(构造函数(): 属性1(值1), 属性2(值2)...{})
    // test01(); //第326行
/*****************************************************/
    //类对象作为类成员(cpp类中的成员可以是另一个类的对象,我们称之为对象成员)
    // test01(); //第349行
/*****************************************************/
    //静态成员(关键词static)(静态成员变量,静态成员函数)
    //静态成员变量: 所有对象共享同一份数据;在编译阶段分配内存;类内声明,类外初始化
    // test01(); //第376行
    // test02();
    //静态成员函数: 所有对象共享同一个函数; 静态成员函数只能访问静态成员变量
    // test01(); //第401行
/*****************************************************/
   //cpp对象模型和this指针
    //成员变量和成员函数分开存储(在cpp中,类内的成员变量和成员函数分开存储,只有非静态成员变量才属于类的对象上)
    // test01(); //第425行
/*****************************************************/
    //this指针概念(this指针指向被调用的成员函数所属的对象)(隐含在每一个非静态成员函数内的一种指针(即不需要调用,可以直接使用))
    //(用途:1. 当形参和成员变量同名时,可用this指针来区分;2. 在类的非静态成员函数返回对象本身,可用return *this)
    // test01(); //第455行
    // test02();
/*****************************************************/    
    //空指针访问成员函数(cpp中空指针可用调用成员函数)
    // test01();//第477行
/*****************************************************/ 
    //const修饰成员函数(常函数: 成员函数后加const后;不可以修改成员属性,成员属性声明时加关键字mutable后,在常函数中依然可以修改)
    //(常对象:声明对象前加const;常对象只能调用常函数)
    // test01();//第496行
    // test02();
/*****************************************************/
    //友元(让一个函数或者类访问另一个类中私有成员)
    //1.全局函数做友元
    // test01();//第525行
    //2.类做友元
    // test02();
    //3.成员函数做友元
    // test03();
/*****************************************************/
    //运算符重载
    // //加号运算符重载
    // //1.成员函数重载+号(第593行)
    // test01();
    // //2.全局函数重载+号
    // test01();
    //对于内置的数据类型的表达式的运算符是不可能改变的
    //不要滥用运算符重载
/*****************************************************/
    //左移运算符重载("<<")(可以自定义输出类型)
    //通常用全局函数来重载左移运算符
    // test01(); //第635行
/*****************************************************/
    //递增运算符重载(通过重载递增运算符,实现自己的整型数据)
    // //前置++(返回类型为引用)
    // test01();//第650行
    // //后置++(返回类型为值)
    // test02();
/*****************************************************/
    //赋值运算符重载
    //cpp编译器至少给一个类添加四个函数
    //1.默认构造函数(无参,函数体为空)
    //2.默认析构函数(无参,函数体为空)
    //3.默认拷贝构造函数,对属性进行值拷贝
    //4.默认运算符operator=对属性进行值拷贝
    // test01();//第685行
/*****************************************************/
    //关系运算符重载(重载关系运算符,可以让两个自定义类型对象进行对比操作)(>, <, =, !=)
    // test01();//第710行
/*****************************************************/
    //函数调用运算符重载
    //函数调用运算符()也可以重载,由于重载后使用的方式非常像函数的调用,因此称为仿函数,仿函数没有固定写法,非常灵活
    // test01();//第741行
    // test02();
    // test03();
/*****************************************************/
  //继承
    //继承的基本用法(第773行)
    //继承的好处:减少重复代码
    //语法: class 子类: 继承方式 父类
    //子类也称为派生类;父类也称为基类
    //派生类中的成员,包含两大部分: 一类是从基类继承过来的,一类是自己增加的成员.从基类继承过来的表现其共性,而新增的成员体现其个性.
    // test01();
    // test02();
    // test03();
/*****************************************************/    
    //继承方式(语法: class 子类: 继承方式 父类)(第825行)
    //1.公共继承(父类公共变为子类公共,父类保护变为子类保护,父类私有子类无法访问)(第833行)
    //2.保护继承(父类公共与保护变为子类保护,父类私有子类无法访问)(第847行)
    //3.私有继承(父类公共与保护变为子类私有,父类私有子类不可访问)(第861行)
/*****************************************************/  
    //继承中的对象模型
    // test01();//第883行
    //利用开发人员命令提示工具查看对象模型
    //跳转盘符 
    //跳转文件路径 cd 具体路径下
    //查看命名
    //c1 / d1 reportSingleClassLayout类名 文件名
/*****************************************************/  
    //继承中构造和析构顺序(子类继承父类后,当创建子类对象,也会调用父类构造函数)
    // test01(); //第900行
/*****************************************************/
    //继承同名成员处理方式
    //访问子类同名成员:直接访问即可
    //访问父类同名成员:需要加作用域
    // test01(); //第922行
    // test02();
/*****************************************************/
    //继承同名静态成员处理方式
    //静态成员和非静态成员出现同名,处理方式一致
    //访问子类同名成员 直接访问即可
    //访问父类同名成员 需要加作用域    
    // test01(); //第959行
    // test02();
/*****************************************************/
    //多继承语法(cpp允许一个类继承多个类)
    //语法: class 子类 : 继承方式 父类1 , 继承方式 父类2, ...
    //多继承可能引发父类中有同名成员出现,需要加作用域区分(cpp实际开发中不建议用多继承)
    // test01(); //第1001行
/*****************************************************/
    //菱形继承(两个派生类继承同一个基类,又有某个类同时继承两个派生类,此类继承被称为菱形继承或者钻石继承)
    // test01(); //第1030行
/*****************************************************/
  //多态(分为静态多态: 函数重载,运算符重载 与 动态多态: 派生类与虚函数实现运行时多态)
    //区别:静态多态的函数地址早绑定-编译阶段确定函数地址; 动态多态的函数地址晚绑定-运行时确定函数地址
    //多态多态满足条件:1.有继承关系; 2.子类重写父类的虚函数(重写:函数返回值类型,函数名,参数列表完全相同)
    //多态多态的使用: 父类指针或者引用指向子类的对象
    // test01(); //第1049行
/*****************************************************/
    //多态的原理剖析
    //父类中的虚函数指针指向父类中的虚函数表(记录父类中的函数地址),当父类的虚函数指针指向子类时
    //子类的虚函数表会覆盖父类的虚函数表
/*****************************************************/
    //纯虚函数与抽象类(virtual 返回值类型 函数名 (参数列表) = 0;)(当类中有了纯虚函数,这个类也称为抽象类)
    //抽象类特点:无实例化对象, 子类必须重写抽象类中的纯虚函数,否则也属于抽象类
    // test02(); //第1078行
/*****************************************************/
    //虚析构与纯虚析构(可以解决父类指针释放子类对象; 都需要具体的函数实现)
    //区别: 如果是纯虚析构, 该类属于抽象类, 无法实例化对象
    //虚构: virtual ~类名(){}
    //纯虚析构: virtual ~类名() = 0 
    //          类名::~类名(){}
    // test01(); //第1096行
/*****************************************************/
  //文件操作(通过文件将数据持久化)(需包含头文件<fstream>)(操作文件三大类:1.ofstream:写操作;2.ifstream:读操作;3.fstream:读写操作)
   //文本文件(文件以文本的ASCII码形式存储在计算机中)
    //写文件步骤:
    //1.包含头文件;(#include<fstream>)
    //2.创建流对象;(ofstream ofs;)
    //3.打开文件;(ofs.open("文件路径", 打开方式);)
    //4.写数据;(ofs << "写入的数据";)
    //5.关闭文件;(ofs.close();)
    //文件打开方式: ios::in(为读文件而打开文件); ios::out(为写文件而打开文件); ios::ate(初始位置:文件尾); ios::app(追加文件写文件); 
    //             ios::trunc(如果文件存在先删除,再创建); ios::binary(二进制方式)
    //注意: 文件打开方式可以配合使用,利用 | 操作符(如 ios::binary | ios::out)
    // test01(); //第1136行
/*****************************************************/
    //读文件步骤:
    //1.包含头文件;(#include<fstream>)
    //2.创建流对象(ifstream ifs;)
    //3.打开文件并判断文件是否打开成功(ifs.open("文件路径","打开方式");)
    //4.读数据;(四种方式读取)
    //5.关闭文件(ifs.close();)
    // test02(); //第1145行
/*****************************************************/
   //二进制文件(指定打开方式为ios::binary)
    //写函数
    //函数原型: ostream& write (const char * buffer, int len)
    //字符指针buffer指向内存中的一段存储空间,len是读写的字节数
    // test01(); //第1175行
/*****************************************************/
    //读文件
    //函数原型:ifstream read(char *buffer, int len)
    //字符指针buffer指向内存中的一段存储空间,len是读写的字节数
    // test02(); //第1188行
    
    system("pause");

    return 0;
}