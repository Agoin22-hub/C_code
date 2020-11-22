#include <stdio.h>
#include <assert.h>

/*题目：模拟实现库函数练习五 -- memcpy
* 时间：2020_11_22
* 模拟实现库函数
*/

/*memcpy是内存拷贝，拷贝的基本单位是字节，与类型无关
* 从source的位置开始向后复制num个字节的数据到destination的内存位置
* 它遇见'\0'也不会停下来
* 不考虑内存重叠的问题
*/

struct Stu {
	char name[32];
	int age;
};

void* MyMemcpy(void* dst, const void* src, int num)
{
	assert(dst);
	assert(src);

	char* _dst = (char*)dst;
	const char* _src = (const char*)src;

	while (num) {
		*_dst = *_src;
		_dst++;
		_src++;
		num--;
	}
	return dst;
}

int main()
{

	struct Stu src = { "tom", 21 };
	struct Stu dst;
	MyMemcpy(&dst, &src, sizeof(src));
	printf("name:%s, age:%d\n", dst.name, dst.age);


	char buf[16] = "abcd1234";

	//结果不一致，VS2019中是自动优化了内存重叠问题
	memcpy(buf + 1, buf, strlen(buf) + 1);
	//MyMemcpy(buf + 1, buf, strlen(buf) + 1);
	printf("%s\n", buf);

	return 0;
}
