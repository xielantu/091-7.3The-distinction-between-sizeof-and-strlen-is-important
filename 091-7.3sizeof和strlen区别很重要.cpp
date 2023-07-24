// 091-7.3sizeof和strlen区别很重要.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <string.h>
void test()
{
	
}

int main()
{
	char cdata[128] = "hello";//'\0'为结束标志
	printf("sizeof:			 %d\n", sizeof(cdata));
	printf("sizeof:			 %d\n", strlen(cdata));


	void (*ptest)();
	ptest = test;
	const char* p = "hello";
	//p是一个char* ，sizof来计算的时候，得出是计算机用多少字节来表示一个地址
	printf("sizeof:p		% d\t\n", sizeof(p));
	printf("sizeof:char*		% d\t\n", sizeof(char*));
	printf("sizeof:int*		% d\t\n", sizeof(int*));
	printf("sizeof:char		% d\t\n", sizeof(char));
	printf("sizeof:ptest		% d\t\n", sizeof(ptest));
	printf("strlen:			% d\t\n", sizeof(p));


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
