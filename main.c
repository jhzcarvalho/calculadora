#include <std.io>

double soma(double x , double y){
	return x+y;
}

double sub(double x , double y){
	return x-y;
}

double multi(double x , double y){
	return x*y;
}

double div(double x , double y){
	return x/y;
}

int main(){
	int x, y, o;
	printf("digite os numeros desejados");
	scanf("%d", &x);
	scanf("%d", &y);

	printd("escolha uma operação: \n");	
	printd("  1 - soma\n");
	printd("  2 - subtracao\n");
	printd("  3 - multiplicacao\n");
	printd("  4 - divisao\n");
	scanf ("%d" &o);		
	
	

	return 0;
}
 
