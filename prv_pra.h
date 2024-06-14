// Vex functions for print data variables

// Save this file to ~/houdinixx.x/vex/include/p.h

// New vex using with global disable:

// #include <prv_pra.h> 
// #define dbg 1
// if (dbg) prv('printed_value');
// if (dbg) pra(array_to_print);


void prv(int p) {
		printf("p(<int>):\t\t %s \n", sprintf('%0.0f', p));
}
  
void prv(float p) {
	printf("p(<float>):\t\t %s \n", sprintf('%0.0f', p));
  }
  
void prv(vector2 p) {
	printf("p(<vector2>):\t\t %s \n", sprintf('%0.0f', p));
  }
  
void prv(vector p) {
	printf("p(<vector>):\t\t %s \n", sprintf('%0.0f', p));
  }
  
void prv(vector4 p) {
	printf("p(<vector4>):\t\t %s \n", sprintf('%0.0f', p));
  }
  
void prv(matrix p) {
	printf("p(<matrix>):\t\t %s \n", sprintf('%0.0f', p));
  }
  
void prv(matrix2 p) {
	printf("p(<matrix2>):\t\t %s \n", sprintf('%0.0f', p));
  }
  
void prv(matrix3 p) {
	printf("p(<matrix3>):\t\t %s \n", sprintf('%0.0f', p));
  }
  
void prv(string p) {
	printf("p(<string>):\t\t %s \n", sprintf('%0.0f', p));
  }

void pra(int p[]) {
	string toPrintArray = '';
    for (int i=0; i < len(p); i++) {
		toPrintArray += ' | ' + sprintf('%0.0f', p[i]);
      }
    printf("pa(<int>):\t\t %s \n", sprintf('%0.0f', toPrintArray));
  }
  
void pra(float p[]) {
	string toPrintArray = '';
    for (int i=0; i < len(p); i++) {
		toPrintArray += ' | ' + sprintf('%0.0f', p[i]);
      }
    printf("pa(<float>):\t\t %s \n", sprintf('%0.0f', toPrintArray));
  }

void pra(vector p[]) {
	string toPrintArray = '';
    for (int i=0; i < len(p); i++)	{
		toPrintArray += ' | ' + sprintf('%0.0f', p[i]);
      }
    printf("pa(<vector>):\t\t %s \n", sprintf('%0.0f', toPrintArray));
  }
  
void pra(vector2 p[]) {
	string toPrintArray = '';
    for (int i=0; i < len(p); i++) {
		toPrintArray += ' | ' + sprintf('%0.0f', p[i]);
      }
    printf("pa(<vector2>):\t\t %s \n", sprintf('%0.0f', toPrintArray));
  }
  
void pra(vector4 p[]) {
	string toPrintArray = '';
    for (int i=0; i < len(p); i++) {
		toPrintArray += ' | ' + sprintf('%0.0f', p[i]);
      }
    printf("pa(<vector4>):\t\t %s \n", sprintf('%0.0f', toPrintArray));
  }

void pra(string p[]) {
	string toPrintArray = '';
    for (int i=0; i < len(p); i++) {
		toPrintArray += ' | ' + sprintf('%0.0f', p[i]);
      }
    printf("pa(<string>):\t\t %s \n", sprintf('%0.0f', toPrintArray));
  }

void pra(matrix p[]) {
	string toPrintArray = '';
    for (int i=0; i < len(p); i++) {
		toPrintArray += ' | ' + sprintf('%0.0f', p[i]);
      }
    printf("pa(<matrix>):\t\t %s \n", sprintf('%0.0f', toPrintArray));
  }

void pra(matrix2 p[]) {
	string toPrintArray = '';
    for (int i=0; i < len(p); i++) {
		toPrintArray += ' | ' + sprintf('%0.0f', p[i]);
      }
    printf("pa(<matrix2>):\t\t %s \n", sprintf('%0.0f', toPrintArray));
  }

void pra(matrix3 p[]) {
	string toPrintArray = '';
    for (int i=0; i < len(p); i++) {
		toPrintArray += ' | ' + sprintf('%0.0f', p[i]);
      }
    printf("pa(<matrix3>):\t\t %s \n", sprintf('%0.0f', toPrintArray));
  }