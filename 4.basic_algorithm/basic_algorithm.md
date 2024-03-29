# 算法基本知识

## 时间/空间复杂度

时间/空间复杂度是用来描述算法效率的基本指标。

在很多情况下，我们的计算资源（计算速度/内存空间等）都是有限的，我们希望一个算法不仅能够解决具体问题，并且还能运算得非常快，占用非常少的内存空间。时间/空间复杂度就是用来量化算法的效率的。

### 时间复杂度

我们对于很多算法，都会考虑时间复杂度（相对而言内存占用在小型程序中考虑得比较少）

例子：排序算法

| 排序算法 | 平局复杂度 | 最差情况 | 最好情况 |
| :------ | :------- | :-----  | :----- |
| 插入排序 | O(n^2)   | O(n^2)  | O(n)   |
| 冒泡排序 | O(n^2)   | O(n^2)  | O(n)   |
| 快速排序 | O(nlogn) | O(n^2)  | O(nlogn) |
| 选择排序 | O(n^2)   | O(n^2)  | O(n^2) |
| 堆排序  | O(nlogn) | O(nlogn) | O(nlogn) |
| 归并排序 | O(nlogn) | O(nlogn) | O(nlogn) |


### 空间复杂度

同理，我们可以根据空间占用的大小来计算算法的空间复杂度

| 排序算法 | 空间复杂度 |
| :------ | :------- |
| 插入排序 | O(1) |
| 冒泡排序 | O(1) |
| 快速排序 | O(nlogn) |
| 选择排序 | O(1) |
| 堆排序  | O(1) |
| 归并排序 | O(n) |

## 递归（divide and conquer）

递归是编程当中一个重要思想，很多复杂算法都能通过递归相当简单地实现。

递归的基本思想是：把一个大规模的问题分解为若干个小规模的问题，对小规模问题求得的解可以通过一定方式组合而得到大规模问题的答案。

递归的两个基本部分：起始部分和归纳部分。

例如：斐波那契数列。快速排序算法

## \*基础数据结构

数据结构可以理解为数据的储存形式。通过一定方式组合的数据能够提供不同效率的访问速度和修改速度（复杂度问题）。通过研究不同的数据组织方式（数据结构）能够让代码更加高效地运行。

广泛运用的数据结构包括：数组（array/vector），链表（linked list），队列（queue），栈（stack），树（tree），图（graph）

当然还有很多其他的数据结构，例如表示矩阵的十字链表等。

### 数组

数组是把元素保存在线性内存空间的结构，它适合应用于高速的频繁的查询需求，但是进行元素增删操作会比较麻烦。

```cpp
#include <vector>

vector<int> v = {1, 2, 3, 4};
v[2]; // 3
v.insert(0, 0); // {0, 1, 2, 3, 4, 5}
v.erase(2); // {0, 1, 3, 4, 5}
```

### 链表

链表是把每个元素作为一个独立单元，通过指针串起来的一串数据。它适合频繁地修改数据，但是访问会比较缓慢。

```cpp
#include <list>

list<int> l;
l.push_back(0);
l.push_back(2);
l.push_back(3); // 0 -> 2 -> 3
l.insert(1, 1); // 0 -> 1 -> 2 -> 3
l.erase(2); // 0 -> 1 -> 3 

l[1]; // not allowed!!
```

### 队列

队列是先进先出的数据结构。它适合给待处理的数据进行排队，广泛运用于多线程编程中。

```cpp
#include <queue>

queue<int> q;
q.push(1);
q.push(2);
q.push(3); // (front) -> 1 -> 2 -> 3 -> (back)
q.front(); // 1
q.back(); // 3

q[1]; // not allowed!
q.insert(1, 8); // not allowed!

q.pop(); // 1, (front) -> 2 -> 3 -> (back)
```

### 栈

栈是先进后出的数据机构。它常用于各种算法当中。

可以理解为只有三种方法：push，pop，top

### 树

树就是一棵树。树的子树同时也是一棵树。

树广泛运用于网络中。树也有很多算法和衍生结构。应该熟练掌握树的遍历算法。

### 图

图在某种程度上是树的扩展，在图上面也有很多算法。常用在很多实际问题当中，例如表示车流、路网、网络结构等。

## 作业

### 时间复杂度

* 试列出数组、链表做insert/remove/get的时间复杂度
* 子串匹配算法

### 递归

* 求斐波那契数列
* 写出快速排序代码：可以分别用栈/递归来实现
* 排列：1到n的所有排列
* __计算器__
* __爬楼梯问题__
* __汉诺塔__
* __N皇后问题__
* KMP算法