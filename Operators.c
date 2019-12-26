#include <stdio.h>
int main(){
	int operand1=10, operand2=20, result=0;

	//Special Operators
	printf("\n1. Special Operators Demo: [Variables used: int operand1=10;]");
	printf("\n-------------------------------------------------------------");

	//sizeof
	printf("\n\nsizeof() operator:");
	printf("\n\tThe value of operand1 is %d", operand1);
	printf("\n\tThe size of operand1 is %lu", sizeof(operand1));

	//&
	printf("\n\n& operator:");
	printf("\n\tThe value of operand1 is %d", operand1);
	printf("\n\tThe address of operand1 is %p", &operand1);

	//*
	printf("\n\n* operator:");
	printf("\n\tAccessing from variable name (operand1): The value of operand1 is %d", operand1);
	printf("\n\tAccessing from pointer (*(&operand1)) : The value of operand1 is %d", *(&operand1));

	//Increment and Decrement Operators
	printf("\n\n2. Increment and Decrement Operators Demo: [Variables used: int operand1=10;]");
	printf("\n-------------------------------------------------------------------------------");
	operand1=10;
	
	//++ operator
	printf("\n\n++ operator:");
	operand1=10;
	printf("\n\toperand1 = %d", operand1);
	printf("\n\toperand1++ = %d", operand1++);
	printf("\n\t++operand1 = %d", ++operand1);
	
	//-- operator
	printf("\n\n-- operator:");
	operand1=10;
	printf("\n\toperand1 = %d", operand1);
	printf("\n\toperand1-- = %d", operand1--);
	printf("\n\t--operand1 = %d", --operand1);

	//Bitwise Operators
	printf("\n\n3. Bitwise Operators Demo: [Variables used: int operand1=10, operand2=20, result=0;]");
	printf("\n--------------------------------------------------------------------------------------");

	//& operator
	printf("\n\n& operator:");
	result = operand1 & operand2;
	printf("\n\t%d & %d = %d", operand1, operand2, result);

	//| operator
	printf("\n\n| operator:");
	result = operand1 | operand2;
	printf("\n\t%d | %d = %d", operand1, operand2, result);

	//^ operator
	printf("\n\n^ operator:");
	result = operand1 ^ operand2;
	printf("\n\t%d ^ %d = %d", operand1, operand2, result);

	//<< operator
	printf("\n\n<< operator:");
	result = operand1 << operand2;
	printf("\n\t%d << %d = %d", operand1, operand2, result);

	//>> operator
	printf("\n\n>> operator:");
	result = operand1 >> operand2;
	printf("\n\t%d >> %d = %d", operand1, operand2, result);

	//Assignement Operators
	printf("\n\n4. Assignement Operators Demo: [Variables used: int operand1=10, result=0;]");
	printf("\n-----------------------------------------------------------------------------");
	operand1=10;
	result=0;
	
	//= operator
	result=0;
	printf("\n\n= operator:");
	printf("\n\tBefore: result=%d", result);
	result = operand1;
	printf("\n\tOperation: result = operand1;");
	printf("\n\tAfter: result=%d", result);

	//+= operator
	result=0;
	printf("\n\n+= operator:");
	printf("\n\tBefore: result=%d", result);
	result += operand1;
	printf("\n\tOperation: result += operand1; => result = result + operand1;");
	printf("\n\tAfter: result=%d", result);

	//-= operator
	result=0;
	printf("\n\n-= operator:");
	printf("\n\tBefore: result=%d", result);
	result -= operand1;
	printf("\n\tOperation: result -= operand1; => result = result - operand1;");
	printf("\n\tAfter: result=%d", result);

	//*= operator
	result=0;
	printf("\n\n*= operator:");
	printf("\n\tBefore: result=%d", result);
	result *= operand1;
	printf("\n\tOperation: result *= operand1; => result = result * operand1;");
	printf("\n\tAfter: result=%d", result);

	///= operator
	result=0;
	printf("\n\n/= operator:");
	printf("\n\tBefore: result=%d", result);
	result /= operand1;
	printf("\n\tOperation: result /= operand1; => result = result / operand1;");
	printf("\n\tAfter: result=%d", result);

	//%= operator
	result=0;
	printf("\n\n%%= operator:");
	printf("\n\tBefore: result=%d", result);
	result %= operand1;
	printf("\n\tOperation: result %%= operand1; => result = result %% operand1;");
	printf("\n\tAfter: result=%d", result);

	//&= operator
	result=0;
	printf("\n\n&= operator:");
	printf("\n\tBefore: result=%d", result);
	result &= operand1;
	printf("\n\tOperation: result &= operand1; => result = result & operand1;");
	printf("\n\tAfter: result=%d", result);

	//|= operator
	result=0;
	printf("\n\n|= operator:");
	printf("\n\tBefore: result=%d", result);
	result |= operand1;
	printf("\n\tOperation: result |= operand1; => result = result | operand1;");
	printf("\n\tAfter: result=%d", result);

	//^= operator
	result=0;
	printf("\n\n^= operator:");
	printf("\n\tBefore: result=%d", result);
	result ^= operand1;
	printf("\n\tOperation: result ^= operand1; => result = result ^ operand1;");
	printf("\n\tAfter: result=%d", result);

	//<<= operator
	result=0;
	printf("\n\n<<= operator:");
	printf("\n\tBefore: result=%d", result);
	result <<= operand1;
	printf("\n\tOperation: result <<= operand1; => result = result << operand1;");
	printf("\n\tAfter: result=%d", result);

	//>>= operator
	result=0;
	printf("\n\n>>= operator:");
	printf("\n\tBefore: result=%d", result);
	result >>= operand1;
	printf("\n\tOperation: result >>= operand1; => result = result >> operand1;");
	printf("\n\tAfter: result=%d", result);

	//Relational Operators
	printf("\n\n5. Relational Operators Demo: [Variables used: int operand1=10, operand2 = 20]");
	printf("\n--------------------------------------------------------------------------------");
	operand1=10;
	operand2=20;
	
	//== operator
	printf("\n\n== operator:");
	printf("\n\t%d == %d => %d", operand1, operand2, operand1==operand2);

	//!= operator
	printf("\n\n!= operator:");
	printf("\n\t%d != %d => %d", operand1, operand2, operand1!=operand2);
	
	//> operator
	printf("\n\n> operator:");
	printf("\n\t%d > %d => %d", operand1, operand2, operand1>operand2);
	
	//< operator
	printf("\n\n== operator:");
	printf("\n\t%d < %d => %d", operand1, operand2, operand1<operand2);
	
	//>= operator
	printf("\n\n>= operator:");
	printf("\n\t%d >= %d => %d", operand1, operand2, operand1>=operand2);
	
	//<= operator
	printf("\n\n<= operator:");
	printf("\n\t%d <= %d => %d", operand1, operand2, operand1<=operand2);

	//Logical Operators
	printf("\n\n6. Logical Operators Demo: [Variables used: int operand1=10, operand2 = 20;]");
	printf("\n-----------------------------------------------------------------------------");
	operand1=10;
	operand2=20;
	result=0;
	
	//&& operator
	result=0;
	printf("\n\n&& operator:");
	printf("\n\t%d > %d && %d < %d = %d", operand1, operand2, operand1, operand2, operand1 > operand2 && operand1 < operand2);

	//|| operator
	result=0;
	printf("\n\n|| operator:");
	printf("\n\t%d > %d || %d < %d = %d", operand1, operand2, operand1, operand2, operand1 > operand2 || operand1 < operand2);

	//! operator
	result=0;
	printf("\n\n! operator:");
	printf("\n\t!(%d < %d)= %d", operand1, operand2, !(operand1 < operand2));
	printf("\n\t!(%d > %d)= %d", operand1, operand2, !(operand1 > operand2));

	//Arithmetic Operators
	printf("\n\n7. Arithmetic Operators Demo: [Variables used: int operand1=10, operand2 = 20, result=0;]");
	printf("\n-------------------------------------------------------------------------------------------");
	operand1=10;
	operand2=20;
	result=0;
	
	//+ operator
	result=0;
	printf("\n+ operator:");
	result = operand1 + operand2;
	printf("\n\t%d + %d = %d\n", operand1, operand2, result);

	//- operator
	result=0;
	printf("\n- operator:");
	result = operand1 - operand2;
	printf("\n\t%d - %d = %d\n", operand1, operand2, result);

	//* operator
	result=0;
	printf("\n* operator:");
	result = operand1 * operand2;
	printf("\n\t%d * %d = %d\n", operand1, operand2, result);

	/// operator
	result=0;
	printf("\n/ operator:");
	result = operand1 / operand2;
	printf("\n\t%d / %d = %d", operand1, operand2, result);
	
	result = operand2 / operand1;
	printf(" and %d / %d = %d\n", operand2, operand1, result);

	//% operator
	result=0;
	printf("\n%% operator:");
	result = operand1 % operand2;
	printf("\n\t%d %% %d = %d", operand1, operand2, result);
	
	result = operand2 % operand1;
	printf(" and %d %% %d = %d", operand2, operand1, result);
	
	result = (operand2 + 2) % operand1;
	printf(" and %d %% %d = %d\n", operand2+2, operand1, result);

	//Conditional Operators
	printf("\n\n8. Conditional Operator Demo: [Variables used: int operand1=10, operand2 = 20, result=0;]");
	printf("\n-------------------------------------------------------------------------------------------");
	operand1=10;
	operand2=20;
	result=0;
	
	//?= operator
	result=0;
	printf("\n\n?: operator:");
	printf("\n\t%d > %d ? %d : %d = %d", operand1, operand2, operand1, operand2, (operand1 > operand2 ? operand1 : operand2));
	
	printf("\n\n");
	return 0;
}
