# C++ ARBITRARY PRECISION ARITHMETIC-LOGIC DECIMAL LIBRARY FOR SYSTEM MULTIPLATFORMs
## _DESCRIPTION AND DOC_

- _**`num7.h`**_ is a C++ high-level (python3 style), lightweight, floating-point computing header file for ARBITRARY PRECISION DECIMAL ARITHMETIC.

Easy to use like school math and WITHOUT IEEE754 ISSUES AND NUMBER COMPARING FAILURES, it can be deployed  
for educational school, web e-commerce developing, accounting apps and general math programs included financial ones and AI compliance.  


---

## Installation C++ num7.h and num7.cpp header files

### Create a directory on your SYSTEM MULTIPLATFORM and

- With your favourite editor create num7.h and num7.cpp file and copy it along with your c++ app.cpp file in that same folder


- Ok!

---

## HOW TO USE (integer numeric strings (ex. "2.0") MUST BE SUFFIXED WITH .0): 
--- CALCULATOR MODE ---   

	#include "num7.h"
	using namespace num7;

	int main() {

		/* ADDITION           */ add("2.5", "3.6").print(" = 2.5 + 3.6 (ADDITION)\n"); 	           //6.1                 
		/* SUBTRACTION        */ sub("2.5", "3.6").print(" = 2.5 - 3.6 (SUBTRACTION)\n"); 	  //-1.1               
		/* MULTIPLICATION     */ mul("2.5", "3.6").print(" = 2.5 * 3.6 (MULTIPLICATION)\n"); 	 //9.0                 
		/* DIVISION           */ div("2.5", "3.6").print(" = 2.5 / 3.6 (DIVISION)\n"); 	        //0.6944444444444444444444444444444444444444
		/* DIVISION REMAINDER */ mod("11.0", "8.0").print(" = 11 % 8 (DIVISION REMAINDER)\n"); //3.0                 
		/* INV                */ inv("3.0").print(" = 1 / 3 (INV)\n");  //0.33333333333333333333333333333333                
		/* x2                 */ x2("3.0").print(" = 3 ^ 2 (x2)\n");   //9.0
		/* x3                 */ x3("3.0").print(" = 3 ^ 3 (x3)\n");  //27.0
		/* POWER              */ xy("3.14", "8.0").print(" = 3.14 ^ 8 (POWER)\n");  //9450.1169810786918656
		/* POWER OF TEN       */ _10y(6).print(" = 10^6 (TEN POWER)\n");           //1000000.0
		/* POWER OF TWO       */ _2y(5).print(" = 2^5 (TWO POWER)\n");            //32.0
		/* POWER OF e         */ _ey(5).round(29).print(" = e^5 (e POWER)\n");   //148.41315910257660342111558004056
		/* FACTORIAL          */ NUM P(fact(5)); P.print(" = 5! (FACTORIAL)\n");//120
		/* BINARY             */ NUM n1("257.0"); char* ram1 = n1.to_bin(1); print(ram1, " = 257 (BINARY)     \n"); free(ram1); //100000001 = 257 (BINARY)
		/* HEXADECIMAL        */ NUM n2("257.0"); char* ram2 = n2.to_bin(0); print(ram2, " = 257 (HEXADECIMAL)\n"); free(ram2);//101 = 257 (HEXADECIMAL)
		/* SQUARE ROOT        */ sqr("2.0").print(" (SQUARE ROOT OF 2)\n"); 	   		                //1.414213562         
		/* ROUND 2 DIGITS     */ round(sqr("2.0")).print(" = SQUARE ROOT OF 2 (ROUND 2 DIGITS)\n");            //1.41  
		/* ROUND 4 DIGITS     */ round(pi(), 4).print(" =~ 3.141592654 (ROUND 4 DIGITS)\n"); 	              //3.1416
		/* ROUND BANKING      */ round_bank(pi(), 7).print(" =~ 3.141592654 (ROUND BANKING 7 DIGITS)\n");    //3.1415926
		/* ABS                */ Abs("-5.25").print(" (ABSOLUTE VALUE OF -5.25)\n"); 		            //5.25 
		/* EXP                */ NUM n3("314.0e-2"); n3.print(" = 314.0e-2 (EXP)\n");                      //3.14 = 314.0e-2 (EXP)
		/* SCIENTIFIC         */ NUM n4("314.0e-2"); into_exp(n4).print(" = 3.14e0 (SCI)\n");             //3.14 = 3.14e0 (SCI)
		/* pi                 */ pi().print(" (pi)\n"); 						  //3.1415926535897932384626433832795
		/* e                  */ e().print(" (e)\n");  							 //2.7182818284590452353602874713527
		/* 10 TIME VALUE      */ _10x("5.25").print(" (10 TIME VALUE OF 5.25)\n");                      //52.5
		/* 100 TIME VALUE     */ _100x("5.25").print(" (100 TIME VALUE OF 5.25)\n");                   //525.0
		/* 1000 TIME VALUE    */ _1000x("5.25").print(" (1000 TIME VALUE OF 5.25)\n");                //5250.0
		/* DIVIDE FOR 10      */ _10div("5.25").print(" (DIVISION FOR TEN OF 5.25)\n");              //0.525
		/* DIVIDE FOR 100     */ _100div("5.25").print(" (DIVISION FOR HUNDRED OF 5.25)\n");        //0.0525
		/* DIVIDE FOR 1000    */ _1000div("5.25").print(" (DIVISION FOR THOUSAND OF 5.25)\n");     //0.00525
		/* PERCENTAGE         */ pct("3.725", "150.00").round(2).print(" = 3.725% OF 150 (PERCENTAGE)\n");        //5.59
		/* PERTHOUSAND        */ pth("2.00", "20_000.00").round(2).print(" = 2PTH OF 20000 (PERTHOUSAND)\n");    //40.0
		/* SPIN-OFF           */ spinoff("22.00", "1_299.00").round(2).print(" = (-22%) 1299 (SPIN-OFF)\n"); 	//1064.75
		/* SPIN-ON            */ spinon("22.00", "1_064.75").round(2).print(" = +22% OF 1064.75 (SPIN-ON)\n"); //1299.0
		print("----------------------\n"); 								      //---------------------- 
		#define ELEMENTS 5
		int elements = 5; NUM cart[ELEMENTS]; //19.31999 19.32 18.37 -15.13 -15.12 => ELEMENTS
		cart[0] = "19.31999"; cart[1] = "19.32"; cart[2] = "18.37"; cart[3] = "-15.13"; cart[4] = "-15.12"; //
		for (elements = 0; elements < 5; elements++) print(cart[elements], " "); print("=> ELEMENTS\n");   //19.31999 19.32 18.37 -15.13 -15.12 
		/* SUM   */ sum(cart, elements).print(" => SUM\n");            //26.75999 
		/* MEAN  */ mean(cart, elements).round().print(" => MEAN\n"); //5.35
		/* MIN   */ min(cart, elements).print(" => MIN\n");          //-15.13 
		/* MAX   */ max(cart, elements).print(" => MAX\n");         //19.32 
		/*MIN MAX*/ NUM* result = minmax(cart, elements);          //
		result[0].print(" => MIN, "); 	                          //-15.13 => MIN and 
		result[1].print(" => MAX\n");                            //19.32 => MAX 
		/* FORMAT  */ NUM a("-3_000_000.0"); char* ram4 = format(a); print(ram4); print(" => FORMATTING\n"); free(ram4); //-3,000,000.00 => FORMATTING
		print("----------------------\n");  //---------------------- 
	
		return 0;
	}
 
## CODING:  

(=) assignment:  

	NUM a("3.0"), b("5.0"), c("0.0"); //DECLARATION AND INITIALIZATION
	print("a = "); print(a, "  b = "); print(b, "  c = "); print(c, "\n");//a = 3.0 b = 5.0 c = 0.0  

(+) adding:  

	NUM R = a + b + c;                 //DECLARATION AND INITIALIZATION
	print("R = "); print(R, "\n");    //R = 8.0  
	a = "0.1"; b = "0.2"; c = "0.0"; //INITIALIZATION
	R = a + b + c;
	print("R = "); print(R, "\n"); //R = 0.3  

(-) subtracting:  

	a = "0.1"; b = "0.2"; c = "0.3";          //INITIALIZATION  
	R = a + b - c;                           //INITIALIZATION 
	print("R = "); print(R, "\n"); //R = 0.0 
	a = "-3.99"; b = "-5.20"; c = "+3.01"; //INITIALIZATION 
	R = a - b - c; 			      //INITIALIZATION 
	print("R = "); print(R, "\n");       //R = -1.8 

(*) multiplying:  

	a = "-3.99"; b = "-5.20"; c = "+3.01"; //INITIALIZATION
	R = a * b * c;                        //INITIALIZATION 
	print("R = "); print(R, "\n");       //R = 62.45148

(/) dividing:  

	a = "3.0"; b = "5.7"; 		  //INITIALIZATION
	R = a / b; 			 //INITIALIZATION
	print("R = "); print(R, "\n");  //R = 0.52631578947368421052631578947368
	print("R = "); print(div(a, b).round(), "\n"); //R = 0.53

(% operator) integer division and floating-point remainder:  

	a = 2564; b = 17; 		 //INITIALIZATION 
	NUM quotient((a / b).trunk(0)); //DECLARATION AND INITIALIZATION 
	NUM remainder(a % b); 	       //DECLARATION AND INITIALIZATION 
	print("quotient = ");  quotient.print("\n");  	       //quotient = 150.0 
	print("INTEGER remainder = "); remainder.print("\n"); //INTEGER remainder = 14.0 
	a = "3.141592654"; b = 2;  			     //INITIALIZATION
	quotient = (a / b).trunk(0); remainder = a % b; 
	print("quotient = ");  quotient.print("\n");       //quotient = 1.0 
	print("FLOATING-POINT Remainder = "); remainder.print("\n");//FLOATING-POINT Remainder = 1.141592654 

(sqrt) square root function:  

	NUM a("123_456_789.1234567891");     //DECLARATION AND INITIALIZATION 
	NUM root = a.sqrt(); 	            //DECLARATION AND INITIALIZATION 
	print("root = ", root, "\n");	   //root = 11111.111066

(^) power operator and pow function:  

	NUM a("3.14"), b(2);			 //DECLARATION AND INITIALIZATION 
	NUM power = a.pow(9); 			//DECLARATION AND INITIALIZATION 
	print("power = ", power, "\n");        //power = 29673.367320587092457984 
	power = (b ^ 32); 		      //INITIALIZATION (power needs priority)
	print("power = ", power, "\n");      //power = 4294967296.0 
	print("power = ", pow(a, b), "\n"); //power = 9.8596 

logic (<, <=, >, >=, !=, ==) and relational operators (&&, ||, !).  

(is ...):  

	NUM a("3.0"), b("-5.0"), c("1.53"); //DECLARATION AND INITIALIZATION 
	print(a.is_positive(), "\n");      //1 (true) 
	print(!a.is_zero(), "\n");        //1 (true) 
	print(c.is_negative(), "\n");    //0 (false) 
	print(b.is_negative(), "\n");   //1 (true) 

(< <= > >= != ==): 

	NUM a("0.0"), b("0.1"), c("-0.2"); //DECLARATION AND INITIALIZATION 
	print(a < b, " "); print(a < c, " "); print(b < c, "\n");       //1 0 0 (True  False False) 
	print(a <= b, " "); print(a <= c, " "); print(b <= c, "\n");   //1 0 0 (True  False False) 
	print(a > b, " "); print(a > c, " "); print(b > c, "\n");     //0 1 1 (False True  True)
	print(a >= a, " "); print(a >= c, " "); print(b >= c, "\n"); //1 1 1 (True  True  True)
	print(c == -2 * b, " "); print(a == c + 2 * b, " "); print(a != a + b + c, "\n"); //1 1 1 (True  True  True)
	print(a && b, " "); print(a || b, " "); print(!a, "\n");   //0 1 1 (False  True True) 

(+ - unary operators):
  
	NUM a, b;                  //DECLARATION 
	a = "-10.0", b = "+10.1"; //INITIALIZATION  
	char* p = a.format(); 
	print("a = ", p); free(p);              
	p = b.format(2, ',', true); //a = -10.00  b = +10.10 
	print("  b = ", p, "\n");  free(p); 

On a given NUM variable the following arithmetic methods are available.

variable arithmetic:

	NUM a("10.25"); 		      //DECLARATION AND INITIALIZATION
	print(a, "\n"); 		     //10.25
	print(a.inc(1), "\n"); 		    //11.25
	print(a.dec(2), "\n");		   //9.25
	print(a.dec("4.25"), "\n");	  //5.0
	print(a, "\n");			 //5.0
	print(a = a.mul("5.01"), "\n"); //25.05
	print(a, "\n");		       //25.05
	print(a.clear(), "\n");	      //0.0
	print("----------------------\n"); //----------------------
	
	NUM price("59.99"), rate("22.00");                    //DECLARATION AND INITIALIZATION
	print(price, "\n");                                  //59.99
	NUM price_industrial = price.spinoff(rate).round(); //DECLARATION AND INITIALIZATION
	print(price_industrial, "\n");                     //49.17
	price = price_industrial.spinon(rate).round();    //INITIALIZATION
	print(price, " final price\n");                  //59.99 final price
	char *p = (price - price.pct("17.49").round()) .format();
	print(p, " discounted price\n"); free(p);      //49.50 discounted price

EVEN ODD numbering methods:

	NUM a(6), b(3), c("3.14"); //DECLARATION AND INITIALIZATION
	print(a, " INTEGER => "); print(a.is_integer(), "  EVEN => "); print(a.is_even(), "\n"); //6.0 INTEGER => 1 (true)  EVEN => 1 (true)
	print(b, " INTEGER => "); print(a.is_integer(), "  ODD => "); print(b.is_odd(), "\n"); //3.0 INTEGER => 1 (true)  ODD  => 1 (true)
	print(c, " FLOAT => "); print(c.is_floating(), "\n");				                         //3.14 FLOAT  => 1 (true)

# Advanced logic programming snippets:

	double A = -0.3; //double question //DECLARATION AND INITIALIZATION 
	A += 0.1; A += 0.1; A += 0.1; 
	if (A == 0.0) print("double, SUCCESS"); 
	else printf("double, FAILURE because %.6f is not equal 0.0\n", A); //double issue 
	print("----------------------\n"); 
	
	NUM a("-0.3"); //NUM question //DECLARATION AND INITIALIZATION 
	a += "0.1"; a += "0.1"; a += "0.1"; 
	if (a == "0.0") print("NUM, SUCCESS", "\n"); //NUM solved 
	else print("NUM, FAILURE because ", a, " is not equal 0.0\n"); 
	print("----------------------\n"); 
	
	/* VIDEO OUTPUT: 
		double, FAILURE because 0.000000 is not equal 0.0
		----------------------
		NUM, SUCCESS
		---------------------- */

LOOP EXAMPLE:

	for (NUM i("-1.0"); i != (i64)0; i += "0.1") //-1.0 -0.9 -0.8 -0.7 -0.6 -0.5 -0.4 -0.3 -0.2 -0.1 
		print(i, " "); 
	print("\n----------------------\n"); 
	
	NUM i(0); //DECLARATION AND INITIALIZATION 
	while (i < "1.0") { 
		i.inc("0.1"); //i += NUM("0.1") 
		if (i <= "0.5") continue; 
		print(i, " "); //0.6 0.7 0.8 0.9 1.0 
	} 
	print("\n----------------------\n"); 

	while (i) { 
		i.dec("0.1"); //i -= NUM("0.1") 
		if (i >= "0.5") continue; 
		print(i, " "); //0.4 0.3 0.2 0.1 0.0 
	} 
	print("\n----------------------\n"); 

ROUNDING AND ACCOUNTING:

	NUM p("11.19"), discountRate("7.00");       //DECLARATION AND INITIALIZATION - PRICE -Toslink cable for soundbar  
	print("price=", p); 
	NUM d = round(p.pct(discountRate));       //DISCOUNT 
	NUM pd = round(p - d);                   //PRICE DISCOUNTED 7%  
	NUM temp = pd; 
	NUM p_noTAX = round(temp.spinoff(22)); //ITEM COST WITHOUT TAX 22%  
	NUM TAX = round(pd - p_noTAX);        //TAX 22% 
	print(" PAYED=", pd, " discount="); print(d, " COST="); print(p_noTAX, " TAX="); print(TAX, "\n"); 
	//price=11.19 PAYED=10.41 discount=0.78 COST=8.53 TAX=1.88 
	
OUTPUT LOCALIZATION, FORMATTING AND SQUARENESS:

	NUM amount ("1_000_000.9"); //DECLARATION AND INITIALIZATION
	int SIGN = true;
	int decs = 2;
	char* p = amount.format(decs, ',', SIGN);
	print("US localization => ", p, "\n"); free(p); //US localization => +1,000,000.90
	p = amount.format(decs, '.', SIGN);
	print("EU localization => ", p, "\n"); free(p); //EU localization => +1.000.000,90
    
# Saving calculator: 
	
	#include "num7.h"
	using namespace num7;
	
	void asset() {
		NUM DEPOSIT("10_000.00"), ANNUAL_CONTRIBUTION("1_000.00"), RATE("7.25"), YEARS(10), ANNUALS[10][4],
			SQUARENESS_1, SQUARENESS_2, SQUARENESS_3;
		for (int i = 0; i < YEARS; i++) {
			ANNUALS[i][0] = i + 1;   //year 
			ANNUALS[i][1] = DEPOSIT; //deposit 
			ANNUALS[i][2] = ((DEPOSIT * RATE) / 100).round();
			ANNUALS[i][3] = ANNUALS[i][1] + ANNUALS[i][2] + ANNUAL_CONTRIBUTION; DEPOSIT = ANNUALS[i][3];
		}
		int width = 12;
		for (int i = 0; i < YEARS; i++) {
			print(ANNUALS[i][0].to_i32(), "\t");
			char* p = ANNUALS[i][1].format(2, '.');
			print(p, "\t"); free(p);
			char* p2 = ANNUALS[i][2].format(2, '.');
			if (strlen(p2) < 8) print("  ");
			print(p2, "\t"); free(p2);
			char* p3 = ANNUALS[i][3].format(2, '.');
			print(p3, "\n"); free(p3);
		}
		for (int i = 0; i < YEARS; i++) {
			SQUARENESS_1 += ANNUALS[i][1];
			SQUARENESS_2 += ANNUALS[i][2];
			SQUARENESS_3 += ANNUALS[i][3];
		}
		print("--------------------------------------------------\n");
		print("       ");
		char* p = SQUARENESS_1.format(2, '.');
		print(p, "      "); free(p);
		char* p2 = SQUARENESS_2.format(2, '.');
		print(p2, "       "); free(p2);
		char* p3 = SQUARENESS_3.format(2, '.');
		print(p3, " "); free(p3);
		NUM SQUARENESS((SQUARENESS_1 + SQUARENESS_2 == SQUARENESS_3 - ANNUAL_CONTRIBUTION * YEARS));
		print(" => SQUARENESS=", (SQUARENESS ? "SUCCESS" : "FAILURE"), "\n");
	}
	
	int main() {
		asset(); //FUNCTION CALL 
		
		return 0;
	}
	/* Video output:
	
		 1   10.000,00      725,00   11.725,00
		 2   11.725,00      850,06   13.575,06
		 3   13.575,06      984,19   15.559,25
		 4   15.559,25    1.128,05   17.687,30
		 5   17.687,30    1.282,33   19.969,63
		 6   19.969,63    1.447,80   22.417,43
		 7   22.417,43    1.625,26   25.042,69
		 8   25.042,69    1.815,60   27.858,29
		 9   27.858,29    2.019,73   30.878,02
		10   30.878,02    2.238,66   34.116,68
		------------------------------------------------------------
		194.712,67   14.116,68  218.829,35 => SQUARENESS=SUCCESS	*/
 
ROUNDING TYPES:

	NUM r("2.85"), //DECLARATION AND INITIALIZATION 
		area(r * r * pi()), 
		temp(area), temp2(area); 
	print(area, "\n");                                   //25.51758632878309557941282088068773875 
	print("\n---- NUM floor    rounding ----\n"); 
	print(area.round_floor(1), " (1 decs)\n");         //25.5 (1 decs) 
	print("\n---- NUM ceil     rounding ----\n"); 
	print(temp.round_ceil(1), " (1 decs)\n");        //25.6 (1 decs) 
	print("\n---- NUM standard rounding ----\n"); 
	print(temp2.round(2), " (2 decs)\n");          //25.52 (2 decs) 
	print("\n---- NUM bank     rounding ----\n"); 
	print(temp2.round_bank(-1), " (united )\n"); //20.0 (united) 

ARBITRARY PRECISION ARITHMETIC:

	NUM a("18446744073709551615.05"), b("79557855184810661726.96"); //DECLARATION AND INITIALIZATION 
	a.print(" "); b.print(" operands\n"); //18446744073709551615.05 79557855184810661726.96 operands
	add(a, b).print(" sum\n");           //98004599258520213342.01 sum
	sub(a, b).print(" dif\n");          //-61111111111101110111.91 dif
	mul(a, b).print(" pro\n");         //1467583393647448798475303745564903690126.748 pro
	div(a, b).print(" quo\n");        //0.2318657790718249449152307927340895034397 quo
	mod(a, b).print(" rem\n");       //18446744073709551615.05 rem
	print("-----------------------------------------\n");
	a = 3; b = 100; //INITIALIZATION 
	a.print(" "); b.print(" operands\n"); //3.0 100.0 operands
	pow(a, b).print(" exp\n"); 	     //515377520732011331036461129765621272702107522001.0 exp

SCIENTIFIC NOTATION AND HIGH PRECISION RESULTS:

	NUM a("1.23456789"),     //STANDARD NUMERIC NOTATION 
		b("9.87654321"),							 
		MUL(a * b);    //MULTIPLICATION 
	double ieee754 = 1.23456789 * 9.87654321; 
	NUM c; c.from_double(ieee754); 
	print(c,   "  => MUL ieee754 - PRECISION FAILURE\n"); //12.193263111263525  => MUL ieee754 - PRECISION FAILURE 
	print(MUL, " => MUL num7.h  - PRECISION SUCCESS\n"); //12.1932631112635269 => MUL num7.h  - PRECISION SUCCESS 
	print("-----------------------------------------\n"); 

	a = "1.23456789e300";                        //SCIENTIFIC NUMERIC NOTATION 
	b = "9.87654321e300"; 
	ieee754 = 1.23456789e300 * 9.87654321e300; //MULTIPLICATION 
	print(from_double(ieee754), "			=> MUL ieee754 - CAPACITY FAILURE\n"); 
	MUL = a * b;         
	char* p = MUL.to_sci(); 
	print(p, " => MUL num7.h  - PRECISION SUCCESS\n"); free(p); //inf			=> MUL ieee754 - CAPACITY FAILURE 
	print("-----------------------------------------\n");      //1.21932631112635269e601 = > MUL num7.h - PRECISION SUCCESS 
 
double TO NUM CONVERSION ARRAY:

	double listing[] = { 5.14, -2.1, 5.0, -2543.9935500002972, -0.02 }; 
	NUM L[5]; 
	int elements = sizeof(listing) / sizeof(listing[0]); 
	print("elements="); print(elements, "\n"); //elements=5
	print("----------------------\n"); 	  //----------------------

	for (int i = 0; i < elements; i++)  
		L[i] = L[i].from_double(listing[i]).round(5); //RECTIFIED BINARY APPROXIMATION! 
	for (NUM l : L) print(l, "\n"); //5.14 -2.1 5.0 -2543.99355 -0.02
	print("----------------------\n\n"); 

 EFFECTIVE EXPRESSIONS NEED OF TEMPORARY VARIABLES:

	NUM base(3), h(4);				      //RIGHT-ANGLE TRIANGLE BASE AND HEIGHT
	NUM b2, h2;					     //TEMPORARY VARIABLES
	print("base = ", base, "  h = "); print(h, "\n");   //base = 3.0  h = 4.0
	NUM hyp = sqr((b2 = base.x2()) + (h2 = h.x2()));   //PYTHAGOREAN EXPRESSION NEEDS OF TEMPORARY VARs
	print("HYPOTENUSE = "); hyp.print("\n");	  //HYPOTENUSE = 5.0
	NUM AREA = base * h / 2;			 //AREA EXPRESSION
	print("AREA = "); AREA.print("\n");	        //AREA = 6

 ERROR HANDLING:

	#include "num7.h"
	#include <time.h>
	using namespace num7;

	int main() {
		clock_t tic = clock(), toc = tic;
		tic = clock();

		NUM base = "3", h = "4";                                 //SYNTAX ERROR, RIGHT-ANGLE TRIANGLE BASE AND HEIGHT (ERROR ARGUMENT VALUE => NUM CONSTRUCTOR: [3])
		if (error()) {                                          //DETECT ERRORs (ERROR ARGUMENT VALUE => NUM CONSTRUCTOR: [4])
			print("INITIALIZATION VARIABLEs ERROR\n");
			base = "3.0"; h = "4.0";		      //SYNTAX OK
			error_clear();                               //CLEAR ERROR
		}
		NUM b2, h2;					    //TEMPORARY VARIABLES
		print("base = ", base, "  h = "); print(h, "\n");  //base = 3.0  h = 4.0
		NUM hyp = sqr((b2 = base.x2()) + (h2 = h.x2()));  //PYTHAGOREAN EXPRESSION NEEDS OF TEMPORARY VARs
		print("HYPOTENUSE = "); hyp.print("\n");	 //HYPOTENUSE = 5.0
		NUM AREA = base * h / 2;			//AREA EXPRESSION
		print("AREA = "); AREA.print("\n");	       //AREA = 6
		print("---------------------\n");

		toc = clock();

		printf("---------------------\n");
		printf("ET: %.6fs", (double)(toc - tic) / CLOCKS_PER_SEC);
		time_t now = time(NULL);
		char* s_now = ctime(&now);
		printf("\n%s*** PROGRAM OVER ***\n", s_now);

		return 0;
	}

### FAQ 

Q. I usually try to add 0.1 to 0.2 in C++ with this code:  

	double a = 0.1, b = 0.2;
	print(a + b == 0.3);   //0 => false
and the comparing number result is:  

	0 (false)  
	
How instead can it gets exactly 0.3?  
A. Using NUM class:  

	NUM A("0.1"), B("0.2");
	print(A + B == "0.3", "\n"); //1 => true
the comparing number result is:

	1 (true)
	
Q. I have two double variables in my code:  

	double a = 123456.123, b = -123456789.123456;
	
How can i convert them in NUM type with exact decimal digits?  
A. With from_double() and round() in-line functions:

	double a = 123456.123, b = -123456789.123456; 
	NUM A, B; 
	const int MAX_DECIMAL_PRECISION = 6; 
	A = A.from_double(a).round(MAX_DECIMAL_PRECISION);  
	B = B.from_double(b).round(MAX_DECIMAL_PRECISION);  
	A.print("\n"); // 123456.123 
	B.print("\n"); //-123456789.123456 

Q. I must enter many integer variables in my code:  

	NUM a("123.0") , b("456.0"), c("789.0"); 
	
Can i input them without double quotes and suffix .0?  
A. Yes, this the way:

	NUM a(123), b(456), c(789);  

Q. I need managing zero division error in C++; How can do it?  
A. num7 library supports hi-level execution workflow code for arithmetic operation errors:

	#include "num7.h"
	#include <time.h>
	using namespace num7;

	int main() {
		clock_t tic = clock(), toc = tic;
		tic = clock();

		NUM a("3.6"), b("0.00");
		print(a, " / "); print(b, " = ");
		NUM c(a / b); //ERROR DIVISION BY ZERO => operator/: [S=0 CE=0.0e0 C=0.0 E=0 len_I=1 len_F=1]
		while (error()) {		                  //!!! EXCEPTION HANDLER !!!
			static int err_count = 1;                //DECLARATION AND INITALIZATION
			error_clear(); 			        //CLEAR ERROR (Error = 0) => GLOBAL VARIABLE
			if (err_count == 1) b = "0.00";        //ZERO DIVISON AGAIN (NOT VALID DIVISOR)
			else b = "0.16";		      //VALID DIVISOR
			print(a, " / "); print(b, " = ");
			c = a / b;
			if (err_count > 2) { print("SYSTEM RESET\n"); break; } //3 TIMES RETRIES AT ALL
			err_count++;
		}
		if (!error()) print(c, "\n"); 			            //3.6 / 0.16 = 22.5 //OK
		else { print("SYSTEM RESET -EXIT\n"); return 1; }
		print("---------------------\n");

		toc = clock();

		printf("---------------------\n");
		printf("ET: %.6fs", (double)(toc - tic) / CLOCKS_PER_SEC);
		time_t now = time(NULL);
		char* s_now = ctime(&now);
		printf("\n%s*** PROGRAM OVER ***\n", s_now);

		return 0;
	}

Q. I need getting result in scientific notation; How can code it?   
A. With the following code:

	NUM a("85.0e1900"), b = "13.0e1940", PRO = a * b; 
	PRO = PRO.into_sci();
	PRO.print_exp("\n"); //1.105e3843
	//PRO.print("\n");  //STANDARD NUMERIC NOTATION	1105...0
