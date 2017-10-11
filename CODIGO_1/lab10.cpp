#include<iostream>

using namespace std;
//Esta funcion cumple de entrada , para toamr los valores de la matriz
int entrada(){
  int a;
  cin>>a;
  return a;
}

//Esta funcion sirve para crear las columnas de cada una de las matrices
void creacion_mt(int **mt,int f,int c,int i=0){
    if (f==i) return;
    *(mt+i)=new int[c];
    i++;
    creacion_mt(mt,f,c,i);
  }
 
//Esta funion sirve para hacer el llenado de las matrices , con lo numeros que el usuaro dicte  
void llenado(int **mt,int f,int c,int i=0,int j=0){
    if (j==c){
        i++;
        j=0;
    }
    if (i==f) return;
    cout<<"valor :";
    *(*(mt+i)+j) = entrada();
    j++;
    llenado(mt,f,c,i,j);
}

//Esta funcion sirve para qque se impriman las matrices que queramos
void imprimir(int **mt,int f,int c,int i=0,int j=0){
    if (j==c){
       cout<<"\n";
        i++;
        j=0;
    }
    if (i==f) return;
    cout<<*(*(mt+i)+j)<<"  ";
    j++;
    imprimir(mt,f,c,i,j); 
}

//Funcion para hallar el mayor entre dos numeros  
int mayor(int a , int b){
  if(a>b){
  return a;
  }else{
  return b;}}
//Funcion para hallar el menor entre dos numeros   
int menor(int a , int b){
  if(a<b){
  return a;
  }else{
  return b;}}
//Funcion para hallar el promedio entre dos numeros   
int promedio(int a , int b){
  return (a+b)/2;}
//Funcion para hallar la suma entre dos numeros   
int suma(int a , int b){
  return a+ b;}
//Funcion para hallar la resta entre dos numeros   
int resta(int a , int b){
  return a-b;}
//Funcion que realiza cualquiera de las operacones dichas anteriormente, mediante un puntero a funcion   
void operacion_matriz(int **a,int **b,int **res,int (*operador)(int , int),int f,int c,int i=0,int j=0){
  if (j==c){
        	i++;
        	j=0;
   		}    
    if (i==f) return;
    *(*(res+i)+j)=(*operador)(*(*(a+i)+j),*(*(b+i)+j));
    j++;
  	operacion_matriz(a,b,res,operador,f,c,i,j);
  
}
//Esta funcion realiza la mulriplicaion de dos matrices
void multiplicacion(int **a,int **b,int **res,int f,int c,int c1,int suma,int pri,int seg,int i=0,int k=0,int j=0){
	if (k==c1){
        (*(*(res+i)+j))=suma;
        j++;
        k=0;
        suma=0;
		if (j==c){
        	i++;
        	j=0;
   		}    
    }
    if (i==f) return;
    pri=*(*(a+i)+k);
    seg=*(*(b+k)+j);
    suma+=pri*seg;
    k++;
  	multiplicacion(a,b,res,f,c,c1,suma,pri,seg,i,k,j);
}  	

//Esta funcion elimina los espacios que fueron resevados para las matrices dinamicas  
void eliminar(int **mt,int f,int i=0){
		if (i==f){
			delete[] mt;
			return; 
		}
		delete[] *(mt+i);
		i++;
		eliminar(mt,f,i);		

}
 
//Todas las funciones son de forma recursiva , sin utilixar [] , y con punteros 
 
int main()
{
    //inicializamos las tres matrices  con punnteros  de la multiplicacion 
    int **mt1;
    int **mt2;
    int **mt3;
    cout<<"Verificar que para que salga la multiplicacion, columna1 debe ser igual a fila2\n";
    //Inicializamos la primera matriz
    cout<<"PRIMERA MATRIZ:\n";
    cout<<"Poner filas:\n";
    int filas1=entrada();
    cout<<"Poner columnas:\n";
    int columnas1=entrada();
    
    //Inicializamos la segunda matriz
    cout<<"SEGUNDA MATRIZ:\n";
    cout<<"Poner filas:\n";
    int filas2=entrada();
    cout<<"Poner columnas:\n";
    int columnas2=entrada();
    
    //Inicializamos la tercera matriz
    int filas3=filas1;
    int columnas3=columnas2;
    //iterador de la multiplicaion 
    int k=columnas1;
    
    //Desarrollo de la primera matriz
    mt1=new int*[filas1];
    creacion_mt( mt1,filas1,columnas1,0);
    llenado(mt1,filas1,columnas1,0,0);
    imprimir(mt1,filas1,columnas1,0,0);
    
    //Desarrollo de la segunda matriz
    mt2=new int*[filas2];
    creacion_mt( mt2,filas2,columnas2,0);
    llenado(mt2,filas2,columnas2,0,0);
    imprimir(mt2,filas2,columnas2,0,0);
    
    //Desarrollo de la tercera matriz o la matriz resultante de la multiplicacion
    mt3=new int*[filas3];
    int suma_m=0;
    int pri=0;
    int seg=0;
    creacion_mt( mt3,filas3,columnas3,0);
    
    /*Realizamos la operacion de la multiplicacion, es la unica que tiene forma diferente
    a nuestros otras operaciones or eso se utiliza una funcion diferente para multiplicar 
    ya que la matrices solo tienen que tener la columna de la primera y la fila d la segunda igual ,
    en cambio en las operaciones de suma , resta ,promedio,mayor , menor;se utilizan matrices del mismo tamaño*/ 
    
    multiplicacion(mt1,mt2,mt3,filas3,columnas3,k,suma_m,pri,seg,0,0,0);
    cout<<"RESULTADO DE LA MULTIPLICACION ES:\n"; 
    imprimir(mt3,filas3,columnas3,0,0);
    cout<<"\n";
    
    //Eliminacion de la memoria dinamica de la aprte de multiplicacion 
    eliminar(mt1,filas1,0);
    eliminar(mt2,filas2,0);
    eliminar(mt3,filas3,0);

    //inicializamos las tres matrices  con punnteros para la suma,resta,promedio,mayor,menor 
    int **mt4;
    int **mt5;
    int **mt6;
    cout<<"Verificar que para que salga las operaciones de suma,resta,promedio,mayor,menor";
    cout<<"; el tamaño de las matrices 1 y 2 deben ser iguales\n";
    //Inicializamos la primera y sengunda matriz
    cout<<"PRIMERA Y SEGUNDA MATRIZ:\n";
    cout<<"Poner filas:\n";
    filas1=entrada();
    cout<<"Poner columnas:\n";
    columnas1=entrada();
    filas2=filas1;
    columnas2=columnas1;
    filas3=filas1;
    columnas3=columnas2;
    
    //Desarrollo de la primera matriz
    mt4=new int*[filas1];
    creacion_mt( mt4,filas1,columnas1,0);
    llenado(mt4,filas1,columnas1,0,0);
    imprimir(mt4,filas1,columnas1,0,0);
    
    //Desarrollo de la segunda matriz
    mt5=new int*[filas2];
    creacion_mt( mt5,filas2,columnas2,0);
    llenado(mt5,filas2,columnas2,0,0);
    imprimir(mt5,filas2,columnas2,0,0);
    
    //Desarrollo de la tercera matriz o la matriz resultante de la multiplicacion
    mt6=new int*[filas3];
    creacion_mt( mt6,filas3,columnas3,0);
    //Desarrollo de las operaciones
    //SUMA DE DOS MATRICES
    cout<<"\n";
    cout<<"RESULTADO DE LA MATRIZ SUMA\n";
    operacion_matriz(mt4,mt5,mt6,suma,filas3,columnas3,0,0);
    imprimir(mt6,filas3,columnas3,0,0);
    cout<<"\n";
    //RESTA DE DOS MATRICES
    cout<<"RESULTADO DE LA MATRIZ RESTA\n";
    operacion_matriz(mt4,mt5,mt6,resta,filas3,columnas3,0,0);
    imprimir(mt6,filas3,columnas3,0,0);
    cout<<"\n";
    //PRMEDIO DE CADA INDICE DE DOS MATRICES
    cout<<"RESULTADO DE LA MATRIZ PROMEDIO\n";
    operacion_matriz(mt4,mt5,mt6,promedio,filas3,columnas3,0,0);
    imprimir(mt6,filas3,columnas3,0,0);
    cout<<"\n";
    //RESULTADO DE LOS NUMEROS MAYORES ENTRE LAS DOS MATRICES
    cout<<"RESULTADO DE LA MATRIZ MAYOR\n";
    operacion_matriz(mt4,mt5,mt6,mayor,filas3,columnas3,0,0);
    imprimir(mt6,filas3,columnas3,0,0);
    cout<<"\n";
    //RESULTADO DE LOS NUMEROS MENORES ENTRE LAS DOS MATRICES
    cout<<"RESULTADO DE LA MATRIZ MENOR\n";
    operacion_matriz(mt4,mt5,mt6,menor,filas3,columnas3,0,0);
    imprimir(mt6,filas3,columnas3,0,0);
    cout<<"\n";
    
    //Eliminamos la memoria reservada para las matrices dinamicas
    eliminar(mt4,filas1,0);
    eliminar(mt5,filas2,0);
    eliminar(mt6,filas3,0);
   
    return 0;
}
