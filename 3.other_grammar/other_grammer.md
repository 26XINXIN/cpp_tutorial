# 字符串&数组&指针和引用&基本数据结构

## 字符串

日常编程中会遇到很多字符串操作。一般来讲会有两种字符串表示方式：1、C/C++中原生的`char[]`类型；2、C++中新增的`string`类型。

### `char[]`/`char*`

这是C原生的类型，本质上是一个字符数组（数组的概念稍后提及），因此可以兼容所有的数组操作。C++于C兼容，因此也继承了`char[]`类型。

`char*`和`char[]`本质上相同，但是定义方式不一样。`char*`为字符指针类型，通过某些方法可以表示字符串，具体方法会在指针的地方提及。

这里只介绍C中自带的若干常用的字符串操作函数。

```cpp
/* 字符操作 */
#include <ctype.h> // 字符相关函数都包含在这个模块里面

int isalnum(charactor); // 看字符是否数字或字母
int isalpha(charactor); // 看字符是否字母
int islower(charactor); // 看字符是否是小写字母
int isupper(charactor); // 看字符是否是是大写字母
int isdigit(charactor); // 看字符是否是数字
int iscntrl(charactor); // 看字符是否是控制字符
int isblank(charactor); // 看字符是否是空格
int tolower(charactor); // 把字符转换为小写
int toupper(charactor); // 把字符转换为大写
```

```cpp
/* 字符串和数字的相互转换 */
#include <stdlib.h>

int atoi(string); // atol, atoll
int atof(string);
```

```cpp
/* 字符串操作 */
#include <string.h>

char* strcpy(dest, source); // 复制source的字符串到dest，并返回一份dest
char* strcat(str1, str2); // 把str2的内容加入到str1的字符串的后面

/* 字符串查询 */
unsigned strlen(str); // 查询字符串的长度
int strcmp(str1, str2); // （非常常用！！）比较两个字符串的先后顺序（字典顺序）。返回值<0相当于str1<str2；=0相当于str1=str2；>0相当于str1>str2；
char* strchr(str1, char); // 查找字符串中某字符的位置
char* strstr(str, substr); // 查找字符串中字串的位置
```

### `string`

`string`类型是C++特有的类型。是C++引入面向对象（Object-Oriented）特性后原生的字符串类。其中包含有字符串本身以及相关的字符串操作。

个人习惯上，在轻度编程时倾向于用`string`类型而不是`char*`类型，因为封装后的字符串更加好用。

基本操作

```cpp
#include <string> // 注意和string.h作区分

int main() {
    string str;
    
    /* 字符串赋值 */
    str = "123456";
    str.assign("123456");

    /* 字符串数据读取 */
    str[0]; // '1'
    str.front(); // '1'
    str.back(); // '6'
    str.data(); // (const char*)"123345"
    char * c_style_string = str.c_str();
    
    /* 迭代器 略 */
    
    /* 容量访问 */
    str.empty(); // 看str是否空
    str.size(); // 作用和strlen一样

    /* 字符串操作 */
    str.clear(); // 清空字符串
    str.insert(0, "1"); // 插入字符
    ...
}
```

更多操作等OOP之后再涉及。

## 数组

声明方式

```cpp
int number_list[10];
int number_list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
char str[] = "hello world!";
char str[10];
strcpy(str, "hello world!");
```

数组操作

```cpp
number_list[i] // 访问某个元素
for (int i = 0; i < strlen(str); i++){ // 遍历数组元素
    cout << str[i] << endl;
}

for (int i = 0; i < 10; i++){ // 数组赋值
    number_list[i] = i;
}
```

数组基本上就是用来保存一组相同类型的数据用的，支持读写。日常编程中非常常用。

## 指针和引用

注意：引用是C++的概念，在C中是没有指针的。

指针相当于是数据的内存地址，指向数据。

**声明**

```cpp
int a = 100;
int * p = &a; // p 指针指向a，用&获取数据的内存地址

char str[] = "hello world!";
char * p_str = str; // p_str指针指向str
```

**指针的访问**

本质上指针是储存着数据对应的内存地址，因此直接访问指针的值会导致得到内存地址而不是数据本身。

```cpp
int a = 100;
int * p = &a;
cout << p << endl; // 输出某个内存地址 
cout << *p << endl; // 输出p对应的地址中的值
```

在上例中，指针和数据其实是同一块内存地址的不同表现方式，因此其中之一的变化会附带着与这块内存地址相关的所有变量引起变化。

```cpp
int a = 100;
int *pa = &a;
a = 200;
cout << *pa << endl; // 会输出200，因为随同a的值一起变化
*pa++;
cout << a << endl; // 会输出201，因为随同pa对应的数据的值一起变化
```

赋值语句不等同于指向同一块内存地址，而是把原来地址的值拷贝一份到新的地址，因此因此值不会同时发生改变。

```cpp
int a = 100;
int b = a; // 这里只是把a的值复制到b对应的地址，b与a是不同的内存地址
b++;
printf("a=%d, b=%d", a, b); // 这里会输出“a=100, b=101”，值不会同时变化
```

多个指针可以同时指向同一个地址（当然可以了，指针相当于保存的是内存地址，保存多少份内存地址都是可以的）。由此看出其实指针可以相当于某一个内存地址的别名（alias），他们指向同一个地址空间，但是叫的变量名不一样。因此C++中引入了引用的概念。

```cpp
int a = 100;
int &b = a; // b是a的别名，叫做引用，本质上是通过指针实现的
a++;
printf("a=%d, b=%d", a, b); // 这里会输出“a=101, b=101”
b++;
printf("a=%d, b=%d", a, b); // 这里会输出“a=102, b=102”
```

总的来讲指针和别名（引用）是一样的，引用的形式更优雅一点。个人习惯：如果不是非要操作内存地址，一般会用引用来代替指针。

**指针的运用**

* 传参。可以用指针代替一块大的数据结构，在函数传参的时候可以避免重新构建大的数据结构。
* 参数回传。指针可以传给函数，在函数内的操作可以得到保留并在函数外层访问。
* share数据。指针和引用相当于给同一块内存地址起了不同的名字，因此可以对同一块数据进行编辑和访问。在别的地方的操作会保留下来并会在别的地方访问到。

## 指针和数组

回忆：上面提到`char[]`和`char*`是等价的。原因是在C/C++的具体编译器实现中，数组是内存中一串连续的内存空间，编译器采用数组中第一个数据的地址表示一个数组。

当声明一个数组变量的时候，编译器会先生成一个数据类型指针，并向系统申请一定长度的内存（malloc），即下面两种都会生成一个长度为4的数组：

```cpp
// 第一种方式
int list[];
// 第二种方式
int * list;
list = malloc(4 * sizeof(int)); // 向系统申请4个int长度的内存
```

指针同样可以使用自加或自减运算。

```cpp
char * str = malloc(10 * sizeof(char));
strcpy(str, "hello world"); // 此时str赋值为“hello world”
str++;
cout << str << endl; // 输出“ello world”
```

## 作业

**字符串**

* 实现字符串分割功能：给定一个字符串和某个字符，依据这个字符进行字符串分割。例如：

```cpp
// 函数声明
// char ** split(char * str, char splitter);

words = split("hello world", '');
// 将会得到以下数组：{"hello", "world"}，即字符串中的每个词
```

这个功能经常用于英文文本的分词。

* 子串匹配：给定一个字符串S和字符串T，函数返回T第一次在S中出现的位置的指针，如果没有S中不包含T，返回NULL

```cpp
// 函数声明
// char * find_sub_str(char * S, char * T);

char _S[] = "A quick fox jumps over a lazy dog.";
char _T[] = "fox";
char * S = _S;
char * T = _T;

fox = find_sub_str(S, T); // fox指向S中fox的开头位置。
```

**指针和引用，包括一些基本数据结构**

* 实现一个链表：链表（linked list）是一种常用的数据结构，实现其基本功能：增删改查，返回长度。
* 实现一个队列（queue）：队列是先进先出的一种数据结构，实现：加入元素，取出元素，访问第一个元素，判断是否为空，返回长度。
* 实现一个栈（stack）：栈是一个先进后出的数据结构。

**一些基本的综合练习**

* 去除数组中重复的元素
* 把一个数字反过来写

```
123 -> 321
-123 -> -321
120 -> 21
```

* 实现字符串和数字
* merge sort简单版：给定两个从小到大排列好的数组，组合这两个数组，要求组合后的数组仍然是从小到大排序好的。
* 选择排序算法
* 冒泡排序算法
* 给定一个数组和一个数，求数组中的数相加可以得到给定数的所有组合情况。
