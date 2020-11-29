/*题目：通讯录（变长版本）多文件
* 时间：2020_11_29
* 通讯录
*/

#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

#define SIZE 128
#define NUM 10
#define INC_SIZE 5


#pragma warning(disable:4996)

//姓名、性别、年龄、电话、住址
typedef struct person {
	char name[SIZE / 4];
	char sex;
	int age;
	char telphone[SIZE / 4];
	char address[SIZE];
}person_t;

typedef struct contact {
	int cap;
	int size;
	person_t persons[0];
}contact_t;

void Menu();
contact_t* InitContact();
void AddPerson(contact_t** ct);
void ShowContact(contact_t* ct);
void DelPerson(contact_t* ct);

void SaveContact(contact_t* ct);

#endif