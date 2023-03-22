#include<stdio.h>

#define N 6	//定义数组长度
void main() {
	int Stu[N], i, j, Temp = 0;
	for (i = 0; i < 6; i++) {
		scanf_s("%d", &Stu[i]);	//存入6个同学的成绩
	}
	for (i = 5; i > 0; i--) {	//外层循环定义各个高分数沉底
		for (j = 0; j < i; j++) {	//内层嵌套定义分数高沉底
			if (Stu[j] > Stu[j + 1]) {	//冒泡法排序
				Temp = Stu[j];
				Stu[j] = Stu[j + 1];
				Stu[j + 1] = Temp;
			}
		}
	}	
	for (i = 0; i < 6; i++) {
		printf(" %d ", Stu[i]);
	}
}