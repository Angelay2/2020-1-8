#include <stdio.h>
#include <Windows.h>

// ��ά����
//void Print(int n){
//	int data[30][30] = { 1 };// ��һ��Ԫ��Ϊ1 ����ȫΪ0
//
//	int i, j;
//	// ������һ��, ֱ�Ӵӵڶ���Ԫ�ؿ�ʼ
//	for (i = 1; i < n; i++){
//		data[i][0] = 1;// ��һ�м���һ��Ԫ����1, j�����i��λ��
//		for (j = 1; j <= i; j++){
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1];
//			// ��������+����
//		}
//	}
//	for (i = 0; i < n; i++){
//		for (j = 0; j <= i; j++){
//			printf("%d ", data[i][j]);
//		}
//		putchar('\n');
//	}
//}


// һά����
// Ҫĳ��ĳ��ʱ ��ʵ����Ҫǰһ��,��ӡÿһ��Ԫ��printArray
// printArray (int* arr,int n)����������˭ �೤���ܴ�ӡ����
void printArray(int* arr, int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

void Print2(int n){
	int data[30] = { 1 };//��һ��λ��
	// �Ӻ�����ǰ��
	int i, j;
	printf("1\n");
	for (i = 1; i < n; i++){
		for (j = i; j > 0; j--){
			// ���� + ����
			data[j] += data[j - 1];
		}
		// ��һ��, ��һ��
		printArray(data, i + 1);// δ������һ�е�1,�ӵڶ��п�ʼ 
		// i = 1, ��ʾ��Ϊ�ڶ���, i + 1��ʾ�ڶ��д�ӡ����Ԫ��
	}
}
int main1(){

	//Print(10);// ��ӡ10��
	Print2(10);
	system("pause");
	return 0;
}

int main(){
	int* pi = (int*)malloc(6 * sizeof(int));
	pi[0] = 4;
	pi[4] = 8;
	pi[5] = 9;

	printArray(pi, 6);
	free(pi);
	printArray(pi, 6);
	// free���Ὣָ����Ϊ��

	system("pause");
	return 0;
}