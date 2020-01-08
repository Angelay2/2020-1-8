#include <stdio.h>
#include <Windows.h>

// 二维数组
//void Print(int n){
//	int data[30][30] = { 1 };// 第一个元素为1 其他全为0
//
//	int i, j;
//	// 跳过第一行, 直接从第二个元素开始
//	for (i = 1; i < n; i++){
//		data[i][0] = 1;// 第一行即第一个元素置1, j必须填到i的位置
//		for (j = 1; j <= i; j++){
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1];
//			// 等于正上+左上
//		}
//	}
//	for (i = 0; i < n; i++){
//		for (j = 0; j <= i; j++){
//			printf("%d ", data[i][j]);
//		}
//		putchar('\n');
//	}
//}


// 一维数组
// 要某行某列时 其实不需要前一行,打印每一个元素printArray
// printArray (int* arr,int n)告诉数组是谁 多长就能打印出来
void printArray(int* arr, int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

void Print2(int n){
	int data[30] = { 1 };//第一个位置
	// 从后面往前填
	int i, j;
	printf("1\n");
	for (i = 1; i < n; i++){
		for (j = i; j > 0; j--){
			// 正上 + 右上
			data[j] += data[j - 1];
		}
		// 填一行, 打一行
		printArray(data, i + 1);// 未包括第一行的1,从第二行开始 
		// i = 1, 表示已为第二行, i + 1表示第二行打印两个元素
	}
}
int main1(){

	//Print(10);// 打印10行
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
	// free不会将指针置为空

	system("pause");
	return 0;
}