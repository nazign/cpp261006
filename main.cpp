// 260901 수업 내용
//#include <iostream>
//using namespace std;
//int main() {
// int a, b, sum;
// float avg;
//
// cout << "두 정수를 입력하시오\n";
// cin >> a >> b;
// cout << "a = " << a;
// cout << endl;
// cout << "b = " << b;
//
// return 0;
//
//
//}

// 260903 수업 내용
//#include <iostream>
//using namespace std;
//int main()
//{
// int x, y, sum, sub, mul;
// float rem;
// cout << "2개의 정수를 입력하시오" << endl;
// cin >> x >> y;
//
// sum = x + y;
// cout << x << " + " << y << " = " << sum << endl;
//
// sub = x - y;
// cout << x << " - " << y << " = " << sub << endl;
//
// mul = x * y;
// cout << x << " * " << y << " = " << mul << endl;
//
// rem = (float) x / y;
// cout << x << " / " << y << " = " << rem << endl;
//
// return 0;
//}

// 260908 수업 내용
//#include <iostream>
//using namespace std;
//
//int main() {
//
// cout << "정수 입력" << endl;
// int a;
// cin >> a;
// cout << "a=" << a << endl;
//
// cout << "두번째 정수 입력" << endl;
// int b;
// cin >> b;
// cout << "b=" << b << endl;
//
// //두 정수 덧셈
// int sum = a + b;
// cout << a << "+" << b << "=" << sum;
//
// return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
// int x, y;
// x = 1;
// y = ++x;
// cout << "x = " << x << "\t" << "y = " << y << endl;
//
// y = x++;
// cout << "x = " << x << "\t" << "y = " << y << endl;
//
// return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
// int number;
// cout << "정수를 입력하시오" << endl;
// cin >> number;
//
// if (number % 2 == 0) {
// cout << "입력된 정수는 짝수입니다." << endl;
// }else {
// cout << "입력된 정수는 홀수입니다." << endl;
// }
//
// int a, b;
// cout << "두 정수를 입력하시오" << endl;
// cin >> a >> b;
// int sum = a + b;
// int mul = a * b;
// float rem = a % b;
//
// if (sum % 2 == 0) {
// cout << a << " + " << b << " = " << sum << "이므로 짝수입니다." << endl;
// }
// else {
// cout << a << " + " << b << " = " << sum << "이므로 홀수입니다." << endl;
// }
// if (mul % 2 == 0) {
// cout << a << " * " << b << " = " << mul << "이므로 짝수입니다." << endl;
// }
// else {
// cout << a << " * " << b << " = " << mul << "이므로 홀수입니다." << endl;
// }
// if (rem > mul) {
// cout << rem << " > " << mul << "입니다." << endl;
// }
// else if(rem < mul){
// cout << "두 정수의 나머지의 값 = " << rem << " < " << "두 정수의 곱 = " << mul << "입니다." << endl;
// }
// else {
// cout << "두 정수의 나머지의 값과 곱이 같습니다." << endl;
// }
// if (mul > sum) {
// cout << mul;
// }
// else if (mul< sum){
// cout << sum;
// }
// else {
// cout << "두 정수의 곲 = " << mul << " = " << "두 정수의 합 = " << sum;
// }
//
// return 0;
//}

// 260910 수업 내용
//#include <iostream>
//using namespace std;
//int main() {
// int i = 0;
// while (i < 10) {
// cout << "i=" << i << endl;
// cout <<"수업 시간에 떠들지 않겠습니다."<< endl;
// i++;
//
// }
// cout << "while문 끝" << endl;
//// 실습 1: 1 ~ 100까지 while문 사용해서 출력하기
// i = 1;
// while (i < 101) {
// cout << "i=" << i << endl;
// i++;
// }
///* 실습 2: 1, 2, 3, 4, 5, ... 10
// 11, 12, 13...식으로 나타내기 */
// i = 1;
// while (i < 101) {
// cout << i << (i % 10 == 0 ? "\n" : "\t"); // ? A:b ==> ? 앞에 있는 내용이 참이면 A 아니면 B / 이걸 이제 알다니...
// i++;
// }
// cout << endl;
//// 실습 3: 1 ~ 10까지 출력
// i = 1;
// while (i < 11) {
// cout << "i=" << i << "\t";
// i++;
// }
// cout << endl;
//// 실습 4: 1 ~ 10까지 중 홀수만 출력
// i = 1;
// while (i < 11) {
// if (i % 2 != 0) {
// cout << i << "\t";
// }
// i++;
// }
// cout << endl;
//// 실습 5: 1 ~ 10까지 덧셈하기
// i = 1;
// int sum = 0;
// while (i < 11) {
// sum += i;
// i++;
// }
// cout << "1 ~ 10까지의 합= " << sum << endl;
// sum = 0; // while문으로
//
// for (i = 1; i < 11; i++) {
// sum += i;
// }
// cout << "1 ~ 10까지의 합= " << sum << endl; // for문으로
//// 실습 6: 1 ~ 10까지 중 홀수만 덧셈하기
// i = 1;
// sum = 0;
// while (i < 11) {
// if (i % 2 != 0) {
// sum += i;
// }
// i++;
// }
// cout <<"1 ~ 10까지의 홀수의 합= " << sum << endl; // while문으로
//
// sum = 0;
// for (i = 1; i < 11; i++) {
// sum += i; // sum = sum + i라는 뜻
// }
// cout << "1 ~ 10까지의 홀수의 합= " << sum << endl; // for문으로
//// for문
// sum = 0;
// for (i = 1; i < 11; i++) {
// cout << "i=" << i << endl;
// }
//// 실습 1: 1 ~ 100까지 10개씩 줄바꿈 출력
// /*for (i = 1; i < 101; i++) {
// cout << i << (i % 10 == 0 ? "\n" : "\t");
// }*/
// for (i = 1; i < 101; i++) {
// if (i % 10 == 0) {
// cout << i << endl;
// }
// else {
// cout << i << "\t";
// }
// }
//// 실습 2: 1에서 입력받은 정수까지 출력
// int a;
// cout << "양의 정수를 입력하시오";
// cin >> a;
// for (i = 1; i < a + 1; i++) {
// cout << i << endl;
// }
//// 실습 3: 1 ~ 10까지 덧셈
// sum = 0;
// for (i = 1; i < 11; i++) {
// sum += i;
// }
// cout << "1 ~ 10까지의 합= " << sum << endl;
//// 실습 4: 1 ~ 100까지 중 홀수만 덧셈
// sum = 0;
// for (i = 1; i < 101; i++) {
// if (i % 2 != 0) {
// sum += i;
// }
// }
// cout << "1 ~ 100까지 중 홀수의 합= " << sum << endl;
//// 실습 5: 1 ~ 100까지 짝수만 출력
// cout <<"\t\t\t" << "1 ~ 100까지 짝수만 출력" << endl;
// for (i = 1; i < 101; i++) {용
// if (i % 2 == 0) {
// if (i % 20 == 0) {
// cout << i << endl;
// }
// else {
// cout << i << "\t";
// }
// }
//
// }
// return 0;
//
//}

// 260915 수업 내용
// 배열
/*#include<iostream>
using namespace std;
int main() {
int ar[5];
ar[0] = 10;
ar[1] = 20;
ar[2] = 30;
ar[3] = 40;
ar[4] = 50;

// 실습 1: 20, 50 출력
cout << ar[1] << endl;
cout << ar[4] << endl;

// 실습 2: ar[1] = 20, ar[4] = 50으로 출력
cout << "ar[1] = " << ar[1] << endl;
cout << "ar[4] = " << ar[4] << endl;

// 실습 3: for문을 사용해  10 ~ 50 출력
for (int i = 0; i < 5; i++) {
cout << "ar[" << i << "]= " << ar[i] << endl;
}

// 실습 4: 크기가 7인 정수 배열 선언, 배열의 원소 키보드로 입력 후 출력
int arr[7];
for (int i = 0; i < 7; i++) {
cout << i + 1 << "번째 배열의 원소를 입력하시오:";
cin >> arr[i];
cout << endl;
}
for (int i = 0; i < 7; i++) {
cout << "arr[" << i << "]= " << arr[i] << endl;
}

// 실습 5: 짝수만 출력
for (int i = 0; i < 7; i++) {
if (arr[i] % 2 == 0) {
cout << "짝수인 원소: " <<"arr[" << i << "] = " << arr[i] << endl; // i 초기화 필수!! << 위의 코드에서 i가 6인 상태
}
}
// 실습 6: 3의 배수 출력
for (int i = 0; i < 7; i++) {
if (arr[i] % 3 == 0) {
cout << "3의 배수인 원소: " << "arr[" << i << "] = " << arr[i] << endl;
}
}

// 실습 7: 크기가 10인 정수 배열 선언
int a[10];

// 실습 8: 배열 원소 키보드로 입력 후 출력
for (int i = 0; i < 10; i++) {
cout << i + 1 << "번째 원소를 입력하시오: ";
cin >> a[i];
}
for (int i = 0; i < 10; i++) {
cout << "a[" << i << "] = " << a[i] << endl;
}

// 실습 9: 짝수 개수 출력
int even = 0;
int sum = 0;
for (int i = 0; i < 10; i++) {
if (a[i] % 2 == 0) {
even += 1;
}
}
cout << "정수 배열 중 짝수의 개수 = " << even << endl;

// 실습 10: 배열 원소 합 출력
for (int i = 0; i < 10; i++) {
sum += i;
}
cout << "배열 원소의 합 = " << sum << endl;

// 실습 11: 배열 원소 중 가장 큰 수 출력

int max = a[0];
for (int i = 0; i < 9; i++) {
if (max < a[i + 1]) {
max = a[i + 1];
}
}
cout << "배열 원소 중 가장 큰 수 = " << max << endl;

// 실습 12: 2번째 큰 수 출력


return 0;
}*/

/*#include <iostream>
using namespace std;
int sum(int a, int b) {
int plus = a + b;
return plus;
}

int main() {
// 실습 1. 2차원 배열 생성
int s[3][5] = {
{0, 1, 2, 3, 4},
{10 ,11 ,12, 13, 14},
{20, 21, 22, 23, 24}
};

// 실습 2. 1행의 원소 출력
cout << "1행의 원소: " << " ";
for (int i = 0; i < 5; i++) {
cout << "s[0]" << "[" << i << "]" << " = " << s[0][i] << "   ";
}
cout << endl;

// 실습 3. 2행의 원소 출력
cout << "2행의 원소: " << " ";
for (int i = 0; i < 5; i++) {
cout << "s[1]" << "[" << i << "]" << " = " << s[1][i] << "  ";
}
cout << endl;

// 실습 4. 3행의 원소 출력
cout << "3행의 원소: " << " ";
for (int i = 0; i < 5; i++) {
cout << "s[2]" << "[" << i << "]" << " = " << s[2][i] << "  ";
}
cout << endl;

// 실습 5. 2차원 배열의 원소 출력 (2중 for문으로)
for (int j = 0; j < 3; j++) {
cout << "3행의 원소: " << " ";
for (int i = 0; i < 5; i++) {
cout << "s[" << j << "]" << "[" << i << "]" << " = " << s[2][i] << "  ";
}
cout << endl;
}

// 실습 6. 키보드로 입력한 행의 원소만 출력
int num;
cout << "원하는 행을 입력하시오: ";
cin >> num;
if (num == 1) {
for (int i = 0; i < 5; i++) {
cout << "s[" << num << "]" << "[" << i << "]" << " = " << s[num][i] << "  ";
}
cout << endl;
}
else if (num == 2) {
for (int i = 0; i < 5; i++) {
cout << "s[" << num << "]" << "[" << i << "]" << " = " << s[num][i] << "  ";
}
cout << endl;
}
else {
for (int i = 0; i < 5; i++) {
cout << "s[" << num << "]" << "[" << i << "]" << " = " << s[num][i] << "  ";
}
cout << endl;
}

// 실습 7. 키보드로 입력한 열의 원소만 출력

// 실습 8. 크기가 3 * 4인 이차원 배열 선언 후 키보드로 원소 출력
int ar[3][4];
cout << "3행 4열의 2차원 배열 원소를 입력하시오" << endl;
for (int j = 0; j < 3; j++) {
for (int i = 0; i < 4; i++) {
cout << "ar[" << j << "]" << "[" << i << "]= ";
cin >> ar[j][i];
}
}
for (int j = 0; j < 3; j++) {
for (int i = 0; i < 4; i++) {
cout << "s[" << j << "]" << "[" << i << "]" << " = " << ar[j][i] << "  ";
}
cout << endl;
}

// 실습 9. 두 수의 합을 함수를 이용해 구하기
cout << sum(3, 5) << endl;
cout << sum(6, 7) << endl;

return 0;
}*/

// 260922 수업 내용
/*#include<iostream>
using namespace std;
int sum_1(int a, int b) {
int plus = a + b;
return plus;
}
int sub_1(int a, int b) {
int sub = a - b;
return sub;
}
int mul_1(int a, int b) {
int mul = a * b;
return mul;
}
double div_1(int a, int b) {
double div = (double)a / b;
return div;
}
int rem_1(int a, int b) {
int rem = a % b;
return rem;
}
int main() {
int a, b, sum;
a = 10;
b = 20;
sum = a + b;

cout << a << " + " << b << " = " << sum << endl; // 출력

// 실습 1. 전수 변수 2개를 선언 후 뺄셈 출력
int num_1 = 1, num_2 = 7, sub;
sub = num_1 - num_2;
cout << num_1 << " - " << num_2 << " = " << sub << endl << endl;

// 실습 2. 사칙연산과 나머지 연산 결과 출력
int mul, rem;
float div;

sum = num_1 + num_2;
mul = num_1 * num_2;
div = (float)num_1 / num_2;
rem = num_1 % num_2;

cout << num_1 << " + " << num_2 << " = " << sum << endl;
cout << num_1 << " - " << num_2 << " = " << sub << endl;
cout << num_1 << " * " << num_2 << " = " << mul << endl;
cout << num_1 << " / " << num_2 << " = " << div << endl;
cout << num_1 << " % " << num_2 << " = " << rem << endl << endl;

// 실습 3. 세 정수의 합과 평균 구하기
int num_3 = 1, num_4 = 24, num_5 = 18;
sum = num_3 + num_4 + num_5;
double avg = (double)sum / 3;

cout << num_3 << " + " << num_4 << " + " << num_5 << " = " << sum << endl;
cout << "(" << num_3 << " + " << num_4 << " + " << num_5 << ")" << " / " << 3 << " = " << avg << endl << endl;

// 실습 4. for문
for (int i = 0; i < 10; i++) {
cout << i << endl;
}

// 실습 5. 홀수만 출력
cout << "홀수" << endl;
for (int i = 0; i < 10; i++) {
if (i % 2 != 0) {
cout << i << endl;
}
}

// 실습 6. 정수 변수 10개 선언, 저장 후 합, 평균 출력
int num_6 = 1, num_7 = 2, num_8 = 4, num_9 = 6, num_10 = 7, num_11 = 8, num_12 = 9, num_13 = 10, num_14 = 12, num_15 = 14;
sum = num_6 + num_7 + num_8 + num_9 + num_10 + num_11 + num_12 + num_13 + num_14 + num_15;
cout << endl << num_6 << " + " << num_7 << " + " << num_8 << " + " << num_9 << " + " << num_10 << " + " << num_11 << " + " << num_12 << " + " << num_13 << " + " << num_14 << " + " << num_15 << " = " << sum << endl;
avg = (double)sum / 10;
cout << "(" << num_6 << " + " << num_7 << " + " << num_8 << " + " << num_9 << " + " << num_10 << " + " << num_11 << " + " << num_12 << " + " << num_13 << " + " << num_14 << " + " << num_15 << ")" << " / " << 10 << " = " << avg << endl << endl;

// 실습 7. 크기가 10인 정수 배열 선언, 저장 후 출력
int ar[10];
ar[0] = 1;
ar[1] = 2;
ar[2] = 4;
ar[3] = 6;
ar[4] = 7;
ar[5] = 8;
ar[6] = 9;
ar[7] = 10;
ar[8] = 12;
ar[9] = 14;

for (int i = 0; i < 10; i++) {
cout << "ar[" << i << "] = " << ar[i] << endl;
}

// 실습 8. 배열 원소의 합 출력
sum = 0;
for (int i = 0; i < 10; i++) {
sum += ar[i];
}
cout << "배열 원소의 합 = " << sum << endl << endl;

// 함수
cout << sum_1(10, 20) << endl; // 호출
int a_1 = 20, b_1 = 30;
int hap = sum_1(a_1, b_1);
cout << a_1 << " + " << b_1 << " = " << hap << endl;

// 뺄셈, 곱셈, 나눗셈, 나머지연산 함수 출력
int a_2 = 20, b_2 = 50;
int diff = sub_1(a_2, b_2);
cout << a_2 << " - " << b_2 << " = " << diff << endl; // 뺄셈

int a_3 = 7, b_3 = 72;
int gop = mul_1(a_3, b_3);
cout << a_3 << " * " << b_3 << " = " << gop << endl; // 곱셈

int a_4 = 1, b_4 = 7;
double quo = div_1(a_4, b_4);
cout << a_4 << " / " << b_4 << " = " << quo << endl; // 몫

int a_5 = 7, b_5 = 3;
int remainder = rem_1(a_5, b_5);
cout << a_5 << " % " << b_5 << " = " << remainder << endl; // 나머지

return 0;
}*/

// 260929 수업 내용
// 일반적으로 함수는 동사 + 명사
// ex) square(), compute_average(), get_integer()
#include<iostream>
using namespace std;
int add(int x, int y) {
int hap = x + y;
return hap;
}
int get_max(int x, int y) {
if (x > y) {
return x;
}
else {
return y;
}
}
// 두 수의 평균을 구하는 함수
double avg(int x, int y) {
double aver = (double)(x + y) / 2;
return aver;
}
// 세 정수 중 가장 큰 수 리턴하는 함수
//int get_max3(int ar[3]) {
// for (int j = 0;j < 1;j++) {
// for (int i = 0; i < 2; i++) {
// if (ar[i] > ar[i + 1]) {
// int tmp = ar[i];
// ar[i] = ar[i + 1];
// ar[i + 1] = tmp;
// }
// }
// }
//}
// 두 정수 중 작은 수 함수
int get_min(int x, int y) {
if (x < y) {
return x;
}
else {
return y;
}
}
// 배열 원소를 함수를 사용해서 출력
void prAr(int a[], int n) {
cout << "배열 원소 출력 함수 실행" << endl;
for (int i = 0; i < n; i++) {
cout << "a["<< i<< "]= "<< a[i] << endl;
}
}
// 배열 원소의 합을 함수 사용해서 구하고 출력
int get_sum_ar(int a[], int n) {
int sum_ar = 0;
for (int i = 0; i < n; i++) {
sum_ar += a[i];
}
cout << "배열 원소의 합 = " << sum_ar << endl;
return sum_ar;
}
// 두 정수의 곱을 리턴하는 함수
int get_mul(int x, int y) {
int gop = x * y;
return gop;
}
// 배열 원소 중 홀수만 덧셈하는 함수
int get_sumodd(int a[], int n) {
int hap_odd = 0;
for (int i = 0; i < n; i++) {
if (a[i] % 2 != 0) {
hap_odd += a[i];
}
}
return hap_odd;
}
// 배열 원소 중 가장 큰 수 리턴하는 함수
//int maxar(int a[], int n) {
// for (int i = 0; i < n; i++) {
// for (int j = 0; j < i-1; j++) {
// if (a[j] > a[j + 1]) {
// int tmp = a[j];
// a[j] = a[j + 1];
// a[j + 1] = tmp;
// }
// }
// }
//
//}
int main() {
int a = 10;
int b = 20;
int sum = add(a, b);
cout << a << " + " << b << " = " << sum << endl;

int m = get_max(a, b);
cout << a << ", " << b << " 중 큰 수 = " << m << endl;

// 두 수의 평균을 구하는 함수
double av = avg(a, b);
cout << a << ", " << b << "의 평균 = " << av << endl;

// 세 정수 중 가장 큰 수 리턴하는 함수

// 두 정수 중 작은 수 함수
int mi = get_min(a, b);
cout << a << ", " << b << " 중 작은 수 = " << mi << endl;

// 배열 원소 출력
int ar[] = { 1,2,3,4,6 };
for (int i = 0; i < 5; i++) {
cout << "ar[" << i << "]= " << ar[i] << endl;
}

// 배열 원소 합 출력
sum = 0;
for (int i = 0; i < 5; i++) {
sum += ar[i];
}
cout << "배열 원소의 합 = " << sum << endl;

// 배열 원소를 함수를 사용해서 출력
prAr(ar, 5);

// 배열 원소의 합을 함수 사용해서 구하고 출력
get_sum_ar(ar, 5);

// 두 정수의 곱을 리턴하는 함수 출력
int mul = get_mul(a, b);
cout << a << " * " << b << " = " << mul << endl;

// 배열 원소 중 홀수만 덧셈하는 함수 출력
int sum_odd = get_sumodd(ar, 5);
cout << "배열 원소 중 홀수의 합 = " << sum_odd << endl;

// 배열 원소 중 가장 큰 수 리턴하는 함수 출력

return 0;
}
