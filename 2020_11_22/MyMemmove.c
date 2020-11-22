#include <stdio.h>
#include <assert.h>

/*题目：模拟实现库函数练习五 -- memmove
* 时间：2020_11_22
* 模拟实现库函数
*/

/*memmove也是内存拷贝，拷贝的基本单位是字节，与类型无关
* 从source的位置开始向后复制num个字节的数据到destination的内存位置
* 它遇见'\0'也不会停下来
* dst的长度大于等于src
* 考虑内存重叠的问题，只有当dst重叠在src上的时候会出现错误，则这种情况从右向左拷贝即可
* dst > src && dst < src + num
*/

void* my_memmove(void* dst, const void* src, int num)
{
	assert(dst);
	assert(src);

	char* _dst = (char*)dst;
	const char* _src = (const char*)src;

	if (_dst > _src && _dst < _src + num) {
		//right -> left
		_dst = _dst + num - 1;
		_src = _src + num - 1;

		while (num) {
			*_dst = *_src;
			_dst--;
			_src--;
			num--;
		}
	}
	else {
		//left -> right
		while (num) {
			*_dst = *_src;
			_dst++;
			_src++;
			num--;
		}
	}

	return dst;
}

int main()
{

	const char* src = "abcd1234";
	char dst[16];
	memmove(dst, src, strlen(src) + 1);
	printf("%s\n", dst);


	char buf[16] = "abcd1234";
	//结果一致
	memmove(buf + 1, buf, strlen(buf) + 1);
	//MyMemove(buf + 1, buf, strlen(buf) + 1);
	printf("%s\n", buf);

	return 0;
}