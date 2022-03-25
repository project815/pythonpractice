#include <stdio.h>

int main(void)
{
	//10이하의 정수를 입력받아 정수만큼 "C언어 프그래밍"출력

	//int num;
	//while(1)
	//{
	//	scanf("%d", &num);
	//	if (num > 10)continue;
	//	else break;
	//}
	//for (int i = 0; i < num; i++)
	//{
	//	printf("C언어 프로그래밍\n");
	//}

	//5개의 정수를 입력
	//차례로 출력.

	//int num[5];
	//for (int i = 0; i < 5; i++)
	//{
	//	scanf("%d", &num[i]);
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d", num[i]);
	//}
	//문자 10개를 저장할 수 있는 배열
	//10개의 문자를 입력.
	//입력받은 문자를 이어서 출력.

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
	//정수 10개를 저장할 수 있는 배열을 만들어서 1부터 10까지를 대입
	//차례대로 출력하는 프로그램.

	//int num[10];

	//for (int i = 0; i < 10; i++)
	//{
	//	num[i] = 1 + i;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", num[i]);
	//}

	//정수 10개를 입력받은 후 세 번쨰, 다섯 번쨰와 마지막 입력받는 정수를 차례대로 출력하는 프로그램.

	/*int num[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("%d %d %d", num[2], num[4], num[9]);
*/

	//최대 100개까지의 정수를 차례로 입력.
	//0이 입력되면 입력을 중단하고 짝수 번째에 입력된 정수를 모두 출력하는 프로그램.

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

	//100개의 정수를 저장할 수 있는 배열을 선언/
	//정수를 차례로 입력받다가 0이 입력되면 0을 제외하고
	//그 떄까지 입력된 정수를 가장 나중에 입력된 정수부터 차례대로 출력하는 프로그램/

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

	//연도와 월을 입력받아 해당 월의 날 수를 출력하다가 월이 0이 이면 종료하는 프로그램.
	//월이 잘못 입력되면 "잘못 입력하였습니다." 출력.
//윤년과 평년

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
	//	/*윤년인지 평년인지
	//	월 0입력시 종료
	//	*/
	//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) day[2] = 29;		
	//	if (month == 0) break;
	//	//12월 사이에 있으면 출력
	//	if (1 <= month && month <= 12) printf("%d", day[month]);
	//	else printf("잘못입력했습니다.");

	//	/*if (month == 0) break;
	//	else if (month < 1 || month >12)
	//	{
	//		printf("잘못 입력했습니다.\n");
	//		continue;
	//	}
	//	else
	//	{
	//		printf("%d\n", day[month]);
	//	}*/
	//}

	//1반부터 6반까지의 평균 점수를 저장/
	//두 반을 입력받아 두 반 평균점수의 합을 출력하는 프로그램.
	//반별 평균점수는 초기값으로 1반부터 차례로 85.6, 79.5, 831. 80.0, 78.2, 75.0으로 초기화.
	//출력은 소수 첫째자리까지.
	/*int a, b;
	double teams[6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	double avg = 0;

	scanf("%d %d", &a, &b);
	avg = (teams[a-1] + teams[b-1]);

	printf("%.1f", avg);*/

	//10개의 자연수를 입력받아 그 중 가장 큰 수를 출력하는 프로그램.
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

	//10개의 정수를 입력받아 그 중 가장 작은 수를 출력하는 프로그램.//입력으로 주어지는 정수는 100을 넘지 않는다.

	//int num[10];
	//int min = 1000;
	//for (int i = 0; i < 10; i++)
	//{
	//	scanf("%d", &num[i]);
	//	if (num[i] > 1000)
	//	{
	//		printf("입력된 숫자가 100보다 큰 숫자입니다. 다시 입력하세요.\n\n");
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

	//4자리 이하의 10개의 정수를 입력.
	//짝수 중 가장 큰 값과 홀수 중 가장 작은 값을 출력하는 프로그램.

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

	//10개의 정수를 입력.
	//100미만의 수 중 가장 큰 수와 100이상 수 중 가장 작은 수를 출력하는 프로그램.
	//입력되는 정수의 범위는 1이상 1000미만이다. 만약 해당하는 수가 없을 때에는 100을 출력한다.

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

	//10명의 컴퓨터 점수를 입력받아 배열에 저장.
	//총점과 평균을 구하여 출력하는 프로그램.
	//평균은 반올림하여 소수 첫째자리까지 출력한다.
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

	//10개의 정수를 입력.
	//배열에 저장한 후 짝수 번째 입력된 값의 합과 홀수 번째 입력된 값으 평균을 출력하는 프로그램.
	//평균은 반올림하여 소수 첫째자리까지 출력,.	
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


	//5개의 정수 {95, 75, 85, 100, 50}
	//오름차순으로 정렬하시오.
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
	//10개의 정수를 입력.
	//배열에 저장한 후 내림차순.
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
	//10개의 문자를 입력받아 마지막으로 입력받은 문자부터 첫 번째 입력받은 문자까지 차례대로 출력.

	//char alpha[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	scanf(" %c", &alpha[i]);
	//}
	//for (int i = 9; i >= 0; i--)
	//{
	//	printf("%c ", alpha[i]);
	//}
	//5개의 정수를 입력받아 첫 번쨰, 세 번쨰, 다섯 번쨰 입력받은 정수의 합을 출력하는 프로그램.
	/*int num[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("%d", num[0] + num[2] + num[4]);*/
	//10개의 정수를 입력.
	//홀수 번쨰 입력받은 정수의 합과 짝수번째 입력받은 정수의 합을 출력하는 프로그램.
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
	//100개 정수를 입력받을 수 있는 배열을 선언.
	//정수를 차례로 입력받다가 -1이 입력되면 입력을 중단하고 -1을 제외한 마지막 세개의 정수를 출력.
	//입력받은 정수가 3개미만일 경우 모두 출력한다.
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
	//6명의 몸무게를 입력받아
	//평균을 출력하는 프로그램. 출력은 반올림, 소수 첫째자리까지/
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

	//6개의 문자배열을 만들고 {'J','U','N','G','O','L'}이라고 초기화 한 후,
	//문자 한 개를 입력받아 배열에서의 위치를 출력하는 프로그램.
	//첫 번째 위치는 0번이며  배열에 없는 문자가 입력되면 "none"이라느 메세지를 출력.
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
	//세 자리 이하의 정수 100개를 차례로 입력받다가 999가 입력되면 프로그램 종료하고 999를 제외한 그 떄까지 입력된 최댓값과 최솟값을 출력
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

  
 