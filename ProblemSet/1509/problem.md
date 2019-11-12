# 字符统计
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
给出一篇英文文章，含大小写字母、数字、标点符号和空白符等，统计其中各个英文字母出现的次数和各类字符出现的次数。
统计各类字符时，应使用头文件<ctype.h>中的字符分类函数。这里用到以下5个函数：
islower(c)	c是否小写字母：'a'～'z'；
isupper(c)	c是否大写字母：'A'～'Z'；
isdigit(c)	c是否数字：'0'～'9'；
isspace(c)	c是否空白字符：包括空格（' '）、换页符（'\f'）、换行符（'\n'）、回车符（'\r'）、水平制表符（'\t'）和垂直制表符（'\v'）；
ispunct(c)	c是否标点符号：标点符号包括除字母、数字和空白符之外的所有可打印字符，也就是说输入的所有字符减去以上4类字符数正好是标点符号数。（仅限C99）
注意，在C89中（如VC6.0），ispunct()函数的定义与C99（如本地的codeblocks和OJ后台的gcc）不同。在C89中，ispunct(c)在c为除空格符和字母、数字之外的所有可打印字符时都返回真。所以，当你使用VC6.0编译器时，使用该函数本地计算的结果可能不对，但是不影响提交后的结果正确，如果你的程序没有其他错误。


## Input
输入为一篇英文文章，最少有一个字符，至EOF结束。


## Output
输出各类字符的出现次数和每个字母的出现次数。按顺序，每行输出依次为：所有字符数、小写字母数、大写字母数、数字字符数、空白符数、标点符号数，然后是从A～Z所有字母出现的次数。每个字母的出现次数是大小写合并统计的。
输出格式见sample。


## Sample Input
```
SDUSTOJ Online Judge FAQ
Q:What is the compiler the judge is using and what are the compiler options?
A:The online judge system is running on Debian Linux. We are using GNU GCC/G++ for C/C++ compile, Free Pascal for pascal compile and sun-java-jdk1.6 for Java. The compile options are:
C:		gcc Main.c -o Main -O2 -Wall -lm --static -std=c99 -DONLINE_JUDGE
C++:	g++ Main.cc -o Main -O2 -Wall -lm --static -DONLINE_JUDGE
Pascal:	fpc Main.pas -oMain -O1 -Co -Cr -Ct -Ci
Java:	javac -J-Xms32m -J-Xmx256m Main.java 
*Java has 2 more seconds and 512M more memory when running and judging.
Our compiler software version:
gcc (Ubuntu/Linaro 4.4.4-14ubuntu5) 4.4.5
glibc 2.3.6
Free Pascal Compiler version 2.4.0-2 [2010/03/06] for i386
java version "1.6.0_22"

Q:Where is the input and the output?
A:Your program shall read input from stdin('Standard Input') and write output to stdout('Standard Output').For example,you can use 'scanf' in C or 'cin' in C++ to read from stdin,and use 'printf' in C or 'cout' in C++ to write to stdout.
User programs are not allowed to open and read from/write to files, you will get a "Runtime Error" if you try to do so.

Here is a sample solution for problem 1000 using C++:
#include 
using namespace std;
int main(){
    int a,b;
    while(cin >> a >> b)
        cout << a+b << endl;
	return 0;
}

Here is a sample solution for problem 1000 using C:
#include 
int main(){
    int a,b;
    while(scanf("%d %d",&a, &b) != EOF)
        printf("%d\n",a+b);
	return 0;
}

Here is a sample solution for problem 1000 using PASCAL:
program p1001(Input,Output); 
var 
  a,b:Integer; 
begin 
   while not eof(Input) do 
     begin 
       Readln(a,b); 
       Writeln(a+b); 
     end; 
end.

Here is a sample solution for problem 1000 using Java:
import java.util.*;
public class Main{
	public static void main(String args[]){
		Scanner cin = new Scanner(System.in);
		int a, b;
		while (cin.hasNext()){
			a = cin.nextInt(); b = cin.nextInt();
			System.out.println(a + b);
		}
	}
}
```
## Sample Output
```
All Characters : 2020
Lowers : 1173
Uppers : 135
Digits : 70
Spaces : 405
Puncts : 237
A : 113
B : 24
C : 62
D : 47
E : 108
F : 25
G : 32
H : 23
I : 111
J : 19
K : 1
L : 59
M : 51
N : 121
O : 97
P : 46
Q : 3
R : 83
S : 78
T : 92
U : 63
V : 14
W : 19
X : 8
Y : 9
Z : 0

```

## HINT
静下心来想想，你能用数组做些什么？来简化程序的编写。否则，这么多种类需要统计，只是定义单字母的变量还不够用呢。那就太麻烦了！
Sample的结果跟你的程序本地运行结果不一致，是因为数据中有的行字符太多没显示全，并且文中有很多对齐的地方使用的是制表符'\t'，而不是空格，所以，你只能依赖自己构造测试数据的能力了。
