#include<stdio.h>
#include<string.h>

int string_len = 1;
static char name[256];

void func1(int string_len)
{
	string_len++;
	printf("string_len is %d\n",string_len);
}

int main() 
{
	char test_buf_overflow[16];
	memset(test_buf_overflow, 0, 20);

	int a = 1;
	if (a == 2) {

	}
	else {
		printf("this is test with empty block.\n");
	}

	func1(string_len);
	int test_local_e = 5;

	printf("hello world\n");
	return 0;
}
