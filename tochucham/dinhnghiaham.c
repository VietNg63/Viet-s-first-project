//xử lý số nguyên bài tập chương 1
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "khaibaoham.h"
int Fac(int N){
    //factorial - giai thừa
    int i =1;
    int T =1;
    while(i<=N){
        T *= i;
        i++;
    }
    return T;
}
int Ap(int N){
    // arithmetic progression - cấp số cộng
    int i = 1;
    int sum = 0;
    while (i<=N){
        sum +=i;
        i++;
    }
    return sum;
}
int Sum_2 (int N){
    int i =1;
    int sum =0;
    while (i<=N){
        sum += pow(i,2);
        i++;
    }
    return sum;
}
double Sum_3 (int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum += 1.*1/i;
        i++;
    }
    return sum;
}
double Sum_4(int N){
    int i =1;
    double sum =0;
    while(i<=N){
    sum += 1.*1/2*i;
    i++;
    }
    return sum;
}
double Sum_5(int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum += 1.*1/(2*i+1);
        i++;
    }
    return sum;
}
double Sum_6(int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum += 1.*1/(i*(i+1));
        i++;
    }
    return sum;
}
double Sum_7(int N){
    int i = 1;
    double sum =0;
    while(i<=N){
        sum += 1.*i/(i+1);
        i++;
    }
    return sum;
}
double Sum_8(int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum += (2*i+1)/(2*1+2);
        i++;
    }
    return sum;
}
int Mul_9(int N){
    int i =1;
    int T =1;
    while (i<=N){
        T *= i;
        i++;
    }
    return T;
}
double Sum_11(int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum += Fac(i);
        i++;
    }
    return sum;
}
double Sum_12(int x,int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum += pow(x,i);
        i++;
    }
    return sum;
}
double Sum_13(int x,int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum += pow(x,2*i);
        i++;
    }
    return sum;
}
double Sum_14(int x, int N){
    int i =0;
    double sum =0;
    while(i<=N){
        sum += pow(x,2*i + 1);
        i++;
    }
    return sum;
}
double Sum_15(int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum += 1.*1/Ap(i);
        i++;
    }
    return sum;
}
double Sum_16(int x, int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum += pow(x,i)/Ap(i);
        i++;
    }
    return sum;
}
double Sum_17(int x, int N){
    int i =1;
    double sum = 0;
    while(i<=N){
        sum += pow(x,1)/Fac(i);
        i++;
    }
    return sum;
}
double Sum_18(int x, int N){
    int i =1;
    double sum =1;
    while(i<=N){
        sum += pow(x,2*i)/Ap(2*i);
        i++;
    }
    return sum;
}
double Sum_19(int x, int N){
    int i =0;
    double sum =1;
    while(i<=N){
        sum += pow(x,2*i+1)/Ap(2*i+1);
        i++;
    }
    return sum;
}
void divisor_list(int N){
    int i =1;
    while(i<=N){
        if(N%i==0){
            printf("\n%d",i);
        }
        i++;
    }
}
int Sum_21(int N){
    int i =1;
    int sum =0;
    while(i<=N){
        if(N%i==0){
            sum += i;
        }
        i++;
    }
    return sum;
}
int Mul_22(int N){
    int i =1;
    int T =1;
    while(i<=N){
        if(N%i==0){
            T *= i;
        }
        i++;
    }
    return T;
}
int Count_23(int N){
    int i =1;
    int count =0;
    while(i<=N){
        if(N%i==0){
            count += 1;
        }
        i++;
    }
    return count;
}
void odd_divisor_list(int N){
    int i =1;
    while(N%i==0){
        printf("\n%d",i);
        i += 2;
    }
}
int Sum_even_divisor(int N){
    int i = 2;
    int sum =0;
    while(i<=N){
        if(N%i == 0){
            sum += i;
        }
        i += 2;
    }
    return sum;
}
int Mul_odd_divisor(int N){
    int i =1;
    int T =1;
    while(i<=N){
        if(N%i == 0){
            T *= i;
        }
        i++;
    }
    return T;
}
int Count_even_divisor(int N){
    int i =2;
    int count = 0;
    while(i<=N){
        if(N%i ==0){
            count += 1;
        }
        i += 2;
    }
    return count;
}
int Sum_28(int N){
    int i =1;
    int sum =0;
    while(i<N){
        if(N%i == 0){
            sum += i;
        }
        i++;
    }
    return sum;
}
int Biggest_odd_divisor(int N){
    int i =1;
    int max  =0;
    while(i<N){
        if(N%i == 0 && i>max){
            max =i;
        }
        i += 2;
    }
    return max;
}
bool Isperfect_number(int N){
    int i =1;
    int sum =0;
    while(i<N){
        if(N%i == 0){
            sum += i;
        }
        i++;
    }
    if(sum == N)
    return 1;
    else
    return 0;
}
bool isprime(int N){
    if (Count_23(N)==2)
    return 1;
    else
    return 0;
}
bool is_square_number(int N){
    if ((int)sqrt(N)*(int)sqrt(N)==N)
    return 1;
    else
    return 0;
}
double Sum_33(int N){
    int i =1;
    double sum = 0;
    while(i<=N){
        sum = sqrt(sum + 2);
        i++;
    }
    return sum;
}
double Sum_34(int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum = sqrt(sum + i);
        i++;
    }
    return sum;
}
double Sum_36(int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum = sqrt(sum + Fac(i));
        i++;
    }
    return sum;
}
double Sum_37(int N){
    int i =2;
    double sum = 0;
    while(i<=N){
        sum = pow(sum+i,1/i);
        i++;
    }
    return sum;
}
double Sum_38(int N){
    int i =1;
    double sum = 0;
    while(i<=N){
        sum = pow(sum +i,1/(i+1));
        i++;
    }
    return sum;
}
double Sum_39(int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum = pow(sum + Fac(i),1/(i+1));
        i++;
    }
    return sum;
}
double Sum_40(int x,int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum = sqrt(sum + pow(x,i));
        i++;
    }
    return sum;
}
double Sum_41(int N){
    int i =1;
    double sum =0;
    while(i<=N){
        sum = 1/(1+sum);
        i++;
    }
    return sum;
}
int find_K(int N){//Ap(K)<N
    int K =1;
    int max =0;
    while(K<N){
        if(Ap(K)<N && K>max){
            max = K;
        }
        K++;
    }
    return max;
}
int Count_character(int N){
    int count =0;
    while(N%10!=0){
        count += 1;
        N = N/10;
    }
    return count;
}
int Sum_character(int N){
    int sum = 0;
    int inter;
    while(N%10!=0){
        inter = N%10;
        sum += inter;
        N=N/10;
    }
    return sum;
}
int Mul_character(int N){
    int T =1;
    int inter ;
    while(N%10!=0){
        inter = N%10;
        T *= inter;
        N =N/10;
    }
    return T;
}
int Count_odd_character(int N){
    int count =0;
    int inter;
    while(N%10!=0){
        inter = N%10;
        if(inter%2!=0){
            count +=1;
        }
        N = N/10;
    }
    return count;
}
int Sum_even_character(int N){
    int inter;
    int sum =0;
    while(N%10!=0){
        inter = N%10;
        if(inter%2==0){
            sum += inter;
        }
        N=N/10;
    }
    return sum;
}
int Mul_odd_character(int N){
    int inter;
    int T =1;
    while(N%10!=0){
        inter =N%10;
        if(inter%2!=0){
        T *= inter;
        }
        N=N/10;
    }
    return T;
}
int find_1st_character(int N){
    int inter;
    while(N%10!=0){
        inter = N%10;
        N = N/10;
    }
    return inter;
}
int reversed_number(int N){
    int reversed_number=0;
    int inter;
    while(N%10!=0){
        inter = N%10;
        reversed_number = reversed_number*10 +(int)inter;
        N = N/10;
    }
    return reversed_number;
}
int find_max_character(int N){
    int max =0;
    int inter;
    while(N%10!=0){
        inter = N%10;
        if(inter>max){
            max =inter;
        }
        N = N/10;
    }
    return max;
}
int find_min_character(int N){
    int min =9;
    int inter;
    while(N%10!=0){
        inter = N%10;
        if(inter < min){
            min = inter;
        }
        N = N/10;
    }
    return min;
}
int count_max_character(int N){
    int inter;
    int count =0;
    int max = find_max_character(N);
    while(N%10!=0){
        inter =N%10;
        if(inter == max){
            count += 1;
        }
        N = N/10;
    }
    return count;
}
bool is_allcharacter_odd(int N){
    int inter;
    while(N%10!=0){
        inter = N%10;
        if(inter%2==0){
            return 0;
        }
        N=N/10;
    }
    return 1;
}
bool is_allcharacter_even(int N){
    int inter;
    while(N%10!=0){
        inter = N%10;
        if(inter%2!=0){
            return 0;
        }
        N = N/10;
    }
    return 1;
}
bool is_symmetricalnumber(int N){
    int temp = N;
    int x = 0;
    int inter;
    while (N%10!=0){
        inter = N%10;
        x = x*10 + inter;
        N = N/10;
    }
    if(temp == x){
    return 1;
    }
    else
    return 0;
}
bool is_increasing_number(int N){
    int temp = 10;
    int inter;
    while(N%10 != 0){
        inter = N%10;
        if(inter >= temp){
            return 0;
        }
        temp = inter;
        N =N/10;
    }
    return 1;
}
bool is_decreasing_number(int N){
    int temp =0;
    int inter;
    while(N%10 != 0){
        inter = N%10;
        if(inter <= temp){
            return 0;
        }
        temp = inter;
        N = N/10;
    }
    return 1;
}
int greatest_common_divisor(int a, int b){
    if(a==0||b==0){
        return a + b ;
    }
    //thuật toán Euclid
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int smallest_common_multiple(int a, int b){
    int SCM = a/(greatest_common_divisor(a,b))*b;
    return SCM;
}