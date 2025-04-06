/** DEVELOPED ON AMD Ryzen 5 Mobile 3550H 16GB DDR4 DRAM AND AMD64/ARM64 ARCHITECTURE */

/**
 * @file   num7.h
 * @author Giovanni Cipriani <giocip7@gmail.com>
 * @date   2025
 * @brief  num7 ISO C++14 Standard 64-BIT LIBRARY, ARBITRARY-PRECISION GENERAL PURPOSE ARITHMETIC-LOGIC DECIMAL CLASS FOR AMD64/ARM64 ARCHITECTURE
 *
 * @see https://github.com/giocip/HEADERONLY_num7
 */

#ifndef num7_h
#define num7_h

#define _CRT_SECURE_NO_WARNINGS //FOR WINDOWS O.S. 
#include <iostream>
#include <string>            
#include <cstring>            //FOR LINUX O.S. #include <cstring> without #include <string> 
#include <math.h>            //FOR LINUX ONLY
#include <cstdint>          //FOR LINUX ONLY
using namespace std;
///////////////////////////////////////////////// num7 NAMESPACE START
namespace num7 {          // STARTING CURLY BRACKET num7 namespace
    //COMMON DATA TYPED
    class NUM;
    int Error = 0; //ERROR HANDLING
    typedef  int32_t i32;
    typedef uint32_t I32;
    typedef  int64_t i64;
    typedef uint64_t I64;

    struct Division {
        char* quotient;
        char* remainder;
    };

    ////////////////////// OPERATOR  FUNCTIONS  ///////////////////////////
    ostream& operator<<(ostream&, NUM);
    istream& operator>>(istream&, NUM&);
    NUM& operator+(i64, NUM& b);
    NUM& operator+(const char* a, NUM& b);
    NUM& operator+(string a, NUM& b);
    NUM& operator-(i64, NUM&);
    NUM& operator-(const char*, NUM&);
    NUM& operator-(string, NUM&);
    NUM& operator*(i64, NUM&);
    NUM& operator*(const char*, NUM&);
    NUM& operator*(string, NUM&);
    NUM& operator/(i64, NUM&);
    NUM& operator/(const char*, NUM&);
    NUM& operator/(string, NUM&);
    NUM& operator%(i64, NUM&);
    NUM& operator%(const char*, NUM&);
    NUM& operator%(string, NUM&);
    NUM& operator^(const char*, NUM&);
    NUM& operator^(string, NUM&);
    NUM& operator^(i64, NUM&);
    int operator>(i64, NUM&);
    int operator>(const char*, NUM&);
    int operator>(string, NUM&);
    int operator>=(i64, NUM&);
    int operator>=(const char*, NUM&);
    int operator>=(string, NUM&);
    int operator<(i64, NUM&);
    int operator<(const char*, NUM&);
    int operator<(string, NUM&);
    int operator<=(i64, NUM&);
    int operator<=(const char*, NUM&);
    int operator<=(string, NUM&);
    int operator==(i64, NUM&);
    int operator==(const char*, NUM&);
    int operator==(string, NUM&);
    int operator!=(i64, NUM&);
    int operator!=(const char*, NUM&);
    int operator!=(string, NUM&);
    NUM& operator++(NUM&, int);
    NUM& operator--(NUM&, int);
    int operator!(NUM&);

    ////////////////////// FUNCTIONS PROTOTYPES ///////////////////////////
    char* addis(const char*, const char*, int check = 1);
    NUM& addf(NUM*, NUM*);
    NUM& addf_signed(NUM*, NUM*);
    char* addfs(const char*, const char*, int check = 1);
    char* bits(const char*, int bin = 1);
    NUM& divf(NUM*, NUM*, i64 dp = 30);
    NUM& divf_signed(NUM*, NUM*, i64 dp = 32);
    char* divfs(const char*, const char*, i64 d = 30, int check = 1);
    Division* divis(const char*, const char*, int check = 1);
    int eq_abs(NUM*, NUM*);
    int eq(NUM*, NUM*);
    char* exp2num(NUM&);
    char* exp2str(const char*);
    char* expEQ(const char*, const char*);
    char* format(NUM, i64 d = 2, char SEP1000 = ',', int SIGN = 0);
    char* format0(NUM&, i64 d = 2);
    char* format_int(NUM&);
    int ge(NUM*, NUM*);
    int gt_abs(NUM*, NUM*);
    int gt(NUM*, NUM*);
    const char* I32tobin(I32);
    I32 I32int(const char*, int base = 10, int check = 1);
    i32 i32int(const char*, int base = 10, int check = 1);
    const char* i32str(i32, int base = 10);
    const char* I32str(I32, int base = 10);
    const char* i64str(i64);
    const char* I64str(I64, int base = 10);
    I64 I64int(const char*, int base = 10);
    i64 i64int(const char*, I64* idx = 0, int base = 10);
    char* I64HEX(I64);
    NUM& I64NUM(I64);
    NUM& i64NUM(i64);
    I64* I128int(const char*);
    I64* I128intx(const char*);
    char* I128str_hex(const char*);
    char* I128str_dec(const char*);
    char* I128str(I64*);
    I64* I128add(I64[], I64[]);
    NUM& I128addis(const char*, const char*);
    char* invfs(const char*, i64 d = 30, int check = 1);
    int is_zero(NUM*);    
    int is_positive(NUM*);
    int is_negative(NUM*);
    int is_even(NUM*);
    int is_odd(NUM*);
    int is_int(NUM*);
    int is_float(NUM*);
    int is_prime(NUM*);
    const char* is_strfmt_exp(const char*);
    const char* is_strfmt_int(const char*);
    const char* is_strfmt_float(const char*);
    int is_strfmt_num(const char*);
    char* lstrip(char*, const char*);
    char* lstripc(char*, const char);
    char* lstripf0(char*);
    char* lower(const char*);
    char* upper(const char*);
    int le(NUM*, NUM*);
    int lt(NUM*, NUM*);
    NUM& mulf(NUM*, NUM*);
    NUM& mulf_signed(NUM* op1, NUM* op2);
    int ne(NUM*, NUM*);
    int not_(NUM*);
    NUM& POW(NUM&, i64);
    NUM& POW(NUM&, i64, i64);
    NUM& POW(NUM&, NUM&, i64);
    NUM& POW_MOD(NUM&, i64, i64);
    NUM& pwrf_signed(NUM*, i64);
    char* rstripf0(char*);
    char* rstrip(char*, const char*);
    char* rstripc(char*, const char);
    bool  run_once();
    char* strip(char*, const char*);
    char* mulis_school(const char*, const char*, int check = 1);
    char* mulis(const char*, const char*, int check = 1);
    char* mulfs(const char*, const char*, int check = 1);
    char* num2exp(const char*);
    int OFI31(const char*);
    int OFI32(const char*);
    int OFI64(const char*);
    int OFI128(const char*);
    int raise(const char*, const char*, int video = 1); //DEFAULT: int video = 1
    int raise_exit(const char*, const char*);
    char* rm_c(char*, const char);
    char** split(const char*, const char*);
    char* str_rev(char*);
    int strfloat_cmp(const char*, const char*);
    int strint_cmp(const char*, const char*);
    char* strip0(char*);
    char* stripf0(char*);
    char* stripi0(char*);
    char* strpads(const char*, i64);
    char* strpads0(i64);
    char* subis(const char*, const char*, int check = 1);
    NUM& subf_signed(NUM*, NUM*);
    NUM& subf(NUM*, NUM*);
    char* subfs(const char*, const char*, int check = 1);
    char* trunks(const char*, i64);
    int error();
    int error_set();
    int error_clear();
    NUM& add(NUM&, NUM&);
    NUM& add(const char*, const char*);
    NUM& add(string, string);
    NUM& add(i64, i64);
    NUM& sub(NUM&, NUM&);
    NUM& sub(const char*, const char*);
    NUM& sub(string, string);
    NUM& sub(i64, i64);
    NUM& mul(NUM&, NUM&);
    NUM& mul(const char*, const char*);
    NUM& mul(string, string);
    NUM& mul(i64, i64);
    NUM& div(NUM&, NUM&, i64 pd = 40);                //DEFAULT pd = 40
    NUM& div(const char*, const char*, i64 pd = 40); //DEFAULT pd = 40
    NUM& div(string, string, i64 pd = 40);          //DEFAULT pd = 40
    NUM& div(i64, i64, i64 pd = 40);               //DEFAULT pd = 40
    NUM& mod(NUM&, NUM&);
    NUM& mod(const char*, const char*);
    NUM& mod(string, string);
    NUM& mod(i64, i64);
    NUM& pow(NUM&, NUM&);
    NUM& pow(const char*, const char*);
    NUM& pow(string, string);
    NUM& pow(i64, i64);
    NUM& xy(NUM&, NUM&);
    NUM& xy(const char*, const char*);
    NUM& xy(string, string);
    NUM& xy(i64, i64);
    NUM& _10y(NUM&);
    NUM& _10y(const char*);
    NUM& _10y(string);
    NUM& _10y(i64);
    NUM& _2y(NUM&);
    NUM& _2y(const char*);
    NUM& _2y(string);
    NUM& _2y(i64);
    NUM& _ey(NUM&);
    NUM& _ey(const char*);
    NUM& _ey(string);
    NUM& _ey(i64);
    NUM& sqr(NUM&, i64 b = 9);
    NUM& sqr(const char*, i64 b = 9);
    NUM& sqr(string, i64 b = 9);
    NUM& sqr(i64, i64 b = 9);
    NUM& root_i(NUM&, i64 b = 3);
    NUM& root_i(const char*, i64 b = 3);
    NUM& root_i(string, i64 b = 3);
    NUM& root_i(i64, i64 b = 3);
    NUM& x2(NUM&);
    NUM& x2(const char*);
    NUM& x2(string);
    NUM& x2(i64);
    NUM& x3(NUM&);
    NUM& x3(const char*);
    NUM& x3(string);
    NUM& x3(i64);
    NUM& shift(NUM&, NUM&);
    NUM& shift(NUM&, const char*);
    NUM& shift(NUM&, string e);
    NUM& shift(NUM&, i64);
    NUM& xe10(NUM&, NUM&);
    NUM& xe10(NUM&, const char*);
    NUM& xe10(NUM&, string e);
    NUM& xe10(NUM&, i64);
    NUM& _2x(NUM&);
    NUM& _2x(const char*);
    NUM& _2x(string);
    NUM& _2x(i64);
    NUM& _3x(NUM&);
    NUM& _3x(const char*);
    NUM& _3x(string);
    NUM& _3x(i64);
    NUM& inv(NUM&, i64);
    NUM& inv(const char*, i64);
    NUM& inv(string, i64);
    NUM& inv(i64, i64);
    NUM& Abs(NUM);
    NUM& Abs(const char*);
    NUM& Abs(string);
    NUM& Abs(i64);
    NUM& pi();
    NUM& e();
    NUM& spinoff(NUM&, NUM);                              //DEFAULT all = 1
    NUM& spinoff(const char*, const char* all = "1.0");  //DEFAULT all = "1.0"
    NUM& spinoff(string, string all = "1.0");           //DEFAULT all = "1.0"
    NUM& spinoff(i64, i64 all = 1);                    //DEFAULT all = 1
    NUM& spinon(NUM&, NUM);                              //DEFAULT all = 1
    NUM& spinon(const char*, const char* all = "1.0");  //DEFAULT all = "1.0"
    NUM& spinon(string, string all = "1.0");           //DEFAULT all = "1.0"
    NUM& spinon(i64, i64 all = 1);                    //DEFAULT all = 1
    NUM& perf(NUM v_init, NUM v_end, i64 time = 1);
    NUM& fact(i64);
    i64 fact_digits(i64);
    char* FACT(i64 N);
    char* sprint_fields(NUM&);
    int print_fields(NUM&);
    int print_exp(NUM, const char* postfix = "");
    int print(NUM&, const char* postfix = "", int SIGN = 0);
    int print(const char*, NUM&, const char* postfix = "", int SIGN = 0);
    int print(const char*, const char* inter = "", const char* postfix = "");
    int print(string prefix, const char* inter = "", const char* postfix = "");
    int print(int, const char* postfix = "");
    int print(I32 a, const char* postfix = "");
    int print(i64 a, const char* postfix = "");
    int print(I64 a, const char* postfix = "");
    NUM& round(NUM&, i64 d = 2);         //DEFAULT d = 2
    NUM& round(const char*, i64 d = 2); //DEFAULT d = 2
    NUM& round(string, i64 d = 2);     //DEFAULT d = 2
    NUM& round(i64, i64 d = -1);      //DEFAULT d = -1
    NUM& round_bank(NUM&, i64 d = 2);         //DEFAULT d = 2
    NUM& round_bank(const char*, i64 d = 2); //DEFAULT d = 2
    NUM& round_bank(string, i64 d = 2);     //DEFAULT d = 2
    NUM& round_bank(i64, i64 d = -1);      //DEFAULT d = -1
    NUM& round_floor(NUM&, i64 decs = 0);         //DEFAULT decs = 0
    NUM& round_floor(const char*, i64 decs = 0); //DEFAULT decs = 0
    NUM& round_floor(string, i64 decs = 0);     //DEFAULT decs = 0
    NUM& round_floor(i64, i64 decs = 0);       //DEFAULT decs = 0
    NUM& round_ceil(NUM&, i64 decs = 0);         //DEFAULT decs = 0
    NUM& round_ceil(const char*, i64 decs = 0); //DEFAULT decs = 0
    NUM& round_ceil(string, i64 decs = 0);     //DEFAULT decs = 0
    NUM& round_ceil(i64, i64 decs = 0);       //DEFAULT decs = 0
    NUM& inc(NUM&, NUM&);
    NUM& inc(NUM&, const char*);
    NUM& inc(NUM&, string);
    NUM& inc(NUM&, i64 B = 1);
    NUM& dec(NUM&, NUM&);
    NUM& dec(NUM&, const char*);
    NUM& dec(NUM&, string);
    NUM& dec(NUM&, i64 B = 1);
    NUM& clear(NUM&);
    NUM& sum(NUM*, I64);
    NUM& mean(NUM*, I64);
    NUM& min(NUM*, I64);
    NUM& max(NUM*, I64);
    NUM* minmax(NUM*, I64);
    NUM& sumG(NUM&);
    char* hex2bin(const char*);
    NUM& hex2dec(const char*);
    NUM& bin2dec(const char*);
    char* bin2hex(const char*);
    char* dec2bin(const char*, int bin = 1);
    char* dec2hex(const char*, int bin = 0);
    NUM* address(NUM&);
    NUM* id(NUM&);
    NUM& pct(NUM&, NUM);                             //DEFAULT all = 1
    NUM& pct(const char*, const char* all = "1.0"); //DEFAULT all = "1.0"
    NUM& pct(string, string all = "1.0");          //DEFAULT all = "1.0"
    NUM& pct(i64, i64 all = 1);                   //DEFAULT all = 1
    NUM& all(NUM&, NUM&);
    NUM& all(const char*, const char*);
    NUM& all(string, string);
    NUM& all(i64, i64);
    NUM& rate(NUM&, NUM);                             //DEFAULT all = 1
    NUM& rate(const char*, const char* all = "1.0"); //DEFAULT all = "1.0"
    NUM& rate(string, string all = "1.0");          //DEFAULT all = "1.0"
    NUM& rate(i64, i64 all = 1);                   //DEFAULT all = 1
    NUM& pth(NUM&, NUM);                             //DEFAULT all = 1
    NUM& pth(const char*, const char* all = "1.0"); //DEFAULT all = "1.0"
    NUM& pth(string, string all = "1.0");          //DEFAULT all = "1.0"
    NUM& pth(i64, i64 all = 1);                   //DEFAULT all = 1
    NUM& all_th(NUM&, NUM&);
    NUM& all_th(const char*, const char*);
    NUM& all_th(string, string);
    NUM& all_th(i64, i64);
    NUM& rate_th(NUM& pth, NUM);                         //DEFAULT all = 1
    NUM& rate_th(const char*, const char* all = "1.0"); //DEFAULT all = "1.0"
    NUM& rate_th(string, string all = "1.0");          //DEFAULT all = "1.0"
    NUM& rate_th(i64, i64 all = 1);                   //DEFAULT all = 1
    NUM& _10x(NUM&);
    NUM& _10x(const char*);
    NUM& _10x(string);
    NUM& _10x(i64);
    NUM& _100x(NUM&);
    NUM& _100x(const char*);
    NUM& _100x(string);
    NUM& _100x(i64);
    NUM& _1000x(NUM&);
    NUM& _1000x(const char*);
    NUM& _1000x(string);
    NUM& _1000x(i64);
    NUM& _10div(NUM&);
    NUM& _10div(const char*);
    NUM& _10div(string);
    NUM& _10div(i64);
    NUM& _100div(NUM&);
    NUM& _100div(const char*);
    NUM& _100div(string);
    NUM& _100div(i64);
    NUM& _1000div(NUM&);
    NUM& _1000div(const char*);
    NUM& _1000div(string);
    NUM& _1000div(i64);
    NUM& copy(NUM&, NUM&);
    int test_num7();
    NUM& into_sci(NUM&);
    NUM& into_exp(NUM&);
    char* strsub(const char*, i64 first = 0, i64 last = 0);
    int mul_check(NUM, NUM, NUM);
    int add_check(NUM, NUM, NUM);
    int sub_check(NUM, NUM, NUM);
    int div_check(NUM, NUM, NUM);
    char* pwri(I64, I64);
    char* from_double(double);
    ////////////////////// END FUNCTION PROTO   ///////////////////////////

    class NUM {
    public:
        char* C;       /**< UNSIGNED FLOATING-POINT NUMBER COEFFICIENT STRING PART */
        i64   E;      /**< SIGNED INTEGER NUMBER EXPONENT PART */
        i64   S;     /**< SIGN=0 FOR POSITIVE OR SIGN=1 FOR NEGATIVE */
        char* CE;   /**< C._eE EXPONENT */
        i64 len_I; /**< NUMBER COEFFICIENT STRING INTEGER PART LENGTH */
        i64 len_F;/**< NUMBER COEFFICIENT STRING FLOATING-POINT PART LENGTH */

        /////// -2 ///////
        NUM(long int n) {
            static NUM num;
            num = i64NUM(n);
            this->C = num.C; num.C = NULL; this->E = num.E; this->S = num.S; this->CE = num.CE; num.CE = NULL;
            this->len_I = num.len_I; this->len_F = num.len_F;
            return;
        }
        /////// -1 ///////
        NUM(long long int n) {
            static NUM num;
            num = i64NUM(n);
            this->C = num.C; num.C = NULL; this->E = num.E; this->S = num.S; this->CE = num.CE; num.CE = NULL;
            this->len_I = num.len_I; this->len_F = num.len_F;
            return;
        }
        /////// 0 ///////
        NUM(double n) {
            this->S = 0; this->C = NULL; this->E = 0; this->CE = NULL; this->len_I = 0; this->len_F = 0;
            char s[32];
            sprintf(s, "%.15f", n);
            raise("double IS NOT CONSTRUCTION VALID DATA, use NUM.from_double() instead!", s);
            *this = 0;
            return;
        }
        /////// 1 ///////
        NUM(int n = 0) { //CONSTRUCTOR METHOD DEFAULT TO ZERO, int OVERLOADED
            if (!n) {
                char* str = (char*)malloc(8 * sizeof(char)); //NULL, DOT, 'e' //RAM DYNAMIC ALLOCATION
                if (!str) raise_exit("OUT OF RAM MEMORY => NUM CONSTRUCTOR", "0 => ZERO");
                strcpy(str, "0.0e0"); this->CE = str; //ZERO EQUALIZATION => 0.0e0
                this->E = 0; this->S = 0; this->len_I = 1; this->len_F = 1;
                this->C = (char*)malloc(4 * sizeof(char)); //RAM DYNAMIC ALLOCATION
                if (!(this->C)) raise_exit("OUT OF RAM MEMORY => NUM CONSTRUCTOR", "0 => ZERO");
                strcpy(this->C, "0.0");
                return;
            }
            char** p;
            const char* N = i32str(n);
            char* str = num2exp(N);
            if (n < 0) { strcpy(str, str + 1); this->CE = str; this->S = 1; }
            else { this->CE = str; this->S = 0; }
            p = split(str, "e");
            if (!p) { raise("ARGUMENT VALUE, num2exp => NUM CONSTRUCTOR", str); *this = 0; return; }
            this->C = (char*)malloc(((i64)strlen(p[0]) + 32) * sizeof(char)); //RAM DYNAMIC ALLOCATION
            if (!(this->C)) raise_exit("OUT OF RAM MEMORY => NUM CONSTRUCTOR", N);
            strcpy(this->C, p[0]);
            this->E = (i64)atoll(p[1]); free(p[0]);
            p = split(this->C, "."); this->len_I = (i64)strlen(p[0]); this->len_F = (i64)strlen(p[1]);
            free(p[0]);
            return;

            //char s[50]; //INTEGER RESCUE CONSTRUCTOR (SLOWER)
            //strcpy(s, i32str(n)); strcat(s, ".0");
            //NUM num;
            //num = s;
            //this->C = num.C; num.C = NULL; this->E = num.E; this->S = num.S; this->CE = num.CE; num.CE = NULL;
            //this->len_I = num.len_I; this->len_F = num.len_F;
        }
        /////// 2 ///////
        NUM(string s) { //CONSTRUCTOR METHOD, string OVERLOADED
            static NUM num;
            num = s.c_str();
            this->C = num.C; num.C = NULL; this->E = num.E; this->S = num.S; this->CE = num.CE; num.CE = NULL;
            this->len_I = num.len_I; this->len_F = num.len_F;
        }
        /////// 3 ///////
        NUM(const char* s) { //CONSTRUCTOR METHOD
            //cout << "CONSTRUCTOR IN ACTION..." << endl;
            static char** p; p = NULL;
            static char* p2; p2 = NULL;
            if (!s) { raise("ARGUMENT VALUE, NULL => NUM CONSTRUCTOR", "(null)"); *this = 0; return; } //RESET TO ZERO
            char* str = (char*)malloc(((i64)strlen(s) + 32) * sizeof(char));   //NULL, SIGN, DOT, 'e', 'E', 20 DIGIT EXPONENT //RAM DYNAMIC ALLOCATION
            if (!str) raise_exit("OUT OF RAM MEMORY => NUM CONSTRUCTOR", s);
            strcpy(str, s);
            strip(str, " \t\n");    //CLEAR TAB AND SPACE LEFT AND RIGHT
            rm_c(str, '_');        //REMOVE DIGIT SEPARATOR CHARACTER (_)
            if (str[0] == '-') { strcpy(str, str + 1); this->S = 1; } //CHECKING SIGN ...
            else if (str[0] == '+') { strcpy(str, str + 1); this->S = 0; }
            else this->S = 0;
            if (is_strfmt_float(str)) {
                stripf0(str);
                if (this->S && !strcmp(str, "0.0")) { free(str); raise("ARGUMENT VALUE, ZERO CAN NOT BE SIGNED => NUM CONSTRUCTOR", s); *this = 0; return; } //CHECK -0.0
                this->CE = str;
                char* t = num2exp(str);
                strcpy(str, t); free(t);
                p = split(str, "e");
                if (!p) { raise("ARGUMENT VALUE, num2exp => NUM CONSTRUCTOR", str); *this = 0; return; }
                this->C = (char*)malloc(((i64)strlen(p[0]) + 32) * sizeof(char)); //RAM DYNAMIC ALLOCATION
                if (!(this->C)) raise_exit("OUT OF RAM MEMORY => NUM CONSTRUCTOR", s);
                strcpy(C, p[0]);
                if (OFI31(p[1])) { raise("EXPONENT OVERFLOW => NUM CONSTRUCTOR", p[1]); *this = 0; return; }
                this->E = (i64)atoll(p[1]); free(p[0]);
                p = split(this->C, "."); this->len_I = (i64)strlen(p[0]); this->len_F = (i64)strlen(p[1]); free(p[0]);
                return;
            }
            else if (is_strfmt_exp(str)) {
                this->CE = str;
                p2 = lower(str); strcpy(str, p2); free(p2); //'e' or 'E' ALLOWED ("-1e-6" OR "-1E-6")
                p = split(str, "e");
                if (!p) { raise("ARGUMENT VALUE, is_strfmt_exp => NUM CONSTRUCTOR", str); *this = 0; return; }
                this->C = (char*)malloc(((i64)strlen(p[0]) + 32) * sizeof(char)); //RAM DYNAMIC ALLOCATION
                if (!(this->C)) raise_exit("OUT OF RAM MEMORY => NUM CONSTRUCTOR", s);
                strcpy(this->C, p[0]);
                if (OFI31(p[1])) { raise("EXPONENT OVERFLOW => NUM CONSTRUCTOR", p[1]); *this = 0; return; }
                this->E = (i64)atoll(p[1]); free(p[0]);
                stripf0(this->C); //000100.00e-00300 => 100.0e-300
                if (!strcmp(this->C, "0.0")) {
                    if (this->S) { //CHECK FOR INVALID => -0.0
                        free(str); free(this->C);
                        raise("ARGUMENT VALUE, ZERO CAN NOT BE SIGNED => NUM CONSTRUCTOR", s);
                        *this = 0;
                        return;
                    }
                    this->E = 0; //ZERO EQUALIZATION => 0.0e0
                }
                strcpy(this->CE, this->C); strcat(this->CE, "e"); strcat(this->CE, i64str(E));
                p = split(this->C, ".");
                this->len_I = (i64)strlen(p[0]);
                this->len_F = (i64)strlen(p[1]);
                free(p[0]);
                return;
            }
            else { //CONSTRUCTOR ERROR DETECTION - RESET TO ZERO!
                free(str);
                raise("ARGUMENT VALUE => NUM CONSTRUCTOR", s);
                char* str = (char*)malloc(8 * sizeof(char)); //NULL, DOT, 'e' //RAM DYNAMIC ALLOCATION
                if (!str) raise_exit("OUT OF RAM MEMORY => NUM CONSTRUCTOR", "0 => ZERO");
                strcpy(str, "0.0e0"); this->CE = str; //ZERO EQUALIZATION => 0.0e0
                this->E = 0; this->S = 0; this->len_I = 1; this->len_F = 1;
                this->C = (char*)malloc(4 * sizeof(char)); //RAM DYNAMIC ALLOCATION
                if (!(this->C)) raise_exit("OUT OF RAM MEMORY => NUM CONSTRUCTOR", "0 => ZERO");
                strcpy(this->C, "0.0");
                return;
            }
        }
        NUM(const NUM& arg) { //COPY CONSTRUCTOR METHOD USED WHEN A NUM VAR IS BOTH DECLARED AND BY A VARIABLE ASSIGNED. (ALSO BY A FUNCTION OR WHEN PASSING A FUNCTION ARGUMENT)
            //cout << "COPY CONSTRUCTOR METHOD: " << endl; n.print();
            C = (char*)malloc(((i64)strlen(arg.C) + 1) * sizeof(char)); //RAM DYNAMIC ALLOCATION
            if (!C) raise_exit("OUT OF RAM MEMORY => NUM COPY CONSTRUCTOR", arg.CE);
            CE = (char*)malloc(((i64)strlen(arg.CE) + 1) * sizeof(char)); //RAM DYNAMIC ALLOCATION
            if (!CE) raise_exit("OUT OF RAM MEMORY => NUM COPY CONSTRUCTOR", arg.CE);

            strcpy(C, arg.C); strcpy(CE, arg.CE);  //1=NULL
            S = arg.S; E = arg.E; len_I = arg.len_I; len_F = arg.len_F;
        }
        ~NUM() {
            free(C); free(CE); this->C = NULL; this->CE = NULL;
            //cout << "DESTRUCTION ENDED!" << endl;
        }  //DESTRUCTOR METHOD

          ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
         //////////////////////////////////////////////// NUM IN-LINE OPERATOR OVERLOADING /////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        /// NUM IN-LINE /// ASSIGNMENT ALLOWS RIGHT OPERAND TO BE NUM, CODE: NUM a, b("3.14"); a = b; print("a = ", a, "  b = "); print(b, "\n"); //a = 3.14  b = 3.14
        NUM& operator=(NUM& b) {
            if (this == &b) return *this;
            free(C); free(CE); //FREE OLD RAM MEMORY
            this->C = (char*)malloc(((i64)strlen(b.C) + 1) * sizeof(char)); //RAM DYNAMIC ALLOCATION
            if (!C) raise_exit("OUT OF RAM MEMORY => NUM operator=", b.sprint_fields());
            this->CE = (char*)malloc(((i64)strlen(b.CE) + 1) * sizeof(char)); //RAM DYNAMIC ALLOCATION
            if (!CE) raise_exit("OUT OF RAM MEMORY => NUM operator=", b.sprint_fields());

            strcpy(this->C, b.C); this->E = b.E; this->S = b.S; strcpy(this->CE, b.CE);//strcpy C CE
            this->len_I = b.len_I; this->len_F = b.len_F;
            return *this;
        }
        /// NUM IN-LINE /// ASSIGNMENT ALLOWS RIGHT OPERAND TO BE int, CODE: NUM a; a = -1234567890; print("a = ", a, "\n"); //a = -1234567890.0
        NUM& operator=(int b) {
            static char s[16];
            strcpy(s, i32str(b)); strcat(s, ".0");
            NUM B(s); //ALLOCATE NEW RAM MEMORY
            free(C); free(CE); //FREE OLD RAM MEMORY
            C = CE = NULL;
            this->C = B.C; this->E = B.E; this->S = B.S; this->CE = B.CE; this->len_I = B.len_I; this->len_F = B.len_F;
            B.C = NULL; B.CE = NULL; //FREE NEW RAM MEMORY DESTRUCTOR
            return *this;
        }
        /// NUM IN-LINE /// ASSIGNMENT ALLOWS RIGHT OPERAND TO BE i64, CODE: NUM a; a = -9223372036854775807 - 1; print("a = ", a, "\n"); //a = -9223372036854775808.0
        NUM& operator=(i64 b) {
            static char s[32];
            strcpy(s, i64str(b)); strcat(s, ".0");
            NUM B(s); //ALLOCATE NEW RAM MEMORY
            free(C); free(CE); //FREE OLD RAM MEMORY
            C = CE = NULL;
            this->C = B.C; this->E = B.E; this->S = B.S; this->CE = B.CE; this->len_I = B.len_I; this->len_F = B.len_F;
            B.C = NULL; B.CE = NULL; //FREE NEW RAM MEMORY DESTRUCTOR
            return *this;
        }
        /// NUM IN-LINE /// ASSIGNMENT ALLOWS RIGHT OPERAND TO BE STRING, CODE: NUM a; a = "-1234567890.0"; print("a = ", a, "\n"); //a = -1234567890.0
        NUM& operator=(const char* b) {
            NUM B(b); //ALLOCATE NEW RAM MEMORY
            free(C); free(CE); //FREE OLD RAM MEMORY
            C = CE = NULL;
            this->C = B.C; this->E = B.E; this->S = B.S; this->CE = B.CE; this->len_I = B.len_I; this->len_F = B.len_F;
            B.C = NULL; B.CE = NULL; //FREE NEW RAM MEMORY DESTRUCTOR
            return *this;
        }
        /// NUM IN-LINE /// ASSIGNMENT ALLOWS RIGHT OPERAND TO BE string, CODE: NUM a; a = string("-1234567890.0"); print("a = ", a, "\n"); //a = -1234567890.0
        NUM& operator=(string b) {
            NUM B(b); //ALLOCATE NEW RAM MEMORY
            free(C); free(CE); //FREE OLD RAM MEMORY
            C = CE = NULL;
            this->C = B.C; this->E = B.E; this->S = B.S; this->CE = B.CE; this->len_I = B.len_I; this->len_F = B.len_F;
            B.C = NULL; B.CE = NULL; //FREE NEW RAM MEMORY DESTRUCTOR
            return *this;
        }
        /// NUM IN-LINE /// BOOLEAN EVALUATION, CODE: NUM a = 0; print(a ? "true" : "false", "\n"); //false
        explicit operator bool() const {
            return strcmp(this->C, "0.0") ? 1 : 0;
        }
        /// NUM IN-LINE /// UNARY OPERATOR PLUS (+), CODE: NUM a; a = 3; print("a = ", +a, "\n"); //a = 3.0
        NUM& operator+() {
            return *this;
        }
        /// NUM IN-LINE /// UNARY PRE-INCREMENT (++), CODE: NUM a; a = 3; print("a = ", ++a, "\n"); //a = 4.0
        NUM& operator++() {
            return *this = *this + 1;
        }
        /// NUM IN-LINE /// UNARY OPERATOR MINUS (-), CODE: NUM a; a = 3; print("a = ", -a, "\n"); //a = -3.0
        NUM& operator-() {
            this->S ? this->S = 0 : this->S = 1;
            return *this;
        }
        /// NUM IN-LINE /// UNARY PRE-DECREMENT (--), CODE: NUM a; a = 3; print("a = ", --a, "\n"); //a = 2.0
        NUM& operator--() {
            return *this = *this - 1;
        }
        /// NUM IN-LINE /// EQUALITY (==), CODE: NUM a(2), b(add("1.9", "0.1")); print(a == b, "\n"); //1 (true)
        int operator==(NUM& b) {
            return eq(this, &b);
        }
        /// NUM IN-LINE /// EQUALITY (==), CODE: NUM a(1); a++; print(a == "2.0", "\n"); //1 (true)
        int operator==(const char* b) {
            NUM B(b);
            return eq(this, &B);
        }
        /// NUM IN-LINE /// EQUALITY (==), CODE: NUM a(1); a++; print(a == string("2.0"), "\n"); //1 (true)
        int operator==(string b) {
            NUM B(b.c_str());
            return eq(this, &B);
        }
        /// NUM IN-LINE /// EQUALITY (==), CODE: NUM a(1); a++; print(a == 2, "\n"); //1 (true)
        int operator==(i64 b) {
            NUM B(b);
            return eq(this, &B);
        }
        /// NUM IN-LINE /// NOT EQUALITY, CODE: NUM a(-2), b(add("-1.9", "-0.1")); print(a != b, "\n"); //0 (false)
        int operator!=(NUM& b) {
            return ne(this, &b);
        }
        /// NUM IN-LINE /// NOT EQUALITY, CODE: NUM a("2.1"), b(add("2.0", "0.1")); print(a != b, "\n"); //0 (false)
        int operator!=(const char* b) {
            NUM B(b);
            return ne(this, &B);
        }
        /// NUM IN-LINE /// NOT EQUALITY, CODE: NUM a(2); string b("2.1"); print(a != b, "\n"); //1 (true)
        int operator!=(string b) {
            NUM B(b);
            return ne(this, &B);
        }
        /// NUM IN-LINE /// NOT EQUALITY, CODE: NUM a(2); i64 b(3); print(a != b, "\n"); //1 (true)
        int operator!=(i64 b) {
            NUM B(b);
            return ne(this, &B);
        }
        /// NUM IN-LINE /// GREATER THAN, CODE: NUM a(-2), b(add("-1.9", "-0.2")); print(a > b, "\n"); //1 (true)
        int operator>(NUM& b) {
            return gt(this, &b);
        }
        /// NUM IN-LINE /// GREATER THAN, CODE: NUM a(-2); print(a > "-2.1", "\n"); //1 (true)
        int operator>(const char* b) {
            NUM B(b);
            return gt(this, &B);
        }
        /// NUM IN-LINE /// GREATER THAN, CODE: NUM a(-2); print(a > string("-2.1"), "\n"); //1 (true)
        int operator>(string b) {
            NUM B(b);
            return gt(this, &B);
        }
        /// NUM IN-LINE /// GREATER THAN, CODE: NUM a(-2); print(a > -3, "\n"); //1 (true)
        int operator>(i64 b) {
            NUM B(b);
            return gt(this, &B);
        }
        /// NUM IN-LINE /// LESS OR EQUAL THAN, CODE: NUM a(-2), b(sub("-1.9", "-0.2")); print(a <= b, "\n"); //1 (true)
        int operator<=(NUM& b) {
            return le(this, &b);
        }
        /// NUM IN-LINE /// LESS OR EQUAL THAN, CODE: NUM a(-2); print(a <= "2.0", "\n"); //1 (true)
        int operator<=(const char* b) {
            NUM B(b);
            return le(this, &B);
        }
        /// NUM IN-LINE /// LESS OR EQUAL THAN, CODE: NUM a(-2); print(a <= string("-2.1"), "\n"); //0 (false)
        int operator<=(string b) {
            NUM B(b);
            return le(this, &B);
        }
        /// NUM IN-LINE /// LESS OR EQUAL THAN, CODE: NUM a(-2); print(a <= -3, "\n"); //0 (false)
        int operator<=(i64 b) {
            NUM B(b);
            return le(this, &B);
        }
        /// NUM IN-LINE /// LESS THAN, CODE: NUM a("-2.1"), b(sub("-1.9", "-0.2")); print(a < b, "\n"); //1 (true)
        int operator<(NUM& b) {
            return lt(this, &b);
        }
        /// NUM IN-LINE /// LESS THAN, CODE: NUM a("-2.1"); print(a < "2.09", "\n"); //1 (true)
        int operator<(const char* b) {
            NUM B(b);
            return lt(this, &B);
        }
        /// NUM IN-LINE /// LESS THAN, CODE: NUM a("-2.1"); print(a < string("-2.9"), "\n"); //0 (false)
        int operator<(string b) {
            NUM B(b);
            return lt(this, &B);
        }
        /// NUM IN-LINE /// LESS THAN, CODE: NUM a("-2.1"); print(a < -3, "\n"); //0 (false)
        int operator<(i64 b) {
            NUM B(b);
            return lt(this, &B);
        }
        /// NUM IN-LINE /// GREATER OR EQUAL THAN, CODE: NUM a(-2), b(sub("-1.9", "-0.2")); print(a >= b, "\n"); //0 (false)
        int operator>=(NUM& b) {
            return ge(this, &b);
        }
        /// NUM IN-LINE /// GREATER OR EQUAL THAN, CODE: NUM a(-2); print(a >= "3.0", "\n"); //0 (false)
        int operator>=(const char* b) {
            NUM B(b);
            return ge(this, &B);
        }
        /// NUM IN-LINE /// GREATER OR EQUAL THAN, CODE: NUM a("-2.0001"); print(a >= string("-2.0009"), "\n"); //1 (true)
        int operator>=(string b) {
            NUM B(b);
            return ge(this, &B);
        }
        /// NUM IN-LINE /// GREATER OR EQUAL THAN, CODE: NUM a("-2.9999999999999999999"); print(a >= -3, "\n"); //1 (true)
        int operator>=(i64 b) {
            NUM B(b);
            return ge(this, &B);
        }
        /// NUM IN-LINE /// ADDITION, CODE: NUM a("3.0"), b("3.14"), sum = a + b; print(sum, "\n"); //6.14
        NUM& operator+(NUM& b) {
            static NUM SUM;
            if (!strcmp(this->C, "0.0")) return SUM = b;
            if (!strcmp(b.C, "0.0"))     return SUM = *this;
            return SUM = addf_signed(this, &b);
        }
        /// NUM IN-LINE /// ADDITION, CODE: NUM a("3.0"); const char* b("3.14"); NUM sum = a + b; print(sum, "\n"); //6.14
        NUM& operator+(const char* b) {
            static NUM SUM;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return SUM = B;
            if (!strcmp(B.C, "0.0"))     return SUM = *this;
            return addf_signed(this, &B);
        }
        /// NUM IN-LINE /// ADDITION, CODE: NUM a("3.0"); string b("3.14"); NUM sum = a + b; print(sum, "\n"); //6.14
        NUM& operator+(string b) {
            static NUM SUM;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return SUM = B;
            if (!strcmp(B.C, "0.0"))     return SUM = *this;
            return addf_signed(this, &B);
        }
        /// NUM IN-LINE /// ADDITION, CODE: NUM a("3.14"); i64 b(3); NUM sum = a + b; print(sum, "\n"); //6.14
        NUM& operator+(i64 b) {
            static NUM SUM;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return SUM = B;
            if (!b)                      return SUM = *this;
            return addf_signed(this, &B);
        }
        /// NUM IN-LINE /// ADDITION AND ASSIGNMENT, CODE: NUM a("3.14"), b("3.06"); a += b; print(a, "\n"); //6.2
        NUM& operator+=(NUM& b) {
            NUM a(*this);
            return *this = a + b;
        }
        /// NUM IN-LINE /// ADDITION AND ASSIGNMENT, CODE: NUM a("3.14"); a += "3.06"; print(a, "\n"); //6.2
        NUM& operator+=(const char* b) {
            NUM a(*this), B(b);
            return *this = a + B;
        }
        /// NUM IN-LINE /// ADDITION AND ASSIGNMENT, CODE: NUM a("3.14"); a += string("3.06"); print(a, "\n"); //6.2
        NUM& operator+=(string b) {
            NUM a(*this), B(b);
            return *this = a + B;
        }
        /// NUM IN-LINE /// ADDITION AND ASSIGNMENT, CODE: NUM a("3.14"); a += 3; print(a, "\n"); //6.14
        NUM& operator+=(i64 b) {
            NUM a(*this), B(b);
            return *this = a + B;
        }
        /// NUM IN-LINE /// SUBTRACTION, CODE: NUM a("3.0"), b("3.14"), dif = a - b; print(dif, "\n"); //-0.14
        NUM& operator-(NUM& b) {
            static NUM DIF;
            if (!*this) { if (strcmp(b.C, "0.0")) b.S = b.S ? 0 : 1; return DIF = b; } //FLIPPED SIGN (OPPOSED) -0.0 NOT ALLOWED!
            if (!b) { return DIF = *this; }
            return subf_signed(this, &b);
        }
        /// NUM IN-LINE /// SUBTRACTION, CODE: NUM a("3.0"), dif = a - "3.14"; print(dif, "\n"); //-0.14
        NUM& operator-(const char* b) {
            static NUM DIF;
            NUM B(b);
            if (!*this) { if (strcmp(B.C, "0.0")) B.S = B.S ? 0 : 1; return DIF = B; } //FLIPPED SIGN (OPPOSED) -0.0 NOT ALLOWED!
            if (!B) { return DIF = *this; }
            return subf_signed(this, &B);
        }
        /// NUM IN-LINE /// SUBTRACTION, CODE: NUM a("3.0"), dif = a - string("3.14"); print(dif, "\n"); //-0.14
        NUM& operator-(string b) {
            static NUM DIF;
            NUM B(b);
            if (!*this) { if (strcmp(B.C, "0.0")) B.S = B.S ? 0 : 1; return DIF = B; } //FLIPPED SIGN (OPPOSED) -0.0 NOT ALLOWED!
            if (!B) { return DIF = *this; }
            return subf_signed(this, &B);
        }
        /// NUM IN-LINE /// SUBTRACTION, CODE: NUM a("3.0"), dif = a - 3; print(dif, "\n"); //0.0
        NUM& operator-(i64 b) {
            static NUM DIF;
            NUM B(b);
            if (!*this) { if (strcmp(B.C, "0.0")) B.S = B.S ? 0 : 1; return DIF = B; } //FLIPPED SIGN (OPPOSED) -0.0 NOT ALLOWED!
            if (!b) { return DIF = *this; }
            return subf_signed(this, &B);
        }
        /// NUM IN-LINE /// SUBTRACTION AND ASSIGNMENT, CODE: NUM a("3.14"), b("3.06"); a -= b; print(a, "\n"); //0.08
        NUM& operator-=(NUM& b) {
            NUM a(*this);
            return *this = a - b;
        }
        /// NUM IN-LINE /// SUBTRACTION AND ASSIGNMENT, CODE: NUM a("3.14"; a -= "3.06"; print(a, "\n"); //0.08
        NUM& operator-=(const char* b) {
            NUM a(*this), B(b);
            return *this = a - B;
        }
        /// NUM IN-LINE /// SUBTRACTION AND ASSIGNMENT, CODE: NUM a("3.14"); a -= string("3.06"); print(a, "\n"); //0.08
        NUM& operator-=(string b) {
            NUM a(*this), B(b);
            return *this = a - B;
        }
        /// NUM IN-LINE /// SUBTRACTION AND ASSIGNMENT, CODE: NUM a("3.14"); a -= 3; print(a, "\n"); //0.14
        NUM& operator-=(i64 b) {
            NUM a(*this), B(b);
            return *this = a - B;
        }
        /// NUM IN-LINE /// MULTIPLICATION, CODE: NUM a("3.14"), b("2.71"), pro = a * b; print(pro, "\n"); //8.5094
        NUM& operator*(NUM& b) {
            static NUM ZERO, pro;
            if (!strcmp(this->C, "0.0")) return ZERO;
            if (!strcmp(b.C, "0.0"))     return ZERO;
            return pro = mulf_signed(this, &b);
        }
        /// NUM IN-LINE /// MULTIPLICATION, CODE: NUM a("3.14"), pro = a * "2.71"; print(pro, "\n"); //8.5094
        NUM& operator*(const char* b) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO;
            if (!strcmp(B.C, "0.0"))     return ZERO;
            return mulf_signed(this, &B);
        }
        /// NUM IN-LINE /// MULTIPLICATION, CODE: NUM a("3.14"), pro = a * string("2.71"); print(pro, "\n"); //8.5094
        NUM& operator*(string b) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO;
            if (!strcmp(B.C, "0.0"))     return ZERO;
            return mulf_signed(this, &B);
        }
        /// NUM IN-LINE /// MULTIPLICATION, CODE: NUM a("-3.14"), pro = a * -4; print(pro, "\n"); //12.56
        NUM& operator*(i64 b) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO;
            if (!b)                      return ZERO;
            return mulf_signed(this, &B);
        }
        /// NUM IN-LINE /// MULTIPLICATION AND ASSIGNMENT, CODE: NUM a("-3.14"), b("-2.71"); a *= b; print(a, "\n"); //8.5094 
        NUM& operator*=(NUM& b) {
            NUM a(*this);
            return *this = a * b;
        }
        /// NUM IN-LINE /// MULTIPLICATION AND ASSIGNMENT, CODE: NUM a("-3.14"); a *= "2.71"; print(a, "\n"); //-8.5094 
        NUM& operator*=(const char* b) {
            NUM a(*this), B(b);
            return *this = a * B;
        }
        /// NUM IN-LINE /// MULTIPLICATION AND ASSIGNMENT, CODE: NUM a("+3.14"); a *= string("-2.71"); print(a, "\n"); //-8.5094
        NUM& operator*=(string b) {
            NUM a(*this), B(b);
            return *this = a * B;
        }
        /// NUM IN-LINE /// MULTIPLICATION AND ASSIGNMENT, CODE: NUM a("+3.14"); a *= -2; print(a, "\n"); //-6.28
        NUM& operator*=(i64 b) {
            NUM a(*this), B(b);
            return *this = a * B;
        }
        /// NUM IN-LINE /// DIVISION, CODE: NUM a("3.14"), b("2.71"), quo = a / b; print(quo, "\n"); //1.15867158671586715867158671586715
        NUM& operator/(NUM& b) {
            static NUM ZERO;
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!strcmp(b.C, "0.0")) {
                raise("DIVISION BY ZERO => operator/", b.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return divf_signed(this, &b);
        }
        /// NUM IN-LINE /// DIVISION, CODE: NUM a("3.14"), quo = a / "2.71" ; print(quo.round(), "\n"); //1.16
        NUM& operator/(const char* b) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!strcmp(B.C, "0.0")) {
                raise("DIVISION BY ZERO => operator/", B.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return divf_signed(this, &B);
        }
        /// NUM IN-LINE /// DIVISION, CODE: NUM a("-3.14"), quo = a / string("2.71") ; print(quo.round(), "\n"); //-1.16
        NUM& operator/(string b) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!strcmp(B.C, "0.0")) {
                raise("DIVISION BY ZERO => operator/", B.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return divf_signed(this, &B);
        }
        /// NUM IN-LINE /// DIVISION, CODE: NUM a("-3.14"), quo = a / -2; print(quo.round(), "\n"); //1.57
        NUM& operator/(i64 b) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!b) {
                raise("DIVISION BY ZERO => operator/", B.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return divf_signed(this, &B);
        }
        /// NUM IN-LINE /// DIVISION AND ASSIGNMENT, CODE: NUM a("3.14"), b("-8.0"); a /= b; print(a, "\n"); //-0.3925
        NUM& operator/=(NUM& b) {
            NUM a(*this);
            return *this = a / b;
        }
        /// NUM IN-LINE /// DIVISION AND ASSIGNMENT, CODE: NUM a("-3.14"); a /= "-8.0"; print(a, "\n"); //0.3925
        NUM& operator/=(const char* b) {
            NUM a(*this), B(b);
            return *this = a / B;
        }
        /// NUM IN-LINE /// DIVISION AND ASSIGNMENT, CODE: NUM a("-3.14"); a /= string("8.0"); print(a, "\n"); //-0.3925
        NUM& operator/=(string b) {
            NUM a(*this), B(b);
            return *this = a / B;
        }
        /// NUM IN-LINE /// DIVISION AND ASSIGNMENT, CODE: NUM a("+3.14"); a /= +8; print(a, "\n"); //0.3925
        NUM& operator/=(i64 b) {
            NUM a(*this), B(b);
            return *this = a / B;
        }
        /// NUM IN-LINE /// MODULUS, CODE: NUM a("3.14"), b("2.71"), rem = a % b; print(rem, "\n"); //0.43
        NUM& operator%(NUM& b) {
            static NUM ZERO;
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!strcmp(b.C, "0.0")) {
                raise("DIVISION BY ZERO => operator%", b.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return num7::mod(*this, b);
        }
        /// NUM IN-LINE /// MODULUS, CODE: NUM a("3.14"), rem = a % "-3.00"; print(rem, "\n"); //0.14
        NUM& operator%(const char* b) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!strcmp(B.C, "0.0")) {
                raise("DIVISION BY ZERO => operator%", B.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return num7::mod(*this, B);
        }
        /// NUM IN-LINE /// MODULUS, CODE: NUM a("-3.14"), rem = a % string("-3.00"); print(rem, "\n"); //-0.14
        NUM& operator%(string b) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!strcmp(B.C, "0.0")) {
                raise("DIVISION BY ZERO => operator%", B.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return num7::mod(*this, B);
        }
        /// NUM IN-LINE /// MODULUS, CODE: NUM a("-11.00"), rem = a % 3; print(rem, "\n"); //-2.0
        NUM& operator%(i64 b) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!b) {
                raise("DIVISION BY ZERO => operator%", B.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return num7::mod(*this, B);
        }
        /// NUM IN-LINE /// MODULUS AND ASSIGNMENT, CODE: NUM a("3.14"), b("-8.0"); a %= b; print(a, "\n"); //3.14
        NUM& operator%=(NUM& b) {
            NUM a(*this);
            return *this = a % b;
        }
        /// NUM IN-LINE /// MODULUS AND ASSIGNMENT, CODE: NUM a("13.14"); a %= "-8.0"; print(a, "\n"); //5.14
        NUM& operator%=(const char* b) {
            NUM a(*this), B(b);
            return *this = a % B;
        }
        /// NUM IN-LINE /// MODULUS AND ASSIGNMENT, CODE: NUM a("-13.14"); a %= string("-8.0"); print(a, "\n"); //-5.14
        NUM& operator%=(string b) {
            NUM a(*this), B(b);
            return *this = a % B;
        }
        /// NUM IN-LINE /// MODULUS AND ASSIGNMENT, CODE: NUM a("-25.00"); a %= 8; print(a, "\n"); //-1.0
        NUM& operator%=(i64 b) {
            NUM a(*this), B(b);
            return *this = a % B;
        }
        /// NUM IN-LINE /// POWER, CODE: NUM a(2), b(128), power =  a ^ b; print(power, "\n"); //340282366920938463463374607431768211456.0
        NUM& operator^(NUM& e) {
            if (!e.is_integer()) { raise("EXPONENT, MUST BE INTEGER VALUE => operator^ ", e.sprint_fields()); return *this; }
            return pwrf_signed(this, e.to_i64());
        }
        /// NUM IN-LINE /// POWER, CODE: NUM a(2), power = a ^ "256.0"; print(power, "\n"); //115792089237316195423570985008687907853269984665640564039457584007913129639936.0
        NUM& operator^(const char* e) {
            NUM E(e);
            if (!E.is_integer()) { raise("EXPONENT, MUST BE INTEGER VALUE => operator^ ", E.sprint_fields()); return *this; }
            return pwrf_signed(this, E.to_i64());
        }
        /// NUM IN-LINE /// POWER, CODE: NUM a(2), power = a ^ string("512.0"); print(power, "\n"); //13407807929942597099574024998205846127479365820592393377723561443721764030073546976801874298166903427690031858186486050853753882811946569946433649006084096.0
        NUM& operator^(string e) {
            NUM E(e);
            if (!E.is_integer()) { raise("EXPONENT, MUST BE INTEGER VALUE => operator^ ", E.sprint_fields()); return *this; }
            return pwrf_signed(this, E.to_i64());
        }
        /// NUM IN-LINE /// POWER, CODE: NUM a(-2), power = a ^ -5; print(power, "\n"); //-0.03125
        NUM& operator^(i64 e) {
            return pwrf_signed(this, e);
        }
        /// NUM IN-LINE /// POWER AND ASSIGNMENT, CODE: NUM a("25.00"), b(-8); a ^= b; print(a, "\n"); //0.0000000000065536
        NUM& operator^=(NUM& e) {
            return *this = *this ^ e;
        }
        /// NUM IN-LINE /// POWER AND ASSIGNMENT, CODE: NUM a("25.00"), b(-8); a ^= b; print(a, "\n"); //0.0000000000065536
        NUM& operator^=(const char* e) {
            return *this = *this ^ e;
        }
        /// NUM IN-LINE /// POWER AND ASSIGNMENT, CODE: NUM a("25.00"); a ^= string("-8.0"); print(a, "\n"); //0.0000000000065536
        NUM& operator^=(string e) {
            return *this = *this ^ e;
        }
        /// NUM IN-LINE /// POWER AND ASSIGNMENT, CODE: NUM a("-25.00"); a ^= 8; print(a, "\n"); //152587890625.0
        NUM& operator^=(i64 e) {
            return *this = *this ^ e;
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       //////////////////////////////////////////// NUM IN-LINE HELPER FUNCTIONS /////////////////////////////////////////////////
      ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      /// NUM IN-LINE /// RETURN OBJECT *this COPIED ON b, CODE: NUM a("-3.14"), b("2.71"); print(b, " => "); a.copy(b); print(b, "\n"); //2.71 => -3.14
        NUM& copy(NUM& b) {
            return b = *this;
        }
        /// NUM IN-LINE /// RETURN OBJECT ADDRESS LIKE address(), CODE: NUM a(2 + 3); NUM* ap = a.id(); print(*ap, "\n"); //5.0
        NUM* id() {
            return this;
        }
        /// NUM IN-LINE /// RETURN OBJECT ADDRESS LIKE id(), CODE: NUM a(2 + 3); NUM* ap = a.address(); print(*ap, "\n"); //5.0
        NUM* address() {
            return this;
        }
        /// NUM IN-LINE /// NEED: free(p[0]) (C_I => p[0]) RETURN COEFFICIENT INTEGER PART OF NUM, CODE: NUM a("5.123"); char** p = a.I_(); a.print_fields(); print(p[0], "\n"); free(p[0]); //5
        char** I_() {
            return split(C, ".");;
        }
        /// NUM IN-LINE /// NEED: free(p[0]) (C_F => p[1]) RETURN COEFFICIENT FLOATING-POINT PART OF NUM, CODE: NUM a("5.123"); char** p = a.F_(); a.print_fields(); print(p[1], "\n"); free(p[0]); //123
        char** F_() {
            return split(C, ".");;
        }
        /// NUM IN-LINE /// NEED: free() RETURN NUM AS STORED EXPONENTIAL NUMBER STRING (SIGNED), CODE: NUM a("-5.123"); a.print_fields(); char* p = a.get_NUM(); print(p, "\n"); free(p); //-5.123e0
        char* get_NUM() {
            char* s = (char*)malloc(((i64)strlen(CE) + 2) * sizeof(char)); //SIGN + NULL //RAM DYNAMIC ALLOCATION
            if (!s) raise_exit("OUT OF RAM MEMORY => get_NUM", s);
            strcpy(s, S ? "-" : ""); strcat(s, CE);
            return s;
        }
        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO BINARY FORMAT NUMBER STRING (UNSIGNED) (LIKE to_bin(), CODE: NUM a("15.0"); a.print_fields(); char* ram = a.bits(); print(ram, "\n"); free(ram); //1111
        char* bits(int bin = 1) { //DEFAULT ARGs: (int bin = 1)
            return this->to_bin(bin);
        }
        /// NUM IN-LINE /// NEED: free() RETURN NUM STRING FORMATTED WITH SEPARATORS AND FRACTIONAL PART d ZERO PADDED WHEN REQUIRED, CODE: NUM a("1003.2"); char* ram = a.format(); print(ram, "\n"); free(ram); //1,003.20
        char* format(i64 d = 2, char SEP1000 = ',', int SIGN = 0) {
            return num7::format(*this, d, SEP1000, SIGN);
        }
        /// NUM IN-LINE /// NEED: free() RETURN Num STRING NUMBER FORMATTED WITH FRACTIONAL PART d ZERO PADDED WHEN REQUIRED, CODE: NUM a("1003.2"); char* ram = a.format0(); print(ram, "\n"); free(ram); //1003.20
        char* format0(i64 d = 2) {
            return num7::format0(*this, d);
        }
        /// NUM IN-LINE /// NEED: free() RETURN NUM INTEGER STRING WITHOUT .0 IF INTEGER VALUE, CODE: NUM a("3.0"); char *p = a.format_int(); print(p, "\n"); free(p); //3
        char* format_int(void) {
            return this->is_integer() ? this->format0(0) : this->to_string();
        }
        /// NUM IN-LINE /// BOOLEAN FOR ZERO NUMBER VALUE CHECK, CODE: NUM a(0); print(a.is_zero(), " "); a--; print(a.is_zero(), "\n"); //1 0
        int is_zero() {
            return num7::is_zero(this);
        }
        /// NUM IN-LINE /// BOOLEAN FOR NUMBER POSITIVE VALUE CHECK, CODE: NUM a(1); print(a.is_positive(), " "); a--; print(a.is_positive(), "\n"); //1 0
        int is_positive() {
            return num7::is_zero(this) || this->S ? 0 : 1;
        }
        /// NUM IN-LINE /// BOOLEAN FOR NUMBER NEGATIVE VALUE CHECK, CODE: NUM a(-1); print(a.is_negative(), " "); a++; print(a.is_negative(), "\n"); //1 0
        int is_negative() {
            return this->S && !num7::is_zero(this) ? 1 : 0;
        }
        /// NUM IN-LINE /// BOOLEAN FOR NUMBER INTEGER VALUE CHECK, CODE: NUM a("3.000001"); print(a.is_integer(), "\n"); //0
        int is_integer() {
            return num7::is_int(this);
        }
        /// NUM IN-LINE /// BOOLEAN FOR NUMBER FLOATING VALUE CHECK, CODE: NUM a("3.000001"); print(a.is_floating(), "\n"); //1
        int is_floating() {
            return num7::is_float(this);
        }
        /// NUM IN-LINE /// BOOLEAN FOR NUMBER EVEN VALUE CHECK (2.0), CODE: NUM a("4.00"); print(a.is_even(), "\n"); //1
        int is_even() {
            return num7::is_even(this);
        }
        /// NUM IN-LINE /// BOOLEAN FOR NUMBER ODD VALUE CHECK (3.0), CODE: NUM a("5.00"); print(a.is_odd(), "\n"); //1
        int is_odd() {
            return num7::is_odd(this);
        }
        /// NUM IN-LINE /// CHECKER FOR PRIME NUMBERS, CODE: NUM a("257.0"); print(a.is_prime() ? "is prime!" : "is NOT prime.", "\n"); //is prime!
        int is_prime() {
            return num7::is_prime(this);
        }
        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO BINARY FORMAT NUMBER STRING (UNSIGNED), CODE: NUM a("5.00"); char* ram; ram = a.to_bin(); print(ram, "\n"); free(ram); //101
        char* to_bin(int bin = 1) { //DEFAULT ARGs: (int bin = 1)
            if (this->S) { raise("NEGATIVE VALUE => to_bin ", this->sprint_fields()); return NULL; }
            if (this->is_floating()) { raise("VALUE MUST BE INTEGER => to_bin ", this->sprint_fields()); return NULL; }
            char* ram1 = exp2num(*this);
            ram1[strlen(ram1) - 2] = '\0';
            char* ram2 = num7::bits(ram1, bin); free(ram1);
            return ram2;
        }
        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO HEXADECIMAL FORMAT NUMBER STRING (UNSIGNED), CODE: NUM a("250.00"); char* ram; ram = a.to_hex(); print(ram, "\n"); free(ram); //FA
        char* to_hex() {
            if (this->S) { raise("NEGATIVE VALUE => to_hex ", this->sprint_fields()); return NULL; }
            if (this->is_floating()) { raise("VALUE MUST BE INTEGER => to_bin ", this->sprint_fields()); return NULL; }
            char* ram1 = exp2num(*this);
            ram1[strlen(ram1) - 2] = '\0';
            char* ram2 = num7::bits(ram1, false); free(ram1);
            return ram2;
        }
        /// NUM IN-LINE /// RETURN SCIENTIFIC NOTATION NUMBER OBJECT, CODE: NUM a("123.0e45"), b("678.0e9"), c = a * b; NUM d = c.into_sci(); d.print_fields(); //S=0 CE=8.3394e58 C=8.3394 E=58 len_I=1 len_F=4 SCIENTIFIC NOTATION
        NUM& into_sci() {
            static NUM N;
            char* n = exp2num(*this);
            N = n; free(n);
            return N;
        }
        /// NUM IN-LINE /// NORMALIZE OBJECT ITSELF INTO SCIENTIFIC NOTATION NUMBER , CODE: NUM a("123.0e45"), b("678.0e9"), c = a * b; c.into_exp(); c.print_fields(); //S=0 CE=8.3394e58 C=8.3394 E=58 len_I=1 len_F=4 SCIENTIFIC NOTATION
        NUM& into_exp() {
            char* n = exp2num(*this);
            *this = n; free(n);
            return *this;
        }
        /// NUM IN-LINE /// CONVERT NUM TO i32 (SIGNED 32-BIT INTEGER) RANGE BETWEEN -2147483648 TO 2147483647, CODE: NUM a("123.0e3"); int A = a.to_i32(); print(A, "\n"); //123000
        i32 to_i32() {
            static char* p, * ram;
            static i32 L, result;
            NUM MIN("-2147483648.0"), MAX("2147483647.0");
            if (*this < MIN || *this > MAX) {
                raise("VALUE, OUT OF RANGE (-2147483648 +2147483647) => to_i32", this->sprint_fields()); return result = 0;
            }
            ram = exp2num(*this);
            L = (i32)strlen(ram);
            if (strcmp(ram + L - 2, ".0")) { //STRING NUM MUST BE ".0" SUFFIXED
                raise("VALUE, MUST BE INTEGER => to_i32", this->sprint_fields()); return result = 0;
            }
            result = (i32)strtoll(ram, &p, 10); free(ram);
            return result;
        }
        /// NUM IN-LINE /// CONVERT NUM TO i64 (SIGNED 64-BIT INTEGER) RANGE BETWEEN -9223372036854775808 TO 9223372036854775807, CODE: NUM a("123.0e12"); i64 A = a.to_i64(); print(A, "\n"); //123000000000000
        i64 to_i64() {
            static char* p, * ram;
            static i64 L, result;
            NUM MIN("-9223372036854775808.0"), MAX("9223372036854775807.0");
            if (*this < MIN || *this > MAX) {
                raise("VALUE, OUT OF RANGE (-9223372036854775808 +9223372036854775807) => to_i64", this->sprint_fields()); return result = 0;
            }
            ram = exp2num(*this);
            L = (i64)strlen(ram);
            if (strcmp(ram + L - 2, ".0")) { //STRING NUM MUST BE ".0" SUFFIXED
                raise("VALUE, MUST BE INTEGER => to_i64", this->sprint_fields()); return result = 0;
            }
            result = (i64)strtoll(ram, &p, 10); free(ram);
            return result;
        }
        /// NUM IN-LINE /// CONVERT NUM TO I64 (UNSIGNED 64-BIT INTEGER) RANGE BETWEEN 0 TO 18446744073709551615, CODE: NUM a("18446744073709551614.0"); printf("%llu\n", a.to_I64() + 1); //18446744073709551615
        I64 to_I64() {
            static char* ram;
            static I64 L, result;
            NUM MIN("0.0"), MAX("18446744073709551615.0");
            if (*this < MIN || *this > MAX) {
                raise("VALUE, OUT OF RANGE (0-18446744073709551615) => to_I64", this->sprint_fields()); return result = 0;
            }
            ram = exp2num(*this);
            L = (I64)strlen(ram);
            if (strcmp(ram + L - 2, ".0")) { //STRING NUM MUST BE ".0" SUFFIXED
                raise("VALUE, MUST BE INTEGER => to_I64", this->sprint_fields()); return result = 0;
            }
            ram[strlen(ram) - 2] = '\0';
            result = (I64)I64int(ram); free(ram);
            return result;
        }
        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO INTERNAL EXPONENTIAL NOTATION NUMBER STRING, CODE: NUM a("-123.0e-3"); char* ram = a.to_exp(); print(ram, "\n"); free(ram); //-123.0e-3
        char* to_exp() {
            char* ram = (char*)malloc((len_I + len_F + 8) * sizeof(char)); //'.', 'e', '+', '-', 'NULL' //RAM DYNAMIC ALLOCATION
            if (!ram) raise_exit("OUT OF RAM MEMORY => to_exp", this->sprint_fields());
            strcpy(ram, S ? "-" : ""); strcat(ram, this->CE);
            return ram;
        }
        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO SCIENTIFIC NOTATION NUMBER STRING, CODE: NUM a("-123.0e-3"); char* ram = a.to_sci(); print(ram, "\n"); free(ram); //-1.23e-1
        char* to_sci() {
            static char* n;
            n = exp2num(*this);
            NUM N(n); free(n);
            char* ram = (char*)malloc((len_I + len_F + 8) * sizeof(char)); //'.', 'e', '+', '-', 'NULL' //RAM DYNAMIC ALLOCATION
            if (!ram) raise_exit("OUT OF RAM MEMORY => to_sci", this->sprint_fields());
            strcpy(ram, S ? "-" : ""); strcat(ram, N.CE);
            return ram;
        }
        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO STANDARD NOTATION NUMBER STRING (SIGNED), CODE: NUM a("123.0e3"); char* ram = a.to_string(); print(ram, "\n"); free(ram); //123000.0
        char* to_string() {
            static char* ram;
            ram = exp2num(*this);
            return ram;
        }
        /// NUM IN-LINE => CONVERT NUM TO double TYPE (LOSS PRECISION) CODE: printf("%.9f\n", add("0.000000001", "0.000000002").to_double()); //0.000000003
        double to_double() {
            static char* ram;
            static double d;
            char* end;
            ram = exp2num(*this);
            d = strtod(ram, &end);
            free(ram);
            return d;
        }
        /// NUM IN-LINE /// PRINT NUM STANDARD FORMAT, CODE: NUM a("2.0"); a.print("\n"); //2.0
        int print(const char* postfix = "", int SIGN = 0) {
            static int n;
            char* t = exp2num(*this);
            char* s = (char*)malloc((strlen(t) + 1) * sizeof(char)); //RAM DYNAMIC ALLOCATION
            if (!s) raise_exit("OUT OF RAM MEMORY => print", this->sprint_fields());
            strcpy(s, t); free(t);
            if (SIGN) {
                if (this->S && s[0] != '-') { n = printf("-%s%s", s, postfix); free(s); return n; }
                else if (this->S) { n = printf("%s%s", s, postfix); free(s); return n; }
                else if (strcmp(s, "0.0")) { n = printf("+%s%s", s, postfix); free(s); return n; }
                n = printf("%s%s", s, postfix);
            }
            else n = printf("%s%s", s, postfix);
            free(s);
            return n;
        }
        /// NUM IN-LINE /// PRINT NUM EXPONENTIAL FORMAT (SIGNED), CODE: NUM a("-123.0e-3"); a.print_exp("\n"); //-123.0e-3
        int print_exp(const char* postfix = "") {
            return printf("%s", (string(S ? "-" : "") + CE + postfix).c_str());
        }
        /// NUM IN-LINE /// PRINT NUM FIELDS, CODE: NUM a("-123.0e-3"); a.print_fields(); //S=1 CE=123.0e-3 C=123.0 E=-3 len_I=3 len_F=1
        int print_fields() {
            string tot = string("S=") + i64str(S) + string(" CE=") + CE + string(" C=") + C;
            tot += string(" E=") + i64str(E);
            tot += string(" len_I=") + i64str(len_I);
            tot += string(" len_F=") + i64str(len_F);
            return printf("%s\n", tot.c_str());
        }
        /// NUM IN-LINE /// (DEBUG) RETURN STRING NUM STRUCTURE ATTRIBUTES, CODE: NUM a("-123.0e-3"); char* s = a.sprint_fields(); print(s, "\n"); //S=1 CE=123.0e-3 C=123.0 E=-3 len_I=3 len_F=1
        char* sprint_fields() const {
            static char buffer[128];
            sprintf(buffer, "S=%lld CE=%s C=%s E=%lld len_I=%lld len_F=%lld", (long long int)S, CE, C, (long long int)E, (long long int)len_I, (long long int)len_F);
            buffer[127] = '\0'; //STRING TERMINATOR CONSTRAINT
            return buffer;
        }
        /// NUM IN-LINE /// RETURN OBJECT TRUNCATION TO THE SPECIFIED NUMBER DECIMALS (LOSS PRECISION), CODE: NUM a("123.456"); a = a.trunk(2); print(a, "\n"); //123.45
        NUM& trunk(i64 decs = 19) { //DEFAULT ARGs: (decs = 19)
            static NUM T;
            i64 SIGN = this->S;
            char* t0 = exp2str(CE);
            char* t = trunks(t0, decs); free(t0);
            char* ce = (char*)malloc(((i64)strlen(t) + (i64)strlen(i64str(this->E)) + 16) * sizeof(char)); //RAM DYNAMIC ALLOCATION
            if (!ce) raise_exit("OUT OF RAM MEMORY => trunk", this->sprint_fields());
            t0 = num2exp(t);
            strcpy(ce, t0); free(t0);
            T = ce; free(t); free(ce);
            T.S = SIGN;
            T.S = (strcmp(T.C, "0.0") ? T.S : 0);
            return T;
        }
        /// NUM IN-LINE /// RETURN ROUND FLOOR OF THE OBJECT DECIMAL DIGITS TO THE SPECIFIED NUMBER (LOSS PRECISION), CODE: NUM a("123.456"); a = a.round_floor(0); print(a, "\n"); //123.0
        NUM& round_floor(i64 decs = 0) { //DEFAULT ARGs: (decs = 0)
            return trunk(decs);
        }
        /// NUM IN-LINE /// RETURN ROUND CEIL OF THE OBJECT TO THE SPECIFIED DIGIT NUMBER (LOSS PRECISION), CODE: NUM a("123.456"); a = a.round_ceil(0); print(a, "\n"); //124.0
        NUM& round_ceil(i64 decs = 0) {
            static NUM t, t2;
            NUM n_10("10.0");
            //n_10 = (n_10 ^ decs); 
            n_10 = n_10.shift(decs - 1);
            char* ce = exp2str(n_10.CE);
            char* i = invfs(ce, decs < 0 ? -decs : decs); free(ce);
            NUM e(i); free(i);
            ce = exp2str(this->CE);
            char* temp = trunks(ce, decs); free(ce);
            n_10 = temp; free(temp);
            t = addf(&n_10, &e);
            t2 = addf(this, &e);
            t.S = this->S;
            return eq_abs(&t, &t2) ? t2 = *this : t;
        }
        /// NUM IN-LINE /// RETURN STANDARD ROUND OF THE OBJECT DECIMAL DIGITS TO THE SPECIFIED NUMBER (LOSS PRECISION), CODE: NUM a("000123.12345678900"); a.round(5).print("\n"); //123.12346
        NUM& round(i64 d = 2) {
            /**
            *   \brief (COMMON STANDARD) HALF-UP ROUNDING OF A FLOATING-POINT NUM OBJECT
            *   \param  d DECIMALS
            *   \code
            *   RUN-TIME ERROR CHECK: YES
            *   NEED: NONE
            *   CALL: trunk
            *   TIME: [...]
            *   LIMIT: RAM MEMORY
            *
            *   EXAMPLES:
            *       NUM a("000123.12345678900");  a.round(5).print("\n");     //123.12346
            *       NUM a("000123.12345678900");  a.round(0).print("\n");    //123.0
            *       NUM a("-000123.12345678900"); a.round(-2).print("\n");  //-100.0
            *       NUM a("-000123.12345678900"); a.round(-3).print("\n"); //-1000.0
            *   \endcode
            */
            //*this = "-26.005";     //DEBUG
            static NUM T;
            NUM ten("10.0");
            i64 SIGN = this->S;
            T = *this; //OBJECT COPY 
            T.S = 0;  //POSITIVE COMPUTATION...
            //T = T + (ten ^ (-d)) * "0.5";
            T = T + (ten.shift(-d - 1)) * "0.5";
            T = T.trunk(d);
            T.S = SIGN;                          //RESET SIGN
            T.S = strcmp(T.C, "0.0") ? T.S : 0; //RESET SIGN ONLY FOR ZERO
            return T;
        }
        /// NUM IN-LINE /// BANK ROUND OF THE OBJECT DECIMAL DIGITS TO THE SPECIFIED NUMBER (LOSS PRECISION), CODE: NUM a("000123.123450000"); a.round_bank(4).print("\n"); //123.1234
        NUM& round_bank(i64 d = 2) {
            static char* as;
            static char** asp;
            static NUM result;
            //*this = "250.9650"; d = 2;   //TEST CODE - FLOATING POINT (250.965 => 250.96 d=2)
            //*this = "3.255"; d = 2;     //
            //*this = "250.0"; d = -2;   //TEST CODE - INTEGER (250 => 200 d=-2)
            result = *this;             //SAVE THE OBJECT 
            result.S = 0;              //POSITIVE COMPUTING...
            as = exp2num(result);
            asp = split(as, ".");
            if (d > 0 && d >= (i64)strlen(asp[1])) { free(asp[0]); free(as); return result = *this; } //CHECKING DECIMAL PART AND RIGHT LIMIT
            if (d > 0) { //DECIMAL PART ROUNDING HALF TO EVEN
                if (!((asp[1][d - 1] - '0') % 2) && asp[1][d] == '5' && asp[1][d + 1] == '\0') { //75.305=>75.3 (-75.305=>-75.3) SYMMETRIC LOGIC (d=2)
                    free(asp[0]); free(as);                            //1.25=>1.2 (-1.25=>-1.2) (d=1)
                    NUM ten("10.0");                    
                    result -= ten.shift(-d - 1) * "0.5";             //result -= (ten ^ -d) * "0.5"; 
                    result = result.trunk(d);
                    result.S = this->S;                            //RESET ORIGINAL SIGN
                    if (!strcmp(result.C, "0.0")) result.S = 0;   //ZERO WITHOUT MINUS SIGN
                    return result;
                }
            }
            else if (d == 0) { //0.5=>0.0 (-0.5=>0.0)  2.5=>2.0 (-2.5=>-2.0) SYMMETRIC LOGIC (d=0)
                i64 asp0_len = (i64)strlen(asp[0]);
                if (!((asp[0][asp0_len - 1] - '0') % 2) && asp[1][0] == '5' && asp[1][d + 1] == '\0') {
                    free(asp[0]); free(as);
                    result -= "0.5";
                    result = result.trunk(d);
                    result.S = this->S;                          //RESET ORIGINAL SIGN
                    if (!strcmp(result.C, "0.0")) result.S = 0; //ZERO WITHOUT MINUS SIGN
                    return result;
                }
            }
            else { //d < 0  => CHECKING ONLY INTEGERs 
                i64 asp0_len = (i64)strlen(asp[0]);
                if (asp0_len + d < 0) { free(asp[0]); free(as); return result = "0.0"; } 
                if (!strcmp(result.C, "5.0")) { //STARTING LIMIT +-5.0 => 0.0 d=-1
                    strcpy(result.C, "0.0"); result.E = 0; result.S = 0;
                    strcpy(result.CE, "0.0e0"); result.len_I = 1; result.len_F = 1;
                    return result;
                } 
                if ( !strcmp(asp[1], "0") && !((asp[0][asp0_len + d - 1] - '0') % 2) && asp[0][asp0_len + d] == '5' ) {
                    i64 bank = 1, i = asp0_len + d + 1;
                    for ( ; i < asp0_len; i++) if(as[i] != '0') { bank = 0; exit; } //FLAG OFF (SCAN FOR ONLY ZEROs)
                    if (bank) {
                        free(asp[0]); free(as); //250.0=>200.0 (-250.0=>-200.0) (d=-2)   //45.0=>40.0  (-45.0=>-40.0) SYMMETRIC LOGIC (d=-1) 
                        NUM ten("10.0");
                        result -= ten.shift(-d - 1) * "0.5";            //result -= (ten ^ -d) * "0.5"; 
                        result = result.trunk(d);
                        result.S = this->S;                           //RESET ORIGINAL SIGN
                        if (!strcmp(result.C, "0.0")) result.S = 0;  //ZERO WITHOUT MINUS SIGN
                        return result;
                    }
                }
            }
            free(asp[0]); free(as); result = result.round(d); //STANDARD ROUNDING
            result.S = this->S;                              //RESET ORIGINAL SIGN
            if (!strcmp(result.C, "0.0")) result.S = 0;     //ZERO WITHOUT MINUS SIGN
            return result;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE PERCENTAGE OF SPECIFIED RATE, CODE: NUM all("1_000.0"), rate(2); all.pct(rate).round().print("\n"); //20.0
        NUM& pct(NUM& rate) {
            return this->xe10(-2) * rate;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE PERCENTAGE OF SPECIFIED RATE, CODE: NUM all("1_000.0"); all.pct("2.0").round().print("\n"); //20.0
        NUM& pct(const char* rate) {
            return this->xe10(-2) * rate;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE PERCENTAGE OF SPECIFIED RATE, CODE: NUM all("1_000.0"); all.pct(string("2.0")).round().print("\n"); //20.0
        NUM& pct(string rate) {
            return this->xe10(-2) * rate;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE PERCENTAGE OF SPECIFIED RATE, CODE: NUM all("1_000.0"); all.pct(2).round().print("\n"); //20.0
        NUM& pct(i64 rate) {
            return this->xe10(-2) * rate;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: NUM ALL("1_000.0"), pct(20); ALL.rate(pct).print("\n"); //2.0
        NUM& rate(NUM& pct) {
            return 100 / *this * pct;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: NUM ALL("1_000.0"); ALL.rate("20.0").print("\n"); //2.0
        NUM& rate(const char* pct) {
            return 100 / *this * pct;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: NUM ALL("1_000.0"); ALL.rate(string("20.0")).print("\n"); //2.0
        NUM& rate(string pct) {
            return 100 / *this * pct;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: NUM ALL("1_000.0"); ALL.rate(20).print("\n"); //2.0
        NUM& rate(i64 pct) {
            return pct * 100 / *this;
        }
        /// NUM IN-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: NUM pct(20), rate(2); pct.all(rate).print("\n"); //1000.0
        NUM& all(NUM& rate) {
            return this->xe10(2) / rate;
        }
        /// NUM IN-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: NUM pct(20); pct.all("2.0").print("\n"); //1000.0
        NUM& all(const char* rate) {
            return this->xe10(2) / rate;
        }
        /// NUM IN-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: NUM pct(20); pct.all(string("2.0")).print("\n"); //1000.0
        NUM& all(string rate) {
            return this->xe10(2) / rate;
        }
        /// NUM IN-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: NUM pct(20); pct.all(2).print("\n"); //1000.0
        NUM& all(i64 rate) {
            return this->xe10(2) / rate;
        }
        /// NUM IN-LINE /// RETURN THE PERTHOUSAND TO SPECIFIED RATE, CODE: NUM all("10_000.0"), rate(2); all.pth(rate).print("\n"); //20.0
        NUM& pth(NUM& rate) {
            return this->xe10(-3) * rate;
        }
        /// NUM IN-LINE /// RETURN THE PERTHOUSAND TO SPECIFIED RATE, CODE: NUM all("10_000.0"); all.pth("2.0").print("\n"); //20.0
        NUM& pth(const char* rate) {
            return this->xe10(-3) * rate;
        }
        /// NUM IN-LINE /// RETURN THE PERTHOUSAND TO SPECIFIED RATE, CODE: NUM all("10_000.0"); all.pth(string("2.0")).print("\n"); //20.0
        NUM& pth(string rate) {
            return this->xe10(-3) * rate;
        }
        /// NUM IN-LINE /// RETURN THE PERTHOUSAND TO SPECIFIED RATE, CODE: NUM all("10_000.0"); all.pth(2).print("\n"); //20.0
        NUM& pth(i64 rate) {
            return this->xe10(-3) * rate;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE TO SPECIFIED PERTHOUSAND, CODE: NUM all_th(10000), pth(20); all_th.rate_th(pth).print("\n"); //2.0
        NUM& rate_th(NUM& pth) {
            return pth.xe10(3) / *this;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE TO SPECIFIED PERTHOUSAND, CODE: NUM all_th(10000); all_th.rate_th("20.0").print("\n"); //2.0
        NUM& rate_th(const char* pth) {
            return (1 / *this).xe10(3) * pth;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE TO SPECIFIED PERTHOUSAND, CODE: NUM all_th(10000); all_th.rate_th(string("20.0")).print("\n"); //2.0
        NUM& rate_th(string pth) {
            return (1 / *this).xe10(3) * pth;
        }
        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE TO SPECIFIED PERTHOUSAND, CODE: NUM all_th(10000); all_th.rate_th(20).print("\n"); //2.0
        NUM& rate_th(i64 pth) {
            return (1 / *this).xe10(3) * pth;
        }
        /// NUM IN-LINE /// WITH THE PERTHOUSAND RETURN THE ALL TO SPECIFIED RATE, CODE: NUM pth(20), rate_th(2); pth.all_th(rate_th).print("\n"); //10000.0
        NUM& all_th(NUM& rate_th) {
            return this->xe10(3) / rate_th;
        }
        /// NUM IN-LINE /// WITH THE PERTHOUSAND RETURN THE ALL TO SPECIFIED RATE, CODE: NUM pth(20); pth.all_th("2.0").print("\n"); //10000.0
        NUM& all_th(const char* rate_th) {
            return this->xe10(3) / rate_th;
        }
        /// NUM IN-LINE /// WITH THE PERTHOUSAND RETURN THE ALL TO SPECIFIED RATE, CODE: NUM pth(20); pth.all_th(string("2.0")).print("\n"); //10000.0
        NUM& all_th(string rate_th) {
            return this->xe10(3) / rate_th;
        }
        /// NUM IN-LINE /// WITH THE PERTHOUSAND RETURN THE ALL TO SPECIFIED RATE, CODE: NUM pth(20); pth.all_th(2).print("\n"); //10000.0
        NUM& all_th(i64 rate_th) {
            return this->xe10(3) / rate_th;
        }
        /// NUM IN-LINE /// RETURN THE SPIN-ON OF SPECIFIED RATE, CODE: NUM factory_price("44.74"); NUM rate("22.00"); factory_price.spinon(rate).round().print("\n"); //54.58
        NUM& spinon(NUM& rate) {
            return *this * (rate + 100).shift(-2);
        }
        /// NUM IN-LINE /// RETURN THE SPIN-ON OF SPECIFIED RATE, CODE: NUM factory_price("44.74"); factory_price.spinon("22.0").round().print("\n"); //54.58
        NUM& spinon(const char* rate) {
            NUM RATE(rate);
            return *this * (RATE + 100).shift(-2);
        }
        /// NUM IN-LINE /// RETURN THE SPIN-ON OF SPECIFIED RATE, CODE: NUM factory_price("44.74"); factory_price.spinon(string("22.0")).round().print("\n"); //54.58
        NUM& spinon(string rate) {
            NUM RATE(rate);
            return *this * (RATE + 100).shift(-2);
        }
        /// NUM IN-LINE /// RETURN THE SPIN-ON OF SPECIFIED RATE, CODE: NUM factory_price("44.74"); factory_price.spinon(22).round().print("\n"); //54.58
        NUM& spinon(i64 rate) {
            NUM RATE(rate);
            return *this * (RATE + 100).shift(-2);
        }
        /// NUM IN-LINE /// RETURN THE SPIN-OFF OF SPECIFIED RATE, CODE: NUM asus("842.00"), rate("22.0"); asus.spinoff(rate).round().print("\n"); //690.16
        NUM& spinoff(NUM& rate) {
            return *this / (rate + 100).shift(-2);
        }
        /// NUM IN-LINE /// RETURN THE SPIN-OFF OF SPECIFIED RATE, CODE: NUM asus("842.00"); asus.spinoff("22.0").round().print("\n"); //690.16
        NUM& spinoff(const char* RATE) {
            NUM rate(RATE);
            return *this / (rate + 100).shift(-2);
        }
        /// NUM IN-LINE /// RETURN THE SPIN-OFF OF SPECIFIED RATE, CODE: NUM asus("842.00"); asus.spinoff(string("22.0")).round().print("\n"); //690.16
        NUM& spinoff(string RATE) {
            NUM rate(RATE);
            return *this / (rate + 100).shift(-2);
        }
        /// NUM IN-LINE /// RETURN THE SPIN-OFF OF SPECIFIED RATE, CODE: NUM asus("842.00"); asus.spinoff(22).round().print("\n"); //690.16
        NUM& spinoff(i64 RATE) {
            NUM rate(RATE);
            return *this / (rate + 100).shift(-2);
        }
        /// NUM IN-LINE /// RETURN THE INVERSE, CODE: NUM a("10.0"); a.inv().print("\n"); //0.1
        NUM& inv(i64 decs = 32) { //DEFAULT ARGs: (i64 decs = 32) 
            return num7::inv(*this, decs);
        }
        /// NUM IN-LINE /// DOUBLED VALUE => CODE: NUM a("3.14"); a._2x().print("\n"); //6.28
        NUM& _2x() {
            return *this + *this;
        }
        /// NUM IN-LINE /// TRIPLED VALUE => CODE: NUM a("3.14"); a._3x().print("\n"); //9.42
        NUM& _3x() {
            return *this + *this + *this;
        }
        /// NUM IN-LINE /// MULTIPLY FOR TEN, CODE: NUM a(3); a._10y().print("\n"); //30.0
        NUM& _10x() {
            return this->xe10(1);
        }
        /// NUM IN-LINE /// MULTIPLY FOR HUNDRED, CODE: NUM a(3); a._100x().print("\n"); //300.0
        NUM& _100x() {
            return this->xe10(2);
        }
        /// NUM IN-LINE /// MULTIPLY FOR THOUSAND, CODE: NUM a(3); a._1000x().print("\n"); //3000.0
        NUM& _1000x() {
            return this->xe10(3);
        }
        /// NUM IN-LINE /// DIVIDE FOR TEN, CODE: NUM a(3); a._10div().print("\n"); //0.3
        NUM& _10div() {
            return this->xe10(-1);
        }
        /// NUM IN-LINE /// DIVIDE FOR HUNDRED, CODE: NUM a(3); a._100div().print("\n"); //0.03
        NUM& _100div() {
            return this->xe10(-2);
        }
        /// NUM IN-LINE /// DIVIDE FOR THOUSAND, CODE: NUM a(3); a._1000div().print("\n"); //0.003
        NUM& _1000div() {
            return this->xe10(-3);
        }
        /// NUM IN-LINE /// RETURN THE SQUARE, CODE: NUM a("10.0"); a.x2().print("\n"); //100.0
        NUM& x2() {
            return *this * *this;
        }
        /// NUM IN-LINE ///RETURN THE CUBE, CODE: NUM a("10.0"); a.x3().print("\n"); //1000.0
        NUM& x3() {
            return *this * *this * *this;
        }
        /// NUM IN-LINE /// CALCULATOR MODE: POWER => CODE: NUM b("3.141592654"), e("5.0"); b.xy(e).print("\n"); //306.019684985070792201693945033260775421740493024
        NUM& xy(NUM& e) {
            return pwrf_signed(this, e.to_i64());
        }
        /// NUM IN-LINE /// CALCULATOR MODE: POWER => CODE: NUM b("3.141592654"); b.xy("5.0").print("\n"); //306.019684985070792201693945033260775421740493024
        NUM& xy(const char* e) {
            NUM E(e);
            return pwrf_signed(this, E.to_i64());
        }
        /// NUM IN-LINE /// CALCULATOR MODE: POWER => CODE: NUM b("3.141592654"); b.xy(string("5.0")).print("\n"); //306.019684985070792201693945033260775421740493024
        NUM& xy(string e) {
            NUM E(e);
            return pwrf_signed(this, E.to_i64());
        }
        /// NUM IN-LINE /// CALCULATOR MODE: POWER => CODE: NUM b("3.141592654"); b.xy(5).print("\n"); //306.019684985070792201693945033260775421740493024
        NUM& xy(i64 e) {
            return pwrf_signed(this, e);
        }
        /// NUM IN-LINE /// CALCULATOR MODE: TEN POWER => CODE: NUM a(6); a._10y().print("\n"); //1000000.0
        NUM& _10y() {
            return num7::pow(10, this->to_i64());
        }
        /// NUM IN-LINE /// CALCULATOR MODE: TWO POWER => CODE: NUM a(6); a._2y().print("\n"); //64.0
        NUM& _2y() {
            return num7::pow(2, this->to_i64());
        }
        /// NUM IN-LINE /// CALCULATOR MODE: e POWER => CODE: NUM a(6); a._ey().round(32).print("\n"); //403.42879349273512260838718054342167
        NUM& _ey() {
            NUM E(e());
            return pwrf_signed(&E, this->to_i64());
        }
        /// NUM IN-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER, CODE: NUM a("1000.0"), e("-6.0"); a.shift(e).print("\n"); //0.001	
        NUM& shift(NUM e) {
            return num7::shift(*this, e.to_i64());
        }
        /// NUM IN-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER, CODE: NUM a("1000.0"); a.shift("-6.0").print("\n"); //0.001	
        NUM& shift(const char* e) {
            return num7::shift(*this, e);
        }
        /// NUM IN-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER, CODE: NUM a("1000.0"); a.shift(string("-6.0")).print("\n"); //0.001	
        NUM& shift(string e) {
            return num7::shift(*this, e);
        }
        /// NUM IN-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER, CODE: NUM a("1000.0"); a.shift(-6).print("\n"); //0.001	
        NUM& shift(i64 e) {
            return num7::shift(*this, e);
        }
        /// NUM IN-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER NUM, CODE: NUM a("0.001"), e(6); a.xe10(e).print("\n"); //1000.0	
        NUM& xe10(NUM& e) {
            return num7::xe10(*this, e);
        }
        /// NUM IN-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER STRING, CODE: NUM a("0.001"); a.xe10("6.0").print("\n"); //1000.0	
        NUM& xe10(const char* e) {
            return num7::xe10(*this, e);
        }
        /// NUM IN-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER string, CODE: NUM a("0.001"); a.xe10(string("6.0")).print("\n"); //1000.0	
        NUM& xe10(string e) {
            return num7::xe10(*this, e);
        }
        /// NUM IN-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER i64, CODE: NUM a("0.001"); a.xe10(6).print("\n"); //1000.0	
        NUM& xe10(i64 e) {
            return num7::xe10(*this, e);
        }
        /// NUM IN-LINE /// RETURN NUM SQUARE ROOT, CODE: NUM a("10.0"); a.sqrt().print("\n"); //3.162277
        NUM& sqrt(i64 d = 6) {
            static char* s, * op, * aI, * aF, * pads;
            static I64 aI_L, s_len, i, Shift;
            static I64 aF_L; //FLOATING DIGIT QUANTITY
            static i64 ds;
            I64 L, L2; //RECURSIVE VARIABLE CANNOT BE STATIC!
            char** P;
            static NUM root, t_op;
            static NUM r, q;
            if (*this < (i64)0) { raise("ARGUMENT VALUE, NEGATIVE => sqrt", sprint_fields()); return root = 0; }
            d = (d >= 0 ? d : -d);              //abs(d)
            if (!*this) return root = *this;   //ZERO OPERAND SELF ROOT
            s = exp2num(*this);               //.0
            if (!d) {                        //INTEGER ROOT ALGORITHM
                i = 1;
                while (s[i] != '.') i++;   //FIND '.' INDEX
                s[++i] = '0'; s[++i] = '\0';
                root = s;
                if (!*this) return root; //d=0 MEANS ZERO OPERAND ROOT
                L2 = L = (I64)(strlen(s) - 1) >> 1; //TWO DIVISION TO OBTAIN INTEGER ROOT SIZE
                r = "10.0";
                r.E = L2 + 1; //+6% => while (L2) { r *= 10; L2--; }
                const char* rE_L = i64str(r.E);
                r.CE = (char*)realloc(r.CE, (r.len_I + r.len_F + strlen(rE_L) + 8) * sizeof(char)); //'.' + 'e' + NULL 
                if (!r.CE) raise_exit("OUT OF RAM MEMORY => sqrt", this->sprint_fields());
                strcpy(r.CE, r.C); strcat(r.CE, "e"); strcat(r.CE, rE_L);
                q = divf(this, &r, 0);
                while (r > q) {
                    r = (r + q) * "0.5";
                    r = r.trunk(0);
                    q = divf(this, &r, 0);
                } //NEWTON'S METHOD
                free(s);
                return root = r;
            }
            //FLOATING-POINT ROOT ALGORITHM
            P = split(s, ".");
            aI = P[0]; aF = P[1];
            aI_L = (i64)strlen(aI);
            aF_L = (i64)strlen(aF); //FLOATING DIGIT QUANTITY
            //if (strlen(aI) == 1 && !I32int(aI, 10, 0)) { //0 < n < 1 NUMBER SCOPE
            if (strlen(aI) == 1 && !strtoul(aI, NULL, 10)) { //0 < n < 1 NUMBER SCOPE (0.0625 => 0.25)
                Shift = (aF_L + 1) >> 1; //TWO DIVISION => DECIMAL POINT POSITION
                ds = d - Shift;
                op = (char*)malloc(sizeof(char) * ((ds < 0 ? -ds : ds) * 2 + aF_L + 4)); //RAM DYNAMIC ALLOCATION
                if (!op) raise_exit("OUT OF RAM MEMORY => sqrt", this->sprint_fields());
                if (aF_L % 2) { strcpy(op, aF); strcat(op, "0"); pads = strpads0(2 * ds);strcat(op, pads); free(pads); }  //ODD (DISPARI)
                else { strcpy(op, aF);                  pads = strpads0(2 * ds);strcat(op, pads); free(pads); } //EVEN (PARI)
                free(P[0]); free(s); t_op = strcat(op, ".0");
                t_op = t_op.sqrt(0);
                s = exp2num(t_op);
                s_len = (i64)strlen(s) - 2; //POSTFIX ".0"
                s[s_len] = '\0';           //REMOVE ".0" ENDING
                if (ds > 0) {             //0.0123 => 0.1109 d=4
                    strcpy(op, "0."); pads = strpads0(Shift - s_len + ds); strcat(op, pads); strcat(op, s); free(pads);
                    free(s); root = op; free(op);
                    return root;
                }
                strcpy(op, "0."); pads = strpads0(Shift - s_len);      strcat(op, pads); strcat(op, s); free(pads);
                op[2 + d] = '\0';  //d LESS THAN RADICAND DIGITS 0.0123 => 0.11 d=2
                free(s); root = op; free(op);
                return root;
            }
            else if (!strcmp(aF, "0")) {        //INTEGER VALUES (EX. 3.0)
                L = (I64)(strlen(s) - 1) >> 1; //TWO DIVISION TO OBTAIN INTEGER ROOT SIZE
                op = (char*)malloc(sizeof(char) * (d * 2 + aI_L + 4)); //RAM DYNAMIC ALLOCATION
                if (!op) raise_exit("OUT OF RAM MEMORY => sqrt", this->sprint_fields());
                strcpy(op, aI); pads = strpads0(2 * d); strcat(op, pads); free(pads);
            }
            else { //5.29
                L = (I64)(aI_L + 1) >> 1; //TWO DIVISION TO OBTAIN INTEGER ROOT SIZE
                op = (char*)malloc(sizeof(char) * (d * 2 + aI_L + aF_L + 4)); //RAM DYNAMIC ALLOCATION
                if (!op) raise_exit("OUT OF RAM MEMORY => sqrt", this->sprint_fields());
                if (aF_L % 2) { //FRACTIONAL PART DIGITS ODD (DISPARI) 112.333 => 10.598 d=3
                    strcpy(op, aI); strcat(op, aF); strcat(op, "0"); pads = strpads0(2 * d);strcat(op, pads); free(pads);
                }
                else { //FRACTIONAL PART DIGITS EVEN (PARI) 112.34 => 10.59 d=2
                    strcpy(op, aI); strcat(op, aF);                  pads = strpads0(2 * d); strcat(op, pads); free(pads);
                }
            }
            free(P[0]); free(s); t_op = strcat(op, ".0");
            root = t_op.sqrt(0);
            s = exp2num(root);
            strncpy(op, s, L); 
            //strncpy(op + L, ".", 1); 
            *(op + L) = '.';
            strncpy(op + L + 1, s + L, d); op[L + 1 + d] = '\0';
            free(s); root = op; free(op);
            return root;
        }
        /// NUM IN-LINE /// RETURN NUM i-ROOT, CODE: NUM a("64.0"); a.root_i(3).print("\n"); //4.0
        NUM& root_i(i64 i = 3, i64 d = 3) {
            static NUM iroot;
            NUM n, z, s, I, I_1;
            NUM t, P, q;
            i64 W;
            char* pad;
            n = *this;
            d = d < 0 ? -d : d;          //Abs(d)
            if (!i) return iroot = 1;
            if (!(i % 2) && n.is_negative()) { raise("IMPOSSIBLE OPERATION => root_i", i64str(i)); return iroot = 0; } //(ROOT 6 OF -64) NEGATIVE ROOTING WITH EVEN INDEX 
            if (i < 0) { n = num7::inv(n, d); i = -i; }
            int sign = n < (i64)0 ? 1 : 0; //SAVE THE SIGN
            n.S = 0;                 //ABSOLUTE VALUE
            char* sn = exp2num(n);
            char** p = split(sn, ".");
            W = i * d - (i64)strlen(p[1]); free(p[0]);
            char* SN = (char*)malloc(((i64)strlen(sn) + W + 4) * sizeof(char)); //RAM DYNAMIC ALLOCATION
            if (!SN) raise_exit("OUT OF RAM MEMORY => root_i", this->sprint_fields());
            rm_c(sn, '.');      //REMOVE DOT CHARACTER (.)
            strcpy(SN, sn); 
            if (W >= 0) { pad = strpads0(W); strcat(SN, pad); free(pad); }
            else SN[(i64)strlen(sn) + W] = '\0'; //FIXING STRING 
            free(sn);
            strcat(SN, ".0");
            z = n = SN; free(SN);
            s = z + 1;
            I = i;
            I_1 = I - 1;
            while (z < s) { //NEWTON'S METHOD
                s = z;
                P = POW(s, I_1, d);
                q = num7::div(n, P, d).trunk(0);
                t = (I_1)*s + q;
                z = num7::div(t, I, d).trunk(0);
                if (error()) raise("d PARAMETER TOO LOW => root_i", i64str(d));
            }
            s.S = sign; //RESTORE THE SIGN
            s.shift(-d);
            return iroot = s;
        }
        /// NUM IN-LINE /// RETURN THE ADDITION, CODE: NUM tot("5.102"), n("0.003"); tot.add(n).print("\n"); //10.105
        NUM& add(NUM& b) {
            return *this + b;
        }
        /// NUM IN-LINE /// RETURN THE ADDITION, CODE: NUM tot("5.103"); tot.add("5.1").print("\n"); //10.203
        NUM& add(const char* b) {
            return *this + b;
        }
        /// NUM IN-LINE /// RETURN THE ADDITION, CODE: NUM tot("5.103"); tot.add(string("5.1")).print("\n"); //10.203
        NUM& add(string b) {
            return *this + b;
        }
        /// NUM IN-LINE /// RETURN THE ADDITION, CODE: NUM tot("5.102"); tot.add(5).print("\n"); //10.102
        NUM& add(i64 b) {
            return *this + b;
        }
        /// NUM IN-LINE /// RETURN THE SUBTRACTION, CODE: NUM tot("5.102"), n("0.003"); tot.sub(n).print("\n"); //5.099
        NUM& sub(NUM& b) {
            return *this - b;
        }
        /// NUM IN-LINE /// RETURN THE SUBTRACTION, CODE: NUM tot("5.103"); tot.sub("5.1").print("\n"); //0.003
        NUM& sub(const char* b) {
            return *this - b;
        }
        /// NUM IN-LINE /// RETURN THE SUBTRACTION, CODE: NUM tot("5.103"); tot.sub(string("5.1")).print("\n"); //0.003
        NUM& sub(string b) {
            return *this - b;
        }
        /// NUM IN-LINE /// RETURN THE SUBTRACTION, CODE: NUM tot("5.102"); tot.sub(5).print("\n"); //0.102
        NUM& sub(i64 b) {
            return *this - b;
        }
        /// NUM IN-LINE /// RETURN THE MULTIPLICATION, CODE: NUM tot("5.102"), n("0.003"); tot.mul(n).print("\n"); //0.015306
        NUM& mul(NUM& b) {
            return *this * b;
        }
        /// NUM IN-LINE /// RETURN THE MULTIPLICATION, CODE: NUM tot("5.103"); tot.mul("5.1").print("\n"); //26.0253
        NUM& mul(const char* b) {
            return *this * b;
        }
        /// NUM IN-LINE /// RETURN THE MULTIPLICATION, CODE: NUM tot("5.103"); tot.mul(string("5.1")).print("\n"); //26.0253
        NUM& mul(string b) {
            return *this * b;
        }
        /// NUM IN-LINE /// RETURN THE MULTIPLICATION, CODE: NUM tot("5.102"); tot.mul(5).print("\n"); //25.51
        NUM& mul(i64 b) {
            return *this * b;
        }
        /// NUM IN-LINE /// RETURN THE DIVISION, CODE: NUM tot("5.102"), n("0.003"); tot.div(n, 9).print("\n"); //1700.666666
        NUM& div(NUM& b, i64 dp = 40) {
            static NUM ZERO;
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!strcmp(b.C, "0.0")) {
                raise("DIVISION BY ZERO => div", b.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return divf_signed(this, &b, dp);
        }
        /// NUM IN-LINE /// RETURN THE DIVISION, CODE: NUM tot("5.102"); tot.div("5.2").print("\n"); //0.9811538461538461538461538461538461538461
        NUM& div(const char* b, i64 dp = 40) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!strcmp(B.C, "0.0")) {
                raise("DIVISION BY ZERO => div", B.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return divf_signed(this, &B, dp);
        }
        /// NUM IN-LINE /// RETURN THE DIVISION, CODE: NUM tot("5.102"); tot.div(string("5.2")).print("\n"); //0.9811538461538461538461538461538461538461
        NUM& div(string b, i64 dp = 40) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!strcmp(B.C, "0.0")) {
                raise("DIVISION BY ZERO => div", B.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return divf_signed(this, &B, dp);
        }
        /// NUM IN-LINE /// RETURN THE DIVISION, CODE: NUM tot("5.102"); tot.div(5).print("\n"); //1.0204
        NUM& div(i64 b, i64 dp = 40) {
            static NUM ZERO;
            NUM B(b);
            if (!strcmp(this->C, "0.0")) return ZERO; //(*this) ZERO DIVIDEND => ZERO QUOTIENT
            if (!b) {
                raise("DIVISION BY ZERO => div", B.sprint_fields());
                //reset(); 
                return ZERO;
            }
            return divf_signed(this, &B, dp);
        }
        /// NUM IN-LINE /// RETURN THE MODULUS (DIVISION REMAINDER), CODE: NUM a("123456789012345678901234567890.0"), b("8917988.0"); a.mod(b).print("\n"); //398122.0
        NUM& mod(NUM& b) {
            return num7::mod(*this, b);
        }
        /// NUM IN-LINE /// RETURN THE MODULUS (DIVISION REMAINDER), CODE: NUM a("-15.2"); a.mod("8.0").print("\n"); //-7.2
        NUM& mod(const char* b) {
            NUM B(b);
            return num7::mod(*this, B);
        }
        /// NUM IN-LINE /// RETURN THE MODULUS (DIVISION REMAINDER), CODE: NUM a("-15.2"); a.mod(string("8.0")).print("\n"); //-7.2
        NUM& mod(string b) {
            NUM B(b);
            return num7::mod(*this, B);
        }
        /// NUM IN-LINE /// RETURN THE MODULUS (DIVISION REMAINDER), CODE: NUM a("123.0"); a.mod(-120).print("\n"); //3.0
        NUM& mod(i64 b) {
            NUM B(b);
            return num7::mod(*this, B);
        }
        /// NUM IN-LINE /// RETURN THE POWER, CODE: NUM a("3.2"); NUM b("4.0"); a.pow(b).print("\n"); //104.8576
        NUM& pow(NUM& b) {
            return (*this ^ b);
        }
        /// NUM IN-LINE /// RETURN THE POWER, CODE: NUM a("3.2"); a.pow("-4.0").print("\n"); //0.0095367431640625
        NUM& pow(const char* b) {
            return (*this ^ b);
        }
        /// NUM IN-LINE /// RETURN THE POWER, CODE: NUM a("3.2"); a.pow(string("-4.0")).print("\n"); //0.0095367431640625
        NUM& pow(string b) {
            return (*this ^ b);
        }
        /// NUM IN-LINE /// RETURN THE POWER, CODE: NUM a("3.0"); a.pow(80).print("\n"); //147808829414345923316083210206383297601.0
        NUM& pow(i64 b) {
            return (*this ^ b);
        }
        /// NUM IN-LINE /// RETURN FACTORIAL COMPUTATION, CODE: NUM a("5.0"); a.fact().print("\n"); //120
        NUM& fact() {
            return num7::fact(this->to_i64());
        }
        /// NUM IN-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("1.1"); a.inc(3).print("\n"); //4.1
        NUM& inc(i64 b = 1) { //DEFAULT ARGs: (i64 b = 1)
            return *this = *this + b;
        }
        /// NUM IN-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("1.1"); NUM b("3.21"); a.inc(b).print("\n"); //4.31
        NUM& inc(NUM& b) {
            return *this = *this + b;
        }
        /// NUM IN-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("1.1"); a.inc("3.21").print("\n"); //4.31
        NUM& inc(const char* b) {
            return *this = *this + b;
        }
        /// NUM IN-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("1.1"); a.inc(string("3.21")).print("\n"); //4.31
        NUM& inc(string b) {
            return *this = *this + b;
        }
        /// NUM IN-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("1.1"); a.dec(3).print("\n"); //-1.9
        NUM& dec(i64 b = 1) { //DEFAULT ARGs: (i64 b = 1)
            return *this = *this - b;
        }
        /// NUM IN-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("1.1"); NUM b("3.21"); a.dec(b).print("\n"); //-2.11
        NUM& dec(NUM& b) {
            return *this = *this - b;
        }
        /// NUM IN-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("1.1"); a.dec("3.21").print("\n"); //-2.11
        NUM& dec(const char* b) {
            return *this = *this - b;
        }
        /// NUM IN-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("1.1"); a.dec(string("3.21")).print("\n"); //-2.11
        NUM& dec(string b) {
            return *this = *this - b;
        }
        /// NUM IN-LINE /// RETURN CLEARED OBJECT TO ZERO VALUE, CODE: NUM M("3.0"); M.clear(); M.print("\n"); //0.0
        NUM& clear() {
            return *this = 0;
        }
        /// NUM IN-LINE /// CONVERT DOUBLE TO NUM OBJECT (MAY BE PRECISION LOSS IF NOT ROUNDED), CODE: double a(-2543.9935500001); NUM A; A = A.from_double(a).round(5); print(A, "\n"); //-2543.99355
        NUM& from_double(double d) {
            static char s[64];
            sprintf(s, "%.15f", d);
            return *this = s;
        }
    };
    ///////////////// END CLASS NUM /////////////////     ///////////////// END CLASS NUM /////////////////

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       //////////////////////////////////////////////// NUM OUT-LINE FUNCTIONS /////////////////////////////////////////////////
      /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /// NUM OUT-LINE /// RAISE AN ERROR FOR ERROR HANDLER
    int raise(const char* msg, const char* value, int video) { //DEFAULT ARGs: int video = 1
        if (video) {
            string B = "ERROR " + string(msg) + ": [" + ((i64)strlen(value) ? value : "\"\" => VOID STRING") + string("]\n");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>> EXCEPTION: num7.h >>>>>>>>>>>>>>>>>>>>>>>>\n");
            printf("%s", B.c_str());
        }
        return Error = 1; //SET ERROR => GLOBAL VARIABLE
    }
    /// NUM OUT-LINE /// RAISE A PROGRAM EXIT
    int raise_exit(const char* msg, const char* value) {
        char b[128];
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>> EXIT: num7.h >>>>>>>>>>>>>>>>>>>>>>>> ");
        sprintf(b, "ERROR %s: [%s]\n", msg, (i64)strlen(value) ? value : "\"\" => VOID STRING\n");
        printf("%s", b);
        exit(1); //return 1 (EXIT_FAILURE)
    }
    /// NUM OUT-LINE ///
    bool run_once() {
        static int once;
        once = !once ? 1 : 0;
        return once++;
    }
    /// NUM OUT-LINE /// CHECK IF A NUMERIC STRING IS A INTEGER FORMAT NUMBER (UNSIGNED), CODE: print(is_strfmt_int("3"), "\n"); //3
    const char* is_strfmt_int(const char* s) {
        /**
        *   \brief  CHECK IF A NUMERIC STRING IS A INTEGER FORMAT NUMBER (UNSIGNED)
        *   \param  s STRING
        *   \return s INTEGER STRING OR NULL
        *   \code
        *   RUN-TIME ERROR CHECK: NONE
        *   NEED: NONE
        *   CALL: NONE
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *
        *       printf("%s\n", is_strfmt_int("3"));      //3
        *       printf("%s\n", is_strfmt_int("00300")); //"00300"
        *       printf("%s\n", is_strfmt_int("3.0"));  //(null)
        *       printf("%s\n", is_strfmt_int("3.14"));//(null)
        *   \endcode
        */
        I64 i = 0, s_len = (I64)strlen(s);
        if (!s_len) return s = NULL;
        while (i < s_len) { if (!isdigit(s[i])) return s = NULL; i++; }
        return s;
    }
    /// NUM OUT-LINE /// CHECK IF A NUMERIC STRING IS A FLOATING-POINT FORMAT NUMBER (UNSIGNED), CODE: print(is_strfmt_float("3.0"), "\n"); //3.0
    const char* is_strfmt_float(const char* s) {
        /**
        *   \brief  CHECK IF A NUMERIC STRING IS IN A FLOATING-POINT FORMAT (UNSIGNED)
        *   \param  s STRING
        *   \return s FLOATING-POINT FORMAT STRING OR NULL
        *   \code
        *   RUN-TIME ERROR CHECK: NONE
        *   NEED: NONE
        *   CALL: NONE
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *
        *       const char* ff = is_strfmt_float("3.14"); print("floatfmt=", ff);   //floatfmt=3.14
        *       const char* ff = is_strfmt_float("3.0");  print("floatfmt=", ff);  //floatfmt=3.0
        *       const char* ff = is_strfmt_float("3");    print("floatfmt=", ff); //floatfmt=(null)
        *
        *   \endcode
        */
        i64 i = 0, dot = 0;
        if (!isdigit(s[0])) return s = NULL;
        while (s[i]) {
            if (!isdigit(s[i]) && s[i] != '.') return s = NULL;
            if (isdigit(s[i])) { i++; continue; }
            if (s[i] == '.') dot++;
            i++;
        }
        if (!isdigit(s[i - 1]) || dot != 1) return s = NULL;
        return s;
    }
    /// NUM OUT-LINE /// ABSOLUTE INTEGER ADDITION WITH NUMERIC STRINGS (UNSIGNED, NEED: free()), CODE: char* R; R = addis("123", "7"); printf(R); free(R); //130
    char* addis(const char* op1, const char* op2, int check) { //DEFAULT ARGs: (const char*, const char*, int check = 1) (check=0 => +40%)
        /**
        *   \brief  ABSOLUTE ARBITRARY-PRECISION INTEGER NUMERIC STRING ADDITION
        *   \param  op1 STRING ADDEND 1
        *   \param  op2 STRING ADDEND 2
        *   \param  check PARAMETER VALIDATION
        *   \return b a z STRING SUM
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: stripi0 is_strfmt_int raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       char *R = addis("3141592654", "2718281828");        print(R, "\n"); free(R);    //5859874482
        *       char* R = addis("3141592654", "2718281828", false); print(R, "\n"); free(R);   //5859874482 (40% FASTER WITHOUT RUN-TIME ERROR CHECK)
        *       char* R = addis("123", "7");                        print(R, "\n"); free(R);  //130
        *       char *R = addis("abc", "123");                      print(R, "\n"); free(R); //ERROR ARGUMENT VALUE => addis: [abc]
        *   \endcode
        */
        if (check) { //ARGs VALIDATION
            if (!is_strfmt_int(op1)) { raise("ARGUMENT VALUE => addis", op1); return NULL; }
            if (!is_strfmt_int(op2)) { raise("ARGUMENT VALUE => addis", op2); return NULL; }
        }
        i64 DIM, offset, t;              //VARIABLES
        char* a, * b, * z, * r, * TEMP; //RAM POINTERS VARs
        i64 C = 0;                     //CARRY DEFAULT TO ZERO
        i64 a_L = (i64)strlen(op1), b_L = (i64)strlen(op2);
        DIM = ((a_L > b_L ? a_L : b_L) + 4) * sizeof(char); //1 => NULL, 1 => CARRY
        a = (char*)malloc(DIM); if (!a) raise_exit("OUT OF RAM MEMORY => addis", op1);    //RAM DYNAMIC ALLOCATION
        b = (char*)malloc(DIM); if (!b) raise_exit("OUT OF RAM MEMORY => addis", op1);   //RAM DYNAMIC ALLOCATION
        z = (char*)malloc(DIM); if (!z) raise_exit("OUT OF RAM MEMORY => addis", op1);  //RAM DYNAMIC ALLOCATION
        r = (char*)malloc(DIM); if (!r) raise_exit("OUT OF RAM MEMORY => addis", op1); //RAM DYNAMIC ALLOCATION
        z[0] = '\0';  //"" ZERO STRING LENGTH INITIALIZATION
        r[0] = '\0'; //"" ZERO STRING LENGTH INITIALIZATION
        strcpy(a, op1); if (a[0] == '0') { stripi0(a); a_L = (i64)strlen(a); } //0003 = > 3 (CLEAR ZEROs)
        strcpy(b, op2); if (b[0] == '0') { stripi0(b); b_L = (i64)strlen(b); }
        if (a[0] == '0') { free(a); free(z); free(r); return b; }  //op1 => ZERO ADDEND 1
        if (b[0] == '0') { free(b); free(z); free(r); return a; } //op2 => ZERO ADDEND 2
        if (a_L < b_L) { TEMP = a; a = b; b = TEMP; offset = a_L; a_L = b_L; b_L = offset; } //IF NEEDED a AND b SWAPPED 
        offset = a_L - b_L; //OPERAND a AND b ALIGNMENT
        if (offset) { for (DIM = 0; DIM < offset; DIM++) z[DIM] = '0'; z[DIM] = '\0'; strcat(z, b); strcpy(b, z); } //ZEROs FILLING... (13+4 => 13+04)
        r[a_L] = '\0'; //r = "...<--"
        for (a_L--; a_L >= 0; a_L--) { //SIMPLE SCHOOL SUM ALGORITHM
            t = (a[a_L] - '0') + (b[a_L] - '0') + C;
            C = (t > 9 ? 1 : 0);
            if (C) { t -= 10; t += '0'; r[a_L] = (char)t; }
            else { t += '0'; r[a_L] = (char)t; }
        }
        if (C) { z[0] = '1'; z[1] = '\0'; }
        else z[0] = '\0';
        strcat(z, r);
        free(a); free(b); free(r);
        return z;
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT STRING ADDITION (UNSIGNED -NEED: free()), CODE: char* R = addfs("3.141592654", "2.718281828"); print(R, "\n"); free(R); //5.859874482
    char* addfs(const char* op1, const char* op2, int check) { //DEFAULT ARGS: (const char*, const char*, int check = 1) (check=0 => +8.75)
        /**
        *   \brief  ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT STRING ADDITION (UNSIGNED)
        *   \param  op1 STRING ADDEND 1 (FLOATING-POINT NUMERIC STRING)
        *   \param  op2 STRING ADDEND 2 (FLOATING-POINT NUMERIC STRING)
        *   \param  check PARAMETER VALIDATION
        *   \return RE STRING
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: addis lstripf0 rstripf0 strpads0 is_strfmt_float raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *   char* R = addfs("3.141592654", "2.718281828"); print(R, "\n"); free(R);   //5.859874482
        *   char* R = addfs("0.000314159", "0.000271828"); print(R, "\n"); free(R);  //0.000585987
        *   char *R = addfs("00003141590", "0.000271828"); print(R, "\n"); free(R); //ERROR ARGUMENT VALUE => addfs: [00003141590]
        *   \endcode
        */
        if (check) { //ARGs VALIDATION
            if (!is_strfmt_float(op1)) { raise("ARGUMENT VALUE => addfs", op1); return NULL; }
            if (!is_strfmt_float(op2)) { raise("ARGUMENT VALUE => addfs", op2); return NULL; }
        }
        i64 DOT, a_L, b_L, aF_len, bF_len, sum_L;                //VARIABLES
        char* SUM, * PAD, * a, * b, * RE, * aI, * aF, * bI, * bF; //RAM POINTERS VARs
        a_L = (i64)strlen(op1); b_L = (i64)strlen(op2);
        //i32 DIM = ((a_L > b_L ? a_L : b_L) + 8) * sizeof(char); //1 => NULL, 1 => CARRY, 1 => DOT !!!BUG: 17-07-2024!!!
        i64 DIM = (a_L + b_L + 8) * sizeof(char); //1 => NULL, 1 => CARRY, 1 => DOT 
        a = (char*)malloc(DIM); if (!a) raise_exit("OUT OF RAM MEMORY => addfs", op1);  //RAM DYNAMIC ALLOCATION
        b = (char*)malloc(DIM); if (!b) raise_exit("OUT OF RAM MEMORY => addfs", op1); //RAM DYNAMIC ALLOCATION
        RE = (char*)malloc(DIM);                                    //RESULT
        if (!RE) raise_exit("OUT OF RAM MEMORY => addfs", op1);    //RAM DYNAMIC ALLOCATION
        aI = (char*)malloc(DIM); if (!aI) raise_exit("OUT OF RAM MEMORY => addfs", op1); //RAM DYNAMIC ALLOCATION
        aF = (char*)malloc(DIM);                                 //SPLIT FLOATING POINT OPERAND STRING
        if (!aF) raise_exit("OUT OF RAM MEMORY => addfs", op1); //RAM DYNAMIC ALLOCATION
        bI = (char*)malloc(DIM); if (!bI) raise_exit("OUT OF RAM MEMORY => addfs", op1);  //RAM DYNAMIC ALLOCATION
        bF = (char*)malloc(DIM); if (!bF) raise_exit("OUT OF RAM MEMORY => addfs", op1); //RAM DYNAMIC ALLOCATION
        strcpy(a, op1); strcpy(b, op2); //CLEARING ZEROS (020.00100 => 20.001)
        if (a[0] == '0') { lstripf0(a); a_L = (i64)strlen(a); } if (a[a_L - 1] == '0') { rstripf0(a); a_L = (i64)strlen(a); }
        if (b[0] == '0') { lstripf0(b); b_L = (i64)strlen(b); } if (b[b_L - 1] == '0') { rstripf0(b); b_L = (i64)strlen(b); }
        //CHECK SUM WITH ZERO OPERANDS
        if (!strcmp(a, "0.0")) { strcpy(RE, b); free(aI); free(aF); free(bI); free(bF); free(a); free(b); return RE; }
        if (!strcmp(b, "0.0")) { strcpy(RE, a); free(aI); free(aF); free(bI); free(bF); free(a); free(b); return RE; }
        strcpy(aI, strtok(a, ".")); strcpy(aF, strtok(0, "."));
        strcpy(bI, strtok(b, ".")); strcpy(bF, strtok(0, "."));
        aF_len = (i64)strlen(aF); bF_len = (i64)strlen(bF);
        strcpy(a, aI); strcat(a, aF);  //TRANSFORM TO INTEGER NUMBER
        strcpy(b, bI); strcat(b, bF); //TRANSFORM TO INTEGER NUMBER
        DOT = aF_len - bF_len;
        if (DOT >= 0) { PAD = strpads0(DOT); strcat(b, PAD); free(PAD); } //ZERO FILLING...
        else { PAD = strpads0(-DOT); strcat(a, PAD); aF_len = bF_len; free(PAD); }
        SUM = addis(a, b, false); //SUM RAM ALLOCATION
        sum_L = (i64)strlen(SUM);
        RE[0] = '\0'; //"" => VOID STRING
        i64 ZERO = aF_len - sum_L;
        if (ZERO <= 0) { //1.001009+0.0095=1.010509 (RESULT >= 0.1)
            strncpy(RE, SUM, -ZERO);
            RE[-ZERO] = '.';
            strncpy(RE - ZERO + 1, SUM - ZERO, aF_len + 1);
            if (RE[0] == '.') { a[0] = '0'; a[1] = '\0'; strcat(a, RE); strcpy(RE, a); } //0.___ RESULT
        } //0.001009+0.0095=0.010509 //0.0___ RESULT (RESULT < 0.1)
        else { strcpy(RE, "0."); PAD = strpads0(ZERO); strcat(RE, PAD); free(PAD); strcat(RE, SUM); }
        if (RE[strlen(RE) - 1] == '0') rstripf0(RE); //CLEARING RIGHT ZEROS (0.0010 => 0.001)
        free(SUM); free(aI); free(aF); free(bI); free(bF); free(a); free(b);
        return RE;
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION NUMERIC INTEGER STRING MULTIPLICATION (UNSIGNED - NEED: free()), CODE: char *R = mulis_school("3141592654", "2718281828"); printf("%s\n", R); free(R); //8539734222346491512
    char* mulis_school(const char* op1, const char* op2, int check) { //DEFAULT ARGS: (const char* op1, const char* op2, int check = 1) (+1.3%>)
        /**
        *   \brief  ABSOLUTE ARBITRARY-PRECISION NUMERIC INTEGER STRING MULTIPLICATION (UNSIGNED)
        *   \param  op1   MULTIPLICAND NUMERIC INTEGER STRING
        *   \param  op2   MULTIPLIER   NUMERIC INTEGER STRING
        *   \param  check PARAMETER VALIDATION
        *   \return a b T PRODUCT      NUMERIC INTEGER STRING
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: addis is_strfmt_int stripi0 str_rev strpads0 raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *   char *R = mulis("3141592654", "2718281828");        printf("%s\n", R); free(R);  //8539734222346491512
        *   char *R = mulis("3141592654", "2718281828", false); printf("%s\n", R); free(R); //8539734222346491512 (+1.3%>)
        *   char *R = mulis("0.0", "3"); printf("%s\n", R); free(R); //ERROR ARGUMENT VALUE => mulis: [0.0]
        *
        *   \endcode
        */
        i64 a_L, b_L, k, DIM; //VARIABLES
        I64 M, C = 0;        //MULTIPLY AND CARRY 
        char* ar, * br, * V, * Vr, * T, * RAM, * a, * b; //RAM POINTER VARs
        char MS[3] = "", bufa[2], bufb[2];
        if (check) { //ARGs VALIDATION
            if (!is_strfmt_int(op1)) { raise("ARGUMENT VALUE => mulis", op1); return NULL; }
            if (!is_strfmt_int(op2)) { raise("ARGUMENT VALUE => mulis", op2); return NULL; }
        }
        a_L = (i64)strlen(op1); b_L = (i64)strlen(op2);
        DIM = ((a_L > b_L ? a_L : b_L) + 16) * sizeof(char);                             //1 => NULL
        a = (char*)malloc(DIM); if (!a) raise_exit("OUT OF RAM MEMORY => mulis", op1);  //RAM DYNAMIC ALLOCATION
        b = (char*)malloc(DIM); if (!b) raise_exit("OUT OF RAM MEMORY => mulis", op1); //RAM DYNAMIC ALLOCATION
        strcpy(a, op1); if (a[0] == '0') { stripi0(a); a_L = (i64)strlen(a); } //REMOVE NO VALUE ZEROs (003 => 3)
        strcpy(b, op2); if (b[0] == '0') { stripi0(b); b_L = (i64)strlen(b); }
        if (a[0] == '0') { free(b); return a; }               //op1 => ZERO return FACTOR1 (0 * 3)
        if (b[0] == '0') { free(a); return b; }              //op2 => ZERO return FACTOR2 (3 * 0)
        if (a_L == 1 && a[0] == '1') { free(a); return b; }  //op1 => ONE return FACTOR2 (1 * 3)
        if (b_L == 1 && b[0] == '1') { free(b); return a; } //op2 => ONE return FACTOR1 (3 * 1)
        ar = (char*)malloc(DIM);     if (!ar) raise_exit("OUT OF RAM MEMORY => mulis", op1);     //RAM DYNAMIC ALLOCATION
        br = (char*)malloc(DIM);     if (!br) raise_exit("OUT OF RAM MEMORY => mulis", op1);    //RAM DYNAMIC ALLOCATION
        V = (char*)malloc(DIM * 2); if (!V) raise_exit("OUT OF RAM MEMORY => mulis", op1);    //RAM DYNAMIC ALLOCATION
        Vr = (char*)malloc(DIM * 2); if (!Vr) raise_exit("OUT OF RAM MEMORY => mulis", op1);  //RAM DYNAMIC ALLOCATION
        T = (char*)malloc(DIM * 2); if (!T) raise_exit("OUT OF RAM MEMORY => mulis", op1);  //RAM DYNAMIC ALLOCATION
        ar[0] = '\0'; br[0] = '\0'; strcpy(T, "0"); //TOTAL (PRODUCT)
        if (a_L < b_L) { RAM = a; a = b; b = RAM; DIM = a_L; a_L = b_L; b_L = DIM; } //IF NEEDED a AND b SWAPPED (3*12 => 12*3)
        strcpy(br, str_rev(b)); strcpy(ar, str_rev(a)); //STRING REVERSE op1, op2
        k = 0; //7*5=35 79*57=4503 775*97=75175
        for (i64 j = 0; j < b_L; j++) { //SIMPLE SCHOOL MULTIPLICATION ALGORITHM
            bufb[0] = br[j]; bufb[1] = '\0';
            strcpy(V, ""); strcpy(Vr, ""); C = 0;
            for (i64 i = 0; i < a_L; i++) {
                bufa[0] = ar[i]; bufa[1] = '\0';
                M = (bufa[0] - '0') * (bufb[0] - '0') + C; // 1 <= M <= 81+1 (1 OR TWO DIGIT PRODUCT)
                C = M / 10;                               //DETECT CARRY
                if (C) { MS[0] = M % 10 + '0'; MS[1] = '\0'; strcat(Vr, MS); } //7*5=35
                else { MS[0] = (char)M + '0'; MS[1] = '\0'; strcat(Vr, MS); }
                if (C && i == (a_L - 1)) { MS[0] = (char)C + '0'; MS[1] = '\0'; strcat(Vr, MS); }
            }
            strcpy(V, str_rev(Vr));
            if (k) { char* p = strpads0(k); strcat(V, p); free(p); } //ZERO PADDING...
            RAM = addis(V, T, false); strcpy(T, RAM); free(RAM);    //SUM!
            k++;
        }
        free(a); free(b); free(ar); free(br); free(V); free(Vr);
        return T; //RAM POINTER
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION NUMERIC INTEGER STRING MULTIPLICATION (UNSIGNED - NEED: free()), CODE: char *R = mulis("3141592654", "2718281828"); print(R, " => mul\n"); free(R); //8539734222346491512
    char* mulis(const char* op1, const char* op2, int check) { //DEFAULT ARGS: (const char* op1, const char* op2, int check = 1) (+1.3%>)
        /**
        *   \brief  ABSOLUTE ARBITRARY-PRECISION NUMERIC INTEGER STRING MULTIPLICATION (UNSIGNED)
        *   \param  op1   MULTIPLICAND NUMERIC INTEGER STRING
        *   \param  op2   MULTIPLIER   NUMERIC INTEGER STRING
        *   \param  check PARAMETER VALIDATION
        *   \return a b T PRODUCT      NUMERIC INTEGER STRING
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: is_strfmt_int rstripc stripi0 strpads0 raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       char *R = mulis("3141592654", "2718281828");        print(R, " => mul\n"); free(R);   //8539734222346491512
        *       char *R = mulis("3141592654", "2718281828", false); print(R, " => mul\n"); free(R);  //8539734222346491512 (+1.3%>)
        *       char *R = mulis("0.0", "3");                        print(R, " => mul\n"); free(R); //ERROR ARGUMENT VALUE => mulis: [0.0]
        *
        *   \endcode
        */
        if (check) {       //ARGs VALIDATION
            if (!is_strfmt_int(op1)) { raise("ARGUMENT VALUE => mulis", op1); return NULL; }
            if (!is_strfmt_int(op2)) { raise("ARGUMENT VALUE => mulis", op2); return NULL; }
        }
        i64 a_L, b_L, dim, i, za = 0, zb = 0, Z = 0; //VARIABLES
        char* a, * b;       //RAM POINTER VARs
        a_L = (i64)strlen(op1); b_L = (i64)strlen(op2);
        a = (char*)malloc((a_L + 4) * sizeof(char)); if (!a) raise_exit("OUT OF RAM MEMORY => mulis", op1);    //RAM DYNAMIC ALLOCATION
        b = (char*)malloc((b_L + 4) * sizeof(char)); if (!b) raise_exit("OUT OF RAM MEMORY => mulis", op1);   //RAM DYNAMIC ALLOCATION
        strcpy(a, op1); if (a[0] == '0') { stripi0(a); a_L = (i64)strlen(a); } //REMOVE NO VALUE ZEROs (003 => 3)
        strcpy(b, op2); if (b[0] == '0') { stripi0(b); b_L = (i64)strlen(b); }
        if (a[0] == '0') { free(b); return a; }               //op1 => ZERO return FACTOR1 (0 * 3)
        if (b[0] == '0') { free(a); return b; }              //op2 => ZERO return FACTOR2 (3 * 0)
        if (a_L == 1 && a[0] == '1') { free(a); return b; }  //op1 => ONE return FACTOR2 (1 * 3)
        if (b_L == 1 && b[0] == '1') { free(b); return a; } //op2 => ONE return FACTOR1 (3 * 1)
        i64 c = a_L - 1;
        if (a[c] == '0') { Z = 1; for (; a[c] == '0'; c--) za++; rstripc(a, '0'); a_L = (i64)strlen(a); }
        c = b_L - 1;
        if (b[c] == '0') { Z = 1; for (; b[c] == '0'; c--) zb++; rstripc(b, '0'); b_L = (i64)strlen(b); }
        i64 zab = za + zb;                                                //ZEROs COUNT
        char* PRO = (char*)malloc((a_L + b_L + zab + 1) * sizeof(char)); //RAM DYNAMIC ALLOCATION
        if (!PRO) raise_exit("OUT OF RAM MEMORY => mulis", op1);
        dim = (a_L + b_L);
        PRO[0] = '0';       //INITIAL ZERO DIGIT FOR LEFT PADDING
        PRO[dim--] = '\0'; //FINAL NULL STRING TERMINATOR
        i64 m = a_L - 1, n = b_L - 1, carry = 0;
        for (i = 0; i <= m + n || carry; ++i) { //SANKET GODE MULTIPLICATION ALGORITHM
            for (i64 j = (0 < i - n ? i - n : 0); j <= (i < m ? i : m); ++j)
                carry += (a[m - j] - '0') * (b[n - i + j] - '0');
            PRO[dim - i] = carry % 10 + '0';
            carry /= 10;
        }
        free(a); free(b); //FREE RAM MEMORY
        if (PRO[0] == '0') { stripi0(PRO); } //CLEAR ZEROs
        if (Z) { char* zeros = strpads0(zab); strcat(PRO, zeros); free(zeros); } //APPEND ZEROs
        return PRO;
    }
    /// NUM OUT-LINE /// CLEAR LEFT PART OF FLOATING-POINT s FROM ZERO CHARACTER, CODE: char s[] = "0000.00120"; lstripf0(s); print(s, "\n"); //0.00120
    char* lstripf0(char* s) {
        /**
        *   \brief  CLEAR LEFT PART OF FLOATING-POINT s FROM ZERO CHARACTER
        *   \param  s STRING
        *   \return s STRING MODIFIED
        *   ERROR CHECK: NONE
        *   NEED: MODIFY SOURCE STRING AND FLOATING-POINT FORMAT s
        *   CALL: NONE
        *   TIME: [...]
        *   EXAMPLES:
        *
        *       char s[] = "0000.00120"; lstripf0(s); print(s, "\n");   //0.00120
        *       char s[] = "000";        lstripf0(s); print(s, "\n");  //0
        *       char s[] = "";           lstripf0(s); print(s, "\n"); //"" => VOID STRING
        *
        */
        i64 qty = 0;
        while (s[qty] == '0') qty++;
        int FLAG = 1;
        if (qty) {
            i64 i = 0;
            while (i < (i64)strlen(s) && s[i + qty]) {
                if (FLAG && s[i + qty] == '.') { s[i] = '0'; s[++i] = '.'; i++; qty--; }
                else FLAG = 0;
                s[i] = s[i + qty]; i++;
            }
            s[i ? i : 1] = '\0';
        }
        return s;
    }
    /// NUM OUT-LINE /// CLEAR RIGHT PART OF FLOATING-POINT s FROM ZERO CHARACTER, CODE: char s[] = "1.234567890000"; rstripf0(s); print(s, "\n"); //1.23456789
    char* rstripf0(char* s) {
        /**
        *   \brief  CLEAR RIGHT PART OF FLOATING-POINT s FROM ZERO CHARACTER
        *   \param  s  STRING
        *   \return s  STRING MODIFIED
        *   \code
        *   RUN-TIME ERROR CHECK: NONE
        *   NEED: MODIFY SOURCE STRING
        *   CALL: NONE
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *
        *       char s[] = "1.234567890000"; rstripf0(s); print(s, "\n");   //1.23456789
        *       char s[] = "000";            rstripf0(s); print(s, "\n");  //0
        *       char s[] = "";               rstripf0(s); print(s, "\n"); //"" => VOID STRING
        *
        *   \endcode
        */
        i64 idx = (i64)strlen(s) - 1;
        if (s[idx] == '.') s[idx] = '\0'; //0. => 0
        while (idx) {
            if (s[idx] == '0') idx--;
            else break;
        }
        s[idx + 1] = '\0';
        i64 s_len = (i64)strlen(s);
        if (s[s_len - 1] == '.') { s[s_len] = '0'; s[s_len + 1] = '\0'; }
        return s;
    }
    /// NUM OUT-LINE /// CLEAR BOTH LEFT AND RIGHT PART OF FLOATING-POINT s FROM ZERO CHARACTER, CODE: char s[] = "000.001200000"; stripf0(s); print(s, "\n"); //0.0012
    char* stripf0(char* s) {
        /**
        *   \brief  CLEAR BOTH LEFT AND RIGHT PART OF FLOATING-POINT s FROM ZERO CHARACTER
        *   \param  s STRING
        *   \return s STRING MODIFIED
        *   \code
        *   RUN-TIME ERROR CHECK: NONE
        *   NEED: MODIFY SOURCE STRING
        *   CALL: lstripf0 rstripf0
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *
        *       char s[] = "000.001200000";          stripf0(s); print(s, "\n");  //0.0012
        *       char s[] = "000123456789.001200000"; stripf0(s); print(s, "\n"); //123456789.0012
        *   \endcode
        */
        lstripf0(s);
        rstripf0(s);
        return s;
    }
    /// NUM OUT-LINE /// CLEAR INTEGER NUMBER STRING s LEFT PART FROM ZERO CHARACTER (s STRING MODIFIED), CODE : char s[] = "03"; stripi0(s); printf("%s\n"); //3
    char* stripi0(char* s) {
        /**
        *   \brief  CLEAR INTEGER NUMBER STRING s LEFT PART FROM ZERO CHARACTER
        *   \param  s STRING
        *   \return s STRING MODIFIED
        *   \code
        *   RUN-TIME ERROR CHECK: NONE
        *   NEED: MODIFY SOURCE STRING
        *   CALL: NONE
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *
        *       char s[] = "03";    stripi0(s); print(s, "\n");    //3
        *       char s[] = "00053"; stripi0(s); print(s, "\n");   //53
        *       char s[] = "000";   stripi0(s); print(s, "\n");  //0
        *       char s[] = "";      stripi0(s); print(s, "\n"); //"" => STRING VOID
        *
        *   \endcode
        */
        I64 qty = 0;
        i64 L_s = (i64)strlen(s);
        while (s[qty] == '0') qty++;
        if (qty) { I64 i = 0; while (s[i + qty]) { s[i] = s[i + qty]; i++; } s[i] = '\0'; }
        if (L_s && s[0] == '\0') { s[0] = '0'; s[1] = '\0'; }
        return s;
    }
    /// NUM OUT-LINE /// CLEAR BOTH LEFT AND RIGHT PART OF BOTH FLOATING-POINT AND INTEGER s FROM ZERO CHARACTER, CODE: char s[] = "000123456789.001200000"; strip0(s); print(s, "\n"); //123456789.0012 
    char* strip0(char* s) {
        /**
        *   \brief  CLEAR BOTH LEFT AND RIGHT PART OF BOTH FLOATING-POINT AND INTEGER s FROM ZERO CHARACTER
        *   \param  s STRING
        *   \return s STRING MODIFIED
        *   \code
        *   RUN-TIME ERROR CHECK: NONE
        *   NEED: MODIFY SOURCE STRING
        *   CALL: stripi0 stripf0
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *
        *       char s[] = "000123456789.001200000"; strip0(s); print(s, "\n");  //123456789.0012
        *       char s[] = "000123456789000";        strip0(s); print(s, "\n"); //123456789000
        *
        *   \endcode
        */
        i64 i = 0, IS_INT = 1;
        while (s[i]) { if (s[i] == '.') { IS_INT = 0; break; } i++; }
        if (IS_INT) stripi0(s); else stripf0(s);
        return s;
    }
    /// NUM OUT-LINE /// BUILD A STRING BASED ON ITSELF CONCATENATING A QUANTITY OF TIMES, CODE: char s[2048]; strcpy(s, "1"); char *pad = strpads("0", 6); strcat(s, pad); print(s, "\n"); free(pad); //1000000
    char* strpads(const char* s, i64 qty) {
        /**
        *   \brief  BUILD A STRING BASED ON ITSELF CONCATENATING A QUANTITY OF TIMES
        *   \param  s   STRING
        *   \param  qty i64
        *   \return str STRING PADDED
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       char s[2048]; strcpy(s, "1"); char *pad = strpads("0", 6);  strcat(s, pad); print(s, "\n"); free(pad);   //1000000
        *       char s[2048]; strcpy(s, "1"); char *pad = strpads("0", 0);  strcat(s, pad); print(s, "\n"); free(pad);  //1
        *       char s[2048]; strcpy(s, "1"); char *pad = strpads("0", -3); strcat(s, pad); print(s, "\n"); free(pad); //1
        *
        *   \endcode
        */
        char* str;
        qty = qty < 0 ? 0 : qty;
        str = (char*)malloc((qty * (i64)strlen(s) + 1) * sizeof(char)); //RAM DYNAMIC ALLOCATION
        if (!str) raise_exit("OUT OF RAM MEMORY => strpads", s);
        str[0] = '\0';
        for (i64 i = 0; i < qty; i++) strcat(str, s);
        return str;
    }
    /// NUM OUT-LINE /// BUILD A QUANTITY OF ZEROs STRING, CODE: char s[2048]; strcpy(s, "1"); char *pad = strpads0(6); strcat(s, pad); print(s,"\n"); free(pad); //1000000
    char* strpads0(i64 qty) {
        /**
        *   \brief  BUILD A QUANTITY OF ZEROs STRING
        *   \param  s   STRING
        *   \param  qty i64
        *   \return str STRING PADDED
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       char s[2048]; strcpy(s, "1"); char *pad = strpads0(6);  strcat(s, pad); print(s,"\n"); free(pad);   //1000000
        *       char s[2048]; strcpy(s, "1"); char *pad = strpads0(0);  strcat(s, pad); print(s,"\n"); free(pad);  //1
        *       char s[2048]; strcpy(s, "1"); char *pad = strpads0(-3); strcat(s, pad); print(s,"\n"); free(pad); //1
        *
        *   \endcode
        */
        char* str;
        i64 i;
        qty = qty < 0 ? 0 : qty;
        str = (char*)malloc((qty + 1) * sizeof(char)); //RAM DYNAMIC ALLOCATION
        if (!str) raise_exit("OUT OF RAM MEMORY => strpads0", i64str(qty));
        for (i = 0; i < qty; i++) str[i] = '0';
        str[i] = '\0';
        return str;
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION NUMERIC INTEGER STRING SUBTRACTION (UNSIGNED) NEED: free(), CODE: char *s = subis("3141592654", "2718281828"); print(s); free(s); //423310826
    char* subis(const char* op1, const char* op2, int check) { //DEFAULT ARGs: (int check = 1) (check=0 => +30%>)
        /**
        *   \brief ABSOLUTE ARBITRARY-PRECISION INTEGER NUMERIC STRING SUBTRACTION (UNSIGNED)
        *   \param  op1   STRING MINUEND
        *   \param  op2   STRING SUBTRAHEND
        *   \param  check PARAMETER VALIDATION
        *   \return a z r STRING SIGNED IF NEGATIVE DIFFERENCE
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: stripi0 is_strfmt_int raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       char *s = subis("3141592654", "2718281828"); print(s); free(s);   //423310826
        *       char *s = subis("3333", "33333");            print(s); free(s);  //-30000
        *       char* s = subis("3", "-3");                  print(s); free(s); //ERROR ARGUMENT VALUE => subis: [-3]
        *
        *   \endcode
        */
        if (check) { //ARGs VALIDATION
            if (!is_strfmt_int(op1)) { raise("ARGUMENT VALUE => subis", op1); return NULL; }
            if (!is_strfmt_int(op2)) { raise("ARGUMENT VALUE => subis", op2); return NULL; }
        }
        static char* a, * b, * z, * r; //RAM POINTERS VARIABLEs
        int SIGN = 0;          //SIGN DEFAULT TO ZERO
        int C = 0;            //CARRY DEFAULT TO ZERO => BORROW
        i64 DIM, offset, t;  //GENERAL PURPOSE
        i64 a_L = (i64)strlen(op1), b_L = (i64)strlen(op2);
        DIM = ((a_L > b_L ? a_L : b_L) + 4) * sizeof(char);                               //1 => NULL, 1 => SIGN
        a = (char*)malloc(DIM); if (!a) raise_exit("OUT OF RAM MEMORY => subis", op1);   //RAM DYNAMIC ALLOCATION
        b = (char*)malloc(DIM); if (!b) raise_exit("OUT OF RAM MEMORY => subis", op1);  //RAM DYNAMIC ALLOCATION
        z = (char*)malloc(DIM); if (!z) raise_exit("OUT OF RAM MEMORY => subis", op1); //RAM DYNAMIC ALLOCATION
        r = (char*)malloc(DIM); if (!r) raise_exit("OUT OF RAM MEMORY => subis", op1);//RAM DYNAMIC ALLOCATION
        z[0] = 0;  //"" ZERO STRING LENGTH INITIALIZATION
        r[0] = 0; //"" ZERO STRING LENGTH INITIALIZATION
        strcpy(a, op1); if (a[0] == '0') { stripi0(a); a_L = (i64)strlen(a); } //REMOVE NO VALUE ZEROs (003 => 3)
        strcpy(b, op2); if (b[0] == '0') { stripi0(b); b_L = (i64)strlen(b); }
        if (b[0] == '0') { free(b); free(r); free(z); return a; }                                //op2 => SUBTRAHEND EQUALS ZERO
        if (a[0] == '0') { strcpy(z, "-"); strcat(z, b); free(a); free(b); free(r); return z; } //op1 => MINUEND EQUALS ZERO
        if (a_L <= b_L) { //SUBTRACTION OPERANDS SET UP (5-13=-8) (3-5=-2) (5-5=0)
            if (a_L == b_L) { // (LENGTH => a == b) ----|
                if (strcmp(a, b) < 0) { //3-5=-2 -------|
                    SIGN = 1; //NEGATIVE              //| //FLAGS MINUS SIGN (-)
                    char* TEMP = a; a = b; b = TEMP;  //|//SWAPPING OPERANDS
                } // MINUEND EQUALS SUBTRAHEND ---------|
                else if (!strcmp(a, b)) { //5-5=0       |
                    z[0] = '0'; z[1] = '\0';          //|
                    free(a); free(b); free(r);        //|
                    return z;  //=> result "0"        //|
                }                                     //|
            }                                         //|
            else { // 5-13=-8 (LENGTH => a < b) --------|
                SIGN = 1; //NEGATIVE                  //| //FLAGS MINUS SIGN (-)
                char* TEMP = a; a = b; b = TEMP;      //|//SWAPPING OPERANDS
                i64 s = a_L; a_L = b_L; b_L = s;      //|
            }                                         //|
        } //--------------------------------------------|
        offset = a_L - b_L; //(5-3=2) (13-5) //LENGTH OPERAND EQUALIZATION (13-5 => 13-05)
        if (offset) { for (DIM = 0; DIM < offset; DIM++) z[DIM] = '0'; z[DIM] = '\0'; strcat(z, b); strcpy(b, z); } //ZEROs FILLING... (93-9 => 93-09)
        r[a_L] = '\0';                  //r = "...<--" (RIGHT TO LEFT)
        for (a_L--; a_L >= 0; a_L--) { //SIMPLE SCHOOL DIFFERENCE ALGORITHM (-)
            DIM = (a[a_L] - '0'); offset = (b[a_L] - '0');
            if (DIM >= offset) { t = DIM - offset - C; C = 0; }
            else { t = DIM + 10 - offset - C; C = 1; }
            if (t < 0) { t += 10; C = 1; }
            t += '0';
            r[a_L] = (char)t;
        }
        free(a); free(b);
        if (SIGN) {
            strcpy(z, "-"); strcat(z, r[0] == '0' ? stripi0(r) : r); //1000-1003=0003 => -3 (CLEAR ZEROs)
            free(r); return z;
        } //3-4=-1
        free(z);
        return (r[0] == '0' ? stripi0(r) : r); //1003-1000=0003 => 3 (CLEAR ZEROs)
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT NUMERIC STRING SUBTRACTION (UNSIGNED) NEED: free(), CODE: char *s = subfs("3.141592654", "2.718281828"); print(s, "\n"); free(s); //0.423310826
    char* subfs(const char* op1, const char* op2, int check) { //DEFAULT ARGs: (int check = 1) (check = 0 => +11.00%)
        /**
        *   \brief  ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT NUMERIC STRING SUBTRACTION (UNSIGNED)
        *   \param  op1   MINUEND
        *   \param  op2   SUBTRAHEND
        *   \param  check PARAMETER VALIDATION
        *   \return aI a  SIGNED IF NEGATIVE DIFFERENCE
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: subis is_strfmt_float lstripf0 rstripf0 strpads0 raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       char *s = subfs("3.141592654", "2.718281828"); print(s, "\n"); free(s);   //0.423310826
        *       char *s = subfs("3.141592654", "0.2536");      print(s, "\n"); free(s);  //"2.887992654"
        *       char *s = subfs("31415.92654", "25");          print(s, "\n"); free(s); //ERROR ARGUMENT VALUE => subfs: [25]
        */
        if (check) { //ARGs VALIDATION
            if (!is_strfmt_float(op1)) { raise("ARGUMENT VALUE => subfs", op1); return NULL; }
            if (!is_strfmt_float(op2)) { raise("ARGUMENT VALUE => subfs", op2); return NULL; }
        }
        i64 DOT, SIGN, aF_len, bF_len, a_L, b_L, DIM;                //VARIABLES
        char* a, * b, * aI, * aF, * bI, * bF, * RE, * RAM_X, * pad; //RAM POINTERS VARs
        a_L = (i64)strlen(op1); b_L = (i64)strlen(op2);
        //DIM = ((a_L > b_L ? a_L : b_L) + 8) * sizeof(char); //1 => NULL, 1 => DOT, 1 => '-' (MINUS SIGN) !!!BUG: 17-07-2024!!!
        DIM = (a_L + b_L + 8) * sizeof(char);                //1 => NULL, 1 => DOT, 1 => '-' (MINUS SIGN) 
        a = (char*)malloc(DIM); if (!a)  raise_exit("OUT OF RAM MEMORY => subfs", op1);        //RAM DYNAMIC ALLOCATION 
        b = (char*)malloc(DIM); if (!b)  raise_exit("OUT OF RAM MEMORY => subfs", op1);       //RAM DYNAMIC ALLOCATION
        aI = (char*)malloc(DIM); if (!aI) raise_exit("OUT OF RAM MEMORY => subfs", op1);     //RAM DYNAMIC ALLOCATION
        aF = (char*)malloc(DIM); if (!aF) raise_exit("OUT OF RAM MEMORY => subfs", op1);    //RAM DYNAMIC ALLOCATION
        bI = (char*)malloc(DIM); if (!bI) raise_exit("OUT OF RAM MEMORY => subfs", op1);   //RAM DYNAMIC ALLOCATION
        bF = (char*)malloc(DIM); if (!bF) raise_exit("OUT OF RAM MEMORY => subfs", op1);  //RAM DYNAMIC ALLOCATION
        RE = (char*)malloc(DIM); if (!RE) raise_exit("OUT OF RAM MEMORY => subfs", op1); //RAM DYNAMIC ALLOCATION                              
        strcpy(a, op1); strcpy(b, op2); //op1=>a  op2=>b
        if (a[0] == '0') lstripf0(a); 
        if (a[a_L - 1] == '0') rstripf0(a); //CLEARING ZEROS (020.00100 => 20.001)
        if (b[0] == '0') lstripf0(b); 
        if (b[b_L - 1] == '0') rstripf0(b);
        //CHECK DIFFERENCE WITH ZERO OPERANDS
        if (!strcmp(b, "0.0")) { free(b); free(aI); free(aF); free(bI); free(bF); free(RE); return a; } //b => ZERO SUBTRAHEND
        if (!strcmp(a, "0.0")) { //a => ZERO MINUEND
            strcpy(aI, "-"); strcat(aI, b);
            free(a); free(b); free(aF); free(bI); free(bF); free(RE);
            return aI;
        }
        if (!strcmp(a, b)) { //OPERANDS EQUAL THEMSELVES, a==b => '0.0' DIFFERENCE
            aI[0] = '0'; aI[1] = '.'; aI[2] = '0'; aI[3] = '\0'; //"0.0" STRING
            free(a); free(b); free(aF); free(bI); free(bF); free(RE);
            return aI;
        }
        strcpy(aI, strtok(a, ".")); strcpy(aF, strtok(0, ".")); aF_len = (i64)strlen(aF);
        strcpy(bI, strtok(b, ".")); strcpy(bF, strtok(0, ".")); bF_len = (i64)strlen(bF);
        if (aF_len < bF_len) { //3.12-5.012= -1.892
            DOT = bF_len - aF_len;
            strcpy(a, aI); strcat(a, aF); pad = strpads0(DOT); strcat(a, pad); free(pad);
            strcpy(b, bI); strcat(b, bF);
        }
        else if (aF_len > bF_len) { //3.1234-5.012= -1.8886
            DOT = aF_len - bF_len; strcpy(a, aI); strcat(a, aF); strcpy(b, bI); strcat(b, bF);
            pad = strpads0(DOT); strcat(b, pad); free(pad);
        }
        else { strcpy(a, aI); strcat(a, aF); strcpy(b, bI); strcat(b, bF); } //33.1234-5.0321=28.0913
        RAM_X = subis(a, b, false);
        SIGN = 0; //DEFAULT SIGN INITIALIZATION
        if (RAM_X[0] == '-') { SIGN = 1; strcpy(RAM_X, RAM_X + 1); } //CHECK DIFFERENCE SIGN
        DOT = (i64)strlen(RAM_X) - (bF_len > aF_len ? bF_len : aF_len);
        if (DOT < 0) { //5.012-5.004=0.008
            strcpy(RE, "0."); pad = strpads0(-DOT);
            strcat(RE, pad); strcat(RE, RAM_X); free(RAM_X); free(pad);
            if (RE[strlen(RE) - 1] == '0') rstripf0(RE);
        }
        else { //SHIFT DIGITS AFTER DOT 0.12-5.012= -4.892
            RE[0] = '\0'; //""
            strncpy(RE, RAM_X, DOT); RE[DOT] = '\0'; //NULL
            strcat(RE, "."); strcat(RE, RAM_X + DOT); free(RAM_X);
            if (RE[strlen(RE) - 1] == '0') rstripf0(RE);
        }
        if (RE[0] == '.') {
            if (SIGN) strcpy(aI, "-0"); //0.012-0.12= -0.108
            else strcpy(aI, "0");      //0.12-0.012=0.108
            strcat(aI, RE);
        }
        else {
            if (SIGN) { strcpy(aI, "-"); strcat(aI, RE); } //0.12-5.012= -4.892 
            else strcpy(aI, RE);
        }                        //5.012-0.12 =  4.892
        free(RE); free(aF); free(bI); free(bF); free(a); free(b);
        return aI;
    }
    /// NUM OUT-LINE /// STRING REVERSE MODIFYING SOURCE ONE, CODE: char s[128]; strcpy(s, "987654321"); str_rev(s); print(s, "\n"); //123456789 
    char* str_rev(char* s) {
        char T;
        i64 pos;
        i64 s_len = (i64)strlen(s);
        i64 s_mid = s_len / 2;
        for (i64 i = 0; i < s_mid; i++) { T = s[i]; pos = s_len - i - 1; s[i] = s[pos]; s[pos] = T; }
        return s;
    }
    /// NUM OUT-LINE /// CONVERT I32 TYPE TO UNSIGNED INTEGER STRING, CODE: I32 n = 4294967295; const char *ns = I32str(n); print(ns, "\n"); //4294967295
    const char* I32str(I32 num, int base) { //DEFAULT ARGS: (int base = 10)
        static char buf[40];
        sprintf(buf, "%u", num);
        return buf;
        //return _ultoa(num, buf, base); //RETURN ONLY POSITIVE WITHOUT SIGN (sizeof(long int) = 4)
    }
    /// NUM OUT-LINE /// CONVERT i32 TYPE TO SIGNED INTEGER STRING, CODE: i32 n = -20000; const char* ns = i32str(n); print(ns, "\n"); //-20000
    const char* i32str(i32 num, int base) {  //DEFAULT ARGS: (int base = 10)
        static char buf[40];
        sprintf(buf, "%d", num);
        return buf;
        //return _itoa(num, buf, base);
    }
    ///// NUM OUT-LINE /// OUT-OF-SERVICE
    //const char* i32str_(i32 num) {
    //    /**
    //    *   \brief CONVERT i32 TYPE (SIGNED INT) TO SIGNED INTEGER STRING
    //    *   \param  num i32
    //    *   \return s "0" 32-BIT SIGNED INTEGER STRING
    //    *   \code
    //    *   RUN-TIME ERROR CHECK: NO
    //    *   NEED: NONE
    //    *   CALL: NONE
    //    *   TIME: [...]
    //    *   LIMIT: 32-BIT SIGNED INTEGER
    //    *
    //    *   EXAMPLES:
    //    *       i32 n = -20000; char *ns = i32str(n); printf("%s\n", ns); //"-20000"
    //    *       i32 n = 0;      char *ns = i32str(n); printf("%s\n", ns); //"0"
    //    *
    //    *   \endcode
    //    */
    //    static char r[16]; //1 sign + 9 digits (SIGNED 32 BIT) + 1 NULL => FROM -2147483648 TO +2147483647
    //    static char s[16];
    //    i32 Q, R;
    //    int i;
    //    char sign = num < 0 ? 1 : 0;
    //    i32 MIN = -2147483647LL - 1; //-(i32)2147483648;
    //    if (sign && num == MIN)     //-2147483648LL
    //        return "-2147483648";
    //    num = sign ? num * -1LL : num;
    //    if (!num)
    //        return "0";
    //    for (i = 0; i < 21; i++) {
    //        Q = num / 10;
    //        R = num % 10;
    //        r[i] = (char)R + '0'; //byte (0-9) + 48 (zero digit ascii code)
    //        num = Q;
    //        if (!Q && !R) {
    //            r[i] = 0; //NULL STRING ENDING
    //            break;
    //        }
    //    }
    //    if (sign)
    //        r[i++] = '-'; //store minus sign (-)
    //    int j = i; i = 0;
    //    while (j) {
    //        s[i] = r[j - 1];
    //        j--;i++;
    //    }
    //    s[i] = '\0'; //NULL
    //    return s;
    //}
    /// NUM OUT-LINE /// CONVERT AN INTEGER STRING TO UNSIGNED 32-BIT INTEGER, CODE: print((I64)I32int("400000000") + 1, "\n"); //400000001
    I32 I32int(const char* s, int base, int check) { //DEFAULT ARGS: (const char*, int base = 10, int check = 1);
        //*   \param  check PARAMETER VALIDATION AND EXCEPTIONAL RESULT AND ERROR
        if (check) if (OFI32(s)) { raise("ARGUMENT VALUE => I32int", s); return 0; } //32-BIT UNSIGNED INTEGER OVERFLOW
        return (i32)strtoull(s, NULL, base);
    }
    /// NUM OUT-LINE /// CONVERT A SIGNED 32-BIT INTEGER TO A SIGNED 32-BIT INTEGER, CODE: print(i32int("-2100000000") + 1, "\n"); //-2099999999
    i32 i32int(const char* s, int base, int check) { //DEFAULT ARGS: (int base = 10, int check = 1);
        //*   \param  check PARAMETER VALIDATION AND EXCEPTIONAL RESULT AND ERROR
        if (check) if (OFI31(s)) { raise("ARGUMENT VALUE => i32int", s); return 0; } //32-BIT SIGNED INTEGER OVERFLOW
        return (i32)strtoll(s, NULL, base);
    }
    /// NUM OUT-LINE /// CHECK OVERFLOW FOR 128-BIT UNSIGNED INTEGER STRING (0-340282366920938463463374607431768211455 RANGE), CODE: const char* n = "340282366920938463463374607431768211455"; int t = OFI128(n); print(t ? "OVERFLOW" : "SUCCESS", "\n"); //"SUCCESS"
    int OFI128(const char* stri) {
        /**
        *   \brief  CHECK OVERFLOW FOR 128-BIT UNSIGNED INTEGER STRING (0-340282366920938463463374607431768211455 RANGE)
        *   \param  stri STRING
        *   \return int
        *   \code
        *   RUN-TIME ERROR CHECK: NO
        *   NEED: NONE
        *   CALL: strint_cmp
        *   TIME: [...]
        *   LIMIT: 128-BIT UNSIGNED INTEGER
        *
        *   EXAMPLES:
        *       const char* n = "340282366920938463463374607431768211455"; int t = OFI128(n); print(t ? "OVERFLOW" : "SUCCESS", "\n");   //"SUCCESS"
        *       const char* n = "340282366920938463463374607431768211456"; int t = OFI128(n); print(t ? "OVERFLOW" : "SUCCESS", "\n");  //"OVERFLOW"
        *       const char *n = "-5";                                      int t = OFI128(n); print(t ? "OVERFLOW" : "SUCCESS", "\n"); //"OVERFLOW"
        *   \endcode
        */
        char MAX[] = "340282366920938463463374607431768211455";
        i64  stri_L = (i64)strlen(stri);
        for (i64 i = 0; i < stri_L; i++) if (!isdigit(stri[i])) return 1;
        if (stri_L > 39) return 1; //OVERFLOW!
        if (stri_L < 39) return 0;
        return strint_cmp(MAX, stri) < 0 ? 1 : 0;
    }
    /// NUM OUT-LINE /// CHECK OVERFLOW FOR 64-BIT UNSIGNED INTEGER STRING (0-18446744073709551615 RANGE), CODE: const char* n = "18446744073709551615"; int t = OFI64(n); print(t ? "OVERFLOW" : "SUCCESS", "\n"); //"SUCCESS"
    int OFI64(const char* stri) {
        /**
        *   \brief  CHECK OVERFLOW FOR 64-BIT UNSIGNED INTEGER STRING (0-18446744073709551615 RANGE)
        *   \param  stri STRING
        *   \return int
        *   \code
        *   RUN-TIME ERROR CHECK: NO
        *   NEED: NONE
        *   CALL: strint_cmp
        *   TIME: [...]
        *   LIMIT: 64-BIT UNSIGNED INTEGER
        *
        *   EXAMPLES:
        *       const char* n = "18446744073709551615"; int t = OFI64(n); print(t ? "OVERFLOW" : "SUCCESS", "\n");   //"SUCCESS"
        *       const char* n = "18446744073709551616"; int t = OFI64(n); print(t ? "OVERFLOW" : "SUCCESS", "\n");  //"OVERFLOW"
        *       const char *n = "-5";                   int t = OFI64(n); print(t ? "OVERFLOW" : "SUCCESS", "\n"); //"OVERFLOW"
        *   \endcode
        */
        char MAX[] = "18446744073709551615";
        i64  stri_L = (i64)strlen(stri);
        for (i64 i = 0; i < stri_L; i++) if (!isdigit(stri[i])) return 1;
        if (stri_L > 20) return 1; //OVERFLOW!
        if (stri_L < 20) return 0;
        return strint_cmp(MAX, stri) < 0 ? 1 : 0;
    }
    /// NUM OUT-LINE /// CHECK OVERFLOW FOR 32 BIT UNSIGNED INTEGER STRING (0-429496725 RANGE), CODE: const char* n = "429496725"; int t = OFI32(n); print(t ? "OVERFLOW" : "SUCCESS", "\n"); //"SUCCESS"
    int OFI32(const char* stri) {
        /**
        *   \brief  CHECK OVERFLOW FOR 32-BIT UNSIGNED INTEGER STRING (0-429496725 RANGE)
        *   \param  stri STRING
        *   \return int
        *   \code
        *   RUN-TIME ERROR CHECK: NO
        *   NEED: NONE
        *   CALL: strint_cmp
        *   TIME: [...]
        *   LIMIT: 32-BIT UNSIGNED INTEGER
        *
        *   EXAMPLES:
        *       const char* n = "429496725";  int t = OFI32(n); print(t ? "OVERFLOW" : "SUCCESS", "\n");   //"SUCCESS"
        *       const char* n = "4294967296"; int t = OFI32(n); print(t ? "OVERFLOW" : "SUCCESS", "\n");  //"OVERFLOW"
        *       const char *n = "-5";         int t = OFI32(n); print(t ? "OVERFLOW" : "SUCCESS", "\n"); //"OVERFLOW"
        *   \endcode
        */
        char MAX[] = "4294967295";
        i64  stri_L = (i64)strlen(stri);
        for (i64 i = 0; i < stri_L; i++) if (!isdigit(stri[i])) return 1;
        if (stri_L > 10) return 1; //OVERFLOW!
        if (stri_L < 10) return 0;
        return strint_cmp(MAX, stri) < 0 ? 1 : 0;
    }
    /// NUM OUT-LINE /// CHECK OVERFLOW FOR 32 BIT SIGNED INTEGER STRING, CODE: const char *n = "-2147483648"; int t = OFI31(n); print(t ? "OVERFLOW" : "SUCCESS");   //SUCCESS
    int OFI31(const char* n) {
        /**
        *   \brief  CHECK OVERFLOW FOR 32-BIT SIGNED INTEGER STRING
        *   \param  stri STRING
        *   \return int
        *   \code
        *   RUN-TIME ERROR CHECK: NO
        *   NEED: NONE
        *   CALL: is_strfmt_int strfloat_cmp
        *   TIME: [...]
        *   LIMIT: 32-BIT SIGNED INTEGER
        *
        *   EXAMPLES:
        *
        *       const char *n = "-2147483648"; int t = OFI31(n); print(t ? "OVERFLOW" : "SUCCESS");   //SUCCESS
        *       const char *n = "2147483648";  int t = OFI31(n); print(t ? "OVERFLOW" : "SUCCESS");  //OVERFLOW
        *       const char *n = "-5";          int t = OFI31(n); print(t ? "OVERFLOW" : "SUCCESS"); //OVERFLOW
        *
        *   \endcode
        */
        static char s[16];
        static int NEG;
        char MIN[] = "2147483648";  //"-2147483648"
        char MAX[] = "2147483647"; //  "2147483647"
        i64 n_L = (i64)strlen(n);
        if (n_L > 11) return 1;    //NOT VALID ("-2147483648" => 11 CHARACTERS)
        strcpy(s, n);
        if (s[0] == '-') { strcpy(s, s + 1); NEG = 1; }                  //SIGN
        else if (s[0] == '+') { strcpy(s, s + 1); NEG = 0; }
        else if (isdigit(s[0])) NEG = 0;
        else return 1;                                                //NOT VALID
        i64 s_L = (i64)strlen(s);
        for (i64 i = 0; i < s_L; i++) if (!isdigit(s[i])) return 1; //NOT VALID
        if (!is_strfmt_int(s)) return 1;                           //NOT VALID 
        if (NEG && strint_cmp(s, MIN) > 0) return 1;          //OVERFLOW!
        if (!NEG && strint_cmp(s, MAX) > 0) return 1;         //OVERFLOW!
        return 0;
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT NUMERIC STRING MULTIPLICATION (UNSIGNED, NEED: free()), CODE: char* R = mulfs("3.141592654", "2.718281828"); print(R,"\n"); free(R); //8.539734222346491512
    char* mulfs(const char* op1, const char* op2, int check) { //DEFAULT ARGs: (int check = 1) 
        /**
        *   \brief  ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT NUMERIC STRING MULTIPLICATION (UNSIGNED)
        *   \param  op1  MULTIPLICAND FLOATING-POINT STRING
        *   \param  op2  MULTIPLIER   FLOATING-POINT STRING
        *   \param  check PARAMETER VALIDATION
        *   \return a b  PRODUCT      FLOATING-POINT STRING
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: mulis is_strfmt_float lstripf0 rstripf0 strpads0 raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *   char* R = mulfs("3.141592654", "2.718281828"); print(R,"\n"); free(R);   //8.539734222346491512
        *   char* R = mulfs("314159.2654", "271828.1828"); print(R,"\n"); free(R);  //85397342223.46491512
        *   char* R = mulfs("3141592654", "2.59");         print(R,"\n"); free(R); //ERROR ARGUMENT VALUE, FORMAT => mulfs: [3141592654]
        *
        *   \endcode
        */
        i64 DOT, M_L, aF_len, bF_len, Z, a_L, b_L, DIM;       //VARIABLEs
        char* a, * b, * aI, * aF, * bI, * bF, * RAM_RE, * pad; //RAM POINTER VARs
        if (check) { //ARGs VALIDATION: op1 AND op2 MUST BE FLOATING POINT FORMAT!
            if (!is_strfmt_float(op1)) { raise("ARGUMENT VALUE, FORMAT => mulfs", op1); return NULL; }
            if (!is_strfmt_float(op2)) { raise("ARGUMENT VALUE, FORMAT => mulfs", op2); return NULL; }
        }
        a_L = (i64)strlen(op1); b_L = (i64)strlen(op2);
        DIM = ((a_L > b_L ? a_L : b_L) + 4) * sizeof(char); //1 => NULL
        a = (char*)malloc(DIM * 2); if (!a) raise_exit("OUT OF RAM MEMORY => mulfs", op1);  //RAM DYNAMIC ALLOCATION
        b = (char*)malloc(DIM * 2); if (!b) raise_exit("OUT OF RAM MEMORY => mulfs", op1); //RAM DYNAMIC ALLOCATION
        strcpy(a, op1); strcpy(b, op2); //op1 => a  op2 => b 
        if (a[0] == '0') lstripf0(a); 
        if (a[a_L - 1] == '0') rstripf0(a); //CLEARING ZEROS (020.00100 => 20.001)
        if (b[0] == '0') lstripf0(b); 
        if (b[b_L - 1] == '0') rstripf0(b);
        if (!strcmp(a, "0.0")) { free(b); return a; }    //ZERO OPERAND 1 RETURN op1
        if (!strcmp(b, "0.0")) { free(a); return b; }   //ZERO OPERAND 2 RETURN op2
        if (!strcmp(a, "1.0")) { free(a); return b; }  //ONE OPERAND a RETURN op2
        if (!strcmp(b, "1.0")) { free(b); return a; } //ONE OPERAND 2 RETURN op1
        aI = (char*)malloc(DIM); if (!aI) raise_exit("OUT OF RAM MEMORY => mulfs", op1);    //RAM DYNAMIC ALLOCATION
        aF = (char*)malloc(DIM); if (!aF) raise_exit("OUT OF RAM MEMORY => mulfs", op1);   //RAM DYNAMIC ALLOCATION
        bI = (char*)malloc(DIM); if (!bI) raise_exit("OUT OF RAM MEMORY => mulfs", op1);  //RAM DYNAMIC ALLOCATION
        bF = (char*)malloc(DIM); if (!bF) raise_exit("OUT OF RAM MEMORY => mulfs", op1); //RAM DYNAMIC ALLOCATION
        strcpy(aI, strtok(a, ".")); strcpy(aF, strtok(0, ".")); aF_len = (i64)strlen(aF);
        strcpy(bI, strtok(b, ".")); strcpy(bF, strtok(0, ".")); bF_len = (i64)strlen(bF);
        DOT = aF_len + bF_len;
        strcpy(a, aI); strcat(a, aF);  //TRANSFORM TO INTEGER NUMBER
        strcpy(b, bI); strcat(b, bF); //TRANSFORM TO INTEGER NUMBER
        RAM_RE = mulis(a, b, false); //RAM ALLOCATION
        M_L = (i64)strlen(RAM_RE); Z = M_L - DOT;
        if (Z > 0) {
            strncpy(b, RAM_RE, Z); b[Z] = '.'; strncpy(b + Z + 1, RAM_RE + Z, DOT + 1); //1 => NULL - END STRING 
            if (b[strlen(b) - 1] == '0') rstripf0(b); //CLEARING RIGHT ZEROS (42.00 => 42.0)
            free(RAM_RE); free(aI); free(aF); free(bI); free(bF); free(a);
            return b;
        }
        strcpy(b, "0."); //b < 1
        pad = strpads0(-Z);
        strncpy(b + 2, pad, -Z);
        strncpy(b + 2 - Z, RAM_RE, M_L + 1);
        if (b[strlen(b) - 1] == '0') rstripf0(b); //CLEARING RIGHT ZEROS (0.0010 => 0.001)
        free(RAM_RE); free(aI); free(aF); free(bI); free(bF); free(a); free(pad);
        return b;
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT NUMERIC STRING INVERSE DIVISION WITH FLOATING-POINT QUOTIENT (UNSIGNED, NEED: free()) CODE: char *R = invfs("4294967296.0"); print(R, "\n"); free(R); //0.000000000232830643653869628906
    char* invfs(const char* div, i64 d, int check) { //DEFAULT ARGUMENTS: (i64 d = 30, int check = 1)
        /**
        *   \brief      ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT NUMERIC STRING INVERSE DIVISION WITH FLOATING-POINT QUOTIENT (UNSIGNED)
        *   \param  div DIVISOR FLOATING-POINT STRING
        *   \param  d   DECIMALS i64
        *   \param  check PARAMETER VALIDATION AND EXCEPTIONAL RESULT AND ERROR
        *   \return R s QUOTIENT FLOATING-POINT STRING
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: divfs stripf0 is_strfmt_float raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       char *R = invfs("4294967296.0"); print(R, "\n"); free(R);  //0.000000000232830643653869628906
        *       char *R = invfs("3.0", 4);       print(R, "\n"); free(R); //0.3333
        *
        *   \endcode
        */
        char* R;
        if (check) if (!is_strfmt_float(div)) { raise("ARGUMENT VALUE => invfs", div); return NULL; }
        d = d < 0 ? -d : d; //ABS d
        i64 div_L = (i64)strlen(div);
        char* s = (char*)malloc((div_L + 16) * sizeof(char)); // + NULL //RAM DYNAMIC ALLOCATION
        if (!s) raise_exit("OUT OF RAM MEMORY => invfs", div);
        strcpy(s, div);
        if (s[0] == '0') lstripf0(s); 
        if (s[div_L - 1] == '0') rstripf0(s); //CLEARING ZEROS (020.00100 => 20.001)
        if (check) {
            if (!strcmp(s, "0.0")) { free(s); raise("DIVISION BY ZERO => invfs", div); return NULL; }
            if (!strcmp(s, "1.0")) return strcpy(s, "1.0"); //INVERSE OF 1 EQUALS 1
        }
        R = divfs("1.0", s, d, false); //1:s
        free(s);
        return R;
    }
    /// NUM OUT-LINE /// ABSOLUTE FLOATING-POINT STRING DIVISION USEFUL BY DIVISOR INVERSE MULTIPLICATION (UNSIGNED, NEED: free()), CODE: char* R = divfs("3.141592654", "2.718281828", 10, 0); print(R, "\n"); free(R); //1.1557273501 (check=0 -> +4.91%)  
    char* divfs(const char* op1, const char* op2, i64 d, int check) { //ARGUMENTS DEFAULT: (i64 d = 30, int check = 1) (check=0 -> +4.91%)
        /**
        *   \brief  ABSOLUTE FLOATING-POINT STRING DIVISION (UNSIGNED) USEFUL BY DIVISOR INVERSE MULTIPLICATION
        *   \param  op1 STRING DIVIDEND
        *   \param  op2 STRING DIVISOR
        *   \param  d   INTEGER DECIMAL DIGITS
        *   \param  check PARAMETER VALIDATION AND EXCEPTIONAL RESULT AND ERROR
        *   \return R a STRING QUOTIENT
        *   \code
        *   ERROR CHECK: YES
        *   NEED: free()
        *   CALL: divis mulis is_strfmt_float lstripf0 rstripf0 strpads0 raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *       char* R = divfs("3.141592654", "2.718281828", 10); print(R, "\n"); free(R); //1.1557273501 (check=0 -> +4.91>)
        *       char* R = divfs("31415926.54", "271828.1828");     print(R); free(R);  //115.572735013699984900903365785955
        *       char* R = divfs("-3.14", "271828.1828");           print(R); free(R); //ERROR ARGUMENT VALUE => divfs: [-3.14]
        *   \endcode
        */
        Division* Q;         //VARIABLES
        if (check) {
            if (!is_strfmt_float(op1)) { raise("ARGUMENT VALUE => divfs", op1); return NULL; }
            if (!is_strfmt_float(op2)) { raise("ARGUMENT VALUE => divfs", op2); return NULL; }
        }
        d = (d < 0 ? -d : d); //DECIMAL DIGITS (ABSOLUTE VALUE)
        i64 a_L = (i64)strlen(op1), b_L = (i64)strlen(op2);
        i64 DIM = ((a_L > b_L ? a_L : b_L) + 16) * sizeof(char); //2 => NULL, 1 => DOT
        char* a = (char*)malloc(DIM); if (!a) raise_exit("OUT OF RAM MEMORY => divfs", op1);  //RAM DYNAMIC ALLOCATION
        char* b = (char*)malloc(DIM); if (!b) raise_exit("OUT OF RAM MEMORY => divfs", op1); //RAM DYNAMIC ALLOCATION
        strcpy(a, op1); strcpy(b, op2); //op1 = > a, op2 => b
        if (a[0] == '0') lstripf0(a); 
        if (a[a_L - 1] == '0') { rstripf0(a); a_L = (i64)strlen(a); }  //CLEARING ZEROS (020.00100 => 20.001)
        if (b[0] == '0') lstripf0(b); 
        if (b[b_L - 1] == '0') { rstripf0(b); b_L = (i64)strlen(b); }
        while (a[a_L - 1] == '0' && a[a_L - 2] == '.' && b[b_L - 1] == '0' && b[b_L - 2] == '.') { //12300.0:100.0=123:1=123
            i64 za = 0, zb = 0; //ZEROs
            i64 c = a_L - 3;
            if (a[c] == '0') { for (; a[c] == '0'; c--) za++; }
            else break;
            c = b_L - 3;
            if (b[c] == '0') { for (; b[c] == '0'; c--) zb++; a_L = (i64)strlen(a); b_L = (i64)strlen(b); }
            else break;
            i64 Z = (za < zb ? za : zb); //ZEROs COUNT TO CLEAR
            a_L -= (Z + 2); a[a_L] = '\0'; b_L -= (Z + 2); b[b_L] = '\0';
            strcat(a, ".0"); strcat(b, ".0");
            break;
        }
        if (check) {
            if (!(strcmp(b, "0.0"))) { free(a); free(b); raise("DIVISION BY ZERO => divfs", op2); return NULL; } //ERROR-DIVISION BY ZERO
            if (!strcmp(a, "0.0")) { free(b); return a; }                   //DIVIDEND EQUALS ZERO  => "0.0" RESULT
            if (!(strcmp(b, "1.0"))) { free(b); return a; }                //DIVISION BY ONE        => DIVIDEND RESULT
            if (!(strcmp(b, a))) { free(b); strcpy(a, "1.0"); return a; } //DIVISOR EQUALS DIVIDEND => "1.0" RESULT
        }
        char* R = (char*)malloc(DIM + d * sizeof(char)); if (!R)  raise_exit("OUT OF RAM MEMORY => divfs", op1); //RAM DYNAMIC ALLOCATION
        char* aI = (char*)malloc(DIM);     if (!aI) raise_exit("OUT OF RAM MEMORY => divfs", op1);    //RAM DYNAMIC ALLOCATION
        char* aF = (char*)malloc(DIM);     if (!aF) raise_exit("OUT OF RAM MEMORY => divfs", op1);   //RAM DYNAMIC ALLOCATION
        char* bI = (char*)malloc(DIM);     if (!bI) raise_exit("OUT OF RAM MEMORY => divfs", op1);  //RAM DYNAMIC ALLOCATION
        char* bF = (char*)malloc(DIM);     if (!bF) raise_exit("OUT OF RAM MEMORY => divfs", op1); //RAM DYNAMIC ALLOCATION
        i64 aF_len; i64 bF_len;
        strcpy(aI, strtok(a, "."));
        strcpy(aF, strtok(0, ".")); aF_len = (i64)strlen(aF);
        strcpy(bI, strtok(b, "."));
        strcpy(bF, strtok(0, ".")); bF_len = (i64)strlen(bF);
        char* as, * bs, * quotient, * remainder; //RAM POINTERS
        if (aF_len > bF_len) { //3.14:2.9=1.082758 d=6
            I64 ze = aF_len - bF_len;
            char* st = strpads0(ze);
            i64 st_L = (i64)strlen(st);
            DIM += (st_L * sizeof(char));
            as = (char*)malloc(DIM);        if (!as) raise_exit("OUT OF RAM MEMORY => divfs", op1); //RAM DYNAMIC ALLOCATION
            bs = (char*)malloc(DIM);        if (!bs) raise_exit("OUT OF RAM MEMORY => divfs", op1);//RAM DYNAMIC ALLOCATION
            quotient = (char*)malloc(DIM);  if (!quotient) raise_exit("OUT OF RAM MEMORY => divfs", op1);  //RAM DYNAMIC ALLOCATION
            remainder = (char*)malloc(DIM); if (!remainder) raise_exit("OUT OF RAM MEMORY => divfs", op1);//RAM DYNAMIC ALLOCATION
            strcpy(as, aI); strcat(as, aF);
            strcpy(bs, bI); strcat(bs, bF);
            strcat(bs, st); free(st);
        }
        else { //2.9:3.14=0.923566 d=6
            I64 ze = bF_len - aF_len;
            if (!ze && !strcmp(aF, "0") && !strcmp(bF, "0")) {
                as = (char*)malloc(DIM);        if (!as) raise_exit("OUT OF RAM MEMORY => divfs", op1); //RAM DYNAMIC ALLOCATION
                bs = (char*)malloc(DIM);        if (!bs) raise_exit("OUT OF RAM MEMORY => divfs", op1);//RAM DYNAMIC ALLOCATION
                quotient = (char*)malloc(DIM);  if (!quotient) raise_exit("OUT OF RAM MEMORY => divfs", op1);  //RAM DYNAMIC ALLOCATION
                remainder = (char*)malloc(DIM); if (!remainder) raise_exit("OUT OF RAM MEMORY => divfs", op1);//RAM DYNAMIC ALLOCATION
                strcpy(as, aI); strcpy(bs, bI);
            } //987654321987654321.0:12345678.0=8.0000000729 d=10
            else {
                char* st = strpads0(ze);
                i64 st_L = (i64)strlen(st);
                DIM += st_L;
                as = (char*)malloc(DIM);        if (!as) raise_exit("OUT OF RAM MEMORY => divfs", op1); //RAM DYNAMIC ALLOCATION
                bs = (char*)malloc(DIM);        if (!bs) raise_exit("OUT OF RAM MEMORY => divfs", op1);//RAM DYNAMIC ALLOCATION
                quotient = (char*)malloc(DIM);  if (!quotient) raise_exit("OUT OF RAM MEMORY => divfs", op1);  //RAM DYNAMIC ALLOCATION
                remainder = (char*)malloc(DIM); if (!remainder) raise_exit("OUT OF RAM MEMORY => divfs", op1);//RAM DYNAMIC ALLOCATION
                strcpy(as, aI); strcat(as, aF);
                strcat(as, st); free(st);
                strcpy(bs, bI); strcat(bs, bF);
            }
        }
        Q = divis(as, bs, false); strcpy(quotient, (Q->quotient)); strcpy(remainder, Q->remainder); free(Q->quotient); free(Q->remainder);
        strcpy(R, quotient);
        if (d && strcmp(remainder, "0")) strcat(R, ".");
        else { strcat(R, ".0"); d = 0; } //3.99:3.0=1.0 d=0 (WITHOUT DECIMAL DIGITS WITH NO REMAINDER)
        for (i64 k = d, rem_L; k > 0; k--) { //COMPUTING DECIMALS DIGITS (d != 0)
            rem_L = (i64)strlen(remainder); remainder[rem_L] = '0'; remainder[rem_L + 1] = '\0'; //10x remainder
            strcpy(quotient, remainder);
            Q = divis(quotient, bs, false); strcpy(quotient, (Q->quotient)); strcpy(remainder, Q->remainder);
            strcat(R, quotient);
            free(Q->quotient); free(Q->remainder);
            if (!strcmp(remainder, "0")) { d = 0; break; }
        }
        free(a); free(b); free(as); free(bs); free(aI); free(aF); free(bI); free(bF);
        free(quotient); free(remainder);
        if (d) rstripf0(R); //d=0 => INTEGER FORMAT (3.0)
        return R;
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION INTEGER NUMERIC STRING DIVISION AND MODULUS (UNSIGNED, NEED: free(division->remainder); free(division->quotient);), CODE: const char* a = "8539734222346491512", * b = "2718281828"; Division* s = divis(a, b); print(string(a) + ":" + b + "=" + s->quotient + " " + s->remainder + "\n"); free(s->remainder); free(s->quotient); //8539734222346491512:2718281828=3141592654 0
    Division* divis(const char* n, const char* div, int check) { //DEFAULT ARGs: (int check = 1) (+5.80%)
        /**
        *   \brief  ABSOLUTE ARBITRARY-PRECISION INTEGER NUMERIC STRING DIVISION AND MODULUS (UNSIGNED)
        *   \param  n     DIVIDEND STRING
        *   \param  div   DIVISOR  STRING
        *   \param  check PARAMETER VALIDATION AND EXCEPTIONAL RESULT AND ERROR
        *   \return &division Division struct POINTER (division->quotient division->remainder)
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free(division->remainder); free(division->quotient);
        *   CALL: divfs mulfs mulis addis subis strint_cmp is_strfmt_int I64str I64int stripi0 raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       const char *a = "8539734222346491512", *b = "2718281828"; Division *s = divis(a, b);
        *       print(string(a) + ":" + b + "=" + s->quotient + " " +s->remainder + "\n"); free(s->remainder); free(s->quotient); //8539734222346491512:2718281828=3141592654 0
        *
        *       const char *a = "8539734222346491512", *b = "2718281828"; Division *s = divis(a, b, false);
        *       print(string(a) + ":" + b + "=" + s->quotient + " " +s->remainder + "\n"); free(s->remainder); free(s->quotient); //8539734222346491512:2718281828=3141592654 0 (+5.54%)
        *
        *       const char *a = "1500", *b = "0"; Division *s = divis(a, b);
        *       print(string(a) + ":" + b + "=" + s->quotient + " " +s->remainder + "\n"); free(s->remainder); free(s->quotient); //ERROR: DIVISION BY ZERO => divis: [0]
        *
        *   \endcode
        */
        static Division division;   //RESULT: QUOTIENT AND REMAINDER
        char* R, * diff;           //TEMPORARY
        if (check) {
            if (!is_strfmt_int(n)) {
                raise("ARGUMENT VALUE => divis", n);   division.quotient = division.remainder = NULL;
                return &division;
            }
            if (!is_strfmt_int(div)) {
                raise("ARGUMENT VALUE => divis", div); division.quotient = division.remainder = NULL;
                return &division;
            }
        }
        i64 a_L = (i64)strlen(n); i64 b_L = (i64)strlen(div);
        i64 DIM = ((a_L > b_L ? a_L : b_L) + 16) * sizeof(char); //1=>'-' + 1=>NULL + 2=>".0" 
        char* rem = (char*)malloc(DIM);  if (!rem) raise_exit("OUT OF RAM MEMORY => divis", n);  //RAM DYNAMIC ALLOCATION
        char* rem2 = (char*)malloc(DIM); if (!rem2) raise_exit("OUT OF RAM MEMORY => divis", n);//RAM DYNAMIC ALLOCATION
        char* DIV = (char*)malloc(DIM);  if (!DIV) raise_exit("OUT OF RAM MEMORY => divis", n);//RAM DYNAMIC ALLOCATION
        strcpy(rem, n);    strcpy(DIV, div);
        if (rem[0] == '0') { stripi0(rem); a_L = (i64)strlen(rem); }  //REMOVE NO VALUE ZEROs (003 => 3)
        if (DIV[0] == '0') { stripi0(DIV); b_L = (i64)strlen(DIV); }
        if (check) {
            if (!strcmp(DIV, "0")) { //DIVISION BY ZERO ERROR
                free(rem); free(rem2); free(DIV);
                raise("DIVISION BY ZERO => divis", div); division.quotient = division.remainder = NULL; return &division;
            }
            if (!strcmp(rem, "0")) { //DIVIDEND EQUALS ZERO
                division.quotient = rem; division.remainder = strcpy(rem2, "0"); free(DIV); return &division;
            }
            if (!strcmp(DIV, "1")) { //DIVISION BY ONE
                division.quotient = rem; division.remainder = strcpy(rem2, "0"); free(DIV); return &division;
            }
            if (!strcmp(DIV, rem)) { //DIVISOR EQUALS DIVIDEND 
                division.quotient = strcpy(rem, "1");
                division.remainder = strcpy(rem2, "0");
                free(DIV); return &division;
            }
        }
        if (a_L < 20 && b_L < 20) {
            I64 A = I64int(rem), B = I64int(DIV);
            division.quotient = strcpy(rem, I64str(A / B)); free(DIV);
            division.remainder = strcpy(rem2, I64str(A % B));
            return &division;
        }
        if (a_L - b_L > 2) {    //TOO LONG TIME SUBTRACTION LOOP DIVISION 
            if (b_L < 19) {
                char* result = (char*)malloc(DIM); if (!result) raise_exit("OUT OF RAM MEMORY => divis", n); //RAM DYNAMIC ALLOCATION
                result[0] = '\0'; //VOID STRING ("")
                char low[2]; //LOW DIGIT CARRY
                char R[20]; //BUFFER MINI-DIVIDEND 18 DIGITS
                I64 Q, r; Q = r = 0;
                strncpy(R, rem, b_L); R[b_L] = '\0';
                I64 R_I64, DIV_I64 = I64int(DIV);
                while (b_L <= a_L) { //SIMPLE SCHOOL MATH ALGORITHM FOR COMPUTING NUMERIC DIVISION ...
                    R_I64 = I64int(R);
                    Q = R_I64 / DIV_I64;
                    r = R_I64 % DIV_I64;
                    strcat(result, I64str(Q));
                    low[0] = rem[b_L]; low[1] = '\0'; strcpy(rem2, I64str(r)); strcat(rem2, low);
                    strcpy(R, rem2);
                    b_L++;
                }
                if (result[0] == '0') stripi0(result); //CLEARING ZEROs
                division.quotient = result; division.remainder = rem2;
                free(DIV); free(rem);
                return &division;
            }
            strcat(rem, ".0"); strcat(DIV, ".0");
            char* DIV_inv = divfs("1.0", DIV, DIM - 16, false); //1:DIV (INVERSE)
            R = mulfs(rem, DIV_inv, false); free(DIV_inv);
            i64 i = 0; while (R[i] != '.') i++; R[i] = '\0'; //NUMBER INTEGER PART
            rem[a_L] = '\0'; DIV[b_L] = '\0';               //INTEGER OPERANDs
            char* P = mulis(R, DIV, false); diff = subis(rem, P, false); free(P);
            if (strint_cmp(diff, DIV) >= 0) { //EXAMPLE => 90000000000000000000000 % 3000000000000000000=30000 0
                strcpy(rem2, R); free(R); R = addis(rem2, "1", false); //RECOMPUTING...
                P = mulis(R, DIV, false); free(diff); diff = subis(rem, P, false); free(P);
            }
            free(DIV); strcpy(rem, R); division.quotient = rem; free(R);
            strcpy(rem2, diff); division.remainder = rem2; free(diff);
            return &division;
        }
        I64 Q = 0;        //RESULT: QUOTIENT BY LOOP SUBTRACTION
        for (; ; Q++) { //DIVISION BY SUBTRACTION LOOP FOR LARGE NUMBERs (20 OR MORE DIGITs)
            R = subis(rem, DIV, false);
            strcpy(rem, R);
            if (R[0] == '0') { strcpy(rem2, R); division.remainder = rem2; Q++; free(R); break; } //15000000000000000000:15000000000000000000 => 1 0 
            if (rem[0] == '-') { free(R); break; } //16000000000000000000:15000000000000000000 => 1 1000000000000000000 
            strcpy(rem2, R); division.remainder = rem2;
            free(R);
        }
        if (!Q) { strcpy(rem2, n); if (rem2[0] == '0') stripi0(rem2); division.remainder = rem2; } //15000000000000000000:16000000000000000000 => 0 15000000000000000000
        division.quotient = strcpy(rem, I64str(Q)); free(DIV);
        return &division;
    }
    /// NUM OUT-LINE /// ERROR HANDLER: RETURN Error VARIABLE STATUS, CODE: print(error() ? "RUN TIME ERROR: YES\n":"RUN TIME ERROR: NO\n"); //RUN TIME ERROR: ...
    int error() {
        if (Error) print("!!! EXCEPTION HANDLER !!!", "\n");
        return Error ? 1 : 0;
    }
    /// NUM OUT-LINE /// ERROR HANDLER
    int error_set() {
        return Error = 1;
    }
    /// NUM OUT-LINE /// ERROR HANDLER
    int error_clear() {
        return Error = 0;
    }
    /// NUM OUT-LINE /// COMPARES TWO FLOATING-POINT STRING NUMBER (UNSIGNED), CODE: const char *A = "5.0", * B = "3.654"; print("A ", strfloat_cmp(A, B) > 0  ? ">"  : "<=", " B\n"); //A > B
    int strfloat_cmp(const char* op1, const char* op2) {
        /**
        *   \brief  COMPARES TWO FLOATING-POINT STRING NUMBER (UNSIGNED)
        *   \param  op1 STRING
        *   \param  op2 STRING
        *   \return COMPARE (POSITIVE op1>op2, NEGATIVE op1<op2, ZERO op1==op2)
        *   \code
        *   ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: is_strfmt_float stripi0 strpads0 raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       const char *A = "5.0", * B = "3.654";      print("A ", strfloat_cmp(A, B) > 0  ? ">"  : "<=", " B\n");   //A > B
        *       const char* A = "5.0", * B = "0005.000";   print("A ", strfloat_cmp(A, B) == 0 ? "==" : "!=", " B\n");  //A == B
        *       const char* A = "5.0", * B = "0005.00001"; print("A ", strfloat_cmp(A, B) < 0  ? "<"  : ">=", " B\n"); //A < B
        *
        *   \endcode
        */
        i64 DOT;
        i64 a_L = (i64)strlen(op1); i64 b_L = (i64)strlen(op2);
        i64 DIM = ((a_L > b_L ? a_L : b_L) + 2) * sizeof(char); //1 => NULL, 1 => DOT
        char* a = (char*)malloc(DIM * 2); if (!a)  raise_exit("OUT OF RAM MEMORY => strfloat_cmp", op1);      //RAM DYNAMIC ALLOCATION
        char* b = (char*)malloc(DIM * 2); if (!b)  raise_exit("OUT OF RAM MEMORY => strfloat_cmp", op1);     //RAM DYNAMIC ALLOCATION
        char* aI = (char*)malloc(DIM * 2); if (!aI) raise_exit("OUT OF RAM MEMORY => strfloat_cmp", op1);    //RAM DYNAMIC ALLOCATION
        char* aF = (char*)malloc(DIM * 2); if (!aF) raise_exit("OUT OF RAM MEMORY => strfloat_cmp", op1);   //RAM DYNAMIC ALLOCATION
        char* bI = (char*)malloc(DIM * 2); if (!bI) raise_exit("OUT OF RAM MEMORY => strfloat_cmp", op1);  //RAM DYNAMIC ALLOCATION
        char* bF = (char*)malloc(DIM * 2); if (!bF) raise_exit("OUT OF RAM MEMORY => strfloat_cmp", op1); //RAM DYNAMIC ALLOCATION
        strcpy(a, op1);  //op1 => a
        strcpy(b, op2); //op2 => b
        i64 aF_len, bF_len;
        if (!is_strfmt_float(a)) { raise("ARGUMENT VALUE => strfloat_cmp", op1); return 0; } //ARGS a and b MUST BE FLOATING POINT FORMAT!
        if (!is_strfmt_float(b)) { raise("ARGUMENT VALUE => strfloat_cmp", op2); return 0; }
        strcpy(aI, strtok(a, "."));
        strcpy(aF, strtok(0, ".")); aF_len = (i64)strlen(aF);
        strcpy(bI, strtok(b, "."));
        strcpy(bF, strtok(0, ".")); bF_len = (i64)strlen(bF);
        if (aF_len < bF_len) {          //"3.1"+"0.94"="4.04"
            DOT = bF_len - aF_len;
            strcpy(a, aI); strcat(a, aF); char* pad = strpads0(DOT); strcat(a, pad); free(pad);
            strcpy(b, bI); strcat(b, bF);
        }
        else if (aF_len > bF_len) { //"001.200"+"04.80"="6.000"
            DOT = aF_len - bF_len;
            strcpy(a, aI); strcat(a, aF);
            strcpy(b, bI); strcat(b, bF);
            char* pad = strpads0(DOT);
            strcat(b, pad);
            free(pad);
        }
        else {                //"3.00"+"7.00"="10.00"
            strcpy(a, aI); strcat(a, aF);
            strcpy(b, bI); strcat(b, bF);
        }
        ///////////////////////////////////
        stripi0(a); stripi0(b); //CLEAR ZEROS
        i64 op1_len = (i64)strlen(a);
        i64 op2_len = (i64)strlen(b);
        int COMPARE;
        if (op1_len > op2_len) {
            COMPARE = 1;
            free(aI); free(aF); free(bI); free(bF); free(a); free(b);
            return COMPARE;
        }
        else if (op1_len < op2_len) {
            COMPARE = -1;
            free(aI); free(aF); free(bI); free(bF); free(a); free(b);
            return COMPARE;
        }
        COMPARE = strcmp(a, b);
        free(aI); free(aF); free(bI); free(bF); free(a); free(b);
        return COMPARE;
    }
    /// NUM OUT-LINE /// COMPARES TWO INTEGER STRING NUMBER (UNSIGNED), CODE: print(strint_cmp("2500", "2400"), "\n");   //1 (GREATER)
    int strint_cmp(const char* op1, const char* op2) {
        /**
        *   \brief  COMPARES TWO INTEGER STRING NUMBER (UNSIGNED)
        *   \param  op1 STRING
        *   \param  op2 STRING
        *   \return COMPARE (POSITIVE op1>op2, NEGATIVE op1<op2, ZERO op1==op2)
        *   \code
        *   ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: is_strfmt_int strfloat_cmp raise raise_exit
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *
        * 		print(strint_cmp("2500", "2400"), "\n");   //1 (GREATER)
        *		print(strint_cmp("2500", "2500"), "\n");  //0  (EQUAL)
        *		print(strint_cmp("2500", "2600"), "\n"); //-1  (LOWER)
        *
        *   \endcode
        *
        */
        static int COMPARE; COMPARE = 0; //ARGS op1 and op2 MUST BE INTEGER FORMAT NUMBERS!
        if (!is_strfmt_int(op1)) { raise("ARGUMENT VALUE => is_strfmt_int", op1); return 0; }
        if (!is_strfmt_int(op2)) { raise("ARGUMENT VALUE => is_strfmt_int", op2); return 0; }
        i64 a_L = (i64)strlen(op1); i64 b_L = (i64)strlen(op2);
        i64 DIM = 2 * ((a_L > b_L ? a_L : b_L) + 4) * sizeof(char); //1 => NULL, 1 => DOT
        char* a = (char*)malloc(DIM); if (!a) raise_exit("OUT OF RAM MEMORY => strint_cmp", op1); //RAM DYNAMIC ALLOCATION
        char* b = (char*)malloc(DIM); if (!b) raise_exit("OUT OF RAM MEMORY => strint_cmp", op1);//RAM DYNAMIC ALLOCATION
        strcpy(a, op1); strcpy(b, op2); //op1 => a op2 => b
        if (a[0] == '0') stripi0(a); 
        if (b[0] == '0') stripi0(b); //CLEAR ZEROS
        a_L = (i64)strlen(a); b_L = (i64)strlen(b);
        if (a_L > b_L) COMPARE = 1;
        else if (a_L < b_L) COMPARE = -1;
        else COMPARE = strcmp(a, b);
        free(a); free(b);
        return COMPARE;
    }
    /// NUM OUT-LINE /// CLEAR BOTH LEFT AND RIGHT PART OF s FROM cs, CODE: char s[] = "000000000000000000000.001200000"; strip(s, "0"); print(s, "\n"); //.0012
    char* strip(char* s, const char* cs) {
        /**
        *   \brief  CLEAR BOTH LEFT AND RIGHT PART OF s FROM cs
        *   \param  s  STRING
        *   \param  cs STRING
        *   \return s  STRING MODIFIED
        *   \code
        *   RUN-TIME ERROR CHECK: NONE
        *   NEED: MODIFY SOURCE STRING
        *   CALL: lstrip rstrip
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *       char s[] = "000000000000000000000.001200000"; strip(s, "0"); print(s, "\n");   //.0012
        *       char s[] = "0000000000000000000000000";       strip(s, "0"); print(s, "\n");  //0
        *       char s[] = "";                                strip(s, "0"); print(s, "\n"); //"" => VOID STRING
        *   \endcode
        */
        lstrip(s, cs);
        rstrip(s, cs);
        return s;
    }
    /// NUM OUT-LINE /// CLEAR LEFT PART OF s FROM cs, CODE: char s[] = "0001000"; lstrip(s, "0"); print(s, "\n"); //1000
    char* lstrip(char* s, const char* cs) {
        /**
        *   \brief  CLEAR LEFT PART OF s FROM cs
        *   \param  s  STRING
        *   \param  cs STRING
        *   \return s  STRING MODIFIED
        *   \code
        *   RUN-TIME ERROR CHECK: NONE
        *   NEED: MODIFY SOURCE STRING
        *   CALL: lstripc
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *       char s[] = "0001000"; lstrip(s, "0"); print(s, "\n");    //1000
        *       char s[] = "0010000"; lstrip(s, "0"); print(s, "\n");   //10000
        *       char s[] = "000";     lstrip(s, "0"); print(s, "\n");  //0
        *       char s[] = "";        lstrip(s, "0"); print(s, "\n"); //"" => VOID STRING
        *   \endcode
        */
        i64 s_LI = (i64)strlen(s);
        i64 s_LF;
        while (1) {
            for (i64 i = 0; i < (i64)strlen(cs); i++) lstripc(s, cs[i]);
            s_LF = (i64)strlen(s);
            if (s_LI == s_LF) break;
            s_LI = s_LF;
        }
        return s;
    }
    /// NUM OUT-LINE /// CLEAR RIGHT PART OF s FROM cs, CODE: char s[] = "12345***"; rstrip(s, "*"); print(s, "\n"); //12345
    char* rstrip(char* s, const char* cs) {
        /**
        *   \brief  CLEAR RIGHT PART OF s FROM cs
        *   \param  s  STRING
        *   \param  cs STRING
        *   \return s  STRING MODIFIED
        *   \code
        *   RUN-TIME ERROR CHECK: NONE
        *   NEED: MODIFY SOURCE STRING
        *   CALL: rstripc
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *       char s[] = "12345***"; rstrip(s, "*"); print(s, "\n");    //12345
        *       char s[] = "67890aaa"; rstrip(s, "a"); print(s, "\n");   //67890
        *       char s[] = "00000000"; rstrip(s, "0"); print(s, "\n");  //0
        *       char s[] = "";         rstrip(s, "0"); print(s, "\n"); //"" => VOID STRING
        *   \endcode
        */
        i64 s_LI = (i64)strlen(s);
        i64 s_LF;
        while (1) {
            for (i64 i = 0; i < (i64)strlen(cs); i++) rstripc(s, cs[i]);
            s_LF = (i64)strlen(s);
            if (s_LI == s_LF) break;
            s_LI = s_LF;
        }
        return s;
    }
    /// NUM OUT-LINE /// REMOVES ALL OCCURRENCES OF A SPECIFIC CHARACTER FROM A STRING, CODE: char s[] = "123_456_789"; char* S = rm_c(s, '_'); print(S, "\n"); //123456789
    char* rm_c(char* s, const char c) {
        /**
        *   \brief  REMOVES ALL OCCURRENCES OF A SPECIFIC CHARACTER FROM A STRING
        *   \param  s STRING TO MODIFY
        *   \param  c CHARACTER TO REMOVE
        *   \return s STRING MODIFIED
        *   \code
        *   ERROR CHECK: NONE
        *   NEED: MODIFY SOURCE STRING
        *   CALL: NONE
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *
        *       char s[] = "123_456_789";        char* S = rm_c(s, '_'); print(S, "\n");  //123456789
        *       char s[] = "1 2 3 4 5 6 7 8 9 "; char *S = rm_c(s, ' '); print(S, "\n"); //123456789
        *   \endcode
        */
        static i64 pos, NEW;
        pos = 0;
        while (s[pos]) {
            if (s[pos] == c) { NEW = pos; while (s[NEW]) { s[NEW] = s[NEW + 1]; NEW++; } }
            else pos++;
        }
        return s;
    }
    /// NUM OUT-LINE /// CLEAR LEFT PART OF s FROM CHARACTER ch UNLESS LAST ONE REMAINED IF s HAS GONE ZERO LENGTH, CODE: char s[] = "0000001.23456789"; lstripc(s, '0'); print(s, "\n"); //1.23456789
    char* lstripc(char* s, const char ch) {
        /**
        *   \brief  CLEAR LEFT PART OF s FROM CHARACTER ch UNLESS LAST ONE REMAINED IF s HAS GONE ZERO LENGTH
        *   \param  s  STRING
        *   \param  ch STRING
        *   \return s  STRING MODIFIED
        *   \code
        *   RUN-TIME ERROR CHECK: NONE
        *   NEED: MODIFY SOURCE STRING
        *   CALL: NONE
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *       char s[] = "0000001.23456789"; lstripc(s, '0'); print(s, "\n");    //1.23456789
        *       char s[] = "0000000.1";        lstripc(s, '0'); print(s, "\n");   //.1
        *       char s[] = "0";                lstripc(s, '0'); print(s, "\n");  //0
        *       char s[] = "";                 lstripc(s, '0'); print(s, "\n"); //"" => VOID STRING
        *   \endcode
        */
        i64 qty = 0;
        while (s[qty] == ch) qty++;
        if (qty) { i64 i = 0; while (s[i + qty]) { s[i] = s[i + qty]; i++; } s[i ? i : 1] = '\0'; }
        return s;
    }
    /// NUM OUT-LINE /// CLEAR RIGHT PART OF s FROM CHARACTER ch UNLESS LAST ONE REMAINED IF s HAS GONE ZERO LENGTH, CODE: char s[] = "1.234567890000"; rstripc(s, '0'); print(s, "\n");    //1.23456789
    char* rstripc(char* s, const char ch) {
        /**
        *   \brief CLEAR RIGHT PART OF s FROM CHARACTER ch UNLESS LAST ONE REMAINED IF s HAS GONE ZERO LENGTH
        *   \param  s  STRING
        *   \param  ch STRING
        *   \return s  STRING MODIFIED
        *   \code
        *   RUN-TIME ERROR CHECK: NONE
        *   NEED: MODIFY SOURCE STRING
        *   CALL: NONE
        *   TIME: [...]
        *   LIMIT: NONE
        *
        *   EXAMPLES:
        *
        *       char s[] = "1.234567890000"; rstripc(s, '0'); print(s, "\n");    //1.23456789
        *       char s[] = "1.000000000000"; rstripc(s, '0'); print(s, "\n");   //1.
        *       char s[] = "0";              rstripc(s, '0'); print(s, "\n");  //0
        *       char s[] = "";               rstripc(s, '0'); print(s, "\n"); //"" => VOID STRING
        *   \endcode
        */
        i64 idx = (i64)strlen(s) - 1;
        while (idx) { if (s[idx] == ch) idx--; else break; }
        s[idx + 1] = '\0';
        return s;
    }
    /// NUM OUT-LINE /// CHECK IF A NUMERIC STRING IS IN EXPONENTIAL FORMAT, CODE: const char* n = "1.0e-2", *boo = is_strfmt_exp(n); print(boo ? boo : "false", "\n");  //1.0e-2
    const char* is_strfmt_exp(const char* sn) {
        /**
        *   \brief  CHECK IF A NUMERIC STRING IS IN EXPONENTIAL FORMAT
        *   \param  sn EXPONENTIAL FORMAT STRING
        *   \return sn EXPONENTIAL FORMAT STRING OR NULL
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: is_strfmt_int raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *       const char* n = "1.0e-2", *boo = is_strfmt_exp(n); print(boo ? boo : "false", "\n");   //1.0e-2
        *       const char* n = "1e-2";   print(is_strfmt_exp(n) ? is_strfmt_exp(n) : "false", "\n"); //false
        *   \endcode
        */
        static char* p;
        static i64 NEG0, NEG1;
        i64 sn_L = (i64)strlen(sn);
        if (sn_L < 5) return NULL; //MIN ARGUMENT LENGTH
        i64 DIM = (i64)(sn_L + 4) * sizeof(char); //1=>NULL 2=> .0
        char* r1 = (char*)malloc(DIM);
        if (!r1)  raise_exit("OUT OF RAM MEMORY => is_strfmt_exp", sn); //RAM DYNAMIC ALLOCATION
        char* be0 = (char*)malloc(DIM);       //BASE
        if (!be0) raise_exit("OUT OF RAM MEMORY => is_strfmt_exp", sn); //RAM DYNAMIC ALLOCATION
        char* be1 = (char*)malloc(DIM);     //EXPONENT
        if (!be1) raise_exit("OUT OF RAM MEMORY => is_strfmt_exp", sn); //RAM DYNAMIC ALLOCATION
        char* bf0 = (char*)malloc(DIM);   //BASE INTEGER  PART 
        if (!bf0) raise_exit("OUT OF RAM MEMORY => is_strfmt_exp", sn); //RAM DYNAMIC ALLOCATION
        char* bf1 = (char*)malloc(DIM); //BASE FRACTIONAL PART 
        if (!bf1) raise_exit("OUT OF RAM MEMORY => is_strfmt_exp", sn); //RAM DYNAMIC ALLOCATION
        strcpy(r1, sn);
        i64 e = 0; //COUNTER 'e' CHARACTER
        for (i64 i = 0; i < (i64)strlen(r1); i++) { if (toupper(r1[i]) == 'E') e++; r1[i] = toupper(r1[i]); }
        if (e != 1) { free(r1); free(be0); free(be1); free(bf0); free(bf1); return NULL; }
        strcpy(be0, strtok(r1, "E")); //BASE
        p = strtok(0, "E"); if (!p) return NULL;
        strcpy(be1, p); //EXPONENT
        if (be0[0] == '-') { strcpy(be0, be0 + 1); NEG0 = 1; } //BASE SIGN
        else if (be0[0] == '+') { strcpy(be0, be0 + 1); NEG0 = 0; }
        else NEG0 = 0;
        if (be1[0] == '-') { strcpy(be1, be1 + 1); NEG1 = 1; } //BASE SIGN
        else if (be1[0] == '+') { strcpy(be1, be1 + 1); NEG1 = 0; }
        else NEG1 = 0;
        if ((!strcmp(be0, "0") || !strcmp(be0, "0.0")) && NEG0) {
            free(r1); free(be0); free(be1); free(bf0); free(bf1);
            return NULL;
        }
        if (!strcmp(be1, "0") && NEG1) {
            free(r1); free(be0); free(be1); free(bf0); free(bf1);
            return NULL;
        }
        strcpy(bf0, strtok(be0, ".")); //BASE INTEGER PART 
        p = strtok(0, ".");
        if (!p && r1[strlen(r1) - 1] == '.') { //BASE (4. => NULL)
            free(r1); free(be0); free(be1); free(bf0); free(bf1);
            return NULL;
        }
        strcpy(bf1, p ? p : ""); //BASE FRACTIONAL PART CAN NOT BE ZERO LENGTH STRING
        if (!strlen(bf1)) { free(r1); free(be0); free(be1); free(bf0); free(bf1); return NULL; }
        if (!is_strfmt_int(be0)) { free(r1); free(be0); free(be1); free(bf0); free(bf1); return NULL; }
        if (!is_strfmt_int(be1)) { free(r1); free(be0); free(be1); free(bf0); free(bf1); return NULL; } //EXPONENT
        if (!is_strfmt_int(bf0)) { free(r1); free(be0); free(be1); free(bf0); free(bf1); return NULL; } //BASE INTEGER PART 
        if (!is_strfmt_int(bf1) && strlen(bf1)) { free(r1); free(be0); free(be1); free(bf0); free(bf1); return NULL; } //BASE FRACTIONAL PART
        free(r1); free(be0); free(be1); free(bf0); free(bf1);
        return sn;
    }
    /// NUM OUT-LINE /// DIVIDE IN TWO PART A STRING WITH A STRING DELIMITER -NEED: free(P[0]), CODE: char** P = split("-4.56e7", "e"); print(P[0], " ", P[1]); print("\n"); free(P[0]); //-4.56 7
    char** split(const char* s, const char* D) {
        /**
    *   \brief  DIVIDE IN TWO PART A STRING WITH A STRING DELIMITER
    *   \param  s STRING
    *   \param  D DELIMITER
    *   \return P TWO STRING ARRAY P[0] P[1] OR RETURN NULL ON FAILURE
    *   \code
    *   RUN-TIME ERROR CHECK: YES
    *   NEED: free(P[0])
    *   CALL: raise_exit
    *   TIME: [...]
    *   LIMIT: RAM MEMORY
    *
    *   EXAMPLES:
    *
    *       char** P = split("-4.56e7", "e"); print(P[0], " ", P[1]); print("\n"); free(P[0]); //-4.56 7
    *
    *   \endcode
    */
        static char* P[2];
        i64 DIM = (i64)strlen(s) + 16; //1 NULL
        char* S = (char*)malloc(DIM * sizeof(char)); if (!S) raise_exit("OUT OF RAM MEMORY => split", s); //RAM DYNAMIC ALLOCATION
        strcpy(S, s);
        P[0] = strtok(S, D); P[1] = strtok(0, D);
        if (!P[1]) { free(S); return NULL; } //ON FAILURE 
        return P;
    }
    /// NUM OUT-LINE /// RETURNS A STRING WHERE ALL CHARACTERS ARE IN LOWER-CASE -NEED: free(), CODE: char * fruit = lower("APPLE"); print("APPLE => ", fruit, "\n"); free(fruit); //APPLE => apple
    char* lower(const char* s) {
        i64 L = (i64)strlen(s);
        char* m = (char*)malloc((L + 1) * sizeof(char)); if (!m) raise_exit("OUT OF RAM MEMORY => lower", s); //RAM DYNAMIC ALLOCATION
        m[L] = '\0'; //NULL STRING TERMINATOR
        for (i64 i = 0; i < L; i++) m[i] = tolower(s[i]);
        return m;
    }
    /// NUM OUT-LINE /// RETURNS A STRING WHERE ALL CHARACTERS ARE IN UPPER-CASE -NEED: free(), CODE: const char* fruit = "apple"; char * FRUIT = upper(fruit); print(fruit, " => "); print(FRUIT, "\n"); free(FRUIT); //apple => APPLE
    char* upper(const char* s) {
        i64 i;
        i64 L = (i64)strlen(s);
        char* m = (char*)malloc((L + 1) * sizeof(char)); if (!m) raise_exit("OUT OF RAM MEMORY => upper", s); //RAM DYNAMIC ALLOCATION
        for (i = 0; i < L; i++) m[i] = toupper(s[i]);
        m[i] = '\0'; //NULL STRING TERMINATOR
        return m;
    }
    /// NUM OUT-LINE /// CONVERT A NUMERIC (BOTH INTEGER AND FLOATING-POINT) STRING TO AN EXPONENTIAL SCIENTIFIC NOTATION STRING (SIGNED) -NEED: free(), CODE: char* p = num2exp("-10_000"); print(p, "\n"); free(p); //-1.0e4
    char* num2exp(const char* a) {
        /**
        *   \brief     CONVERT A NUMERIC (BOTH INTEGER AND FLOATING-POINT) STRING TO AN EXPONENTIAL SCIENTIFIC NOTATION STRING (SIGNED)
        *   \param  a  STRING
        *   \return A STRING EXPONENTIAL SCIENTIFIC NOTATION
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: is_strfmt_int is_strfmt_float stripi0 rstripf0 stripf0 I64str raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       char* p = num2exp("-10_000"); print(p, "\n"); free(p); //-1.0e4
        *
        *   \endcode
        */
        static char** p = NULL;
        static i64 NEG;
        static i64 e;
        i64 a_L = (i64)strlen(a);
        i64 DIM = (a_L + 16) * sizeof(char); //NULL, '.', '-', '+', e- 
        char* A = (char*)malloc(DIM); if (!A)  raise_exit("OUT OF RAM MEMORY => num2exp", a); //RAM DYNAMIC ALLOCATION
        char* TM = (char*)malloc(DIM); if (!TM) raise_exit("OUT OF RAM MEMORY => num2exp", a);//RAM DYNAMIC ALLOCATION
        strcpy(A, a);
        rm_c(A, '_');                                    //REMOVE UNDERSCORE ('_')
        if (A[0] == '-') { strcpy(A, A + 1); NEG = 1; } //SIGN
        else if (A[0] == '+') { strcpy(A, A + 1); NEG = 0; }
        else NEG = 0;
        if (is_strfmt_int(A)) { //INTEGER FORMAT: 34 => 3.4e1  -1000 => -1.0e3  112500 => 1.125e5
            stripi0(A);
            if (!strcmp(A, "0") && NEG) { raise("ARGUMENT VALUE, ZERO CAN NOT BE SIGNED => num2exp", a); return NULL; }
            e = (i64)strlen(A) - 1;
            TM[0] = A[0]; TM[1] = '\0';
            strcat(TM, "."); *(A + 1) ? strcat(TM, A + 1) : strcat(TM, "0");
            rstripf0(TM); //CLEAR ZEROs (112500 => 1.125e5)
            strcpy(A, NEG ? "-" : ""); strcat(A, TM); strcat(A, "e"); strcat(A, I64str(e));
            free(TM);
            return A;
        }
        else if (is_strfmt_float(A)) { //FLOATING-POINT FORMAT: 3.141592654 => 3.141592654e0
            stripf0(A);
            if (!strcmp(A, "0.0") && NEG) { raise("ARGUMENT VALUE, ZERO CAN NOT BE SIGNED => num2exp", a); return NULL; }
            p = split(A, ".");
            if (!strcmp(p[0], "0")) { //0.___
                //DEBUG: cout << p[0] << " " << p[1] << endl;
                i64 L_F0 = (i64)strlen(p[1]);
                //strcpy(TM, lstripc(p[1], '0'));
                strcpy(TM, lstripf0(p[1]));
                i64 L_F = (i64)strlen(TM);
                e = L_F0 - L_F + 1;
                if (L_F == 1) {
                    strcpy(A, NEG ? "-" : ""); strcat(A, TM);
                    if (!strcmp(TM, "0")) { strcat(A, ".0e0"); }
                    else { strcat(A, ".0e-"); strcat(A, I64str(e)); }
                    free(TM); free(p[0]);
                    return A; //-0.01 => -1.0e-2  -0.000001 => -1.0e-6
                }
                strcpy(A, NEG ? "-" : ""); strncat(A, TM, 1); strcat(A, ".");
                strcat(A, TM + 1); strcat(A, "e-"); strcat(A, I64str(e));
                free(TM); free(p[0]);
                return A; //-0.0000012 => -1.2e-6
            }
            e = (i64)strlen(p[0]) - 1;
            strcpy(TM, p[0]);
            strcpy(A, NEG ? "-" : ""); strncat(A, TM, 1); strcat(A, ".");
            strcat(A, TM + 1); strcat(A, p[1]);
            rstripf0(A); //CLEAR ZEROs (1000.0 => 1.0000 => 1.0)
            strcat(A, "e"); strcat(A, I64str(e));
            free(TM); free(p[0]);
            return A; //123.4 => 1.234e2
        }
        free(A); free(TM);
        return NULL; //NOT VALID
    }
    /// NUM OUT-LINE /// FLOATING-POINT NUM POWER (SIGNED), CODE: NUM a("3.1415"); a = pwrf_signed(&a, 4);  print("a = ", a, "\n");    //a = 97.3976001709950625
    NUM& pwrf_signed(NUM* b, i64 e) {
        /**
        *   \brief  FLOATING-POINT NUM POWER (SIGNED)
        *   \param  b BASE
        *   \param  e EXPONENT
        *   \return s POWER
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: i64str raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       NUM a("1.0");    a = pwrf_signed(&a, 0);  print("a = ", a, "\n");    //a = 1.0
        *       NUM a("3.1415"); a = pwrf_signed(&a, 4);  print("a = ", a, "\n");   //a = 97.3976001709950625
        *       NUM a("3.1415"); a = pwrf_signed(&a, -3); print("a = ", a, "\n");  //a = 0.032254388141850095729105070506567677688413814028167268437724966304533532466491931860194018700875
        *       NUM a("0.0");    a = pwrf_signed(&a, 0);  print("a = ", a, "\n"); //ERROR POWER OPERATION NOT POSSIBLE!
        *   \endcode
        */
        static NUM B, A, result;
        static i64 j, E;
        static char* P10;
        const char* Es;
        if (*b == "0.0" && !e) { //0^0
            raise("POWER OPERATION NOT POSSIBLE! => pwrf_signed", b->sprint_fields());
            return result = 0;
        }
        if (*b == "0.0" && e < 0) { //0^-e 
            raise("POWER OPERATION NOT POSSIBLE! => pwrf_signed", b->sprint_fields());
            return result = 0;
        }
        if (!e) { result = 1; return result; } //b^0 => 1
        j = (e >= 0 ? e : -e) - 1; //e ABSOLUTE VALUE
        B = b->C;
        if (e < 0) { B = 1 / B; A = B; }
        else A = B;
        while (j) { A *= B; j--; } //B POWER BASE
        E = b->E * e;
        Es = i64str(E);
        P10 = (char*)malloc(((i64)strlen(Es) + 16) * sizeof(char)); //"1", 'e', '-', NULL, .0 //RAM DYNAMIC ALLOCATION
        if (!P10) raise_exit("OUT OF RAM MEMORY => pwrf_signed", b->sprint_fields());
        strcpy(P10, "1"); strcat(P10, ".0e"); strcat(P10, Es); //P10 POWER EXPONENT
        result = A * P10; free(P10); //free RAM
        b->S ? (e % 2 ? result.S = 1 : result.S = 0) : result.S; //CHECK SIGN
        return result;
    }
    /// NUM OUT-LINE /// CONVERT AN EXPONENTIAL NOTATION NUM TO A STANDARD NUMBER STRING (SIGNED) -NEED: free(), CODE: char* RAM = exp2num("12345678901234567891.0e-10"); print(RAM ? RAM : "FAILURE", "\n"); free(RAM); //1234567890.1234567891
    char* exp2num(NUM& x) {
        /**
        *   \brief        CONVERT AN EXPONENTIAL NOTATION NUM TO A STANDARD NUMBER STRING (SIGNED)
        *   \param  x     NUM => EXPONENTIAL NOTATION
        *   \return r1 r2 STRING DECIMAL NUMBER
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: split stripi0 lstripf0 rstripf0 strpads strpads0 raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       NUM a("12345678901234567891.0e-10"); char* RAM = exp2num(a); print(RAM ? RAM : "FAILURE", "\n"); free(RAM); //1234567890.1234567891
        *   \endcode
        */
        static i64 NEG; NEG = x.S;
        static i64 EXP, L_bf0, L_bf1, DOT, DIM;
        static char* r1, * r2, * bf0, * bf1, * pad;
        static char** m; //TWO POINTER ARRAY
        EXP = x.E;
        DIM = ((i64)strlen(x.C) + 16 + (x.E < 0 ? -x.E : x.E)) * sizeof(char);
        r1 = (char*)malloc(DIM); if (!r1) raise_exit("OUT OF RAM MEMORY => exp2num", x.sprint_fields());  //RAM DYNAMIC ALLOCATION
        r2 = (char*)malloc(DIM); if (!r2) raise_exit("OUT OF RAM MEMORY => exp2num", x.sprint_fields()); //RAM DYNAMIC ALLOCATION
        m = split(x.C, ".");
        bf0 = m[0]; bf1 = m[1];
        L_bf0 = (i64)strlen(bf0); L_bf1 = (i64)strlen(bf1);
        if (x.E >= 0) { //POSITIVE EXPONENT OR ZERO
            strcpy(r1, bf0); strcat(r1, bf1); //FLOATING-POINT BASE //"123.45e2" "123.45e5" "-1.2345e2" //"123.0e2" "-123.0e2" INTEGER BASE
            pad = strpads0(EXP - L_bf1); strcat(r1, pad); free(pad);
            DOT = (EXP - L_bf1 < 0) ? 1 : 0;
            strncpy(r2, r1, L_bf0 + EXP); r2[L_bf0 + EXP] = '\0';
            pad = strpads(".", DOT); strcat(r2, pad); free(pad);
            strcat(r2, r1 + L_bf0 + EXP);
            for (i64 i = 0; i < (i64)strlen(r2); i++) //FLOATING-POINT RESULT
                if (r2[i] == '.') {
                    lstripf0(r2); //CLEAR ZEROS
                    if (!NEG) strcpy(r1, r2);
                    else { strcpy(r1, "-"); strcat(r1, r2); }
                    free(m[0]); free(r2);
                    return r1;
                }
            //INTEGER RESULT
            stripi0(r2); //CLEAR ZEROS
            if (!NEG) { strcat(r2, ".0"); strcpy(r1, r2); }
            else { strcpy(r1, "-"); strcat(r1, r2); strcat(r1, ".0"); }
            free(m[0]); free(r2);
            return r1;
        }
        //EXPONENT NEGATIVE
        DOT = L_bf0 + EXP;
        if (DOT > 0) {
            strcpy(r1, bf0); strcat(r1, bf1); //FLOATING-POINT BASE //12345.678e-4 //INTEGER BASE 12345.0e-4
            strncpy(r2, r1, DOT); r2[DOT] = '\0';
            strcat(r2, ".");
            strcat(r2, r1 + DOT);
            rstripf0(r2); //CLEAR ZEROS
            if (!NEG) { free(m[0]); free(r1); return r2; } //POSITIVE RESULT
            else { strcpy(r1, "-"); strcat(r1, r2); } //NEGATIVE RESULT
            free(m[0]); free(r2);
            return r1;
        }
        if (!DOT) { //0.___ //FLOATING-POINT BASE "12.1e-2" "12.0001e-2" //INTEGER BASE "12.0e-2" 
            strcpy(r1, "0.");
            strcat(r1, bf0);
            strcat(r1, bf1);
            rstripf0(r1); //CLEAR ZEROS
            if (!NEG) { free(m[0]); free(r2); return r1; } //POSITIVE RESULT
            else { strcpy(r2, "-"); strcat(r2, r1); } //NEGATIVE RESULT
            free(m[0]);
            free(r1);
            return r2;
        }
        //0.0___ // "12.0e-3" "12.0001e-3"
        strcpy(r1, "0.");
        pad = strpads0(-DOT); strcat(r1, pad); free(pad);
        strcat(r1, bf0);
        strcat(r1, bf1);
        rstripf0(r1); //CLEAR ZEROS
        if (!NEG) { free(m[0]); free(r2); return r1; } //POSITIVE RESULT
        else { strcpy(r2, "-"); strcat(r2, r1); }     //NEGATIVE RESULT
        free(m[0]); free(r1);
        return r2;
    }
    /// NUM OUT-LINE /// CONVERT AN EXPONENTIAL NOTATION STRING TO A NUMBER STRING (SIGNED) NEED: free(), CODE: char* RAM = exp2str("12345678901234567891.0e-10"); print(RAM, "\n"); free(RAM); //1234567890.1234567891
    char* exp2str(const char* sn) {
        NUM a(sn);
        char* s = exp2num(a);
        return s;
    }
    /// NUM OUT-LINE /// TRUNCATE A NUMERIC FLOATING-POINT STRING (UNSIGNED) -NEED: free(), CODE: char* t = trunks("3.141592654", 2); print(t, "\n"); free(t); //3.14
    char* trunks(const char* n, i64 d) {
        /**
        *   \brief  TRUNCATE A NUMERIC FLOATING-POINT STRING (UNSIGNED)
        *   \param  n STRING
        *   \param  d i64
        *   \return N Ni STRING
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: is_strfmt_float stripf0 rstripf0 strpads0 raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       char* t = trunks("3.141592654", 2);  print(t, "\n"); free(t);     //3.14
        *       char* t = trunks("-3.141592654", 2); print(t, "\n"); free(t);    //ERROR ARGUMENT VALUE => trunks: [-3.141592654]
        *       char* t = trunks("3.141592654", 0);  print(t, "\n"); free(t);   //3.0
        *       char* t = trunks("003.0000", -1);    print(t, "\n"); free(t);  //0.0
        *       char* t = trunks("1003.9876", -1);   print(t, "\n"); free(t); //1000.0
        *
        *   \endcode
        */
        if (!is_strfmt_float(n)) { raise("ARGUMENT VALUE => trunks", n); return NULL; } //n MUST BE FLOATING POINT FORMAT!
        i64 n_len = (i64)strlen(n);
        i64 DIM = (n_len + 2) * sizeof(char); //NULL TERMINATOR AND SIGN PLACE
        char* N = (char*)malloc(DIM); if (!N)  raise_exit("OUT OF RAM MEMORY => trunks", n);  //RAM DYNAMIC ALLOCATION
        char* Ni = (char*)malloc(DIM); if (!Ni) raise_exit("OUT OF RAM MEMORY => trunks", n); //RAM DYNAMIC ALLOCATION
        char* Nf = (char*)malloc(DIM);                          //Ni => INTEGER PART, nF => FRACTIONAL PART
        if (!Nf) raise_exit("OUT OF RAM MEMORY => trunks", n); //RAM DYNAMIC ALLOCATION
        strcpy(N, n); stripf0(N);
        strcpy(Ni, strtok(N, ".")); strcpy(Nf, strtok(0, "."));
        i64 Ni_len = (i64)strlen(Ni);
        i64 diff;
        if (d < 0) {
            diff = Ni_len + d;
            if (diff <= 0) { free(N); free(Nf); strcpy(Ni, "0.0"); return Ni; }
            Ni[diff] = '\0'; char* RAM = strpads0(-d); strcat(Ni, RAM); free(RAM); strcat(Ni, ".0"); free(N); free(Nf);
            return Ni;
        }
        if (!d) { strcat(Ni, ".0"); free(N); free(Nf); return Ni; }
        else { strcat(N, "."); strncat(N, Nf, d); free(Ni); free(Nf); rstripf0(N); return N; } //D.00000000
    }
    /// NUM OUT-LINE /// RELATIVE FLOATING-POINT NUM DIVISION (SIGNED), CODE: NUM a("1_000_008.001"), b("9_000_002.002"); NUM R = divf_signed(&a, &b); R.print("\n"); //0.11111197539486947327459050047442
    NUM& divf_signed(NUM* op1, NUM* op2, i64 dp) { //DEFAULT ARGs: (NUM*, NUM*, i64 dp = 32) 
        /**
        *   \brief  RELATIVE FLOATING-POINT NUM DIVISION (SIGNED)
        *   \param  op1    DIVIDEND
        *   \param  op2    DIVISOR
        *   \param  dp      DECIMAL DIGITS
        *   \return result QUOTIENT
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: divf
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       NUM a("1_000_008.001"), b("9_000_002.002"); NUM R = divf_signed(&a, &b); R.print("\n"); //0.11111197539486947327459050047442
        *       NUM a("1_000_008.001"), b("-9_000_002.002");  divf_signed(&a, &b).print("\n");   //-0.11111197539486947327459050047442
        *       NUM a("-1_000_008.001"), b("-9_000_002.002"); divf_signed(&a, &b).print("\n");  //0.11111197539486947327459050047442
        *       NUM a("-1_000_008.001"), b("9_000_002.002");  divf_signed(&a, &b).print("\n"); //-0.11111197539486947327459050047442
        *
        *   \endcode
        */
        static NUM result;
        result = divf(op1, op2, dp); //dp => DECIMAL PRECISION
        if (!strcmp(result.C, "0.0")) return result; //-0.0 NOT ALLOWED!
        result.S = ((!op1->S && !op2->S) || (op1->S && op2->S)) ? 0 : 1;
        return result;
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT DIVISION WITH NUM FLOATING-POINT QUOTIENT (UNSIGNED), CODE: NUM a("7564322979.0"), b("3977544159.0"); NUM R = divf(&a, &b); R.print("\n");  //1.901757133703766882553924148652
    NUM& divf(NUM* n, NUM* div, i64 dp) { //DEFAULT ARGs: (NUM*, NUM*, i64 dp = 30);
        /**
        *   \brief  ABSOLUTE FLOATING-POINT DIVISION WITH NUM FLOATING-POINT QUOTIENT (UNSIGNED)
        *   \param  n   DIVIDEND
        *   \param  div DIVISOR
        *   \param  dp  DECIMAL DIGITS (DEFAULT 30)
        *   \return s   QUOTIENT FLOATING-POINT
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: divfs i64str split raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *   NUM a("7564322979.0"), b("3977544159.0"); NUM R = divf(&a, &b); R.print("\n");  //1.901757133703766882553924148652
        *   NUM a("756432.2979"),  b("397754.4159");  NUM R = divf(&a, &b); R.print("\n"); //1.901757133703766882553924148652
        *
        *   \endcode
        */
        static NUM R;
        static char* p;
        static char** q;
        const char* Es;
        R.E = n->E - div->E;                                 //SUBTRACTING... EXPONENTS
        Es = i64str(R.E);
        dp = (dp < 0 ? -dp : dp);                          //DECIMAL PRECISION (ABSOLUTE VALUE)
        p = divfs(n->C, div->C, R.E < 0 ? dp : dp + R.E); //DIVIDING... COEFFICIENTS 
        free(R.C); R.C = p;
        q = split(p, ".");
        R.len_I = (i64)strlen(q[0]); R.len_F = (i64)strlen(q[1]); free(q[0]);
        free(R.CE); R.CE = (char*)malloc((R.len_I + R.len_F + (i64)strlen(Es) + 4) * sizeof(char)); //DOT, "-e", NULL //RAM DYNAMIC ALLOCATION
        if (!R.CE) raise_exit("OUT OF RAM MEMORY => divf", n->sprint_fields());
        strcpy(R.CE, R.C); strcat(R.CE, "e"); strcat(R.CE, Es);
        return R;
    }
    /// NUM OUT-LINE /// RELATIVE FLOATING-POINT MULTIPLICATION NUM (SIGNED), CODE: NUM a("1_000_008.001"), b("+9_000_002.002"); NUM R = mulf_signed(&a, &b); R.print("\n"); //9000074011016.018002
    NUM& mulf_signed(NUM* op1, NUM* op2) {
        /**
        *   \brief  RELATIVE FLOATING-POINT MULTIPLICATION NUM (SIGNED)
        *   \param  &op1  MULTIPLICAND
        *   \param  &op2  MULTIPLIER
        *   \return SP    PRODUCT
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: mulf
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *   NUM a("1_000_008.001"), b("+9_000_002.002"); NUM R = mulf_signed(&a, &b); R.print("\n"); //9000074011016.018002
        *   NUM a("1_000_008.001"), b("-9_000_002.002");  mulf_signed(&a, &b).print("\n");   //-9000074011016.018002
        *   NUM a("-1_000_008.001"), b("-9_000_002.002"); mulf_signed(&a, &b).print("\n");  //9000074011016.018002
        *   NUM a("-1_000_008.001"), b("9_000_002.002");  mulf_signed(&a, &b).print("\n"); //-9000074011016.018002
        *
        *   \endcode
        */
        static NUM SP; //SIGNED PRODUCT
        SP = mulf(op1, op2);
        if (!strcmp(SP.C, "0.0")) return SP; //-0.0 NOT ALLOWED!
        SP.S = ((!op1->S && !op2->S) || (op1->S && op2->S)) ? 0 : 1;
        return SP;
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT NUM MULTIPLICATION (UNSIGNED), CODE: NUM a("7564322979.0"), b("3977544159.0"); NUM R = mulf(&a, &b); R.print("\n");  //30087428681910929661.0
    NUM& mulf(NUM* a, NUM* b) {
        /**
        *   \brief  ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT NUM MULTIPLICATION (UNSIGNED)
        *   \param  &a   MULTIPLICAND
        *   \param  &b   MULTIPLIER
        *   \return R    PRODUCT
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: mulfs i64str split raise_exit 
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *   NUM a("7564322979.0"), b("3977544159.0"); NUM R = mulf(&a, &b); R.print("\n");  //30087428681910929661.0
        *   NUM a("756432.2979"),  b("397754.4159");  NUM R = mulf(&a, &b); R.print("\n"); //300874286819.10929661
        *
        *   \endcode
        */
        static NUM R;
        static char* p;
        static char** q;
        const char* Es;
        p = mulfs(a->C, b->C, false); //MULTIPLYING... COEFFICIENTS
        free(R.C); R.C = p;
        R.E = a->E + b->E;   //ADDING... EXPONENTS
        Es = i64str(R.E);
        q = split(p, ".");
        R.len_I = (i64)strlen(q[0]); R.len_F = (i64)strlen(q[1]); free(q[0]);
        free(R.CE); R.CE = (char*)malloc((R.len_I + R.len_F + (i64)strlen(Es) + 4) * sizeof(char)); //DOT, "-e", NULL //RAM DYNAMIC ALLOCATION
        if (!R.CE) raise_exit("OUT OF RAM MEMORY => mulf", a->sprint_fields());
        strcpy(R.CE, R.C); strcat(R.CE, "e"); strcat(R.CE, Es);
        return R;
    }
    /// NUM OUT-LINE /// RELATIVE SUBTRACTION FLOATING-POINT NUM TYPE (SIGNED), CODE: NUM a("+1_000_008.001"), b("9_000_002.002"); NUM R = subf_signed(&a, &b); R.print("\n"); //-7999994.001
    NUM& subf_signed(NUM* a, NUM* b) {
        /**
        *   \brief  RELATIVE SUBTRACTION FLOATING-POINT NUM TYPE (SIGNED)
        *   \param  a MINUEND
        *   \param  b SUBTRAHEND
        *   \return DIFFERENCE
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: addf_signed
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *   NUM a("+1_000_008.001"), b("9_000_002.002"); NUM R = subf_signed(&a, &b); R.print("\n"); //-7999994.001
        *   NUM a("+1_000_008.001"), b("-9_000_002.002"); subf_signed(&a, &b).print("\n");   //10000010.003
        *   NUM a("-1_000_008.001"), b("-9_000_002.002"); subf_signed(&a, &b).print("\n");  //7999994.001
        *   NUM a("-1_000_008.001"), b("9_000_002.002");  subf_signed(&a, &b).print("\n"); //-10000010.003
        *   \endcode
        */
        NUM B(*b);
        B.S = B.S ? 0 : 1; //OPPOSED
        return addf_signed(a, &B);
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION SUBTRACTION FLOATING-POINT NUM TYPE (UNSIGNED), CODE: NUM a("7564322979.0"), b("3977544159.0"); NUM R = subf(&a, &b); R.print("\n");  //3586778820.0
    NUM& subf(NUM* a, NUM* b) {
        /**
        *   \brief  ABSOLUTE ARBITRARY-PRECISION SUBTRACTION FLOATING-POINT NUM TYPE (UNSIGNED)
        *   \param  a FIRST  MINUEND OF NUM TYPE
        *   \param  b SECOND SUBTRAHEND OF NUM TYPE
        *   \return R => SIGNED NUM IF NEGATIVE DIFFERENCE
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: subfs expEQ i64str split raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *   NUM a("7564322979.0"), b("3977544159.0"); NUM R = subf(&a, &b); R.print("\n");  //3586778820.0
        *   NUM a("756432.2979"),  b("0.0397754415"); NUM R = subf(&a, &b); R.print("\n"); //756432.2581245585
        *   \endcode
        */
        static NUM R, A;
        static char* p;
        static char** q;
        const char* Es;
        R.S = 0;                                                         //MUST BE DEFAULT TO ZERO
        if (!*a || !*b) return R = (*a ? *a : (*b ? -*b : *b));         //ZERO OPERAND WITHOUT SIGN  
        if (a->E != b->E) { p = expEQ(a->CE, b->CE); A = p; free(p); } //EXPONENT EQUALIZATION
        else A = *a;
        p = subfs(A.C, b->C);
        if (p[0] == '-') { strcpy(p, p + 1); R.S = 1; }
        free(R.C); R.C = p;
        R.E = strcmp(p, "0.0") ? b->E : 0; //RESULT EXPONENT 
        Es = i64str(R.E); q = split(p, ".");
        R.len_I = (i64)strlen(q[0]); R.len_F = (i64)strlen(q[1]); free(q[0]);
        free(R.CE); R.CE = (char*)malloc((R.len_I + R.len_F + (i64)strlen(Es) + 4) * sizeof(char)); //DOT, "-e", NULL //RAM DYNAMIC ALLOCATION
        if (!R.CE) raise_exit("OUT OF RAM MEMORY => subf", a->sprint_fields());
        strcpy(R.CE, R.C); strcat(R.CE, "e"); strcat(R.CE, Es);
        return R;
    }
    /// NUM OUT-LINE /// ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT ADDITION NUM TYPE (UNSIGNED), CODE: NUM a("7564322979.0"), b("3977544159.0"); NUM R = addf(&a, &b); R.print("\n"); //11541867138.0
    NUM& addf(NUM* a, NUM* b) {
        /**
        *   \brief  ABSOLUTE ARBITRARY-PRECISION FLOATING-POINT ADDITION NUM TYPE (UNSIGNED)
        *   \param  a FIRST  ADDEND OF NUM TYPE
        *   \param  b SECOND ADDEND OF NUM TYPE
        *   \return R SUM
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: addfs expEQ i64str split raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *   NUM a("7564322979.0"), b("3977544159.0"); NUM R = addf(&a, &b); R.print("\n");  //11541867138.0
        *   NUM a("756432.2979"),  b("397754.4159");  NUM R = addf(&a, &b); R.print("\n"); //1154186.7138
        *   \endcode
        */
        static NUM R, A;
        static char* p;
        static char** q;
        const char* Es;
        if (!*a || !*b) return R = (*a ? *a : *b); //ZERO OPERAND
        if (a->E != b->E) { p = expEQ(a->CE, b->CE); A = p; free(p); }
        else A = *a;
        p = addfs(A.C, b->C, false);
        free(R.C); R.C = p;
        R.E = b->E; //RESULT EXPONENT
        Es = i64str(R.E); q = split(p, ".");
        R.len_I = (i64)strlen(q[0]); R.len_F = (i64)strlen(q[1]); free(q[0]);
        free(R.CE); R.CE = (char*)malloc((R.len_I + R.len_F + (i64)strlen(Es) + 3) * sizeof(char)); //DOT, 'e', NULL //RAM DYNAMIC ALLOCATION
        if (!R.CE) raise_exit("OUT OF RAM MEMORY => addf", a->sprint_fields());
        strcpy(R.CE, R.C); strcat(R.CE, "e"); strcat(R.CE, Es);
        return R;
    }
    /// NUM OUT-LINE /// EXPONENTIAL NOTATION EQUALIZATION (SIGNED) NEED: free(), CODE: char* R = expEQ("-7564322979.0e0", "1.0e10"); print(R); free(R);  //-0.7564322979e10
    char* expEQ(const char* a, const char* b) {
        /**
        *   \brief  EXPONENTIAL NOTATION EQUALIZATION (SIGNED)
        *   \param  a STRING EXPONENTIAL FORMAT
        *   \param  b STRING EXPONENTIAL FORMAT (EXPONENT REFERENCE FOR EQUALIZATION)
        *   \return R EQUALIZED EXPONENTIAL STRING
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: is_strfmt_exp rstripf0 stripf0 stripi0 i64str upper split strpads0 raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *   char* R = expEQ("-7564322979.0e0", "1.0e10"); print(R, "\n"); free(R);  //-0.7564322979e10
        *   char* R = expEQ("-7564322979.0e0", "1e10");   print(R, "\n"); free(R); //(null)
        *   \endcode
        */
        static char* p, * pad;
        p = pad = NULL;
        static i64 NEG;
        if (!is_strfmt_exp(a) || !is_strfmt_exp(b)) return NULL;
        i64 a_L = (i64)strlen(a); i64 b_L = (i64)strlen(b);
        i64 DIM = ((a_L > b_L ? a_L : b_L) + 16) * sizeof(char); //NULL, '.', '-', '+', e- (.0 SUFFIX)
        char* A = (char*)malloc(DIM); if (!A) raise_exit("OUT OF RAM MEMORY => expEQ", a);  //RAM DYNAMIC ALLOCATION
        char* B = (char*)malloc(DIM); if (!B) raise_exit("OUT OF RAM MEMORY => expEQ", a); //RAM DYNAMIC ALLOCATION
        strcpy(A, a); p = upper(A); strcpy(A, p); free(p);
        strcpy(B, b); p = upper(B); strcpy(B, p); free(p);
        if (!strcmp(A, "0.0E0")) { free(B); strcpy(A, a); return A; }
        if (!strcmp(B, "0.0E0")) { free(B); strcpy(A, a); return A; }
        char** p_A = split(A, "E"); strcpy(A, p_A[0]);      //A BASE 
        i64 A_E = (i64)atoll(p_A[1]); free(p_A[0]);        //A EXPONENT
        char** p_B = split(B, "E"); strcpy(B, p_B[0]);    //B BASE 
        i64 B_E = (i64)atoll(p_B[1]); free(p_B[0]);      //B EXPONENT
        i64 EXP = B_E;
        i64 OFFSET = B_E - A_E;                        //EXPONENT OFFSET
        if (!OFFSET) { strcpy(A, a); free(B); return A; } //-0.0123e6 1.0e6 => -0.0123e6 (UNCHANGED) (20240422)
        char* R = (char*)malloc(((OFFSET < 0 ? -OFFSET : OFFSET) + DIM) * sizeof(char)); //RAM DYNAMIC ALLOCATION
        if (!R) raise_exit("OUT OF RAM MEMORY => expEQ", "RAM REALLOCATION");
        if (A[0] == '-') { strcpy(A, A + 1); NEG = 1; } //SIGN
        else if (A[0] == '+') { strcpy(A, A + 1); NEG = 0; }
        else NEG = 0;
        char* AI, * AF;
        //i64 len_A = (i64)strlen(A);
        stripf0(A);                 //CLEAR ZEROS
        char** AA = split(A, "."); //BASE A INTEGER.FRACTIONAL
        AI = (char*)malloc(((i64)strlen(AA[0]) + 1) * sizeof(char));   //INTEGER PART OF A //RAM DYNAMIC ALLOCATION
        if (!AI) raise_exit("OUT OF RAM MEMORY => expEQ", a);         //RAM DYNAMIC ALLOCATION
        AF = (char*)malloc(((i64)strlen(AA[1]) + 1) * sizeof(char)); //FRACTIONAL PART OF A //RAM DYNAMIC ALLOCATION
        if (!AF) raise_exit("OUT OF RAM MEMORY => expEQ", a);       //RAM DYNAMIC ALLOCATION
        strcpy(AI, AA[0]); strcpy(AF, AA[1]); free(AA[0]);
        if (AI[0] == '0' && !strcmp(AF, "0")) {
            strcpy(R, "0.0"); //&& AF[0] == '0' 
            free(A); free(B); free(AI); free(AF); return R;
        }    //-0.0e8 -123e6 => 0
        i64 len_AI = (i64)strlen(AI), len_AF = (i64)strlen(AF);
        i64 zero;
        if (OFFSET <= 0) {             //RIGHT SHIFT DOT 
            zero = -OFFSET - len_AF;  //WITH FRACTIONAL PART -123.0e6 1.0e0 => -123000000.0e0
            if (AI[0] == '0') {      //0. ...
                if (AF[0] == '0') { //0.0 ...
                    stripi0(AF);   //CLEAR ZEROS
                    if (zero < 0) {
                        i64 len_AF = (i64)strlen(AF);
                        if (len_AF + zero == 0) { //-0.0123e6 1.0e5 => -0.123e5 (20240422)
                            strcpy(R, NEG ? "-" : "");
                            strcat(R, "0."); strcat(R, AF);
                            strcat(R, "e"); strcat(R, i64str(EXP));
                            free(A); free(B); free(AI); free(AF);
                            return R;
                        }
                        if (len_AF + zero < 0) { //-0.00123e6 1.0e5 => -0.0123e5 (20240422)
                            i64 DOT = -(len_AF + zero);
                            strcpy(R, NEG ? "-" : ""); strcat(R, "0.");
                            pad = strpads0(DOT);
                            strcat(R, pad); strcat(R, AF);
                            strcat(R, "e"); strcat(R, i64str(EXP));
                            free(A); free(B); free(AI); free(AF); free(pad);
                            return R;
                        } //-0.000123e6 1.0e2 => -1.23e2 (20240422)
                        strcpy(R, NEG ? "-" : "");
                        i64 DOT = (i64)strlen(AF) + zero;
                        strncat(R, AF, DOT); strcat(R, "."); strcat(R, AF + DOT);
                        strcat(R, "e"); strcat(R, i64str(EXP));
                        free(A); free(B); free(AI); free(AF);
                        return R;
                    } //-0.000123e6 1.0e-1 => -1230.0e-1 (20240422)
                    strcpy(R, NEG ? "-" : ""); strcat(R, AF); pad = strpads0(zero); strcat(R, pad); strcat(R, ".0");
                    strcat(R, "e"); strcat(R, i64str(EXP));
                    free(A); free(B); free(AI); free(AF); free(pad);
                    return R;
                }
                if (zero < 0) { //-0.123e6 1.0e5 => -1.23e5 (20240422)
                    strcpy(R, NEG ? "-" : "");
                    strncat(R, AF, -OFFSET); strcat(R, "."); strcat(R, AF - OFFSET);
                    strcat(R, "e"); strcat(R, i64str(EXP));
                    free(A); free(B); free(AI); free(AF);
                    return R;
                }             //-0.123e6 1.0e-6 => -123000000000.0e-6 (20240422)
                stripi0(AF); //CLEAR ZEROS
                strcpy(R, NEG ? "-" : ""); strcat(R, AF); pad = strpads0(zero); strcat(R, pad); strcat(R, ".0");
                strcat(R, "e"); strcat(R, i64str(EXP));
                free(A); free(B); free(AI); free(AF); free(pad);
                return R;
            }
            if (zero < 0) { //-1.23e6 1.0e5 => -12.3e5 (20240422)
                strcpy(R, NEG ? "-" : "");
                strcat(R, AI); strncat(R, AF, -OFFSET); strcat(R, "."); strcat(R, AF - OFFSET);
                strcat(R, "e"); strcat(R, i64str(EXP));
                free(A); free(B); free(AI); free(AF);
                return R;
            }
            //-12.3e6 1.0e5 => -123.0e5 (20240422)
            strcpy(R, NEG ? "-" : ""); strcat(R, AI); strcat(R, AF); pad = strpads0(zero); strcat(R, pad); strcat(R, ".0");
            strcat(R, "e"); strcat(R, i64str(EXP));
            free(A); free(B); free(AI); free(AF); free(pad);
            return R;
        }
        //LEFT SHIFT DOT 
        zero = len_AI - OFFSET; //WITH FRACTIONAL PART
        if (AI[0] == '0') { //0. ...   
            if (AF[0] == '0') { //0.0 ... //0.01e-8 -123.0e-7 => 0.001e-7 (20240422)
                strcpy(R, NEG ? "-" : "");
                strcat(R, "0."); pad = strpads0(OFFSET); strcat(R, pad); strcat(R, AF);
                strcat(R, "e"); strcat(R, i64str(EXP));
                free(A); free(B); free(AI); free(AF); free(pad);
                return R;
            }
            strcpy(R, NEG ? "-" : ""); //-0.1e3 -123.0e5 => -0.001e5 (20240422)
            strcat(R, "0."); strcat(R, AI); pad = strpads0(-zero); strcat(R, pad); strcat(R, AF);
            strcat(R, "e");  strcat(R, i64str(EXP));
            free(A); free(B); free(AI); free(AF); free(pad);
            return R;
        }
        if (!zero) { //-12.3e3 -123.0e5 => -0.123e5 (20240422)
            strcpy(R, NEG ? "-" : "");
            strcat(R, "0."); strcat(R, AI); strcat(R, AF); rstripf0(R); //CLEAR ZEROS
            strcat(R, "e"); strcat(R, i64str(EXP));
            free(A); free(B); free(AI); free(AF);
            return R;
        }
        if (zero < 0) { //-12.3e3 -123.0e6 => -0.0123e6 (20240422)
            strcpy(R, NEG ? "-" : "");
            strcat(R, "0."); pad = strpads0(-zero); strcat(R, pad); strcat(R, AI);
            strcat(R, AF); rstripf0(R); //CLEAR ZEROS
            strcat(R, "e"); strcat(R, i64str(EXP));
            free(A); free(B); free(AI); free(AF); free(pad);
            return R;
        }
        strcpy(R, NEG ? "-" : ""); //-12.0e3 -123.0e4 => -1.2e4 (20240422)
        strncat(R, AI, zero); strcat(R, "."); strcat(R, AI + zero); strcat(R, AF); rstripf0(R); //CLEAR ZEROS
        strcat(R, "e"); strcat(R, i64str(EXP));
        free(A); free(B); free(AI); free(AF);
        return R;
    }
    /// NUM OUT-LINE /// RELATIVE ADDITION FLOATING-POINT NUM TYPE (SIGNED), CODE: NUM a("1_000_008.001"), b("9_000_002.002"); addf_signed(&a, &b).print("\n"); //10000010.003
    NUM& addf_signed(NUM* a, NUM* b) {
        /**
        *   \brief  RELATIVE ADDITION FLOATING-POINT NUM TYPE (SIGNED)
        *   \param  a FIRST  ADDEND OF NUM TYPE
        *   \param  b SECOND ADDEND OF NUM TYPE
        *   \return SUM
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: NONE
        *   CALL: addf subf
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *   NUM a("1_000_008.001"),  b("9_000_002.002");  addf_signed(&a, &b).print("\n");    //10000010.003
        *   NUM a("1_000_008.001"),  b("-9_000_002.002"); addf_signed(&a, &b).print("\n");   // -7999994.001
        *   NUM a("-1_000_008.001"), b("-9_000_002.002"); addf_signed(&a, &b).print("\n");  //-10000010.003
        *   NUM a("-1_000_008.001"), b("9_000_002.002");  addf_signed(&a, &b).print("\n"); //7999994.001
        *   \endcode
        */
        static NUM result;
        if (!(a->S) && !(b->S)) return addf(a, b);                               //POSITIVE POSITIVE
        if (a->S && b->S) { result = addf(a, b); result.S = 1; return result; } //NEGATIVE NEGATIVE
        if (!(a->S) && b->S) return subf(a, b);                                //POSITIVE NEGATIVE
        return subf(b, a);                                                    //NEGATIVE POSITIVE
    }
    /// NUM OUT-LINE /// GREATER THAN ... (UNSIGNED), CODE: NUM a("5.25"), b("-5.25"); print(gt_abs(&a, &b) ? "true" : "false", " (UNSIGNED)\n"); //false (UNSIGNED)
    int gt_abs(NUM* a, NUM* b) {
        char* p = expEQ(a->CE, b->CE); //EXPONENT EQUALIZATION
        NUM A(p);
        free(p);
        return strfloat_cmp(A.C, b->C) > 0 ? 1 : 0;
    }
    /// NUM OUT-LINE /// EQUAL THAN ... (UNSIGNED) CODE: NUM a("5.25"), b("-5.25"); print(eq_abs(&a, &b) ? "true" : "false", " (UNSIGNED)\n"); //true (UNSIGNED)
    int eq_abs(NUM* a, NUM* b) {
        char* p = expEQ(a->CE, b->CE); //EXPONENT EQUALIZATION
        NUM A(p);
        free(p);
        return strcmp(A.C, b->C) ? 0 : 1;
    }
    /// NUM OUT-LINE /// GREATER OR EQUAL THAN ... (SIGNED), CODE: NUM a("5.25"), b("-5.25"); print(ge(&a, &b) ? "true" : "false", "\n"); //true
    int ge(NUM* a, NUM* b) {
        if (gt(a, b)) return 1;
        if (eq(a, b)) return 1;
        return 0;
    }
    /// NUM OUT-LINE /// EQUAL THAN ... (SIGNED), CODE: NUM a("5.25"), b("-5.25"); print(eq(&a, &b) ? "true" : "false", " (SIGNED)\n"); //false (SIGNED)
    int eq(NUM* a, NUM* b) {
        return (eq_abs(a, b) ? 1 : 0) && ((a->S == b->S) ? 1 : 0);
    }
    /// NUM OUT-LINE /// GREATER THAN ... (SIGNED), CODE: NUM a("5.250001"), b("5.25"); print(gt(&a, &b) ? "true" : "false", "\n"); //true
    int gt(NUM* a, NUM* b) {
        static NUM A;
        if (a->S && b->S) { //NEGATIVE NEGATIVE
            char* p = expEQ(a->CE, b->CE); //EXPONENT EQUALIZATION
            A = p; free(p);
            if (!strcmp(A.C, b->C)) return 0;
            return gt_abs(a, b) ? 0 : 1;
        }
        else if (!(a->S) && !(b->S)) { //POSITIVE POSITIVE
            return gt_abs(a, b) ? 1 : 0;
        }
        else if (!(a->S) && (b->S)) { //POSITIVE NEGATIVE
            return 1;
        }
        return  0; //NEGATIVE POSITIVE
    }
    /// NUM OUT-LINE /// LESS THAN ... (SIGNED), CODE: NUM a("5.250001"), b("5.25"); print(lt(&a, &b) ? "true" : "false", "\n"); //false
    int lt(NUM* a, NUM* b) {
        if (ge(a, b)) return 0;
        else return 1;
    }
    /// NUM OUT-LINE /// NOT EQUAL THAN ... (SIGNED), CODE: NUM a("5.250001"), b("5.25"); print(ne(&a, &b) ? "true" : "false", "\n"); //true
    int ne(NUM* a, NUM* b) {
        return (a->S != b->S) || (eq_abs(a, b) ? 0 : 1);
    }
    /// NUM OUT-LINE /// LESS OR EQUAL THAN ... (SIGNED), CODE: NUM a("5.250001"), b("5.25"); print(le(&a, &b) ? "true" : "false", "\n"); //false
    int le(NUM* a, NUM* b) {
        return gt(a, b) ? 0 : 1;
    }
    /// NUM OUT-LINE /// HEX-BINARY REPRESENTATION OF A DECIMAL INTEGER STRING NUMBER -NEED: free(), CODE: char* ram = bits("255", 0); print(ram, "\n"); free(ram); //FF
    char* bits(const char* n, int bin) { //DEFAULT ARGs: (int bin = 1)
        Division* q;
        static char* B, * N, * H;
        static I64 i, j, H_len, B_len;
        i64 DIM = ((i64)strlen(n) + 1) * sizeof(char);
        N = (char*)malloc(DIM); if (!N) raise_exit("OUT OF RAM MEMORY => bits", n); //RAM DYNAMIC ALLOCATION
        H = (char*)malloc(DIM); if (!H) raise_exit("OUT OF RAM MEMORY => bits", n);//RAM DYNAMIC ALLOCATION
        strcpy(N, n);
        i = 0;
        do {
            j = 0;
            q = divis(N, "16"); //DIVISION X 16 => N/16
            strcpy(N, q->quotient);
            int HX = atoi(q->remainder); free(q->quotient); free(q->remainder);
            switch (HX) {
            case 0:H[i] = '0'; break;
            case 1:H[i] = '1'; break;
            case 2:H[i] = '2'; break;
            case 3:H[i] = '3'; break;
            case 4:H[i] = '4'; break;
            case 5:H[i] = '5'; break;
            case 6:H[i] = '6'; break;
            case 7:H[i] = '7'; break;
            case 8:H[i] = '8'; break;
            case 9:H[i] = '9'; break;
            case 10:H[i] = 'A'; break;
            case 11:H[i] = 'B'; break;
            case 12:H[i] = 'C'; break;
            case 13:H[i] = 'D'; break;
            case 14:H[i] = 'E'; break;
            case 15:H[i] = 'F'; break;
            }
            i++;
        } while (strcmp(N, "0"));
        H[i] = '\0';
        str_rev(H);
        if (!bin) { free(N); return (H); } //HEXADECIMAL REPRESENTATION
        H_len = (I64)strlen(H);
        B_len = H_len * 4;
        B = (char*)malloc((B_len + 1) * sizeof(char)); if (!B) raise_exit("OUT OF RAM MEMORY => bits", n); //RAM DYNAMIC ALLOCATION
        i = 0; j = 0;
        do {
            switch ((char)H[j]) {
            case '0':strcpy(B + i, "0000"); break;
            case '1':strcpy(B + i, "0001"); break;
            case '2':strcpy(B + i, "0010"); break;
            case '3':strcpy(B + i, "0011"); break;
            case '4':strcpy(B + i, "0100"); break;
            case '5':strcpy(B + i, "0101"); break;
            case '6':strcpy(B + i, "0110"); break;
            case '7':strcpy(B + i, "0111"); break;
            case '8':strcpy(B + i, "1000"); break;
            case '9':strcpy(B + i, "1001"); break;
            case 'A':strcpy(B + i, "1010"); break;
            case 'B':strcpy(B + i, "1011"); break;
            case 'C':strcpy(B + i, "1100"); break;
            case 'D':strcpy(B + i, "1101"); break;
            case 'E':strcpy(B + i, "1110"); break;
            case 'F':strcpy(B + i, "1111"); break;
            }
            i += 4; j++;
        } while (H[j]);
        free(N); free(H);
        if (B[0] == '0') stripi0(B);
        return B; //BINARY-HEXADECIMAL REPRESENTATION
    }
    /// NUM OUT-LINE /// not OPERATOR (LIKE !), CODE: NUM a("0.0"), b("3.0"); print((not a ? "true" : "false"), "\n"); print((!b ? "true" : "false"), "\n"); //true false
    int not_(NUM* a) {
        return strcmp(a->C, "0.0") ? 0 : 1;
    }
    /// NUM OUT-LINE ///  CALCULATOR MODE: POWER - HIGH PRECISION, CODE: NUM a("2.37"); print(POW(a, 7), "\n"); //419.98948952729733
    NUM& POW(NUM& b, i64 e) {
        static NUM q, m;
        static i64 i;
        static const char* bits;
        if (b == "0.0" && (!e || e < 0)) { raise("IMPOSSIBLE OPERATION => POW", b.CE); return q = 0; } //0^0 0^-e (e>0)
        if (!e) { q = 1; return q; }
        b = (e < 0 ? 1 / b : b);
        e = (e < 0 ? -e : e);
        if (b == (i64)0) { q = (i64)0; return q; }
        if (b == 1) { q = 1; return q; }
        bits = I32tobin((I32)e);
        q = m = b;
        for (i = 1; i < (i64)strlen(bits); i++)
            q = ((bits[i] == '1') ? 1 : 0) ? q * q * m : q * q;
        return q;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: POWER - HIGH SPEED, CODE: NUM a("2.37"); print(POW(a, 7, 9), "\n"); //NUM a("2.37"); print(POW(a, 7, 9), "\n"); //419.989489527
    NUM& POW(NUM& b, i64 e, i64 d) {
        static NUM q, m;
        static i64 i;
        static const char* bits;
        if (b == "0.0" && (!e || e < 0)) { raise("IMPOSSIBLE OPERATION => POW", b.CE); return q = 0; } //0^0 0^-e (e>0)
        if (!e) { q = 1; return q; }
        d = (d < 0 ? -d : d);
        b = (e < 0 ? 1 / b : b);
        e = (e < 0 ? -e : e);
        if (b == (i64)0) { q = (i64)0; return q; }
        if (b == 1) { q = 1; return q; }
        bits = I32tobin((I32)e);
        q = m = b;
        for (i = 1; i < (i64)strlen(bits); i++) {
            q = ((bits[i] == '1') ? 1 : 0) ? q * q * m : q * q;
            q = q.trunk(d);
        }
        return q;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: POWER - HIGH SPEED, CODE: //NUM a("2.37"); print(POW(b, e, 9), "\n"); //419.989489527
    NUM& POW(NUM& b, NUM& e, i64 d) {
        static NUM q, m;
        static i64 i;
        static char* bits;
        if (b == "0.0" && (!e || e < (i64)0)) { raise("IMPOSSIBLE OPERATION => POW", b.CE); return q = 0; } //0^0 0^-e (e>0)
        if (!e) { q = 1; return q; }
        d = (d < 0 ? -d : d);
        b = (e < (i64)0 ? 1 / b : b);
        e = (e < (i64)0 ? -e : e);
        if (b == (i64)0) { q = (i64)0; return q; }
        if (b == 1) { q = 1; return q; }
        bits = e.bits();
        q = m = b;
        for (i = 1; i < (i64)strlen(bits); i++) {
            q = ((bits[i] == '1') ? 1 : 0) ? q * q * m : q * q;
            q = q.trunk(d);
        }
        free(bits);
        return q;
    }
    /// NUM OUT-LINE /// MODULUS OPERATOR FOR POWER (b-BASE e-EXPONENT), CODE: NUM a(2); print(POW_MOD(a, 4, 13), "\n"); //3.0
    NUM& POW_MOD(NUM& b, i64 e, i64 n) {
        /** be => DIVIDEND,  n  => DIVISOR, return R => REMAINDER */
        static NUM R;
        static i64 SIGN, i;
        static const char* bits;
        if (b == "0.0" && (!e || e < 0)) { raise("IMPOSSIBLE OPERATION => MOD", b.CE);     return R = 0; }  //0^0 0^-e (e>0)
        if (n == 0) { raise("DIVISION BY ZERO => MOD", b.CE); return R = 0; } //n = > DIVISOR
        SIGN = 0;
        if (b < "0.0" && e % 2) { SIGN = 1; b = -b; }
        b = (e < 0 ? 1 / b : b);
        e = (e < 0 ? -e : e);
        if (!e) { b = 1; R = b % (i64)n; return R; }
        if (e == 1) { n = n < 0 ? -n : n; R = b % (i64)n; R.S = (SIGN ? 1 : 0); return R; }
        bits = I32tobin((I32)e);
        R = b;
        for (i = 1; i < (i64)strlen(bits); i++) { //POWER ALGORITHM => SQUARE AND MULTIPLY
            R = R * R; //SQUARE
            R = ((R < (i64)n) ? R : R % (i64)n);
            if (bits[i] == '1') { R = R * b; R = (R < (i64)n ? R : R % (i64)n); } //MULTIPLY
        }
        R.S = (SIGN ? 1 : 0);
        return R;
    }
    /// NUM OUT-LINE /// CONVERT A 32 BIT NUMBER (BOTH SIGNED i32 AND UNSIGNED I32) TO STRING BINARY, CODE: print(I32tobin(13), "\n"); //1101
    const char* I32tobin(I32 n) {
        static char bits[65];
        I32 static r, i;
        i = 0;
        while (n > 0) { r = n % 2; bits[i] = (r ? '1' : '0'); n /= 2; i++; }
        bits[i] = '\0'; //STRING TERMINATOR
        str_rev(bits);
        return bits;
    }
    /// NUM OUT-LINE /// CHECK IF POINTED NUM OBJECT IS ZERO, CODE: NUM a("0.0"); print(is_zero(&a), "\n");  //1
    int is_zero(NUM* n) {
        return (strcmp("0.0", n->C)) ? 0 : 1;
    }
    /// NUM OUT-LINE /// CHECK IF POINTED NUM OBJECT IS POSITIVE, CODE: NUM a(1); print(is_positive(&a), " "); a--; print(is_positive(&a), "\n"); //1 0
    int is_positive(NUM* n) {
        return n->is_positive();
    }
    /// NUM OUT-LINE /// CHECK IF POINTED NUM OBJECT IS NEGATIVE, CODE: NUM a(-1); print(is_negative(&a), " "); a++; print(is_negative(&a), "\n"); //1 0
    int is_negative(NUM* n) {
        return n->is_negative();
    }
    /// NUM OUT-LINE /// CHECK IF POINTED NUM OBJECT IS INTEGER VALUE, CODE: NUM a("7.0"); print(is_int(&a), "\n");  //1
    int is_int(NUM* n) {
        char* s = exp2num(*n);
        I64 s_L = (I64)strlen(s);
        int FLAG = s[s_L - 1] == '0' && s[s_L - 2] == '.' ? 1 : 0;
        free(s);
        return FLAG;
    }
    /// NUM OUT-LINE /// CHECK IF POINTED NUM OBJECT IS FLOATING-POINT VALUE, CODE: NUM a("3.14"); print(is_float(&a), "\n");  //1
    int is_float(NUM* n) {
        return !is_int(n);
    }
    /// NUM OUT-LINE /// CHECK IF POINTED NUM OBJECT IS EVEN, CODE: NUM a("4.0"); print(is_even(&a), "\n");  //1
    int is_even(NUM* n) {
        static int FLAG;
        FLAG = -1; //ERROR
        if (is_int(n)) {
            char* s = exp2num(*n);
            I64 s_L = (I64)strlen(s);
            int FLAG = s[s_L - 3];
            free(s);
            switch (FLAG) {//EVEN
            case '0': return 1; case '2': return 1; case '4': return 1; case '6': return 1; case '8': return 1;
            default: //ODD
                return 0;
            }
        }
        raise("VALUE, must be integer => is_even", n->sprint_fields());
        return FLAG;
    }
    /// NUM OUT-LINE /// CHECK IF NUM OBJECT POINTED IS ODD, CODE: NUM a("3.0"); print(is_odd(&a), "\n");  //1
    int is_odd(NUM* n) {
        static int FLAG;
        FLAG = -1; //ERROR
        if (is_int(n)) {
            char* s = exp2num(*n);
            I64 s_L = (I64)strlen(s);
            int FLAG = s[s_L - 3];
            free(s);
            switch (FLAG) {//ODD
            case '1': return 1; case '3': return 1; case '5': return 1; case '7': return 1; case '9': return 1;
            default: //EVEN
                return 0;
            }
        }
        raise("VALUE, must be integer => is_odd", n->sprint_fields());
        return FLAG;
    }
    /// NUM OUT-LINE /// CHECKER FOR PRIME NUMBERS
    int is_prime(NUM* n) {
        if (*n == 1 || *n == 2) return 1; //1 AND 2 ARE CONSIDERED PRIME NUMBERS
        if (is_even(n) || *n <= 1) return 0;
        for (NUM i = 3; i <= (*n).sqrt(0); i++) {
            if (!(*n % i)) return 0;
        }
        return 1;
    }
    /// NUM OUT-LINE /// RETURN LOCALIZED FORMATTED STRING -NEED: free(), CODE: NUM a("3_000.0"); char *p = format(a, 2, ','); print(p, "\n"); free(p); //3,000.00
    char* format(NUM a, i64 d, char SEP1000, int SIGN) { //DEFAULT ARGs: (NUM, i64 d = 2, char SEP1000 = ',', int SIGN = 0)
        char C[2];
        //int NEG = 0; //POSITIVE
        if (SEP1000 == ',') { C[0] = '.'; C[1] = '\0'; } //DEFAULT THOUSANDTH SEPARATOR 
        else { SEP1000 = '.'; C[0] = ','; C[1] = '\0'; }
        char* n = exp2num(a);
        I64 DIM = (I64)(sizeof(char) * (strlen(n) + (d < 0 ? -d : d) + 2)); //NULL, SIGN
        char* s = (char*)malloc(DIM + DIM / 3); if (!s) raise_exit("OUT OF RAM MEMORY => format", a.sprint_fields());  //RAM DYNAMIC ALLOCATION
        char* f = (char*)malloc(DIM + DIM / 3); if (!f) raise_exit("OUT OF RAM MEMORY => format", a.sprint_fields()); //RAM DYNAMIC ALLOCATION
        char** P = split(n, ".");
        i64 alen_I = (i64)strlen(P[0]);
        i64 alen_F = (i64)strlen(P[1]);
        strcpy(s, P[0]); str_rev(s);
        i64 dots = (alen_I - 1) / 3;
        i64 i, j;
        if (alen_F >= d) {
            for (i = 0, j = 0; i < alen_I; i++, j++) {
                f[j] = s[i];
                if (dots && !((i + 1) % 3)) { j++; f[j] = SEP1000; dots--; }
            }
            f[j] = '\0';
            str_rev(f);
            if (d <= 0 && !strcmp(P[1], "0")) {
                free(P[0]); free(n);
                if (SIGN && !a.S) { strcpy(s, "+"); strcat(s, f); }
                else strcpy(s, f); 
                free(f);
                return s;
            }
            strcat(f, C); strcat(f, P[1]);
            SIGN && !a.S ? strcpy(s, "+") : strcpy(s, "");
            free(P[0]); free(n);
            strcat(s, f); free(f);
            return s;
        }
        i64 diff = d - alen_F;
        for (i = 0, j = 0; i < alen_I; i++, j++) {
            f[j] = s[i];
            if (dots && !((i + 1) % 3)) { j++; f[j] = SEP1000; dots--; }
        }
        f[j] = '\0';
        str_rev(f);
        strcat(f, C); strcat(f, P[1]); char* pads = strpads0(diff); strcat(f, pads); free(pads);
        free(P[0]); free(n);
        if (SIGN && !a.S) { strcpy(s, "+"); strcat(s, f); }
        else strcpy(s, f); 
        free(f);
        return s;
    }
    /// NUM OUT-LINE /// RETURN NUM STRING FORMATTED WITH FRACTIONAL PART d ZERO PADDED WHEN REQUIRED -NEED: free(), CODE: NUM a("3.0"); char *p = format0(a); print(p, "\n"); free(p); //3.00
    char* format0(NUM& a, i64 d) { //DEFAULT ARGs: (NUM&, i64 d = 2)
        char* n = exp2num(a);
        I64 DIM = (I64)(sizeof(char) * (strlen(n) + (d < 0 ? -d : d) + 2)); //NULL, SIGN
        char* s = (char*)malloc(DIM); //RAM DYNAMIC ALLOCATION
        if (!s) raise_exit("OUT OF RAM MEMORY => format0", a.sprint_fields());
        char** P = split(n, ".");
        i64 alen_F = (i64)strlen(P[1]);
        strcpy(s, P[0]);
        if (alen_F >= d) {
            if (d <= 0 && !strcmp(P[1], "0")) {
                free(P[0]); free(n);
                return s;
            }
            strcat(s, "."); strcat(s, P[1]);
            free(P[0]); free(n);
            return s;
        }
        i64 diff = d - alen_F;
        strcat(s, "."); strcat(s, P[1]);
        free(P[0]); free(n);
        char* pads = strpads0(diff); strcat(s, pads); free(pads);
        return s;
    }
    /// NUM OUT-LINE /// RETURN NUM INTEGER STRING WITHOUT .0 IF INTEGER VALUE -NEED: free(), CODE: NUM a("3.0"); char *p = format_int(a); print(p, "\n"); free(p); //3
    char* format_int(NUM& a) {
        return a.format_int();
    }

    ///////////////////////////////////////////////// operator - OVERLOADING LEFT OPERATOR ///////////////////////////////////////////////// 
    /// NUM OUT-LINE /// NUM OVERLOADING INSERTION OPERATOR (<<), CODE: NUM a("-3.5"), b("2.0"); cout << (a*b) << endl; //-7.0
    ostream& operator<<(ostream& COUT, NUM n) {
        char* ns = exp2num(n);
        //COUT << (n.S ? "-" : "") << (n.CE ? n.CE : "null"); //EXPONENTIAL NOTATION
        COUT << (ns ? ns : "null");                          //STANDARD NUMERIC NOTATION
        free(ns);
        return COUT;
    }
    /// NUM OUT-LINE /// NUM& OVERLOADING EXTRACTION OPERATOR (>>), CODE: NUM a; cin >> a; cout << (a + 1) << endl; //3.0 => 4.0
    istream& operator>>(istream& CIN, NUM& n) {
        string s;
        CIN >> s;
        n = s;
        return CIN;
    }
    /// NUM OUT-LINE /// ALLOW LEFT OPERAND TO BE i64, CODE: NUM a("3.0"); a = 7 + a; a.print("\n"); //10.0
    NUM& operator+(i64 a, NUM& b) {
        static NUM A;
        A = a;
        if (!strcmp(b.C, "0.0")) return A;
        if (!strcmp(A.C, "0.0")) return b;
        return addf_signed(&A, &b);
    }
    /// NUM OUT-LINE /// ALLOW LEFT OPERAND TO BE *char, CODE: NUM a("3.0"); a = "3.14" + a; a.print("\n"); //6.14
    NUM& operator+(const char* a, NUM& b) {
        static NUM A;
        A = a;
        if (!strcmp(b.C, "0.0")) return A;
        if (!strcmp(a, "0.0")) return b;
        return addf_signed(&A, &b);
    }
    /// NUM OUT-LINE /// ALLOW LEFT OPERAND TO BE String, CODE: NUM a("3.0"); a = string("3.14") + a; a.print("\n"); //6.14
    NUM& operator+(string a, NUM& b) {
        static NUM A;
        A = a;
        if (!strcmp(b.C, "0.0")) return A;
        if (!strcmp(A.C, "0.0")) return b;
        return addf_signed(&A, &b);
    }
    /// NUM OUT-LINE /// SUBTRACTION OPERATOR, CODE: NUM a(7); print(4 - a, "\n"); //-3.0
    NUM& operator-(i64 a, NUM& b) {
        static NUM A, B;
        A = a;
        if (!strcmp(b.C, "0.0")) return A;
        if (!strcmp(A.C, "0.0")) { B = b; return -B; } //OPPOSED
        return subf_signed(&A, &b);
    }
    /// NUM OUT-LINE /// SUBTRACTION OPERATOR, CODE: NUM a(7); print("4.0" - a, "\n"); //-3.0
    NUM& operator-(const char* a, NUM& b) {
        static NUM A, B;
        A = a;
        if (!strcmp(b.C, "0.0")) return A;
        if (!strcmp(A.C, "0.0")) { B = b; return -B; } //OPPOSED
        return subf_signed(&A, &b);
    }
    /// NUM OUT-LINE /// SUBTRACTION OPERATOR, CODE: NUM a(7); print(string("4.0") - a, "\n"); //-3.0
    NUM& operator-(string a, NUM& b) {
        static NUM A, B;
        A = a;
        if (!strcmp(b.C, "0.0")) return A;
        if (!strcmp(A.C, "0.0")) { B = b; return -B; } //OPPOSED
        return subf_signed(&A, &b);
    }
    /// NUM OUT-LINE /// MULTIPLICATION OPERATOR, CODE: NUM a(7); print(10 * a, "\n"); //70
    NUM& operator*(i64 a, NUM& b) {
        static NUM ZERO;
        NUM A(a);
        if (!strcmp(A.C, "0.0")) return ZERO;
        if (!strcmp(b.C, "0.0")) return ZERO;
        return mulf_signed(&A, &b);
    }
    /// NUM OUT-LINE /// MULTIPLICATION OPERATOR, CODE: NUM a(7); print("10.0257" * a, "\n"); //70.1799
    NUM& operator*(const char* a, NUM& b) {
        static NUM ZERO;
        NUM A(a);
        if (!strcmp(A.C, "0.0")) return ZERO;
        if (!strcmp(b.C, "0.0")) return ZERO;
        return mulf_signed(&A, &b);
    }
    /// NUM OUT-LINE /// MULTIPLICATION OPERATOR, CODE: NUM a(7); print(string("10.0257") * a, "\n"); //70.1799
    NUM& operator*(string a, NUM& b) {
        static NUM ZERO;
        NUM A(a);
        if (!strcmp(A.C, "0.0")) return ZERO;
        if (!strcmp(b.C, "0.0")) return ZERO;
        return mulf_signed(&A, &b);
    }
    /// NUM OUT-LINE /// DIVISION OPERATOR, CODE: NUM a(7); print(10 / a, "\n"); //1.42857142857142857142857142857142
    NUM& operator/(i64 a, NUM& op2) {
        static NUM ZERO;
        NUM A(a);
        if (!A) return ZERO; //(int) ZERO DIVIDEND => ZERO QUOTIENT
        if (!op2) {
            raise("DIVISION BY ZERO => operator/", op2.sprint_fields());
            return ZERO;
        }
        return divf_signed(&A, &op2);
    }
    /// NUM OUT-LINE /// DIVISION OPERATOR, CODE: NUM a(7); print("10.0" / a, "\n"); //1.42857142857142857142857142857142
    NUM& operator/(const char* a, NUM& op2) {
        static NUM ZERO;
        NUM A(a);
        if (!A) return ZERO; //(STRING) ZERO DIVIDEND => ZERO QUOTIENT
        if (!op2) {
            raise("DIVISION BY ZERO => operator/", op2.sprint_fields());
            return ZERO;
        }
        return divf_signed(&A, &op2);
    }
    /// NUM OUT-LINE /// DIVISION OPERATOR, CODE: NUM a(7); print(string("10.0") / a, "\n"); //1.42857142857142857142857142857142
    NUM& operator/(string a, NUM& op2) {
        static NUM ZERO;
        NUM A(a);
        if (!A) return ZERO; //(string) ZERO DIVIDEND => ZERO QUOTIENT
        if (!op2) {
            raise("DIVISION BY ZERO => operator/", op2.sprint_fields());
            return ZERO;
        }
        return divf_signed(&A, &op2);
    }
    /// NUM OUT-LINE /// MODULUS OPERATOR, CODE: NUM a(7); print(10 % a, "\n"); //3.0
    NUM& operator%(i64 a, NUM& op2) {
        static NUM ZERO;
        NUM A(a);
        if (!A) return ZERO; //(int) ZERO DIVIDEND => ZERO QUOTIENT
        if (!op2) {
            raise("DIVISION BY ZERO => operator%", op2.sprint_fields());
            return ZERO;
        }
        return mod(A, op2);
    }
    /// NUM OUT-LINE /// MODULUS OPERATOR, CODE: NUM a(7); print("10.0" % a, "\n"); //3.0
    NUM& operator%(const char* a, NUM& op2) {
        static NUM ZERO;
        NUM A(a);
        if (!A) return ZERO; //(int) ZERO DIVIDEND => ZERO QUOTIENT
        if (!op2) {
            raise("DIVISION BY ZERO => operator%", op2.sprint_fields());
            return ZERO;
        }
        return mod(A, op2);
    }
    /// NUM OUT-LINE /// MODULUS OPERATOR, CODE:
    NUM& operator%(string a, NUM& op2) {
        static NUM ZERO;
        NUM A(a);
        if (!A) return ZERO; //(string) ZERO DIVIDEND => ZERO QUOTIENT
        if (!op2) {
            raise("DIVISION BY ZERO => operator%", op2.sprint_fields());
            return ZERO;
        }
        return mod(A, op2);
    }
    /// NUM OUT-LINE /// POWER, CODE: NUM e(73); print(3 ^ e, "\n"); //67585198634817523235520443624317923.0
    NUM& operator^(i64 b, NUM& op2) {
        NUM B(b);
        return pwrf_signed(&B, op2.to_i64());
    }
    /// NUM OUT-LINE /// POWER, CODE: NUM e(73); print("3.0" ^ e, "\n"); //67585198634817523235520443624317923.0
    NUM& operator^(const char* b, NUM& op2) {
        NUM B(b);
        return pwrf_signed(&B, op2.to_i64());
    }
    /// NUM OUT-LINE /// POWER, CODE: NUM e(73); print(string("3.0") ^ e, "\n"); //67585198634817523235520443624317923.0
    NUM& operator^(string b, NUM& op2) {
        NUM B(b);
        return pwrf_signed(&B, op2.to_i64());
    }
    /// NUM OUT-LINE /// GREATER THAN, CODE: i64 a(3); NUM b(4); print(a > b, "\n"); //0 (false)
    int operator>(i64 a, NUM& op2) {
        NUM A(a);
        return gt(&A, &op2);
    }
    /// NUM OUT-LINE /// GREATER THAN, CODE: const char *a("3.0"); NUM b(3); print(a > b, "\n"); //0 (false)
    int operator>(const char* a, NUM& op2) {
        NUM A(a);
        return gt(&A, &op2);
    }
    /// NUM OUT-LINE /// GREATER THAN, CODE: string a("4.0"); NUM b(3); print(a > b, "\n"); //1 (true)
    int operator>(string a, NUM& op2) {
        NUM A(a);
        return gt(&A, &op2);
    }
    /// NUM OUT-LINE /// GREATER OR EQUAL THAN, CODE: i64 a(3); NUM b(4); print(a >= b, "\n"); //0 (false)
    int operator>=(i64 a, NUM& op2) {
        NUM A(a);
        return ge(&A, &op2);
    }
    /// NUM OUT-LINE /// GREATER OR EQUAL THAN, CODE: const char *a("3.0"); NUM b(3); print(a >= b, "\n"); //1 (true)
    int operator>=(const char* a, NUM& op2) {
        NUM A(a);
        return ge(&A, &op2);
    }
    /// NUM OUT-LINE /// GREATER OR EQUAL THAN, CODE: string a("4.0"); NUM b(3); print(a >= b, "\n"); //1 (true)
    int operator>=(string a, NUM& op2) {
        NUM A(a);
        return ge(&A, &op2);
    }
    /// NUM OUT-LINE /// LESS THAN, CODE: i64 a(3); NUM b(4); print(a < b, "\n"); //1 (true)
    int operator<(i64 a, NUM& op2) {
        NUM A(a);
        return lt(&A, &op2);
    }
    /// NUM OUT-LINE /// LESS THAN, CODE: const char *a("3.0"); NUM b(3); print(a < b, "\n"); //0 (false)
    int operator<(const char* a, NUM& op2) {
        NUM A(a);
        return lt(&A, &op2);
    }
    /// NUM OUT-LINE /// LESS THAN, CODE: string a("4.0"); NUM b(3); print(a <= b, "\n"); //0 (false)
    int operator<(string a, NUM& op2) {
        NUM A(a);
        return lt(&A, &op2);
    }
    /// NUM OUT-LINE /// LESS OR EQUAL THAN, CODE: i64 a(3); NUM b(4); print(a <= b, "\n"); //1 (true)
    int operator<=(i64 a, NUM& op2) {
        NUM A(a);
        return le(&A, &op2);
    }
    /// NUM OUT-LINE /// LESS OR EQUAL THAN, CODE: const char *a("3.0"); NUM b(3); print(a <= b, "\n"); //1 (true)
    int operator<=(const char* a, NUM& op2) {
        NUM A(a);
        return le(&A, &op2);
    }
    /// NUM OUT-LINE /// LESS OR EQUAL THAN, CODE: string a("4.0"); NUM b(3); print(a <= b, "\n"); //0 (false)
    int operator<=(string a, NUM& op2) {
        NUM A(a);
        return le(&A, &op2);
    }
    /// NUM OUT-LINE /// EQUAL OPERATOR, CODE: i64 a(3); NUM b(2); print(a == b, "\n"); //0 (false)
    int operator==(i64 a, NUM& op2) {
        NUM A(a);
        return eq(&A, &op2);
    }
    /// NUM OUT-LINE /// EQUAL OPERATOR, CODE: const char* a("3.0"); NUM b(3); print(a == b, "\n"); //1 (true)
    int operator==(const char* a, NUM& op2) {
        NUM A(a);
        return eq(&A, &op2);
    }
    /// NUM OUT-LINE /// EQUAL OPERATOR, CODE: string a("3.0"); NUM b(3); print(a == b, "\n"); //1 (true)
    int operator==(string a, NUM& op2) {
        NUM A(a);
        return eq(&A, &op2);
    }
    /// NUM OUT-LINE /// NOT EQUAL OPERATOR, CODE: i64 a(3); NUM b(2); print(a != b, "\n"); //1 (true)
    int operator!=(i64 a, NUM& op2) {
        NUM A(a);
        return ne(&A, &op2);
    }
    /// NUM OUT-LINE /// NOT EQUAL OPERATOR, CODE: const char *("3.0"); NUM b(2); print(a != b, "\n"); //1 (true)
    int operator!=(const char* a, NUM& op2) {
        NUM A(a);
        return ne(&A, &op2);
    }
    /// NUM OUT-LINE /// NOT EQUAL OPERATOR, CODE: string a("2.0"); NUM b(2); print(a != b, "\n"); //0 (false)
    int operator!=(string a, NUM& op2) {
        NUM A(a);
        return ne(&A, &op2);
    }
    /// NUM OUT-LINE /// UNARY POST-INCREMENT OPERATOR (++), CODE: NUM a(5); print(a++, " "); a.print("\n"); //5.0 6.0
    NUM& operator++(NUM& op1, int) { //MUST BE int
        static NUM old;
        old = op1; //COPY
        op1 = op1 + 1;
        return old;
    }
    /// NUM OUT-LINE /// UNARY POST-DECREMENT (--) OPERATOR, CODE: NUM a(5); print(a--, " "); a.print("\n"); //5.0 4.0
    NUM& operator--(NUM& op1, int) { //MUST BE int
        static NUM old;
        old = op1; //COPY
        op1 = op1 - 1;
        return old;
    }
    /// NUM OUT-LINE /// not OPERATOR (LIKE !), CODE: NUM a(0); print(!a, "\n"); //1
    int operator!(NUM& op1) {
        return not_(&op1);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ADDITION => CODE: NUM a("30.14"), b("0.09"); add(a, b).print("\n"); //30.23
    NUM& add(NUM& a, NUM& b) {
        static NUM result;
        if (!(a.S) && !(b.S)) return addf(&a, &b);                               //POSITIVE POSITIVE
        if (a.S && b.S) { result = addf(&a, &b); result.S = 1; return result; } //NEGATIVE NEGATIVE
        if (!(a.S) && b.S) return subf(&a, &b);                                //POSITIVE NEGATIVE
        return subf(&b, &a);                                                  //NEGATIVE POSITIVE

    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ADDITION => CODE: add("30.14", "0.09").print("\n"); //30.23
    NUM& add(const char* a, const char* b) {
        static NUM result;
        NUM A(a), B(b);
        if (!(A.S) && !(B.S)) return addf(&A, &B);                               //POSITIVE POSITIVE
        if (A.S && B.S) { result = addf(&A, &B); result.S = 1; return result; } //NEGATIVE NEGATIVE
        if (!(A.S) && B.S) return subf(&A, &B);                                //POSITIVE NEGATIVE
        return subf(&B, &A);                                                  //NEGATIVE POSITIVE
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ADDITION => CODE: add(string("30.14"), string("0.09")).print("\n"); //30.23
    NUM& add(string a, string b) {
        static NUM result;
        NUM A(a), B(b);
        if (!(A.S) && !(B.S)) return addf(&A, &B);                               //POSITIVE POSITIVE
        if (A.S && B.S) { result = addf(&A, &B); result.S = 1; return result; } //NEGATIVE NEGATIVE
        if (!(A.S) && B.S) return subf(&A, &B);                                //POSITIVE NEGATIVE
        return subf(&B, &A);                                                  //NEGATIVE POSITIVE
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ADDITION => CODE: add(200, 133).print("\n"); //333.0
    NUM& add(i64 a, i64 b) {
        static NUM result;
        NUM A(a), B(b);
        if (!(A.S) && !(B.S)) return addf(&A, &B);                               //POSITIVE POSITIVE
        if (A.S && B.S) { result = addf(&A, &B); result.S = 1; return result; } //NEGATIVE NEGATIVE
        if (!(A.S) && B.S) return subf(&A, &B);                                //POSITIVE NEGATIVE
        return subf(&B, &A);                                                  //NEGATIVE POSITIVE
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SUBTRACTION => CODE: NUM a("1250.55"), b("250.55"); sub(a, b).print("\n"); //1000.0
    NUM& sub(NUM& a, NUM& b) {
        if (!a) { static NUM c; c = b; if (strcmp(b.C, "0.0")) c.S = (b.S ? 0 : 1); return c; } //UPSET SIGN (OPPOSITE) -0.0 NOT ALLOWED!
        if (!b) { static NUM c; c = a; return c; }
        return subf_signed(&a, &b);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SUBTRACTION => CODE: sub("1200.0", "200.0").print("\n"); //1000.0
    NUM& sub(const char* a, const char* b) {
        NUM A(a), B(b);
        if (!A) { static NUM c; c = B; if (strcmp(B.C, "0.0")) c.S = (B.S ? 0 : 1); return c; } //FLIPPED SIGN (OPPOSITE) //-0.0 NOT ALLOWED!
        if (!B) { static NUM c; c = A; return c; }
        return subf_signed(&A, &B);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SUBTRACTION => CODE: sub(string("1200.0"), string("200.0")).print("\n"); //1000.0
    NUM& sub(string a, string b) {
        NUM A(a), B(b);
        if (!A) { static NUM c; c = B; if (strcmp(B.C, "0.0")) c.S = (B.S ? 0 : 1); return c; } //FLIPPED SIGN (OPPOSITE) //-0.0 NOT ALLOWED!
        if (!B) { static NUM c; c = A; return c; }
        return subf_signed(&A, &B);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SUBTRACTION => CODE: sub(1200, 200).print("\n"); //1000.0
    NUM& sub(i64 a, i64 b) {
        NUM A(a), B(b);
        if (!A) { static NUM c; c = B; if (strcmp(B.C, "0.0")) c.S = (B.S ? 0 : 1); return c; } //FLIPPED SIGN (OPPOSITE) //-0.0 NOT ALLOWED!
        if (!B) { static NUM c; c = A; return c; }
        return subf_signed(&A, &B);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MULTIPLICATION => CODE: NUM a("3.1415"), b("2.718281"); mul(a, b).print("\n"); //8.5394797615
    NUM& mul(NUM& a, NUM& b) {
        return mulf_signed(&a, &b);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MULTIPLICATION => CODE: mul("3.1415", "2.718281").print("\n"); //8.5394797615
    NUM& mul(const char* a, const char* b) {
        NUM A(a), B(b);
        return mulf_signed(&A, &B);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MULTIPLICATION => CODE: mul(string("3.1415"), string("-2.718281")).print("\n"); //-8.5394797615
    NUM& mul(string a, string b) {
        NUM A(a), B(b);
        return mulf_signed(&A, &B);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MULTIPLICATION => CODE: mul(8, 3).print("\n"); //24.0
    NUM& mul(i64 a, i64 b) {
        NUM A(a), B(b);
        return mulf_signed(&A, &B);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: DIVISION => CODE: NUM a("-1250.95"), b("-3.50"); div(a, b).print("\n"); //357.4142857142857142857142857142857142857 
    NUM& div(NUM& a, NUM& b, i64 pd) { //DEFAULT ARGs: div(NUM, NUM, i64 pd = 40); 
        static NUM ZERO;
        if (!a) return ZERO; //(NUM) ZERO DIVIDEND => ZERO QUOTIENT
        if (!b) {
            raise("DIVISION BY ZERO => div", b.sprint_fields());
            return ZERO;
        }
        return divf_signed(&a, &b, pd);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: DIVISION => CODE: div("1250.95", "-3.50", 9).print("\n"); //-357.414285
    NUM& div(const char* a, const char* b, i64 pd) { //DEFAULT ARGs: div(const char*, const char*, i64 pd = 40); 
        static NUM ZERO;
        NUM A(a), B(b);
        if (!A) return ZERO; //(string) ZERO DIVIDEND => ZERO QUOTIENT
        if (!B) {
            raise("DIVISION BY ZERO => div", B.sprint_fields());
            return ZERO;
        }
        return divf_signed(&A, &B, pd);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: DIVISION => CODE: div(string("1250.95"), string("-3.50"), 9).print("\n"); //-357.414285714
    NUM& div(string a, string b, i64 pd) { //DEFAULT ARGs: div(string, string, i64 pd = 40); 
        static NUM ZERO;
        NUM A(a), B(b);
        if (!A) return ZERO; //(string) ZERO DIVIDEND => ZERO QUOTIENT
        if (!B) {
            raise("DIVISION BY ZERO => div", B.sprint_fields());
            return ZERO;
        }
        return divf_signed(&A, &B, pd);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: DIVISION => CODE: div(1, 3, 6).print("\n"); //0.333333
    NUM& div(i64 a, i64 b, i64 pd) { //DEFAULT ARGs: div(i64, i64, i64 pd = 40); 
        static NUM ZERO;
        NUM A(a), B(b);
        if (!A) return ZERO; //(string) ZERO DIVIDEND => ZERO QUOTIENT
        if (!B) {
            raise("DIVISION BY ZERO => div", B.sprint_fields());
            return ZERO;
        }
        return divf_signed(&A, &B, pd);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MODULUS => CODE: NUM a("123456789012345678901234567890.0"), b("8917988.0"); mod(a, b).print("\n"); //398122.0
    NUM& mod(NUM& op1, NUM& op2) {
        /** NUM OUT-LINE MODULUS FUNCTION FOR IN-LINE MODULUS OPERATOR(%) = > operator% FUNCTION */
        static NUM result, Q, q;
        static char** NIF;
        static char* R, * as, * nif;
        Q = op1 / op2;
        if (!Q) return result = 0;
        R = exp2num(Q);
        NIF = split(R, "."); //RAM DYNAMIC ALLOCATION
        nif = (char*)malloc(((i64)strlen(NIF[0]) + 1) * sizeof(char)); if (!nif) raise_exit("OUT OF RAM MEMORY => mod", op1.sprint_fields());
        strcpy(nif, NIF[0]); free(NIF[0]); free(R);
        if (!strcmp(nif, "0") || !strcmp(nif, "-0")) { free(nif);  return result = op1; }
        if (op1 == op2) { result = (i64)0; free(nif);  return result; } //RAM DYNAMIC ALLOCATION
        as = (char*)malloc(((i64)strlen(nif) + 3) * sizeof(char)); if (!as) raise_exit("OUT OF RAM MEMORY => mod", op1.sprint_fields());
        strcpy(as, nif); strcat(as, ".0"); q = as; free(as); free(nif);
        result = sub(op1, mul(q, op2));
        return result;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MODULUS => CODE: mod("123456789012345678901234567890.0", "17.0").print("\n"); //2.0
    NUM& mod(const char* a, const char* b) {
        NUM A(a), B(b);
        return mod(A, B);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MODULUS => CODE: mod(string("123456789012345678901234567890.0"), string("17.0")).print("\n"); //2.0
    NUM& mod(string a, string b) {
        NUM A(a), B(b);
        return mod(A, B);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MODULUS => CODE: mod(123, 17).print("\n"); //4.0
    NUM& mod(i64 a, i64 b) {
        NUM A(a), B(b);
        return mod(A, B);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: POWER => CODE: NUM b("3.141592654"), e("5.0"); pow(b, e).print("\n"); //306.019684985070792201693945033260775421740493024
    NUM& pow(NUM& b, NUM& e) {
        return pwrf_signed(&b, e.to_i64());
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: POWER => CODE: pow("4.0", "30.0").print("\n"); //1152921504606846976.0
    NUM& pow(const char* b, const char* e) {
        NUM B(b), E(e);
        return pwrf_signed(&B, E.to_i64());
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: POWER => CODE: pow(string("4.0"), string("30.0")).print("\n"); //1152921504606846976.0
    NUM& pow(string b, string e) {
        NUM B(b), E(e);
        return pwrf_signed(&B, E.to_i64());
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: POWER => CODE: pow(3, 4).print("\n"); //81.0
    NUM& pow(i64 b, i64 e) {
        static NUM B, E;
        if (b >= 0 && e >= 0) {
            char* s = pwri(b, e);
            i64 s_L = (i64)strlen(s);
            s[s_L] = '.'; s[s_L + 1] = '0'; s[s_L + 2] = '\0';
            B = s; free(s);
            return B;
        }
        B = b; E = e;
        return (B ^ E);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SQUARE ROOT => CODE: NUM a("1_005_947.123"); sqr(a).print("\n"); //1002.969153563
    NUM& sqr(NUM& a, i64 b) { //DEFAULT ARGs: b = 9
        return a.sqrt(b);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SQUARE ROOT => CODE: sqr("3.14").print("\n"); //1.772004514
    NUM& sqr(const char* a, i64 b) { //DEFAULT ARGs: ARGs: b = 9
        NUM A(a);
        return A.sqrt(b);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SQUARE ROOT => CODE: sqr(string("3.14")).print("\n"); //1.772004514
    NUM& sqr(string a, i64 b) { //DEFAULT ARGs: ARGs: b = 9
        NUM A(a);
        return A.sqrt(b);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SQUARE ROOT => CODE: sqr(9).print("\n"); //3
    NUM& sqr(i64 a, i64 b) { //DEFAULT ARGs: ARGs: b = 9
        NUM A(a);
        return A.sqrt(b);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ROOT-i => CODE: NUM a("1000.0"); root_i(a).print("\n"); //10.0
    NUM& root_i(NUM& a, i64 b) { //DEFAULT ARGs: b = 3
        return a.root_i(b);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ROOT-i => CODE: root_i("1000.0").print("\n"); //10.0
    NUM& root_i(const char* a, i64 b) { //DEFAULT ARGs: b = 3
        NUM A(a);
        return A.root_i(b);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ROOT-i => CODE: root_i(string("1000.0")).print("\n"); //10.0
    NUM& root_i(string a, i64 b) { //DEFAULT ARGs: b = 3
        NUM A(a);
        return A.root_i(b);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ROOT-i => CODE: root_i(1000).print("\n"); //10.0
    NUM& root_i(i64 a, i64 b) { //DEFAULT ARGs: b = 3
        NUM A(a);
        return A.root_i(b);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SQUARE POWER => CODE: NUM a("3.1415"); x2(a).print("\n"); //9.86902225
    NUM& x2(NUM& a) {
        return a * a;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SQUARE POWER => CODE: x2("6.0").print("\n"); //36.0
    NUM& x2(const char* a) {
        NUM A(a);
        return A * A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SQUARE POWER => CODE: x2(string("6.0")).print("\n"); //36.0
    NUM& x2(string a) {
        NUM A(a);
        return A * A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SQUARE POWER => CODE: x2(5).print("\n"); //25.0
    NUM& x2(i64 a) {
        NUM A(a);
        return A * A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: CUBE POWER => CODE: NUM a("123.456"); x3(a).print("\n"); //1881640.295202816
    NUM& x3(NUM& a) {
        return a * a * a;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: CUBE POWER => CODE: x3("5.0").print("\n"); //125.0
    NUM& x3(const char* a) {
        NUM A(a);
        return A * A * A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: CUBE POWER => CODE: x3(string("5.0")).print("\n"); //125.0
    NUM& x3(string a) {
        NUM A(a);
        return A * A * A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: CUBE POWER => CODE: x3(4).print("\n"); //64.0
    NUM& x3(i64 a) {
        NUM A(a);
        return A * A * A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER NUM, CODE: NUM a("0.001"), e(6); shift(a, e).print("\n"); //1000.0
    NUM& shift(NUM& b, NUM& e) {
        return shift(b, e.to_i64());
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER STRING, CODE: NUM a("0.001"); shift(a, "6.0").print("\n"); //1000.0
    NUM& shift(NUM& b, const char* e) {
        NUM E(e);
        return shift(b, E);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER string, CODE: NUM a("0.001"); shift(a, string("6.0")).print("\n"); //1000.0
    NUM& shift(NUM& b, string e) {
        NUM E(e);
        return shift(b, E);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER i64, CODE: NUM a("0.001"); shift(a, 6).print("\n"); //1000.0
    NUM& shift(NUM& b, i64 e) {
        b.E += e;
        const char* b_E = i64str(b.E);
        b.CE = (char*)realloc(b.CE, (b.len_I + b.len_F + 8 + strlen(b_E)) * sizeof(char)); //'.' + 'e' + '-' + NULL
        if (!b.CE) raise_exit("OUT OF RAM MEMORY => shift", b.sprint_fields());
        strcpy(b.CE, b.C); strcat(b.CE, "e"); strcat(b.CE, b_E);
        return b;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER, CODE: NUM a("0.001"), e("6.0"); xe10(a, e).print("\n"); //1000.0
    NUM& xe10(NUM& b, NUM& e) {
        static NUM B; B = b;
        return num7::shift(B, e);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER, CODE: NUM a("0.001"); xe10(a, "6.0").print("\n"); //1000.0
    NUM& xe10(NUM& b, const char* e) {
        static NUM B; B = b;
        return num7::shift(B, e);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER, CODE: NUM a("0.001"); xe10(a, string("6.0")).print("\n"); //1000.0
    NUM& xe10(NUM& b, string e) {
        static NUM B; B = b;
        return num7::shift(B, e);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER, CODE: NUM a("0.001"); xe10(a, 6).print("\n"); //1000.0
    NUM& xe10(NUM& b, i64 e) {
        static NUM B; B = b;
        return num7::shift(B, e);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: POWER => CODE: NUM b("3.141592654"), e("5.0"); xy(b, e).print("\n"); //306.019684985070792201693945033260775421740493024
    NUM& xy(NUM& b, NUM& e) {
        return pwrf_signed(&b, e.to_i64());
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: POWER => CODE: xy("4.0", "30.0").print("\n"); //1152921504606846976.0
    NUM& xy(const char* b, const char* e) {
        NUM B(b), E(e);
        return pwrf_signed(&B, E.to_i64());
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: POWER => CODE: xy(string("4.0"), string("30.0")).print("\n"); //1152921504606846976.0
    NUM& xy(string b, string e) {
        NUM B(b), E(e);
        return pwrf_signed(&B, E.to_i64());
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: POWER => CODE: xy(3, 4).print("\n"); //81.0
    NUM& xy(i64 b, i64 e) {
        return pow(b, e);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TWO POWER => CODE: NUM a(5); _2y(a).print("\n"); //32.0
    NUM& _2y(NUM& e) {
        NUM two(2);
        return num7::pow(two, e);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TWO POWER => CODE: _2y("5.0").print("\n"); //32.0
    NUM& _2y(const char* e) {
        NUM two(2), E(e);
        return num7::pow(two, E);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TWO POWER => CODE: _2y(string("5.0")).print("\n"); //32.0
    NUM& _2y(string e) {
        NUM two(2), E(e);
        return num7::pow(two, E);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TWO POWER => CODE: _2y(5).print("\n"); //32.0
    NUM& _2y(i64 e) {
        NUM two(2), E(e);
        return num7::pow(two, E);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: e POWER => CODE: NUM ex(5);_ey(ex).round(29).print("\n"); //148.41315910257660342111558004056
    NUM& _ey(NUM& ex) {
        NUM ek(e());
        return num7::pow(ek, ex);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: e POWER => CODE: _ey("5.0").round(29).print("\n"); //148.41315910257660342111558004056
    NUM& _ey(const char* ex) {
        NUM ek(e()), E(ex);
        return num7::pow(ek, E);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: e POWER => CODE: _ey(string("5.0")).round(29).print("\n"); //148.41315910257660342111558004056
    NUM& _ey(string ex) {
        NUM ek(e()), E(ex);
        return num7::pow(ek, E);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: e POWER => CODE: _ey(5).round(29).print("\n"); //148.41315910257660342111558004056
    NUM& _ey(i64 ex) {
        NUM ek(e()), E(ex);
        return num7::pow(ek, E);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: DOUBLED VALUE => CODE: NUM a("123.0"); _2x(a).print("\n"); //246.0
    NUM& _2x(NUM& a) {
        return a + a;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: DOUBLED VALUE => CODE: _2x("3.14").print("\n"); //6.28
    NUM& _2x(const char* a) {
        NUM A(a);
        return A + A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: DOUBLED VALUE => CODE: _2x(string("3.14")).print("\n"); //6.28
    NUM& _2x(string a) {
        NUM A(a);
        return A + A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: DOUBLED VALUE _2x(50).print("\n"); //100.0
    NUM& _2x(i64 a) {
        NUM A(a);
        return A + A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TRIPLED VALUE => CODE: NUM a("123.0"); _3x(a).print("\n"); //369.0
    NUM& _3x(NUM& a) {
        return a + a + a;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TRIPLED VALUE => CODE: _3x("3.14").print("\n"); //9.42
    NUM& _3x(const char* a) {
        NUM A(a);
        return A + A + A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TRIPLED VALUE => CODE: _3x(string("3.14")).print("\n"); //9.42
    NUM& _3x(string a) {
        NUM A(a);
        return A + A + A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TRIPLED VALUE => CODE: _3x(50).print("\n"); //150.0
    NUM& _3x(i64 a) {
        NUM A(a);
        return A + A + A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TEN POWER => CODE: NUM a(3); _10y(a).print("\n"); //1000.0
    NUM& _10y(NUM& a) {
        static NUM ten; ten = 10;
        return ten.shift(a - 1);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TEN POWER => CODE: _10y("-3.0").print("\n"); //0.001
    NUM& _10y(const char* a) {
        //return pow("10.0", a);
        static NUM ten; ten = 10;
        NUM A(a);
        return ten.shift(A - 1);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TEN POWER => CODE: _10y(String("-3.0")).print("\n"); //0.001
    NUM& _10y(string a) {
        return pow(string("10.0"), a);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: TEN POWER => CODE: NUM a(_10y(9)); a.print("\n"); //1000000000.0
    NUM& _10y(i64 a) {
        return pow(10, a);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: INVERSE VALUE => CODE: NUM a("-3.0"); inv(a, 2).print("\n"); //-0.33
    NUM& inv(NUM& div, i64 decs = 32) {
        NUM one(1);
        return divf_signed(&one, &div, decs);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: INVERSE VALUE => CODE: inv("2.00").print("\n"); //0.5
    NUM& inv(const char* div, i64 decs = 32) {
        NUM m(div), one(1);
        return divf_signed(&one, &m, decs);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: INVERSE VALUE => CODE: inv(string("2.00")).print("\n"); //0.5
    NUM& inv(string div, i64 decs = 32) {
        NUM m(div), one(1);
        return divf_signed(&one, &m, decs);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: INVERSE VALUE => CODE: inv(-7, 3).print("\n"); //-0.143
    NUM& inv(i64 div, i64 decs = 32) {
        NUM m(div), one(1);
        return divf_signed(&one, &m, decs);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ABSOLUTE VALUE => CODE: NUM a("-3.141592654"); Abs(a).round_bank(7).print("\n"); //3.1415926
    NUM& Abs(NUM a) {
        static NUM A; A = a;
        A.S = 0; //POSITIVE SIGN
        return A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ABSOLUTE VALUE => CODE: Abs("2.718281828").round(8).print("\n"); //2.71828183
    NUM& Abs(const char* a) {
        static NUM A; A = a;
        A.S = 0; //POSITIVE SIGN
        return A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ABSOLUTE VALUE => CODE: Abs(string("2.718281828")).round(8).print("\n"); //2.71828183
    NUM& Abs(string a) {
        static NUM A; A = a;
        A.S = 0; //POSITIVE SIGN
        return A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ABSOLUTE VALUE => CODE: Abs(-9876).print("\n"); //9876.0
    NUM& Abs(i64 a) {
        static NUM A; A = a;
        A.S = 0; //POSITIVE SIGN
        return A;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: pi CONSTANT => CODE: pi().round().print("\n"); //3.1415926535897932384626433832795
    NUM& pi() {
        static NUM A;
        return A = "3.1415926535897932384626433832795";
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: e CONSTANT => CODE: e().round().print("\n"); //2.7182818284590452353602874713527
    NUM& e() {
        static NUM A;
        return A = "2.7182818284590452353602874713527";
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SPIN-OFF VALUE => CODE: NUM price("54.58"); NUM rate("22.00"); spinoff(rate, price).round().print("\n"); //44.74
    NUM& spinoff(NUM& rate, NUM all = 1) { //DEFAULT ARGs: (NUM& rate, NUM all = 1)
        return all / (1 + rate.xe10(-2));
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SPIN-OFF VALUE => CODE: spinoff("22.00", "54.58").round().print("\n"); //44.74
    NUM& spinoff(const char* RATE, const char* all) { //DEFAULT ARGs: (const char*, const char* all = "1.0")
        NUM rate(RATE);
        return all / (1 + rate.shift(-2));
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SPIN-OFF VALUE => CODE: spinoff(string("22.00"), string("54.58")).round().print("\n"); //44.74
    NUM& spinoff(string RATE, string all) { //DEFAULT ARGs: (string, string all = "1.0")
        NUM rate(RATE);
        return all / (1 + rate.shift(-2));
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SPIN-OFF VALUE => CODE: spinoff(22, 1000).round().print("\n"); //819.67
    NUM& spinoff(i64 RATE, i64 all) { //DEFAULT ARGs: (i64, i64 all = 1)
        NUM rate(RATE);
        return all / (1 + rate.shift(-2));
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SPIN-ON VALUE => CODE: NUM factory_price("44.74"); NUM rate("22.00"); spinon(rate, factory_price).round().print("\n"); //54.58
    NUM& spinon(NUM& rate, NUM all = 1) { //DEFAULT ARGs: (NUM& rate, NUM all = 1)
        return all * (1 + rate.xe10(-2));
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SPIN-ON VALUE => CODE: spinon("22.00", "44.74").round().print("\n"); //54.58
    NUM& spinon(const char* RATE, const char* all) { //DEFAULT ARGs: (const char* RATE, const char* all = "1.0")
        NUM rate(RATE);
        return all * (1 + rate.shift(-2));
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SPIN-ON VALUE => CODE: spinon(string("22.00"), string("44.74")).round().print("\n"); //54.58
    NUM& spinon(string RATE, string all) { //DEFAULT ARGs: (string, string all = "1.0")
        NUM rate(RATE);
        return all * (1 + rate.shift(-2));
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: SPIN-ON VALUE => CODE: spinon(22, 1000).round().print("\n"); //1220
    NUM& spinon(i64 RATE, i64 all) { //DEFAULT ARGs: (i64, i64 all = 1)
        NUM rate(RATE);
        return all * (1 + rate.shift(-2));
    }
    ///// NUM OUT-LINE /// (BUILT-IN) CONVERT i64 TYPE TO SIGNED LONG LONG INTEGER STRING, CODE: NUM b(-9294967296); print(b, "\n"); //-9294967296.0
    //const char* i64str(i64 num) { 
    //    static char s[32];
    //    sprintf(s, "%lld", num);
    //    return s;
    //}
    /// NUM OUT-LINE /// CONVERT i64 TYPE TO SIGNED LONG LONG INTEGER STRING, CODE: i64 n = -9223372036854775807LL - 1; const char *s = i64str(n);print(s, "\n"); //-9223372036854775808
    const char* i64str(i64 num) {
        static char r[21]; //1 SIGN + 18 DIGITS (SIGNED 64 BIT) + 1 NULL => FROM -9223372036854775808 TO +9223372036854775807
        i64 R;
        r[20] = '\0';
        i64 i = 19;
        if (!num) return "0";                                     //ZERO STRING
        char sign = num < 0 ? 1 : 0;
        i64 MIN = -9223372036854775807LL - 1;                   //-9223372036854775808 (i64);
        if (sign && num == MIN) return "-9223372036854775808"; //-9223372036854775808LL
        num = sign ? num * -1LL : num;                        //GET POSITIVE
        do {
            R = num % 10;
            r[i] = (char)R + '0';                           //BYTE (0-9) + 48 (ZERO DIGIT ASCII CODE)
            i--;
        } while (num /= 10);
        if (sign) { r[i] = '-'; }                        //STORE MINUS SIGN (-)
        else i++;
        return r + i;
    }
    /// NUM OUT-LINE /// CONVERT I64 TYPE TO UNSIGNED INTEGER STRING, CODE: const char* result = I64str(18446744073709551615ULL, 10); print(result, "\n"); //18446744073709551615
    const char* I64str(I64 num, int base) { //DEFAULT ARGs: (int base = 10)
        static char r[65]; // 64 BIT + 1 NULL => FROM 0 TO 18446744073709551615 (20 DIGITS)
        I64 R;
        r[64] = '\0';
        i64 i = 63;
        if (!num) { strcpy(r, "0"); return r; }
        switch (base) { case 16: break; case 10: break; case 8: break; case 2: break; default: base = 10; }
                               do {
                                   R = num % base;
                                   if (R > 9) {
                                       switch (R) {
                                       case 10: r[i] = 'A'; break; case 11: r[i] = 'B'; break; case 12: r[i] = 'C'; break;
                                       case 13: r[i] = 'D'; break; case 14: r[i] = 'E'; break; case 15: r[i] = 'F';
                                       }
                                   }
                                   else r[i] = (char)R + '0'; //BYTE (0-9) + 48 (ZERO (0) DIGIT ASCII CODE)
                                   i--;
                               } while (num /= base);
                               return r + i + 1;
    }
    /// NUM OUT-LINE /// CONVERT AN INTEGER STRING TO A UNSIGNED 64-BIT INTEGER, CODE: print(I64int("18446744073709551614") + 1); //18446744073709551615
    I64 I64int(const char* n, int base) { //DEFAULT ARGs: (i64 base = 10)
        I64 N = 0;
        switch (base) { case 16: break; case 10: break; case 8: break; case 2: break; default: base = 10; }
                               if (base > 10)
                                   for (i64 i = 0; i < (i64)strlen(n); i++) {
                                       N *= base;
                                       switch (n[i]) {
                                       case 'A': case 'a': N += 10; break; case 'B': case 'b': N += 11; break;
                                       case 'C': case 'c': N += 12; break; case 'D': case 'd': N += 13; break;
                                       case 'E': case 'e': N += 14; break; case 'F': case 'f': N += 15; break;
                                       default: N += n[i] - '0'; //DIGIT TO VALUE
                                       }
                                   }
                               else for (i64 i = 0; i < (i64)strlen(n); i++) { N *= base; N += n[i] - '0'; } //DIGIT TO VALUE 
                               return N;
    }
    /// NUM OUT-LINE /// CONVERT AN INTEGER STRING TO A SIGNED 64-BIT INTEGER, CODE: print(i64int("-2147483648") + 1, "\n"); //-2147483647
    i64 i64int(const char* n, I64* idx, int base) { //DEFAULT ARGs: (I64* idx = 0, i64 base = 10)
        return stoll(n, idx, base);
    }
    /// NUM OUT-LINE /// CONVERT AN INTEGER NUMBER STRING TO HEXADECIMAL NUMBER STRING, CODE: print(I128str_hex("340282366920938463463374607431768211455"), "\n"); //FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    char* I128str_hex(const char* n) { //
        static char ns[64];
        static char x[64];
        strcpy(ns, n); strcat(ns, ".0");
        NUM N(ns);
        if (N > "340282366920938463463374607431768211455.0" || N < (i64)0) { raise("128-BIT OVERFLOW => I128str_hex", n); return NULL; }
        i64 i, choice;
        for (i = 0; N; i++) {
            choice = (N % 16).to_i32();
            switch (choice) {
            case 10: x[i] = 'A'; break;
            case 11: x[i] = 'B'; break;
            case 12: x[i] = 'C'; break;
            case 13: x[i] = 'D'; break;
            case 14: x[i] = 'E'; break;
            case 15: x[i] = 'F'; break;
            default: x[i] = (char)choice + '0';
            }
            N = (N / 16).trunk(0);
        }
        x[i] = '\0'; //NULL TERMINATOR
        str_rev(x);
        return x;
    }
    /// NUM OUT-LINE /// CONVERT AN INTEGER DECIMAL NUMBER STRING TO UNSIGNED 128-BIT INTEGER (TWO I64 ARRAY), CODE: I64* N; N = I128int("340282366920938463463374607431768211455"); print(N[0], " "); print(N[1], "\n"); //18446744073709551615 18446744073709551615
    I64* I128int(const char* n) { //
        return I128intx(I128str_hex(n));
    }
    /// NUM OUT-LINE /// CONVERT AN INTEGER HEXADECIMAL NUMBER STRING TO A UNSIGNED 128-BIT INTEGER (TWO I64 ARRAY), CODE: const char* a = "BF6FFBF8AFF58EF7A8975A6F3FDFC9FF"; I64 *res = I128intx(a); print(res[0], " "); print(res[1], "\n"); //13794521229181685495 12148277953714702847 (TWO I64 DECs) => 254464002734067856387301770389295712767
    I64* I128intx(const char* nx) { //
        i64 j, i;
        static I64 N[2]; N[0] = N[1] = 0; //RESET TO ZERO
        i64 n_L = (i64)strlen(nx);
        if (n_L > 32) { raise("128-BIT OVERFLOW => I128intx", nx); return N; }
        if (n_L > 16) {
            j = 0; //(HIGH 64-BIT) 21FEDCBA987654321 HEXADECIMAL => 39194207061056766753 DECIMAL
            for (i = 0; i < n_L - 16; i++) {
                N[j] *= 16;
                switch (nx[i]) {
                case 'A': case 'a': N[j] += 10; break; case 'B': case 'b': N[j] += 11; break;
                case 'C': case 'c': N[j] += 12; break; case 'D': case 'd': N[j] += 13; break;
                case 'E': case 'e': N[j] += 14; break; case 'F': case 'f': N[j] += 15; break;
                default: N[j] += nx[i] - '0'; //DIGIT TO VALUE
                }
            }
            j = 1; //(LOW 64-BIT)
            for (i = 1; i < n_L; i++) {
                N[j] *= 16;
                switch (nx[i]) {
                case 'A': case 'a': N[j] += 10; break; case 'B': case 'b': N[j] += 11; break;
                case 'C': case 'c': N[j] += 12; break; case 'D': case 'd': N[j] += 13; break;
                case 'E': case 'e': N[j] += 14; break; case 'F': case 'f': N[j] += 15; break;
                default: N[j] += nx[i] - '0'; //DIGIT TO VALUE
                }
            }
        }
        else {
            for (i = 0; i < n_L; i++) { //(LOW 64-BIT) 1FEDCBA987654321 HEXADECIMAL => 2300718913637663521 DECIMAL
                j = 1;
                N[j] *= 16;
                switch (nx[i]) {
                case 'A': case 'a': N[j] += 10; break; case 'B': case 'b': N[j] += 11; break;
                case 'C': case 'c': N[j] += 12; break; case 'D': case 'd': N[j] += 13; break;
                case 'E': case 'e': N[j] += 14; break; case 'F': case 'f': N[j] += 15; break;
                default: N[j] += nx[i] - '0'; //DIGIT TO VALUE
                }
            }
        }
        return N;
    }
    /// NUM OUT-LINE /// NEED: free(res) CONVERT AN INTEGER HEXADECIMAL NUMBER STRING TO DECIMAL INTEGER NUMBER STRING, CODE: const char* a = "BF6FFBF8AFF58EF7A8975A6F3FDFC9FF"; char *res = I128str_dec(a); print(res, "\n"); free(res); //254464002734067856387301770389295712767 (DEC)
    char* I128str_dec(const char* nx) { //
        I64* R;                        //POINTER
        I64 H, L;                     //HIGH 64-BIT, LOW 64-BIT
        i64 n_L = (i64)strlen(nx);   //INTEGER HEXADECIMAL NUMBER STRING LENGTH
        if (n_L > 32) return NULL;  //MAX LENGTH 32 CHARACTERs
        R = I128intx(nx);
        H = R[0]; L = R[1];
        char* res = mulis(I64str(H), "18446744073709551616");
        char* sum = addis(res, I64str(L)); free(res);
        return sum;
    }
    /// NUM OUT-LINE /// CONVERT TWO I64 (128-BIT) TO INTEGER DECIMAL NUMBER STRING -NEED: free(), CODE: I64 N[2] = { 0x1FEDCBA987654321, 0xFF54FF54FF54FF54 }; char *DEC_ram = I128str(N); print(DEC_ram, "\n"); free(DEC_ram); //42440772985417047267107040741031214932 (DEC)
    char* I128str(I64 n[]) { //
        I64 H, L;           //HIGH 64-BIT, LOW 64-BIT
        H = n[0]; L = n[1];
        char* PRO = mulis(I64str(H), "18446744073709551616");
        char* RES = addis(PRO, I64str(L)); free(PRO);
        return RES;
    }
    /// NUM OUT-LINE /// ABSOLUTE 128-BIT ADDITION (UNSIGNED), CODE: I64 a[2] = { 0x0000000000000001, 0x0000000000000000 }; I64 b[2] = { 0x0000000000000001, 0x0000000000000000 }; I64* sum = I128add(a, b); NUM K = "18446744073709551616.0", n = K * K * I64NUM(sum[0]); n += K * I64NUM(sum[1]); n += I64NUM(sum[2]); print(n, "\n"); //36893488147419103232.0 (DEC)
    I64* I128add(I64 a[], I64 b[]) {
        static I64 sum[3];
        I64 C = 0; //CARRY
        I64 LOW = a[1] + b[1];
        if (LOW < a[1] || LOW < b[1]) C = 1;   //CARRY SET TO 1
        I64 HIG = a[0] + b[0] + C;
        if (HIG < a[0] || HIG < b[0]) C = 1; //CARRY SET TO 1
        else C = 0;
        sum[0] = C ? 1 : 0;
        sum[1] = HIG;
        sum[2] = LOW;
        return sum;
    }
    /// NUM OUT-LINE /// ABSOLUTE 128-BIT DECIMAL STRING ADDITION (UNSIGNED), CODE: const char* a = "15", * b = "1"; print(I128addis(a, b), "\n"); //16.0
    NUM& I128addis(const char* a, const char* b) {
        static char X[40]; //MAX. RANGE => 129-BIT (680564733841876926926749214863536422910 => 1FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE)
        X[0] = '\0';
        static NUM n;
        I64 A[2], B[2];
        I64* Ap, * Bp;
        Ap = I128int(a); A[0] = Ap[0]; A[1] = Ap[1];
        Bp = I128int(b); B[0] = Bp[0]; B[1] = Bp[1];
        I64* sum = I128add(A, B);
        strcat(X, I64HEX(sum[0]));
        char* txt = I64HEX(sum[1]);
        i64 L = 16 - (i64)strlen(txt);
        char* pad = strpads0(L);
        strcat(X, pad); free(pad); strcat(X, txt);
        txt = I64HEX(sum[2]);
        L = 16 - (i64)strlen(txt);
        pad = strpads0(L);
        strcat(X, pad); free(pad); strcat(X, txt);
        n = hex2dec(X);
        return n;
    }
    /// NUM OUT-LINE /// CONVERT I64 TO HEXADECIMAL NUMBER STRING, CODE: I64 a = 18446744073709551615LLU; print(I64HEX(a), "\n"); //FFFFFFFFFFFFFFFF
    char* I64HEX(I64 N) {
        static char n[64];
        I64 R = N;
        I64 i = 0;
        do {
            R %= 16;
            switch (R) {
            case 0:  n[i] = '0'; break; case 1:  n[i] = '1'; break;
            case 2:  n[i] = '2'; break; case 3:  n[i] = '3'; break;
            case 4:  n[i] = '4'; break; case 5:  n[i] = '5'; break;
            case 6:  n[i] = '6'; break; case 7:  n[i] = '7'; break;
            case 8:  n[i] = '8'; break; case 9:  n[i] = '9'; break;
            case 10: n[i] = 'A'; break; case 11: n[i] = 'B'; break;
            case 12: n[i] = 'C'; break; case 13: n[i] = 'D'; break;
            case 14: n[i] = 'E'; break; case 15: n[i] = 'F'; break;
            }
            i++;
        } while ((R = (N /= 16)));
        n[i] = '\0';
        str_rev(n);
        return n;
    }
    /// NUM OUT-LINE /// CONVERT I64 TO NUM, CODE: I64 n = 18446744073709551615LLU; print(I64NUM(n) + 1, "\n"); //18446744073709551616.0
    NUM& I64NUM(I64 n) {
        static NUM N;
        char s[32];
        strcpy(s, I64str(n)); strcat(s, ".0");
        N = s;
        return N;
    }
    /// NUM OUT-LINE /// CONVERT i64 TO NUM, CODE: i64 n = -9223372036854775807; print(i64NUM(n) + (-1), "\n"); //-9223372036854775808.0
    NUM& i64NUM(i64 n) {
        static NUM N;
        char s[32];
        strcpy(s, i64str(n)); strcat(s, ".0");
        N = s;
        return N;
    }
    /// NUM OUT-LINE /// PERFORMANCE RATE ON TIME OR INDEX BASE, CODE: NUM x(1035), y(1035); perf(x, y).print("\n"); //0.0
    NUM& perf(NUM v_init, NUM v_end, i64 time) { //DEFAULT PROTOTYPE: (const char* s, i64 time = 1)
        static NUM R, T;
        if (time) {
            T = v_init;
            NUM D(T / v_end);
            if (D >= 1) {
                if (D >= 2) return R = D;                                           //10s 5s => 2.0 (TIMES FASTER)
                T = v_init; return R = (T - v_end) / v_init * 200;
            }               //10s 6s => 80.0 (% TIME FASTER)
            if (D > "0.5") { T = v_init; return R = (v_init - v_end) / T * 100; } //10s 12s => -20.0 (% TIME SLOWER)
            return R = -v_end / v_init;                                          //10s 20s => -2.0 (TIMES SLOWER)
        }
        if (v_init < (i64)0)
            return R = -(v_end - v_init) / v_init * 100; //100 130 => 30.0%  100 90 => -10.0%
        return R = (v_end - v_init) / v_init * 100;     //100 130 => 30.0%  100 90 => -10.0%
    }
    /// NUM OUT-LINE /// FACTORIAL COMPUTATION, CODE: fact(5).print("\n"); //120
    NUM& fact(i64 n) {
        static NUM N;
        char* P = FACT(n);
        N = P;
        free(P);
        return N;
    }
    /// NUM OUT-LINE /// RETURN FACTORIAL DIGIT COUNT, CODE: print(fact_digits(1000), " => DIGITS\n"); //2568 => DIGITS
    i64 fact_digits(i64 n) {
        if (n < 0)  return 0; //FACTORIAL EXISTS ONLY IF n >= 0
        if (n <= 1) return 1; //BASE CASE
        double DIGITS = 0;
        for (i64 i = 2; i <= n; i++) DIGITS += log10(i); //COMPUTING FACTORIAL DIGIT COUNT
        return (i64)floor(DIGITS) + 1;
    }
    /// NUM OUT-LINE /// NEED: free(res) FACTORIAL COMPUTATION FOR LARGE NUMBER (UP 1e4 DIGITS, RETURN i64 DIGIT ARRAY), CODE: int N = 100; char* res = FACT(N); print(res); print("\nsize="); print((int)strlen(res), "\n"); free(res); //9332621544394415... (size = 158)
    char* FACT(i64 N) {
        //static int carry, product, i, j, size, DIM; DIM = fact_digits(N);
        i64 carry, product, i, j, size, DIM(fact_digits(N));
        char* res = NULL;
        if (N < 0) { raise("IMPOSSIBLE OPERATION => FACT", i64str(N)); return res; } //-N!
        res = (char*)malloc((DIM + 3) * sizeof(char)); //NULL, ".0" //RAM DYNAMIC ALLOCATION
        if (!res) raise_exit("OUT OF RAM MEMORY => FACT", I64str(N));
        res[DIM--] = '\0'; //NULL STRING TERMINATOR
        res[0] = 1;
        size = 1;
        for (i = 2; i <= N; i++) {
            carry = 0, product = 1;
            for (j = 0; j < size; j++) { product = res[j] * i + carry; res[j] = product % 10; carry = product / 10; }
            while (carry) { res[size] = carry % 10; carry = carry / 10; size++; }
        }
        while (DIM >= 0) { res[DIM] += '0'; DIM--; } //TO STRING
        str_rev(res);                               //REVERSE RESULT
        strcat(res, ".0");                         //NUM STRING FORMAT
        return res;
    }
    /// NUM OUT-LINE /// UNSIGNED INTEGER SUPER POWER, CODE: char *R = pwri(2, 128);  printf("%s\n", R); free(R); //340282366920938463463374607431768211456
    char* pwri(I64 b, I64 e) {
        /**
        *   \brief  INTEGER POWER FOR LARGE NUMBERS (BASE AND EXPONENT ONLY POSITIVE)
        *   \param  b 32-BIT UNSIGNED INTEGER
        *   \param  e 32-BIT UNSIGNED INTEGER
        *   \return s STRING INTEGER
        *   \code
        *   RUN-TIME ERROR CHECK: YES
        *   NEED: free()
        *   CALL: I64str i64str raise raise_exit
        *   TIME: [...]
        *   LIMIT: RAM MEMORY
        *
        *   EXAMPLES:
        *
        *       char *R = pwri(2, 128);  print(R, "\n"); free(R);   //340282366920938463463374607431768211456
        *       char *R = pwri(5, 0);    print(R, "\n"); free(R);  //1
        *       char *R = pwri(0, 0);    print(R, "\n"); free(R); //IMPOSSIBLE OPERATION
        *
        *   \endcode
        */
        if (!b && !e) { raise("IMPOSSIBLE OPERATION => pwri", i64str(b)); return NULL; } //0^0
        I64 SIZE = 0, T = b;
        I64 C = 0, P, j;
        i64 i = (i64)strlen(I64str(b)) * e * sizeof(char);
        char* s = (char*)malloc(i + 4); //1 => NULL (".0" SUFFIX FOR EXTERN) //RAM DYNAMIC ALLOCATION
        if (!s) raise_exit("OUT OF RAM MEMORY => pwri", I64str(b));
        if (!e) { strcpy(s, "1"); return s; } //b^0 = 1
        I64* R = (I64*)malloc(i * sizeof(I64)); //RAM DYNAMIC ALLOCATION
        if (!R) raise_exit("OUT OF RAM MEMORY => pwri", I64str(b));
        while (T) { R[SIZE++] = T % 10; T /= 10; }
        for (i = 2; i <= (i64)e; i++) {
            for (j = 0; j < SIZE; j++) { P = R[j] * b + C; R[j] = P % 10; C = P / 10; }
            while (C) { R[SIZE] = C % 10; C /= 10; SIZE++; }
        }
        I64 idx = 0;
        for (i = SIZE - 1; i >= 0; i--, idx++) s[idx] = (char)R[i] + '0';
        s[idx] = '\0';
        free(R);
        return s;
    }
    /// NUM OUT-LINE /// (DEBUG) RETURN NUM STRUCTURE ATTRIBUTES STRING, CODE: NUM a("-123.0e-3"); char* s = sprint_fields(a); print(s, "\n"); //S=1 CE=123.0e-3 C=123.0 E=-3 len_I=3 len_F=1
    char* sprint_fields(NUM& a) {
        static char buffer[128];
        sprintf(buffer, "S=%lld CE=%s C=%s E=%lld len_I=%lld len_F=%lld", (long long int)a.S, a.CE, a.C, (long long int)a.E, (long long int)a.len_I, (long long int)a.len_F);
        buffer[127] = '\0'; //STRING TERMINATOR CONSTRAINT
        return buffer;
    }
    /// NUM OUT-LINE /// PRINT NUM FIELDS, CODE: NUM a("-123.0e-3"); print_fields(a); //S=1 CE=123.0e-3 C=123.0 E=-3 len_I=3 len_F=1
    int print_fields(NUM& a) {
        string tot = string("S=") + i64str(a.S) + string(" CE=") + a.CE + string(" C=") + a.C;
        tot += string(" E=") + i64str(a.E);
        tot += string(" len_I=") + i64str(a.len_I);
        tot += string(" len_F=") + i64str(a.len_F);
        return print(tot.c_str(), "\n");
    }
    /// NUM OUT-LINE /// PRINT NUM EXPONENTIAL FORMAT (SIGNED), CODE: NUM a("-123.0e-3"); print_exp(a, "\n"); //-123.0e-3
    int print_exp(NUM a, const char* postfix) { //DEFAULT ARGs: (postfix = "")
        return printf("%s", (string(a.S ? "-" : "") + a.CE + postfix).c_str());
    }
    /// NUM OUT-LINE /// PRINT NUM STANDARD FORMAT, CODE: NUM a("5.0"); print(a, "\n"); //5
    int print(NUM& a, const char* postfix, int SIGN) { // DEFAULT ARGs: (NUM &, const char* postfix = "", int SIGN = 0)
        return a.print(postfix, SIGN);
    }
    /// NUM OUT-LINE /// PRINT STRING , CODE: NUM a("5.0"); print("a = ", a, "\n"); //5
    int print(const char* prefix, NUM& a, const char* postfix, int SIGN) { //DEFAULT ARGs: postfix = ""
        printf("%s", prefix);
        a.print("", SIGN);
        return printf("%s", postfix);
    }
    /// NUM OUT-LINE /// PRINT STRING , CODE: CODE: print(3, "\n"); //3
    int print(int a, const char* postfix) { //DEFAULT ARGs: postfix = ""
        return printf("%d%s", a, postfix);
    }
    /// NUM OUT-LINE /// PRINT I32 AND POSTFIX STRING, CODE: print(4294967295LLU, "\n"); //4294967295
    int print(I32 a, const char* postfix) { //DEFAULT ARGs: (postfix = "");
        return printf("%u%s", a, postfix);
    }
    /// NUM OUT-LINE /// PRINT I64 AND POSTFIX, CODE: print(18446744073709551615LLU, "\n"); //18446744073709551615.0
    int print(i64 a, const char* postfix) { //DEFAULT ARGs: (postfix = "");
        return printf("%lld%s", (signed long long)a, postfix);
    }
    /// NUM OUT-LINE /// PRINT I64 AND POSTFIX, CODE: print(18446744073709551615LLU, "\n"); //18446744073709551615.0
    int print(I64 a, const char* postfix) { //DEFAULT ARGs: (postfix = "");
        return printf("%llu%s", (unsigned long long)a, postfix);
    }
    /// NUM OUT-LINE /// PRINT STRING , CODE: print("----------------------\n"); //----------------------
    int print(const char* prefix, const char* inter, const char* postfix) { //DEFAULT ARGs: inter = "", postfix = ""
        return printf("%s%s%s", prefix, inter, postfix);
    }
    /// NUM OUT-LINE /// PRINT STRING , CODE: print("----------------------\n"); //----------------------
    int print(string prefix, const char* inter, const char* postfix) { //DEFAULT ARGs: inter = "", postfix = ""
        return printf("%s%s%s", prefix.c_str(), inter, postfix);
    }
    /// NUM OUT-LINE /// STANDARD ROUND OF THE OBJECT (LOSS PRECISION), CODE: NUM a("-000123.35645678900"); print(round(a), "\n"); //-123.36
    NUM& round(NUM& a, i64 d) { //DEFAULT ARGs: (NUM&, i64 d = 2)
        return a.round(d);
    }
    /// NUM OUT-LINE /// STANDARD ROUND OF THE OBJECT (LOSS PRECISION), CODE: print(round("-000123.35645678900"), "\n"); //-123.36
    NUM& round(const char* A, i64 d) { //DEFAULT ARGs: (NUM&, i64 d = 2)
        NUM a(A);
        return a.round(d);
    }
    /// NUM OUT-LINE /// STANDARD ROUND OF THE OBJECT (LOSS PRECISION), CODE: print(round(string("-000123.35645678900")), "\n"); //-123.36
    NUM& round(string A, i64 d) { //DEFAULT ARGs: (NUM&, i64 d = 2)
        NUM a(A);
        return a.round(d);
    }
    /// NUM OUT-LINE /// STANDARD ROUND OF THE OBJECT (LOSS PRECISION), CODE: print(round(45, -1), "\n"); //50
    NUM& round(i64 A, i64 d) { //DEFAULT ARGs: (NUM&, i64 d = -1)
        NUM a(A);
        return a.round(d);
    }
    /// NUM OUT-LINE /// BANK ROUND OF THE OBJECT DECIMAL DIGITS TO THE SPECIFIED NUMBER (LOSS PRECISION), CODE: NUM a("-000123.345645678900"); print(round_bank(a), "\n"); //-123.34
    NUM& round_bank(NUM& a, i64 d) { //DEFAULT ARGs: (NUM&, i64 d = 2)
        return a.round_bank(d);
    }
    /// NUM OUT-LINE /// BANK ROUND OF THE OBJECT DECIMAL DIGITS TO THE SPECIFIED NUMBER (LOSS PRECISION), CODE: print(round_bank("-000123.345645678900"), "\n"); //-123.34
    NUM& round_bank(const char* A, i64 d) { //DEFAULT ARGs: (NUM&, i64 d = 2)
        NUM a(A);
        return a.round_bank(d);
    }
    /// NUM OUT-LINE /// BANK ROUND OF THE OBJECT DECIMAL DIGITS TO THE SPECIFIED NUMBER (LOSS PRECISION), CODE: print(round_bank(string("-000123.345645678900")), "\n"); //-123.34
    NUM& round_bank(string A, i64 d) { //DEFAULT ARGs: (NUM&, i64 d = 2)
        NUM a(A);
        return a.round_bank(d);
    }
    /// NUM OUT-LINE /// BANK ROUND OF THE OBJECT DECIMAL DIGITS TO THE SPECIFIED NUMBER (LOSS PRECISION), CODE: print(round_bank(-25), "\n"); //-20
    NUM& round_bank(i64 A, i64 d) { //DEFAULT ARGs: (NUM&, i64 d = -1)
        NUM a(A);
        return a.round_bank(d);
    }
    /// NUM OUT-LINE /// ROUND FLOOR OF THE OBJECT TO THE SPECIFIED DIGIT NUMBER (LOSS PRECISION), CODE: NUM a("-000123.355645678900"); print(round_floor(a), "\n"); //-123.0
    NUM& round_floor(NUM& a, i64 decs) { ///DEFAULT ARGs: (NUM&, i64 decs = 0)
        return a.trunk(decs);
    }
    /// NUM OUT-LINE /// ROUND FLOOR OF THE OBJECT TO THE SPECIFIED DIGIT NUMBER (LOSS PRECISION), CODE: print(round_floor("-000123.355645678900"), "\n"); //-123.0
    NUM& round_floor(const char* A, i64 decs) { //DEFAULT ARGs: (const char*, i64 decs = 0)
        NUM a(A);
        return a.trunk(decs);
    }
    /// NUM OUT-LINE /// ROUND FLOOR OF THE OBJECT TO THE SPECIFIED DIGIT NUMBER (LOSS PRECISION), CODE: print(round_floor(string("-000123.355645678900")), "\n"); //-123.0
    NUM& round_floor(string A, i64 decs) { ///DEFAULT ARGs: (string, i64 decs = 0)
        NUM a(A);
        return a.trunk(decs);
    }
    /// NUM OUT-LINE /// ROUND FLOOR OF THE OBJECT TO THE SPECIFIED DIGIT NUMBER (LOSS PRECISION), CODE: print(round_floor(-123, -1), "\n"); //-120.0
    NUM& round_floor(i64 A, i64 decs) { ///DEFAULT ARGs: (i64, i64 decs = 0)
        NUM a(A);
        return a.trunk(decs);
    }
    /// NUM OUT-LINE /// ROUND  CEIL OF THE OBJECT TO THE SPECIFIED DIGIT NUMBER (LOSS PRECISION), CODE: NUM a("-0000123.355645678900"); print(round_ceil(a), "\n"); //-124.0
    NUM& round_ceil(NUM& a, i64 decs) { //DEFAULT ARGs: (NUM&, i64 decs = 0)
        return a.round_ceil(decs);
    }
    /// NUM OUT-LINE /// ROUND FLOOR OF THE OBJECT TO THE SPECIFIED DIGIT NUMBER (LOSS PRECISION), CODE: print(round_ceil("-000123.355645678900"), "\n"); //-124.0
    NUM& round_ceil(const char* A, i64 decs) { //DEFAULT ARGs: (const char*, i64 decs = 0)
        NUM a(A);
        return a.round_ceil(decs);
    }
    /// NUM OUT-LINE /// ROUND FLOOR OF THE OBJECT TO THE SPECIFIED DIGIT NUMBER (LOSS PRECISION), CODE: print(round_ceil(string("-000123.355645678900")), "\n"); //-124.0
    NUM& round_ceil(string A, i64 decs) { //DEFAULT ARGs: (string, i64 decs = 0)
        NUM a(A);
        return a.round_ceil(decs);
    }
    /// NUM OUT-LINE /// ROUND FLOOR OF THE OBJECT TO THE SPECIFIED DIGIT NUMBER (LOSS PRECISION), CODE: print(round_ceil(-123, -1), "\n"); //-130.0
    NUM& round_ceil(i64 A, i64 decs) { //DEFAULT ARGs: (i64, i64 decs = 0)
        NUM a(A);
        return a.round_ceil(decs);
    }
    /// NUM OUT-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("3.2"); inc(a, 1); a.print("\n"); //4.2
    NUM& inc(NUM& a, i64 B) { //DEFAULT ARGs: (i64 B = 1)
        NUM b(B);
        return a += b;
    }
    /// NUM OUT-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("3.2"), b("1.0"); inc(a, b); a.print(" "); b.print("\n"); //4.2 1.0
    NUM& inc(NUM& a, NUM& b) {
        return a += b;
    }
    /// NUM OUT-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("3.2"); inc(a, "1.0"); a.print("\n"); //4.2
    NUM& inc(NUM& a, const char* B) {
        NUM b(B);
        return a += b;
    }
    /// NUM OUT-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("3.2"); inc(a, string("1.0")); a.print("\n"); //4.2
    NUM& inc(NUM& a, string B) {
        NUM b(B);
        return a += b;
    }
    /// NUM OUT-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("3.2"); dec(a, 1); a.print("\n"); //2.2
    NUM& dec(NUM& a, i64 B) { //DEFAULT ARGs: (i64 B = 1)
        NUM b(B);
        return a -= b;
    }
    /// NUM OUT-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("3.2"), b("1.0"); dec(a, b); a.print(" "); b.print("\n"); //2.2 1.0
    NUM& dec(NUM& a, NUM& b) {
        return a -= b;
    }
    /// NUM OUT-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("3.2"); dec(a, "1.0"); a.print("\n"); //2.2
    NUM& dec(NUM& a, const char* B) {
        NUM b(B);
        return a -= b;
    }
    /// NUM OUT-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("3.2"); dec(a, string("1.0")); a.print("\n"); //2.2
    NUM& dec(NUM& a, string B) {
        NUM b(B);
        return a -= b;
    }
    /// NUM OUT-LINE /// RETURN CLEARED OBJECT TO ZERO VALUE, CODE: NUM a("-5.3"); clear(a); a.print("\n"); //0.0
    NUM& clear(NUM& a) {
        return a = 0;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ARRAY SUM, CODE: NUM cart[3] ; cart[0] = "19.32"; cart[1] = "18.37"; cart[2] = "-15.13" ; i64 elements = 3; sum(cart, elements).print("\n"); //22.56 
    NUM& sum(NUM* cart, I64 elements) {
        static NUM total;
        total = 0; //INITIALIZATION TO ZERO
        for (I64 i = 0; i < elements; i++) total += cart[i];
        return total;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ARRAY MEAN, CODE: NUM cart[3] ; cart[0] = "19.32"; cart[1] = "18.37"; cart[2] = "-15.13" ; i64 elements = 3; mean(cart, elements).round().print("\n"); //7.52
    NUM& mean(NUM* cart, I64 elements) {
        static NUM mean;
        mean = 0; //INITIALIZATION TO ZERO
        for (I64 i = 0; i < elements; i++) mean += cart[i];
        mean /= (i64)elements;
        return mean;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ARRAY MIN, CODE: NUM cart[3] ; cart[0] = "19.32"; cart[1] = "18.37"; cart[2] = "-15.13" ; i64 elements = 3; min(cart, elements).print("\n"); //-15.13
    NUM& min(NUM* cart, I64 elements) {
        static NUM min;
        min = 0;        //INITIALIZATION TO ZERO
        min = cart[0]; //READ FIRST ARRAY ELEMENT
        for (I64 i = 0; i < elements - 1; i++) min = (min <= cart[i + 1] ? min : cart[i + 1]);
        return min;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ARRAY MAX, CODE: NUM cart[3] ; cart[0] = "19.32"; cart[1] = "18.37"; cart[2] = "-15.13" ; i64 elements = 3; max(cart, elements).print("\n"); //19.32
    NUM& max(NUM* cart, I64 elements) {
        static NUM max;
        max = 0;        //INITIALIZATION TO ZERO
        max = cart[0]; //READ FIRST ARRAY ELEMENT
        for (I64 i = 0; i < elements - 1; i++) max = (max >= cart[i + 1] ? max : cart[i + 1]);
        return max;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: ARRAY MIN AND MAX, CODE: NUM cart[3] ; cart[0] = "19.32"; cart[1] = "18.37"; cart[2] = "-15.13" ; i64 elements = 3; NUM* result = minmax(cart, elements); result[0].print("\n"); result[1].print("\n"); //-15.13 19.32
    NUM* minmax(NUM* cart, I64 elements) {
        static NUM min, max;
        static NUM A[2];
        min = 0; max = 0;              //INITIALIZATION TO ZERO
        min = cart[0]; max = cart[0]; //READ FIRST ARRAY ELEMENT
        for (I64 i = 0; i < elements - 1; i++) { min = (min <= cart[i + 1] ? min : cart[i + 1]); max = (max >= cart[i + 1] ? max : cart[i + 1]); }
        A[0] = min; A[1] = max;
        return A;
    }
    /// NUM OUT-LINE /// CONVERT double TO STRING, CODE: NUM a(from_double(3.141592654000001)); a.print("\n"); //3.141592654000001
    char* from_double(double d) {
        static char s[64];
        sprintf(s, "%.16f", d);
        return s;
    }
    /// NUM OUT-LINE /// GAUSS SUM, CODE: NUM a(3); sumG(a).print("\n"); //6.0 = 3 + 2 + 1 + 0
    NUM& sumG(NUM& n) {
        //static NUM G;
        return (n * (n + 1)) / 2;
    }
    /// NUM OUT-LINE /// CONVERT HEXADECIMAL NUMBER STRING TO DECIMAL NUM: CODE: NUM d = hex2dec("FFFF"); print(d, "\n"); //65535.0
    NUM& hex2dec(const char* nx) {
        static NUM N; N = 0;
        i64 nx_L = (i64)strlen(nx);
        char* n = (char*)malloc((nx_L + 1) * sizeof(char)); //1 => NULL //RAM DYNAMIC ALLOCATION
        if (!n) raise_exit("OUT OF RAM MEMORY => hex2dec", nx);
        strcpy(n, nx);
        if (n[0] == '0') { stripi0(n); nx_L = (i64)strlen(n); } //CLEAR ZEROs
        for (i64 i = 0; i < nx_L; i++) {
            N *= 16; //LEFT SHIFT
            switch (n[i]) {
            case 'A': case 'a': N += 10; break; case 'B': case 'b': N += 11; break;
            case 'C': case 'c': N += 12; break; case 'D': case 'd': N += 13; break;
            case 'E': case 'e': N += 14; break; case 'F': case 'f': N += 15; break;
            default: N += n[i] - '0'; //DIGIT TO VALUE
            }
        }
        free(n);
        return N;
    }
    /// NUM OUT-LINE /// CONVERT BINARY NUMBERIC STRING TO DECIMAL NUM: CODE: NUM d = bin2dec("1111111111111111"); print(d, "\n"); //65535.0
    NUM& bin2dec(const char* nb) {
        static NUM N; N = 0;
        i64 nb_L = (i64)strlen(nb);
        for (i64 i = 0; i < nb_L; i++) { N *= 2; N += nb[i] - '0'; } //LEFT SHIFT AND DIGIT TO VALUE
        return N;
    }
    /// NUM OUT-LINE /// CONVERT DECIMAL NUMBER STRING TO HEXADECIMAL/BINARY STRING -NEED: free(), CODE: char* ram = dec2hex("65535"); print(ram, "\n"); free(ram); //FFFF
    char* dec2hex(const char* n, int bin) { //DEFAULT ARGs: (int bin = 0)
        return bits(n, bin);
    }
    /// NUM OUT-LINE /// CONVERT DECIMAL NUMBER STRING TO BINARY/HEXADECIMAL STRING -NEED: free(), CODE: char* ram = dec2bin("65535"); print(ram, "\n"); free(ram); //1111111111111111
    char* dec2bin(const char* n, int bin) { //DEFAULT ARGs: (int bin = 1)
        return bits(n, bin);
    }
    /// NUM OUT-LINE /// CONVERT HEXADECIMAL NUMBER STRING TO BINARY STRING -NEED: free(), CODE: char* ram = hex2bin("FFFF"); print(ram, "\n"); free(ram); //1111111111111111
    char* hex2bin(const char* nx) {
        i64 nx_L = (i64)strlen(nx);
        char* n = (char*)malloc((nx_L * 4 + 1) * sizeof(char)); //1 => NULL //RAM DYNAMIC ALLOCATION
        if (!n) raise_exit("OUT OF RAM MEMORY => hex2bin", nx);
        n[0] = '\0'; //ZERO LENGTH STRING => ""
        for (i64 i = 0; i < nx_L; i++) {
            switch (nx[i]) {
            case '0': strcat(n, "0000"); break; case '1': strcat(n, "0001"); break;
            case '2': strcat(n, "0010"); break; case '3': strcat(n, "0011"); break;
            case '4': strcat(n, "0100"); break; case '5': strcat(n, "0101"); break;
            case '6': strcat(n, "0110"); break; case '7': strcat(n, "0111"); break;
            case '8': strcat(n, "1000"); break; case '9': strcat(n, "1001"); break;
            case 'A': case 'a': strcat(n, "1010"); break; case 'B': case 'b': strcat(n, "1011"); break;
            case 'C': case 'c': strcat(n, "1100"); break; case 'D': case 'd': strcat(n, "1101"); break;
            case 'E': case 'e': strcat(n, "1110"); break; case 'F': case 'f': strcat(n, "1111"); break;
            }
        }
        if (n[0] == '0') stripi0(n); //CLEAR ZEROs
        return n;
    }
    /// NUM OUT-LINE /// CONVERT BINARY NUMBER STRING TO HEXADECIMAL ONE -NEED: free(), CODE: char* ram = bin2hex("1111111111111111"); print(ram, "\n"); free(ram); //FFFF
    char* bin2hex(const char* nb) {
        char nib[5];    //nibble => 4-bit + NULL
        nib[4] = '\0'; //NULL => ZERO LENGTH STRING ("")
        i64 nb_L = (i64)strlen(nb);
        char* n = (char*)malloc((nb_L + 4) * sizeof(char)); //1 => NULL AND PADDING ZEROs (MAX. 3) //RAM DYNAMIC ALLOCATION
        if (!n) raise_exit("OUT OF RAM MEMORY => bin2hex", nb);
        strcpy(n, nb);
        if (n[0] == '0') { stripi0(n); nb_L = (i64)strlen(n); } //CLEAR ZEROs AND MEASURE
        i64 R = nb_L % 4;
        i64 i = 0, j = 0;
        if (R) {
            switch (R) {
            case 1: nib[0] = '0'; nib[1] = '0'; nib[2] = '0';      nib[3] = n[i];     i++;    break;
            case 2: nib[0] = '0'; nib[1] = '0'; nib[2] = n[i];     nib[3] = n[i + 1]; i += 2; break;
            case 3: nib[0] = '0'; nib[1] = n[i]; nib[2] = n[i + 1]; nib[3] = n[i + 2]; i += 3; break;
            }
            for (;;) {
                if (!strcmp(nib, "0000")) { n[0] = '0'; break; }
                if (!strcmp(nib, "0001")) { n[0] = '1'; break; }
                if (!strcmp(nib, "0010")) { n[0] = '2'; break; }
                if (!strcmp(nib, "0011")) { n[0] = '3'; break; }
                if (!strcmp(nib, "0100")) { n[0] = '4'; break; }
                if (!strcmp(nib, "0101")) { n[0] = '5'; break; }
                if (!strcmp(nib, "0110")) { n[0] = '6'; break; }
                if (!strcmp(nib, "0111")) { n[0] = '7'; break; }
                if (!strcmp(nib, "1000")) { n[0] = '8'; break; }
                if (!strcmp(nib, "1001")) { n[0] = '9'; break; }
                if (!strcmp(nib, "1010")) { n[0] = 'A'; break; }
                if (!strcmp(nib, "1011")) { n[0] = 'B'; break; }
                if (!strcmp(nib, "1100")) { n[0] = 'C'; break; }
                if (!strcmp(nib, "1101")) { n[0] = 'D'; break; }
                if (!strcmp(nib, "1110")) { n[0] = 'E'; break; }
                if (!strcmp(nib, "1111")) { n[0] = 'F'; break; }
            }
            j = 1;
        }
        for (; i < nb_L; i += 4, j++) {
            nib[0] = n[i]; nib[1] = n[i + 1]; nib[2] = n[i + 2]; nib[3] = n[i + 3];
            if (!strcmp(nib, "0000")) { n[j] = '0'; continue; }
            if (!strcmp(nib, "0001")) { n[j] = '1'; continue; }
            if (!strcmp(nib, "0010")) { n[j] = '2'; continue; }
            if (!strcmp(nib, "0011")) { n[j] = '3'; continue; }
            if (!strcmp(nib, "0100")) { n[j] = '4'; continue; }
            if (!strcmp(nib, "0101")) { n[j] = '5'; continue; }
            if (!strcmp(nib, "0110")) { n[j] = '6'; continue; }
            if (!strcmp(nib, "0111")) { n[j] = '7'; continue; }
            if (!strcmp(nib, "1000")) { n[j] = '8'; continue; }
            if (!strcmp(nib, "1001")) { n[j] = '9'; continue; }
            if (!strcmp(nib, "1010")) { n[j] = 'A'; continue; }
            if (!strcmp(nib, "1011")) { n[j] = 'B'; continue; }
            if (!strcmp(nib, "1100")) { n[j] = 'C'; continue; }
            if (!strcmp(nib, "1101")) { n[j] = 'D'; continue; }
            if (!strcmp(nib, "1110")) { n[j] = 'E'; continue; }
            if (!strcmp(nib, "1111")) { n[j] = 'F'; continue; }
        }
        n[j] = '\0';
        return n;
    }
    /// NUM OUT-LINE /// RETURN OBJECT ADDRESS LIKE id(), CODE: NUM a(2 + 3); NUM* ap = address(a); print(*ap, "\n"); //5.0
    NUM* address(NUM& a) {
        return &a;
    }
    /// NUM OUT-LINE /// RETURN OBJECT ADDRESS LIKE address(), CODE: NUM a(2 + 3); NUM* ap = id(a); print(*ap, "\n"); //5.0
    NUM* id(NUM& a) {
        return &a;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: PERCENTAGE VALUE => CODE: NUM discount("10.00"), mac_air_M2_512K("1_648.98"); pct(discount, mac_air_M2_512K).round().print(" => DISCOUNT\n"); //164.9 => DISCOUNT
    NUM& pct(NUM& rate, NUM all = 1) { //DEFAULT ARGs: (NUM& rate, NUM all = 1)
        return all.shift(-2) * rate;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: PERCENTAGE VALUE => CODE: pct("10.00", "1_648.98").round().print(" => DISCOUNT\n"); //164.9 => DISCOUNT
    NUM& pct(const char* rate, const char* all) { //DEFAULT ARGs: (const char*, const char* all = "1.0")
        NUM A = all;
        return A.shift(-2) * rate;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: PERCENTAGE VALUE => CODE: pct(string("10.00"), string("1_648.98")).round().print(" => DISCOUNT\n"); //164.9 => DISCOUNT
    NUM& pct(string rate, string all) { //DEFAULT ARGs: (string, string all = "1.0")
        NUM A = all;
        return A.shift(-2) * rate;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: PERCENTAGE VALUE => CODE: pct(10, 10000).round().print("\n"); //1000
    NUM& pct(i64 rate, i64 all) { //DEFAULT ARGs: (i64, i64 all = 1)
        NUM A = all;
        return A.shift(-2) * rate;
    }
    /// NUM OUT-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: NUM pct(20), rate("2.0"); all(rate, pct).print("\n"); //1000.0
    NUM& all(NUM& rate, NUM& pct) {
        return pct.xe10(2) / rate;
    }
    /// NUM OUT-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: all("2.0", "20.0").print("\n"); //1000.0
    NUM& all(const char* RATE, const char* PCT) {
        NUM rate(RATE), pct(PCT);
        return pct.shift(2) / rate;
    }
    /// NUM OUT-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: all(string("2.0"), string("20.0")).print("\n"); //1000.0
    NUM& all(string RATE, string PCT) {
        NUM rate(RATE), pct(PCT);
        return pct.shift(2) / rate;
    }
    /// NUM OUT-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: all(2, 20).print("\n"); //1000.0
    NUM& all(i64 RATE, i64 PCT) {
        NUM rate(RATE), pct(PCT);
        return pct.shift(2) / rate;
    }
    /// NUM OUT-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: NUM pct(20), ALL("1_000.0"); rate(pct, ALL).print("\n"); //2.0
    NUM& rate(NUM& pct, NUM all = 1) { //DEFAULT ARGs: (NUM& pct, NUM all = 1)
        return pct.xe10(2) / all;
    }
    /// NUM OUT-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: rate("20.0", "1000.0").print("\n"); //2.0
    NUM& rate(const char* pct, const char* all) { //DEFAULT ARGs: (const char*, const char* all = "1.0")
        NUM PCT(pct);
        return PCT.shift(2) / all;
    }
    /// NUM OUT-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: rate(string("20.0"), string("1000.0")).print("\n"); //2.0
    NUM& rate(string pct, string all) { //DEFAULT ARGs: (string, string all = "1.0")
        NUM PCT(pct);
        return PCT.shift(2) / all;
    }
    /// NUM OUT-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: rate(20, 1000).print("\n"); //2.0
    NUM& rate(i64 pct, i64 all) { //DEFAULT ARGs: (i64, i64 all = 1)
        NUM PCT(pct);
        return PCT.shift(2) / all;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: PERTHOUSAND VALUE => CODE: NUM revenue("20_000.00"), rate("2.0"); pth(rate, revenue).print(" => church_fees\n"); //40.0 => church_fees
    NUM& pth(NUM& rate, NUM all = 1) { //DEFAULT ARGs: (NUM& rate, NUM all = 1)
        return all.pth(rate);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: PERTHOUSAND VALUE => CODE: pth("2.0", "20_000.00").print(" => church_fees\n"); //40.0 => church_fees
    NUM& pth(const char* rate, const char* all) { //DEFAULT ARGs: (const char*, const char* all = "1.0")
        NUM ALL(all);
        return ALL.pth(rate);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: PERTHOUSAND VALUE => CODE: pth(string("2.0"), string("20_000.00")).print(" => church_fees\n"); //40.0 => church_fees
    NUM& pth(string rate, string all) { //DEFAULT ARGs: (string, string all = "1.0")
        NUM ALL(all);
        return ALL.pth(rate);
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: PERTHOUSAND VALUE => CODE: pth(2, 20000).print(" => church_fees\n"); //40.0 => church_fees
    NUM& pth(i64 rate, i64 all) { //DEFAULT ARGs: (i64, i64 all = 1)
        NUM ALL(all);
        return ALL.pth(rate);
    }
    /// NUM OUT-LINE /// WITH THE ALL, RETURN THE RATE_TH OF SPECIFIED PERTHOUSAND, CODE: NUM pth(20), ALL("10_000.0"); rate_th(pth, ALL).print("\n"); //2.0
    NUM& rate_th(NUM& pth, NUM all = 1) { //DEFAULT ARGs: (NUM& pth, NUM all = 1)
        return pth.xe10(3) / all;
    }
    /// NUM OUT-LINE /// WITH THE ALL, RETURN THE RATE_TH OF SPECIFIED PERTHOUSAND, CODE: rate_th("20.0", "10_000.0").print("\n"); //2.0
    NUM& rate_th(const char* pth, const char* all) { //DEFAULT ARGs: (const char*, const char* all = "1.0")
        NUM PTH(pth);
        return PTH.shift(3) / all;
    }
    /// NUM OUT-LINE /// WITH THE ALL, RETURN THE RATE_TH OF SPECIFIED PERTHOUSAND, CODE: rate_th(string("20.0"), string("10_000.0")).print("\n"); //2.0
    NUM& rate_th(string pth, string all) { //DEFAULT ARGs: (string, string all = "1.0")
        NUM PTH(pth);
        return PTH.shift(3) / all;
    }
    /// NUM OUT-LINE /// WITH THE ALL, RETURN THE RATE_TH OF SPECIFIED PERTHOUSAND, CODE: rate_th(20, 10000).print("\n"); //2.0
    NUM& rate_th(i64 pth, i64 all) { //DEFAULT ARGs: (i64, i64 all = 1)
        NUM PTH(pth);
        return PTH.shift(3) / all;
    }
    /// NUM OUT-LINE /// WITH THE PERCENTAGE RETURN THE ALL_TH OF SPECIFIED RATE_TH, CODE: NUM pth(20), rate_th("2.0"); all_th(rate_th, pth).print("\n"); //10000.0
    NUM& all_th(NUM& rate_th, NUM& pth) {
        return pth.xe10(3) / rate_th;
    }
    /// NUM OUT-LINE /// WITH THE PERCENTAGE RETURN THE ALL_TH OF SPECIFIED RATE_TH, CODE: all_th("2.0", "20.0").print("\n"); //10000.0
    NUM& all_th(const char* RATE_TH, const char* PTH) {
        NUM rate_th(RATE_TH), pth(PTH);
        return pth.shift(3) / rate_th;
    }
    /// NUM OUT-LINE /// WITH THE PERCENTAGE RETURN THE ALL_TH OF SPECIFIED RATE_TH, CODE: all_th(string("2.0"), string("20.0")).print("\n"); //10000.0
    NUM& all_th(string RATE_TH, string PTH) {
        NUM rate_th(RATE_TH), pth(PTH);
        return pth.shift(3) / rate_th;
    }
    /// NUM OUT-LINE /// WITH THE PERCENTAGE RETURN THE ALL_TH OF SPECIFIED RATE_TH, CODE: all_th(2, 20).print("\n"); //10000.0
    NUM& all_th(i64 RATE_TH, i64 PTH) {
        NUM rate_th(RATE_TH), pth(PTH);
        return pth.shift(3) / rate_th;
    }
    /// NUM OUT-LINE /// MULTIPLY FOR TEN, CODE: NUM a(3); _10x(a).print("\n"); //30.0
    NUM& _10x(NUM& a) {
        return a.xe10(1);
    }
    /// NUM OUT-LINE /// MULTIPLY FOR TEN, CODE: NUM a(3); _10x("3.0").print("\n"); //30.0
    NUM& _10x(const char* A) {
        NUM a(A);
        return a.xe10(1);
    }
    /// NUM OUT-LINE /// MULTIPLY FOR TEN, CODE: NUM a(3); _10x(string("3.0")).print("\n"); //30.0
    NUM& _10x(string A) {
        NUM a(A);
        return a.xe10(1);
    }
    /// NUM OUT-LINE /// MULTIPLY FOR TEN, CODE: NUM a(3); _10x(3).print("\n"); //30.0
    NUM& _10x(i64 A) {
        NUM a(A);
        return a.xe10(1);
    }
    /// NUM OUT-LINE /// MULTIPLY FOR HUNDRED, CODE: NUM a(3); _100x(a).print("\n"); //300.0
    NUM& _100x(NUM& a) {
        return a.xe10(2);
    }
    /// NUM OUT-LINE /// MULTIPLY FOR HUNDRED, CODE: NUM a(3); _100x("3.0").print("\n"); //300.0
    NUM& _100x(const char* A) {
        NUM a(A);
        return a.xe10(2);
    }
    /// NUM OUT-LINE /// MULTIPLY FOR HUNDRED, CODE: NUM a(3); _100x(string("3.0")).print("\n"); //300.0
    NUM& _100x(string A) {
        NUM a(A);
        return a.xe10(2);
    }
    /// NUM OUT-LINE /// MULTIPLY FOR HUNDRED, CODE: NUM a(3); _100x(3).print("\n"); //300.0
    NUM& _100x(i64 A) {
        NUM a(A);
        return a.xe10(2);
    }
    /// NUM OUT-LINE /// MULTIPLY FOR THOUSAND, CODE: NUM a(3); _1000x(a).print("\n"); //3000.0
    NUM& _1000x(NUM& a) {
        return a.xe10(3);
    }
    /// NUM OUT-LINE /// MULTIPLY FOR THOUSAND, CODE: NUM a(3); _1000x("3.0").print("\n"); //3000.0
    NUM& _1000x(const char* A) {
        NUM a(A);
        return a.xe10(3);
    }
    /// NUM OUT-LINE /// MULTIPLY FOR THOUSAND, CODE: NUM a(3); _1000x(string("3.0")).print("\n"); //3000.0
    NUM& _1000x(string A) {
        NUM a(A);
        return a.xe10(3);
    }
    /// NUM OUT-LINE /// MULTIPLY FOR THOUSAND, CODE: NUM a(3); _1000x(3).print("\n"); //3000.0
    NUM& _1000x(i64 A) {
        NUM a(A);
        return a.xe10(3);
    }
    /// NUM OUT-LINE /// DIVIDE FOR TEN, CODE: NUM a(3); _10div(a).print("\n"); //0.3
    NUM& _10div(NUM& a) {
        return a.xe10(-1);
    }
    /// NUM OUT-LINE /// DIVIDE FOR TEN, CODE: NUM a(3); _10div("3.0").print("\n"); //0.3
    NUM& _10div(const char* A) {
        NUM a(A);
        return a.xe10(-1);
    }
    /// NUM OUT-LINE /// DIVIDE FOR TEN, CODE: NUM a(3); _10div(string("3.0")).print("\n"); //0.3
    NUM& _10div(string A) {
        NUM a(A);
        return a.xe10(-1);
    }
    /// NUM OUT-LINE /// DIVIDE FOR TEN, CODE: NUM a(3); _10div(3).print("\n"); //0.3
    NUM& _10div(i64 A) {
        NUM a(A);
        return a.xe10(-1);
    }
    /// NUM OUT-LINE /// DIVIDE FOR HUNDRED, CODE: NUM a(3); _100div(a).print("\n"); //0.03
    NUM& _100div(NUM& a) {
        return a.xe10(-2);
    }
    /// NUM OUT-LINE /// DIVIDE FOR HUNDRED, CODE: NUM a(3); _100div("3.0").print("\n"); //0.03
    NUM& _100div(const char* A) {
        NUM a(A);
        return a.xe10(-2);
    }
    /// NUM OUT-LINE /// DIVIDE FOR HUNDRED, CODE: NUM a(3); _100div(string("3.0")).print("\n"); //0.03
    NUM& _100div(string A) {
        NUM a(A);
        return a.xe10(-2);
    }
    /// NUM OUT-LINE /// DIVIDE FOR HUNDRED, CODE: NUM a(3); _100div(3).print("\n"); //0.03
    NUM& _100div(i64 A) {
        NUM a(A);
        return a.xe10(-2);
    }
    /// NUM OUT-LINE /// DIVIDE FOR THOUSAND, CODE: NUM a(3); _1000div(a).print("\n"); //0.003
    NUM& _1000div(NUM& a) {
        return a.xe10(-3);
    }
    /// NUM OUT-LINE /// DIVIDE FOR THOUSAND, CODE: NUM a(3); _1000div("3.0").print("\n"); //0.003
    NUM& _1000div(const char* A) {
        NUM a(A);
        return a.xe10(-3);
    }
    /// NUM OUT-LINE /// DIVIDE FOR THOUSAND, CODE: NUM a(3); _1000div(string("3.0")).print("\n"); //0.003
    NUM& _1000div(string A) {
        NUM a(A);
        return a.xe10(-3);
    }
    /// NUM OUT-LINE /// DIVIDE FOR THOUSAND, CODE: NUM a(3); _1000div(3).print("\n"); //0.003
    NUM& _1000div(i64 A) {
        NUM a(A);
        return a.xe10(-3);
    }
    /// NUM OUT-LINE /// RETURN OBJECT a COPIED ON b, CODE: NUM a("-3.14"), b("2.71"); print(b, " => "); copy(a, b); print(b, "\n"); //2.71 => -3.14
    NUM& copy(NUM& a, NUM& b) {
        return b = a;
    }
    /// NUM OUT-LINE /// RETURN WHAT NUMERIC FORMAT IS THE STRING (UNSIGNED), CODE: switch (is_strfmt_num("2.0e35")) { case 1: print("integer numeric", "\n"); break; case 0: print("not numeric", "\n"); break; case -2: print("floating numeric", "\n"); break; case -3: print("exponential numeric", "\n"); break; }
    int is_strfmt_num(const char* s) {
        if (is_strfmt_int(s))   return  1;
        if (is_strfmt_float(s)) return -2;
        if (is_strfmt_exp(s))   return -3;
        return 0;
    }
    /// NUM OUT-LINE /// NUMERIC STRING LIST FOR ARITHMETIC OPERATION TEST, CODE: test_num7() //...
    int test_num7() {
        const char* L[10] = {
            "1.0",
            "-103.0",
            "954165405446.0",
            "-456789357444877954666666689389357444877954666665744487795466666666893893574448779546666657444877954666666666893574448779546666666893893574448779546666657444877954666666666893574448779546666666666666689357444877954666666644444495486470.0",
            "0.0000000000000000000000000000000000000000000000000000000000000000000008935744876408935744876446387797795466666935744487795466666574448779546666665466666463877089357448767795466666935744487795466666574448779546666664463877954666695466666",
            "-893574489357444877954668938893574448779546666693574448779546666657444877954666666668935744487795466666487795466666.0",
            "8935744487795466666.65401",
            "-6577116546540.654981112370893574487644638779546666680893574487644638779546666695440456795132",
            "777549511321456795134440.0333",
            "-951089357448764089357448764463877954666664638089350893574487644638779546666674487644638779546666677954666666540.649821222230",
        };
        NUM SUM, DIF, PRO, QUO, Q, REM;
        for (i64 i = 0; i < 10; i++) {
            for (i64 j = 0; j < 10; j++) {
                SUM = add(L[i], L[j]);
                if (Error) {
                    print("\nFAILURE - THIS SYSTEM DOES NOT SUPPORT ARBITRARY PRECISION ARITHMETIC!\n");
                    exit(1);
                }

                if (add_check(L[i], L[j], SUM)) {
                    print(L[i], " + "); print(L[j], " = ");
                    SUM.print("\n");
                    print("\nFAILURE - THIS SYSTEM DOES NOT SUPPORT ARBITRARY PRECISION ARITHMETIC!\n");
                    exit(1);
                }
                else print("addition passed.\n");

                print("------------------------------\n");

                DIF = sub(L[i], L[j]);
                if (Error) {
                    print("\nFAILURE - THIS SYSTEM DOES NOT SUPPORT ARBITRARY PRECISION ARITHMETIC!\n");
                    exit(1);
                }

                if (sub_check(L[i], L[j], DIF)) {
                    print(L[i], " - "); print(L[j], " = ");
                    DIF.print("\n");
                    print("\nFAILURE - THIS SYSTEM DOES NOT SUPPORT ARBITRARY PRECISION ARITHMETIC!\n");
                    exit(1);
                }
                else print("subtraction passed.\n");
                print("------------------------------\n");

                PRO = mul(L[i], L[j]);
                if (Error) {
                    print("\nFAILURE - THIS SYSTEM DOES NOT SUPPORT ARBITRARY PRECISION ARITHMETIC!\n");
                    exit(1);
                }

                if (mul_check(L[i], L[j], PRO)) {
                    print(L[i], " * "); print(L[j], " = ");
                    PRO.print("\n");
                    print("\nFAILURE - THIS SYSTEM DOES NOT SUPPORT ARBITRARY PRECISION ARITHMETIC!\n");
                    exit(1);
                }
                else print("multiplication passed.\n");
                print("------------------------------\n");

                QUO = div(L[i], L[j]).round_floor();
                if (Error) {
                    print("\nFAILURE - THIS SYSTEM DOES NOT SUPPORT ARBITRARY PRECISION ARITHMETIC!\n");
                    exit(1);
                }

                REM = L[i] - QUO * L[j];
                if (div_check(L[i], L[j], REM)) {
                    print(L[i], " % "); print(L[j], " = ");
                    QUO.print("\n");
                    print("\nFAILURE - THIS SYSTEM DOES NOT SUPPORT ARBITRARY PRECISION ARITHMETIC!\n");
                    exit(1);
                }
                else print("division passed.\n");
                print("------------------------------\n");

                print(L[i], " / "); print(L[j], " = ");
                div(L[i], L[j]).print("\n");
                print("------------------------------\n");


                print(L[j], " inv "); print(" = ");
                inv(L[j]).print("\n");
                print("------------------------------\n");

                print(L[j], " x2 "); print(" = ");
                x2(L[j]).print("\n");
                print("------------------------------\n");

                print(L[j], " x3 "); print(" = ");
                x3(L[j]).print("\n");
                print("------------------------------\n");

                print(L[j], " ^ 8.0"); print(" = ");
                xy(L[j], "8.0").print("\n");
                print("------------------------------\n");
                print("------------------------------\n");
            }
            if (Error) {
                print("\nFAILURE - THIS SYSTEM DOES NOT SUPPORT ARBITRARY PRECISION ARITHMETIC!\n");
                exit(1);
            }
        }
        print("\nSUCCESS - THIS SYSTEM DOES SUPPORT ARBITRARY PRECISION ARITHMETIC.\n");
        return 0;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: RETURN SCIENTIFIC NOTATION NUMBER OBJECT, CODE: NUM a("123.0e45"), b("678.0e9"), c = a * b; NUM d = into_sci(c); d.print_fields(); //S=0 CE=8.3394e58 C=8.3394 E=58 len_I=1 len_F=4 SCIENTIFIC NOTATION
    NUM& into_sci(NUM& a) {
        static NUM N;
        char* n = exp2num(a);
        N = n; free(n);
        return N;
    }
    /// NUM OUT-LINE /// CALCULATOR MODE: NORMALIZE OBJECT ITSELF INTO SCIENTIFIC NOTATION NUMBER, CODE: NUM a("123.0e45"), b("678.0e9"), c = a * b; into_exp(c); c.print_fields(); //S=0 CE=8.3394e58 C=8.3394 E=58 len_I=1 len_F=4 SCIENTIFIC NOTATION
    NUM& into_exp(NUM& a) {
        char* n = exp2num(a);
        a = n; free(n);
        return a;
    }
    /// NUM OUT-LINE /// SLICING A STRING - NEED free(), CODE: char* s = strsub("abcdefg", 1, 4); print(s, "\n"); free(s); //bcd
    char* strsub(const char* s, i64 first, i64 last) { //DEFAULT ARGs: (first = 0, last = 0)
        i64 len_s = (i64)strlen(s);
        if (!last) last = len_s;
        if (first < 0 || last > len_s || first > last || last > len_s) return NULL;
        char* buf = (char*)malloc((len_s + 1) * sizeof(char)); //NULL //RAM DYNAMIC ALLOCATION
        i64 QTY = last - first;
        strncpy(buf, s + first, QTY);
        buf[QTY] = '\0';
        return buf;
    }
    /// NUM OUT-LINE /// CHECK MULTIPLICATION OPERATION, CODE: NUM a(12), b(123); print(a, " * "); print(b, " = "); NUM proof = 1476; print(proof, " PRODUCT RESULT => "); print(mul_check(a, b, proof) ? "FAILURE" : "success", "\n"); //12.0 * 123.0 = 1476.0 PRODUCT RESULT => success
    int mul_check(NUM F1, NUM F2, NUM PRO) {
        i64 sum = 0, sum2 = 0;
        char s[4];
        //PRODUCT SIGN CHECKING...
        if (F1.S && F2.S && !PRO.S);          // - - => + 
        else if (!F1.S && !F2.S && !PRO.S);  //  + + => +
        else if (F1.S && !F2.S && PRO.S);   //   - + => -
        else if (!F1.S && F2.S && PRO.S);  //    + - => - 
        else if ((F1 == "0.0" || F2 == "0.0") && PRO == "0.0") return 0; //ZERO PRODUCT RESULT CHECKING... SUCCESS
        else return 1; //... FAILURE
        char* F1_S = exp2num(F1);   //CHECKING PRODUCT RESULT
        if (F1.S) rm_c(F1_S, '-'); //CLEAR MINUS SIGN
        rm_c(F1_S, '.');          //CLEAR DOT
        i64 F1_Slen = (i64)strlen(F1_S);
        for (i64 i = 0; i < F1_Slen; i++) {
            if (F1_S[i] == '0') continue; //SKIP ZERO DIGITS
            sum += F1_S[i] - '0'; if (sum > 9) sum -= 9;
        }
        free(F1_S);
        char* F2_S = exp2num(F2);
        if (F2.S) rm_c(F2_S, '-'); //CLEAR MINUS SIGN
        rm_c(F2_S, '.');          //CLEAR DOT
        i64 F2_Slen = (i64)strlen(F2_S);
        for (i64 i = 0; i < F2_Slen; i++) {
            if (F2_S[i] == '0') continue; //SKIP ZERO DIGITS
            sum2 += F2_S[i] - '0'; if (sum2 > 9) sum2 -= 9;
        }
        free(F2_S);
        strcpy(s, i64str(sum * sum2));
        i64 slen = (i64)strlen(s);
        sum = 0;
        for (i64 i = 0; i < slen; i++) {
            if (s[i] == '0') continue; //SKIP ZERO DIGITS
            sum += s[i] - '0'; if (sum > 9) sum -= 9;
        }
        char* PRO_s = exp2num(PRO);
        sum2 = 0;
        if (PRO.S) rm_c(PRO_s, '-'); //CLEAR MINUS SIGN
        rm_c(PRO_s, '.');           //CLEAR DOT
        i64 PRO_slen = (i64)strlen(PRO_s);
        for (i64 i = 0; i < PRO_slen; i++) {
            if (PRO_s[i] == '0') continue; //SKIP ZERO DIGITS
            sum2 += PRO_s[i] - '0'; if (sum2 > 9) sum2 -= 9;
        }
        free(PRO_s);
        return !(sum2 == sum);
    }
    /// NUM OUT-LINE /// CHECK ADDITION OPERATION, CODE: NUM a(12), b(10); print(a, " + "); print(b, " = "); NUM proof = 22; print(proof, " ADDITION RESULT => "); print(add_check(a, b, proof) ? "FAILURE" : "success", "\n"); //12.0 + 10.0 = 22.0 ADDITION RESULT => success
    int add_check(NUM A1, NUM A2, NUM SUM) {
        static NUM a1;
        a1 = A1;
        return !(a1 == SUM - A2);
    }
    /// NUM OUT-LINE /// CHECK SUBTRACTION OPERATION, CODE: NUM a(12), b(10); print(a, " - "); print(b, " = "); NUM proof = 2; print(proof, " SUBTRACTION RESULT => "); print(sub_check(a, b, proof) ? "FAILURE" : "success", "\n"); //12.0 - 10.0 = 2.0 SUBTRACTION RESULT => success
    int sub_check(NUM M, NUM S, NUM DIF) {
        static NUM m;
        m = M;
        return !(m == DIF + S);
    }
    /// NUM OUT-LINE /// CHECK DIVISION OPERATION, CODE: NUM a(12), b(10); print(a, " % "); print(b, " = "); NUM proof = 2; print(proof, " DIVISION REM RESULT => "); print(div_check(a, b, proof) ? "FAILURE" : "success", "\n"); //12.0 % 10.0 = 2.0 DIVISION REM RESULT => success
    int div_check(NUM N, NUM DIV, NUM REM) {
        NUM Q(div(N, DIV).round_floor());
        NUM m = Q * DIV;
        if (mul_check(Q, DIV, m)) return 1;
        NUM s = m + REM;
        if (add_check(m, REM, N)) return 1;
        return !(N == s);
    }
    ///////////////////////////////////////// END FUNCTIONS /////////////////////////////////////////

} // ENDING CURLY BRACKET num7 NAMESPACE END
///////////////////////////////////////////////// 

///////////////////////////////////////// END-FILE      /////////////////////////////////////////
#endif // num7_h

