#include "chesslib.h" 
 
int Knight::attack(char* p)	{ 
	if(deskout(p) > 0)  
		return(0);  
 int x = p[0] - pos[0];  
 int y = p[1] - pos[1];  
	if(x < 0)    
		x = -x;  
	if(y < 0)  
		y = -y;  
	if (((x + y)==3)&&(x!=0)&&(y!=0))   
		return(1); 
 return(0);  
} 
 
int Bishop::attack(char* p) { 
	if(deskout(p) > 0)//проверка на то, что буква и цифра не правильная , если дескоуцт вернет 0, то метод атак вернет 0.  
		return(0);  
 int x = p[0] - pos[0];//p[0]- po doske ; posithion-hde stoezh  
 int y = p[1] - pos[1];// вычитание делается для того, чтобы понять куда будем смещать  
	if(x < 0)    
		x = -x;    	   //так берем по модулю 
	if(y < 0)     
		y = -y;  
	if( x != y)  
		return(0);  
 return(1); 
} 
 
int Prince::attack(char* s) {  
	if(Knight::attack(s) > 0)   
		return(1);  
	if(Bishop::attack(s) > 0)   
		return(2); 
 return(0);
} 