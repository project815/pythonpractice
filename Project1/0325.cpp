#include <stdio.h>

int main(void)
{
	//10������ ������ �Է¹޾� ������ŭ "C��� ���׷���"���

	//int num;
	//while(1)
	//{
	//	scanf("%d", &num);
	//	if (num > 10)continue;
	//	else break;
	//}
	//for (int i = 0; i < num; i++)
	//{
	//	printf("C��� ���α׷���\n");
	//}

	//5���� ������ �Է�
	//���ʷ� ���.

	//int num[5];
	//for (int i = 0; i < 5; i++)
	//{
	//	scanf("%d", &num[i]);
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d", num[i]);
	//}
	//���� 10���� ������ �� �ִ� �迭
	//10���� ���ڸ� �Է�.
	//�Է¹��� ���ڸ� �̾ ���.

	/*char alpha[10];
	for (int i = 0; i < 10; i++)
	{
		scanf(" %c", &alpha[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%c ", alpha[i]);
	}*/
	
	//char alpha[26];

	//for (int i = 0; i <= 25; i++)
	//{
	//	alpha[i] = 'A'+i;
	//}
	//for (int i = 25; i >= 0; i--)
	//{
	//	printf("%c ", alpha[i]);
	//}
	//���� 10���� ������ �� �ִ� �迭�� ���� 1���� 10������ ����
	//���ʴ�� ����ϴ� ���α׷�.

	//int num[10];

	//for (int i = 0; i < 10; i++)
	//{
	//	num[i] = 1 + i;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", num[i]);
	//}

	//���� 10���� �Է¹��� �� �� ����, �ټ� ������ ������ �Է¹޴� ������ ���ʴ�� ����ϴ� ���α׷�.

	/*int num[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("%d %d %d", num[2], num[4], num[9]);
*/

	//�ִ� 100�������� ������ ���ʷ� �Է�.
	//0�� �ԷµǸ� �Է��� �ߴ��ϰ� ¦�� ��°�� �Էµ� ������ ��� ����ϴ� ���α׷�.

	//int num[100];
	//int cnt = 0;

	//for (int i = 0; i < 100; i++)
	//{
	//	scanf("%d", &num[i]);
	//	if (num[i] == 0)break;
	//	cnt++;
	//}

	//for (int i = 0; i < cnt; i++)
	//{
	//	if (i % 2 == 1)printf("%d ", num[i]);
	//}

	//100���� ������ ������ �� �ִ� �迭�� ����/
	//������ ���ʷ� �Է¹޴ٰ� 0�� �ԷµǸ� 0�� �����ϰ�
	//�� ������ �Էµ� ������ ���� ���߿� �Էµ� �������� ���ʴ�� ����ϴ� ���α׷�/

	//int num[100];
	//int cnt = 0;

	//for (int i = 0; i < 100; i++)
	//{
	//	scanf("%d", &num[i]);
	//	if (num[i] == 0)break;
	//	cnt++;
	//}
	//for (int i = cnt - 1; i >= 0; i--)
	//{
	//	printf("%d", num[i]);
	//}

	//������ ���� �Է¹޾� �ش� ���� �� ���� ����ϴٰ� ���� 0�� �̸� �����ϴ� ���α׷�.
	//���� �߸� �ԷµǸ� "�߸� �Է��Ͽ����ϴ�." ���.
//����� ���

	//int year;
	//int month;
	//int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


	//while(1)
	//{
	//	printf("YEAR = ");
	//	scanf("%d", &year);
	//	printf("MONTH = ");
	//	scanf("%d", &month);
	//	
	//	/*�������� �������
	//	�� 0�Է½� ����
	//	*/
	//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) day[2] = 29;		
	//	if (month == 0) break;
	//	//12�� ���̿� ������ ���
	//	if (1 <= month && month <= 12) printf("%d", day[month]);
	//	else printf("�߸��Է��߽��ϴ�.");

	//	/*if (month == 0) break;
	//	else if (month < 1 || month >12)
	//	{
	//		printf("�߸� �Է��߽��ϴ�.\n");
	//		continue;
	//	}
	//	else
	//	{
	//		printf("%d\n", day[month]);
	//	}*/
	//}

	//1�ݺ��� 6�ݱ����� ��� ������ ����/
	//�� ���� �Է¹޾� �� �� ��������� ���� ����ϴ� ���α׷�.
	//�ݺ� ��������� �ʱⰪ���� 1�ݺ��� ���ʷ� 85.6, 79.5, 831. 80.0, 78.2, 75.0���� �ʱ�ȭ.
	//����� �Ҽ� ù°�ڸ�����.
	/*int a, b;
	double teams[6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	double avg = 0;

	scanf("%d %d", &a, &b);
	avg = (teams[a-1] + teams[b-1]);

	printf("%.1f", avg);*/

	//10���� �ڿ����� �Է¹޾� �� �� ���� ū ���� ����ϴ� ���α׷�.
	//int num[10];
	//int max = 0;
	//for (int i = 0; i < 10; i++)
	//{
	//	scanf("%d", &num[i]);
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	if (num[i] > max)
	//	{
	//		max = num[i];
	//	}
	//}

	//printf("%d", max);

	//10���� ������ �Է¹޾� �� �� ���� ���� ���� ����ϴ� ���α׷�.//�Է����� �־����� ������ 100�� ���� �ʴ´�.

	//int num[10];
	//int min = 1000;
	//for (int i = 0; i < 10; i++)
	//{
	//	scanf("%d", &num[i]);
	//	if (num[i] > 1000)
	//	{
	//		printf("�Էµ� ���ڰ� 100���� ū �����Դϴ�. �ٽ� �Է��ϼ���.\n\n");
	//		i -= 1;
	//		continue;
	//	}
	//	printf("%d\n\n", i);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	if (num[i] < min)
	//	{
	//		min = num[i];
	//	}
	//}

	//printf("%d", min);

	//4�ڸ� ������ 10���� ������ �Է�.
	//¦�� �� ���� ū ���� Ȧ�� �� ���� ���� ���� ����ϴ� ���α׷�.

	//int num[10];
	//int max = -9999;
	//int min = 9999;

	//for (int i = 0; i < 10; i++)
	//{
	//	scanf("%d", &num[i]);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	if (num[i] % 2 == 0)
	//	{
	//		if (num[i] > max)
	//		{
	//			max = num[i];
	//		}
	//	}
	//	else
	//	{
	//		if (num[i]< min)
	//		{
	//			min = num[i];
	//		}
	//	}
	//}

	//printf("%d %d", max, min);

	//10���� ������ �Է�.
	//100�̸��� �� �� ���� ū ���� 100�̻� �� �� ���� ���� ���� ����ϴ� ���α׷�.
	//�ԷµǴ� ������ ������ 1�̻� 1000�̸��̴�. ���� �ش��ϴ� ���� ���� ������ 100�� ����Ѵ�.

	//int num[10];
	//int max = 1;
	//int min = 1000;
	//int max_cnt = 0;
	//int min_cnt = 0;

	//for (int i = 0; i < 10; i++)
	//{
	//	scanf("%d", &num[i]);
	//	
	//	if (num[i] >= 100) max_cnt++;
	//	else min_cnt++;
	//}

	//if (max_cnt == 10)max = 100;
	//else if (min_cnt == 10)min = 100;

	//for (int i = 0; i < 10; i++)
	//{
	//	if (1 < num[i] && num[i] < 100)
	//	{
	//		if (num[i] > max)
	//		{
	//			max = num[i];
	//		}
	//	}
	//	if (100 <= num[i] && num[i] < 1000)
	//	{
	//		if (num[i] < min)
	//		{
	//			min = num[i];
	//		}
	//	}
	//}

	//printf("%d %d", max, min);

	//10���� ��ǻ�� ������ �Է¹޾� �迭�� ����.
	//������ ����� ���Ͽ� ����ϴ� ���α׷�.
	//����� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ����Ѵ�.
	//int score[10];
	//int sum = 0, cnt = 0;
	//double avg = 0;

	//for (int i = 0; i < 10; i++)
	//{
	//	scanf("%d", &score[i]);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	sum += score[i];
	//	cnt++;
	//}
	//avg = (double)sum / cnt;
	//printf("%.1f", avg);
	//

	//10���� ������ �Է�.
	//�迭�� ������ �� ¦�� ��° �Էµ� ���� �հ� Ȧ�� ��° �Էµ� ���� ����� ����ϴ� ���α׷�.
	//����� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ���,.	
	//int num[10];
	//int even_sum = 0;
	//int odd_sum = 0, odd_cnt = 0;
	//double odd_avg = 0;

	//for (int i = 0; i < 10; i++)
	//{
	//	scanf("%d", &num[i]);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	if (i % 2 == 1)
	//	{
	//		even_sum += num[i];
	//	}
	//	else
	//	{
	//		odd_sum += num[i];
	//		odd_cnt++;
	//	}
	//}
	//odd_avg = (double)odd_sum / odd_cnt;

	//printf("%d %.1f", even_sum, odd_avg);


	//5���� ���� {95, 75, 85, 100, 50}
	//������������ �����Ͻÿ�.
	//int tmp;
	//int num[5] = { 95, 75, 85, 100, 50 };

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)

	//	{
	//		if (num[i] < num[j])
	//		{
	//			tmp = num[i];
	//			num[i] = num[j];
	//			num[j] = tmp;
	//		}
	//	}
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", num[i]);
	//}
	//
	//10���� ������ �Է�.
	//�迭�� ������ �� ��������.
	/*int num[10];
	int tmp;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (num[i] > num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}*/
	//10���� ���ڸ� �Է¹޾� ���������� �Է¹��� ���ں��� ù ��° �Է¹��� ���ڱ��� ���ʴ�� ���.

	//char alpha[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	scanf(" %c", &alpha[i]);
	//}
	//for (int i = 9; i >= 0; i--)
	//{
	//	printf("%c ", alpha[i]);
	//}
	//5���� ������ �Է¹޾� ù ����, �� ����, �ټ� ���� �Է¹��� ������ ���� ����ϴ� ���α׷�.
	/*int num[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("%d", num[0] + num[2] + num[4]);*/
	//10���� ������ �Է�.
	//Ȧ�� ���� �Է¹��� ������ �հ� ¦����° �Է¹��� ������ ���� ����ϴ� ���α׷�.
	/*int num[10];
	int odd_sum = 0;
	int even_sum = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			odd_sum += num[i];
		}
		else
		{
			even_sum += num[i];
		}
	}

	printf("%d %d", odd_sum, even_sum);*/
	//100�� ������ �Է¹��� �� �ִ� �迭�� ����.
	//������ ���ʷ� �Է¹޴ٰ� -1�� �ԷµǸ� �Է��� �ߴ��ϰ� -1�� ������ ������ ������ ������ ���.
	//�Է¹��� ������ 3���̸��� ��� ��� ����Ѵ�.
	//int num[100];
	//int cnt = 0;
	//for (int i = 0; i < 100; i++)
	//{
	//	scanf("%d", &num[i]);
	//	if (num[i] == -1)break;
	//	cnt++;
	//}

	//if (cnt < 3)
	//{
	//	for (int i = 0; i < cnt; i++)
	//	{
	//		printf("%d ", num[i]);
	//	}
	//}

	//else
	//{
	//	for (int i = cnt - 3;i < cnt; i++)
	//	{
	//		printf("%d ", num[i]);
	//	}
	//}
	//6���� �����Ը� �Է¹޾�
	//����� ����ϴ� ���α׷�. ����� �ݿø�, �Ҽ� ù°�ڸ�����/
	//double weight[6];
	//double sum = 0, cnt = 0;
	//double avg = 0;


	//for (int i = 0; i < 6; i++)
	//{
	//	scanf("%lf", &weight[i]);
	//}
	//for (int i = 0; i < 6; i++)
	//{
	//	sum += weight[i];
	//	cnt++;
	//}
	//
	//avg = sum / cnt;

	//printf("%.1f", avg);

	//6���� ���ڹ迭�� ����� {'J','U','N','G','O','L'}�̶�� �ʱ�ȭ �� ��,
	//���� �� ���� �Է¹޾� �迭������ ��ġ�� ����ϴ� ���α׷�.
	//ù ��° ��ġ�� 0���̸�  �迭�� ���� ���ڰ� �ԷµǸ� "none"�̶�� �޼����� ���.
	/*char input;
	int locate = -1;
	char alpha[6] = { 'J','U','N','G','O','L' };
	scanf(" %c", &input);

	for (int i = 0; i < 6; i++)
	{
		if (alpha[i] == input)
		{
			locate = i;
			break;
		}
	}

	if (locate > -1) printf("%d", locate);
	else printf("none");*/
	//�� �ڸ� ������ ���� 100���� ���ʷ� �Է¹޴ٰ� 999�� �ԷµǸ� ���α׷� �����ϰ� 999�� ������ �� ������ �Էµ� �ִ񰪰� �ּڰ��� ���
	//int num[100];
	//int cnt = 0;
	//int max = -999;
	//int min = 999;
	//for (int i = 0; i < 100; i++)
	//{
	//	scanf("%d", &num[i]);
	//	if (num[i] == 999) break;
	//	cnt++;
	//}
	//for (int i = 0; i < cnt; i++)
	//{
	//	if (num[i] > max)
	//	{
	//		max = num[i];
	//	}
	//	else if (num[i] < min)
	//	{
	//		min = num[i];
	//	}
	//}

	//printf("%d %d", max, min);


	return 0;
} 

  
 