#include<stdio.h>

#define N 6	//�������鳤��
void main() {
	int Stu[N], i, j, Temp = 0;
	for (i = 0; i < 6; i++) {
		scanf_s("%d", &Stu[i]);	//����6��ͬѧ�ĳɼ�
	}
	for (i = 5; i > 0; i--) {	//���ѭ����������߷�������
		for (j = 0; j < i; j++) {	//�ڲ�Ƕ�׶�������߳���
			if (Stu[j] > Stu[j + 1]) {	//ð�ݷ�����
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