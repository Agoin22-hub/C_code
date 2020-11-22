#include <stdio.h>
#include <assert.h>

/*��Ŀ��ģ��ʵ�ֿ⺯����ϰ�� -- memmove
* ʱ�䣺2020_11_22
* ģ��ʵ�ֿ⺯��
*/

/*memmoveҲ���ڴ濽���������Ļ�����λ���ֽڣ��������޹�
* ��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ��
* ������'\0'Ҳ����ͣ����
* dst�ĳ��ȴ��ڵ���src
* �����ڴ��ص������⣬ֻ�е�dst�ص���src�ϵ�ʱ�����ִ�������������������󿽱�����
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
	//���һ��
	memmove(buf + 1, buf, strlen(buf) + 1);
	//MyMemove(buf + 1, buf, strlen(buf) + 1);
	printf("%s\n", buf);

	return 0;
}