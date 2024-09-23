int Fac(int N); // factorial -- giai thừa
int Ap(int N); // arithmetic progression - cấp số cộng
int Sum_2 (int N);// Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
double Sum_3 (int N);//Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
double Sum_4(int N);//Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
double Sum_5(int N);//Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
double Sum_6(int N);//Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
double Sum_7(int N);//Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
double Sum_8(int N);//Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
int Mul_9(int N);//Bài 9: Tính T(n) = 1 x 2 x 3…x N
double Sum_11(int N);//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
double Sum_12(int x,int N);//Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n
double Sum_13(int x,int N);//Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
double Sum_14(int x, int N);//Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
double Sum_15(int N);//Bài 15: Tính S(n) = 1/1 + 1/(1 + 2) + 1/ (1 + 2 + 3) + ….. + 1/ (1 + 2 + 3 + …. + N)
double Sum_16(int x, int N);//Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/(1 + 2 + 3) + … + x^n/(1 + 2 + 3 + …. + N)
double Sum_17(int x, int N);//Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!
double Sum_18(int x, int N);//Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + (x^2n)/(2n)!
double Sum_19(int x, int N);//Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
void divisor_list(int N);//Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
int Sum_21(int N);//Bài 21: Tính tổng tất cả các “ước số” của số nguyên dương n
int Mul_22(int N);//Bài 22: Tính tích tất cả các “ước số” của số nguyên dương n
int Count_23(int N);//Bài 23: Đếm số lượng “ước số” của số nguyên dương n
void odd_divisor_list(int N);//Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
int Sum_even_divisor(int N);//Bài 25: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n
int Mul_odd_divisor(int N);//Bài 26: Tính tích tất cả các “ước số lẻ” của số nguyên dương n
int Count_even_divisor(int N);//Bài 27: Đếm số lượng “ước số chẵn” của số nguyên dương n
int Sum_28(int N);//Bài 28: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó
int Biggest_odd_divisor(int N);//Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
bool Isperfect_number(int N);//Bài 30: Cho số nguyên dương n. Kiểm tra xem n có phải là số hoàn thiện hay không
bool isprime(int N);//Bài 31: Cho số nguyên dương n. Kiểm tra xem n có phải là số nguyên tố hay không
bool is_square_number(int N);//Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không
double Sum_33(int N);//Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn
double Sum_34(int N);//Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1) có n dấu căn
double Sum_36(int N);//Bài 36: Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dấu căn
double Sum_37(int N);//Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn
double Sum_38(int N);//Bài 38: Tính S(n) = CanBac N + 1(N + CanBac N(N – 1 +…+CanBac3(2 + CanBac2(1)))) có n dấu căn
double Sum_39(int N);//Bài 39: Tính S(n) = CanBac (N+1)(N! + CanBacN((N – 1)! + … + CanBac3(2! + CanBac2(1!))) có n dấu căn
double Sum_40(int x,int N);//Bài 40: Tính S(n) = CanBac2(x^n + CanBac2(x^n-1 + … + CanBac2(x^2 + CanBac2(x)))) có n dấu căn
double Sum_41(int N);//Bài 41: Tính S(n) = 1 / (1 + 1 / ( 1 + 1 / (…. 1 + 1 / 1 + 1))) có n dấu phân số
int find_K(int N);//Bài 42: Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k) < n. Trong đó chuỗi k được định nghĩa như sau: S(k) = 1 + 2 + 3 + … + k
int Count_character(int N);//Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n
int Sum_character(int N);//Bài 44: Hãy tính tổng các chữ số của số nguyên dương n
int Mul_character(int N);//Bài 45: Hãy tính tích các chữ số của số nguyên dương n
int Count_odd_character(int N);//Bài 46: Hãy đếm số lượng chữ số lẻ của số nguyên dương n
int Sum_even_character(int N);//Bài 47: Hãy tính tổng các chữ số chẵn của số nguyên dương n
int Mul_odd_character(int N);//Bài 48: Hãy tính tích các chữ số lẻ của số nguyên dương n
int find_1st_character(int N);//Bài 49: Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n
int reversed_number(int N);//Bài 50: Hãy tìm số đảo ngược của số nguyên dương n
int find_max_character(int N);//Bài 51: Tìm chữ số lớn nhất của số nguyên dương n
int find_min_character(int N);//Bài 52: Tìm chữ số nhỏ nhất của số nguyên dương n
int count_max_character(int N);//Bài 53: Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n
bool is_allcharacter_odd(int N);//Bài 56: Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không
bool is_allcharacter_even(int N);//Bài 57: Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không
bool is_symmetricalnumber(int N);//Bài 59: Hãy kiểm tra số nguyên dương n có phải là số đối xứng hay không
bool is_increasing_number(int N);//Bài 60: Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái sang phải hay không
bool is_decreasing_number(int N);//Bài 61: Hãy kiểm tra các chữ số của số nguyên dương n có giảm dần từ trái sang phải hay không
int greatest_common_divisor(int a, int b);//Bài 62: Cho 2 số nguyên dương a và b. Hãy tìm ước chung lớn nhất của 2 số này
int smallest_common_multiple(int a, int b);