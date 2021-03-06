## 本节大纲

- 控制流的出现原因和作用
  - 帮助我们来实现更复杂的执行逻辑

- 表达式、语句和语句块

  - 语句：以分号结束的一条代码
  - 语句块：花括号包围的多条语句
  - 表达式：有值，无分号；由操作数和操作符组成

- 循环结构-帮助我们解决要重复执行的事情

  - while
  - for

- 选择结构

  - if else

  - else if

    

## 1.4 控制流

### 1 循环结构

#### 1.1 while

##### 形式

```c++
while (用来判断是否为真的表达式) //表达式的值为0的时候，不执行，否则执行
    执行语句（语句或者语句块）
```

##### 过程

1. 判断表达式是否为真，如果为真则跳到2；如果为假则跳出while循环
2. 执行语句，跳到1

#### 1.2 for

##### 形式

```c++
for (初始化表达式; 判断表达式; 执行表达式)
    执行语句（语句或者语句块）
```

##### 过程

1. 执行初始化表达式
2. 对判断表达式进行判断，如果为真则跳到3，如果为假则跳出for循环
3. 执行语句，跳到4
4. 执行表达式，重新跳到2：判断表达式

while：表达一种“**当**某某成立的时候就会执行”

for：强调**遍历**

### 2 选择结构

#### 2.1 if-else if-else

##### 形式

```c++
if (判断表达式1)
{
    执行语句1
}
else if (判断表达式2)
{
    执行语句2
}
else if (判断表达式3)
{
    执行语句3
}
else
{
    执行语句4
}
```

##### 过程

从上到下判断if和else if中哪一个判断表达式为真，就执行其对应的执行语句；如果if和所有的else if中判断表达式都为假，那就执行else对应的执行语句

- if 是必需且只能有1个
- else if非必需，且可以有多个
- else 非必需，但最多只能有1个

