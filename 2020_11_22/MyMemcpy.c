#include <stdio.h>
#include <assert.h>

/*��Ŀ��ģ��ʵ�ֿ⺯����ϰ�� -- memcpy
* ʱ�䣺2020_11_22
* ģ��ʵ�ֿ⺯��
*/

/*memcpy���ڴ濽���������Ļ�����λ���ֽڣ��������޹�
* ��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ��
* ������'\0'Ҳ����ͣ����
* �������ڴ��ص�������
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

	//�����һ�£�VS2019�����Զ��Ż����ڴ��ص�����
	memcpy(buf + 1, buf, strlen(buf) + 1);
	//MyMemcpy(buf + 1, buf, strlen(buf) + 1);
	printf("%s\n", buf);

	return 0;
}
