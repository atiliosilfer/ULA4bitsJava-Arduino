
/* 
  ULA4bits
	Aluno: Atilio Silva Ferreira
	Disciplina: AC2
*/

int a1,a2,a3,a4;
int b1,b2,b3,b4;
String str;
int led13 = 13; //vermelho - 1000 (s4)
int led12 = 12; //amarelo  - 0100 (s3)
int led11 = 11; //verde    - 0010 (s2)
int led10 = 10; //azul     - 0001 (s1)
int s1,s2,s3,s4;

void setup()
{
	Serial.begin (9600);
	pinMode (led13, OUTPUT);
	pinMode (led12, OUTPUT);
	pinMode (led11, OUTPUT);
	pinMode (led10, OUTPUT);
}

void loop()
{
	//verifica se existe dados a ser lido
	if (Serial.available() > 0) {
		
		//primeiro dado
		
		str = Serial.readString ();
		
		if (str.charAt (0) == '0') {
			a4 = 0; a3 = 0; a2 = 0; a1 = 0;
		} else if (str.charAt (0) == '1'){
			a4 = 0; a3 = 0; a2 = 0; a1 = 1;
		} else if (str.charAt (0) == '2'){
			a4 = 0; a3 = 0; a2 = 1; a1 = 0;
		} else if (str.charAt (0) == '3'){
			a4 = 0; a3 = 0; a2 = 1; a1 = 1;
		} else if (str.charAt (0) == '4'){
			a4 = 0; a3 = 1; a2 = 0; a1 = 0;
		} else if (str.charAt (0) == '5'){
			a4 = 0; a3 = 1; a2 = 0; a1 = 1;
		} else if (str.charAt (0) == '6'){
			a4 = 0; a3 = 1; a2 = 1; a1 = 0;
		} else if (str.charAt (0) == '7'){
			a4 = 0; a3 = 1; a2 = 1; a1 = 1;
		} else if (str.charAt (0) == '8'){
			a4 = 1; a3 = 0; a2 = 0; a1 = 0;
		} else if (str.charAt (0) == '9'){
			a4 = 1; a3 = 0; a2 = 0; a1 = 1;
		} else if (str.charAt (0) == 'A'){
			a4 = 1; a3 = 0; a2 = 1; a1 = 0;
		} else if (str.charAt (0) == 'B'){
			a4 = 1; a3 = 0; a2 = 1; a1 = 1;
		} else if (str.charAt (0) == 'C'){
			a4 = 1; a3 = 1; a2 = 0; a1 = 0;
		} else if (str.charAt (0) == 'D'){
			a4 = 1; a3 = 1; a2 = 0; a1 = 1;
		} else if (str.charAt (0) == 'E'){
			a4 = 1; a3 = 1; a2 = 1; a1 = 0;
		} else if (str.charAt (0) == 'F'){
			a4 = 1; a3 = 1; a2 = 1; a1 = 1;
		}
		
		if (str.charAt (1) == '0') {
			b4 = 0; b3 = 0; b2 = 0; b1 = 0;
		} else if (str.charAt (1) == '1'){
			b4 = 0; b3 = 0; b2 = 0; b1 = 1;
		} else if (str.charAt (1) == '2'){
			b4 = 0; b3 = 0; b2 = 1; b1 = 0;
		} else if (str.charAt (1) == '3'){
			b4 = 0; b3 = 0; b2 = 1; b1 = 1;
		} else if (str.charAt (1) == '4'){
			b4 = 0; b3 = 1; b2 = 0; b1 = 0;
		} else if (str.charAt (1) == '5'){
			b4 = 0; b3 = 1; b2 = 0; b1 = 1;
		} else if (str.charAt (1) == '6'){
			b4 = 0; b3 = 1; b2 = 1; b1 = 0;
		} else if (str.charAt (1) == '7'){
			b4 = 0; b3 = 1; b2 = 1; b1 = 1;
		} else if (str.charAt (1) == '8'){
			b4 = 1; b3 = 0; b2 = 0; b1 = 0;
		} else if (str.charAt (1) == '9'){
			b4 = 1; b3 = 0; b2 = 0; b1 = 1;
		} else if (str.charAt (1) == 'A'){
			b4 = 1; b3 = 0; b2 = 1; b1 = 0;
		} else if (str.charAt (1) == 'B'){
			b4 = 1; b3 = 0; b2 = 1; b1 = 1;
		} else if (str.charAt (1) == 'C'){
			b4 = 1; b3 = 1; b2 = 0; b1 = 0;
		} else if (str.charAt (1) == 'D'){
			b4 = 1; b3 = 1; b2 = 0; b1 = 1;
		} else if (str.charAt (1) == 'E'){
			b4 = 1; b3 = 1; b2 = 1; b1 = 0;
		} else if (str.charAt (1) == 'F'){
			b4 = 1; b3 = 1; b2 = 1; b1 = 1;
		}
				
		//digitalWrite (led13, a);
		Serial.print ("A = ");
		Serial.print (a4);
		Serial.print (a3);
		Serial.print (a2);
		Serial.print (a1);
		Serial.println ();
		
		//digitalWrite (led12, b);
		Serial.print ("B = ");
		Serial.print (b4);
		Serial.print (b3);
		Serial.print (b2);
		Serial.print (b1);
		Serial.println ();
		
		
		Serial.print ("op = ");
		Serial.println (str.charAt (2));
		
		//if (op != '\n') {
		if (str.charAt (2) == '0'){
			s1 = 0; s2 = 0; s3 = 0; s4 = 0;
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == '1') {
			s1 = 1; s2 = 1; s3 = 1; s4 = 1;
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == '2') {
			s1 = portaNot (a1); s2 = portaNot (a2); s3 = portaNot (a3); s4 = portaNot (a4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == '3') {
			s1 = portaNot (b1); s2 = portaNot (b2); s3 = portaNot (b3); s4 = portaNot (b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == '4') {
			s1 = portaOr(a1,b1); s2 = portaOr(a2,b2); s3 = portaOr(a3,b3); s4 = portaOr(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == '5') {
			s1 = portaAnd(a1,b1); s2 = portaAnd(a2,b2); s3 = portaAnd(a3,b3); s4 = portaAnd(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == '6') {
			s1 = portaXor(a1,b1); s2 = portaXor(a2,b2); s3 = portaXor(a3,b3); s4 = portaXor(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == '7') {
			s1 = portaNand(a1,b1); s2 = portaNand(a2,b2); s3 = portaNand(a3,b3); s4 = portaNand(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == '8') {
			s1 = portaNor(a1,b1); s2 = portaNor(a2,b2); s3 = portaNor(a3,b3); s4 = portaNor(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == '9') {
			s1 = portaXnor(a1,b1); s2 = portaXnor(a2,b2); s3 = portaXnor(a3,b3); s4 = portaXnor(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == 'A') {
			s1 = portaAnouB(a1,b1); s2 = portaAnouB(a2,b2); s3 = portaAnouB(a3,b3); s4 = portaAnouB(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == 'B') {
			s1 = portaAouBn(a1,b1); s2 = portaAouBn(a2,b2); s3 = portaAouBn(a3,b3); s4 = portaAouBn(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == 'C') {
			s1 = portaAneB(a1,b1); s2 = portaAneB(a2,b2); s3 = portaAneB(a3,b3); s4 = portaAneB(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == 'D') {
			s1 = portaAeBn(a1,b1); s2 = portaAeBn(a2,b2); s3 = portaAeBn(a3,b3); s4 = portaAeBn(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == 'E') {
			s1 = portaAnouBn(a1,b1); s2 = portaAnouBn(a2,b2); s3 = portaAnouBn(a3,b3); s4 = portaAnouBn(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);digitalWrite (led12, s3);digitalWrite (led11, s2);digitalWrite (led10, s1);
			
		} else if (str.charAt (2) == 'F') {
			s1 = portaAneBn(a1,b1); s2 = portaAneBn(a2,b2); s3 = portaAneBn(a3,b3); s4 = portaAneBn(a4,b4);
			
			Serial.print ("saida = ");
			Serial.print (s4); Serial.print (s3); Serial.print (s2); Serial.print (s1);
			Serial.println ();
			
			digitalWrite (led13, s4);
			digitalWrite (led12, s3);
			digitalWrite (led11, s2);
			digitalWrite (led10, s1);
			
		} }}
//}

int portaAnd (int a, int b) {	
	return (a&b);
}//fim portaAnd

int portaNand (int a, int b) {
	return !(a&b); 
}//fim portaNand

int portaOr (int a, int b) {	
	return(a|b);
}//fim portaOr

int portaNor (int a, int b) {	
	return !(a|b);
}//fim portaOr

int portaXor (int a, int b) {	
	return (a^b);
}//fim portaXor

int portaXnor (int a, int b) {
	return !(a^b);
}//fim portaXor

int portaAnouB (int a, int b) {
	a = portaNot (a);
	return (a|b);
}//fim portaAnouB

int portaAouBn (int a, int b) {
	b = portaNot (b);
	return (a|b);
}//fim portaAouBn

int portaAneB (int a, int b) {
	a = portaNot (a);
	return (a&b);
}//fim portaAneB

int portaAeBn (int a, int b) {
	b = portaNot (b);
	return (a&b);
}//fim portaAeBn

int portaAnouBn (int a, int b) {
	a = portaNot (a);
	b = portaNot (b);
	return (a|b);
}//fim portaAnouBn

int portaAneBn (int a, int b) {
	a = portaNot (a);
	b = portaNot (b);
	return (a&b);
}//fim portaAneBn

int portaNot (int a) {
	int resposta;
	if (a == 1){
		resposta = 0;
	} else {
		resposta = 1;	
	}return resposta;
}//fim portaNotA
