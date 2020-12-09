
/*   Universidad de La Frontera
 	Ingenieria Civil Telematica
 	
 	IIE-344-1 ESTRUCURA DE DATOS Y ALGORITMOS
 	
 	Tarea 1
 
 	Autor 1: Benito antonio lagos Rodríguez
 	Autor 2: Matias Pablo Sepulveda Godoy
 
 	Fecha: 08/12/2020
 
  	Proyecto: COTIZATUPC
    
    Cotiza tu pc, un programa el cual su objetivos es  determinar tu computadora 
    ideal, además, podrás cotizar otros componentes como monitores y mouse.
    
    Nace sobre la necesidad de adquirir un computador sin tener conocimientos sobre 
    componentes de este. Para ello, hemos desarrollado un software capaz de entregar 
    la mejor opción basándose en el presupuesto y el uso que tendrá.

*/

//librerias
#include <stdio.h>  //Manejo de archivos
#include <stdlib.h>
#include <string.h> //Manejo de cadenas de texto

//Funciones
void PC();
void notebook();
void pantalla();
void mouse();
void general(char Leer[]);
void copiar(char imprimir[], int i);
void vaciar(char imprimir[]);

//Estructura
typedef struct{
	char *nombre;
	int precio;
	}pieza;
		
   pieza *trab;
   
//Variables globales
char Usuario[20];
int presupuesto;
char imprimir[50];


int main(){

//Variables locales
int opcion;
int cotizaciones;
int cont = 0;
char temp[50];

//programa
	printf("\n\n\t\tBIENVENIDO A COTIZATUPC");

	printf("\n\nCon COTIZATUPC usted podra cotizar que elemento desea comprar");
	printf("\ny asi tomar la mejor decision al momento de legir su compra.");
	printf("\nPrimero debera iniciar sesion con un nombre de usuario");

	printf("\n\nUsuario: ");	
	scanf("%s",Usuario);
	strcat(Usuario, ".txt");
    
     FILE* arch = fopen(Usuario,"a+");  //abrir archivo en modo lectura y escritura
    
         while (!feof(arch)){     // recorre el archivo hasta llegar al final ,verifica cuantas lineas tiene escrito el archivo
            fgets(temp,50,arch);    
            cont++;
           }	
     
    if(cont > 5){    //si las lineas en menor que 5 entonces se da por hecho que no hay cotizaciones anteriores
		
		printf("\nUsted tiene cotizaciones anteriores desea verlas");
		printf("\n1-si \n2-no");
		scanf("%d",&cotizaciones);
		
		if(cotizaciones == 1 ){   //le pregunta al usuario si desea ver las cotizaciones si es que tiene
	 	
	    while (!feof(arch)) {   // recorre el archivo hasta llegar al final
        
         fgets(imprimir,50,arch);      //guarda la lineas del archivo en una variable
        printf (" %c ", imprimir[50]);  //imprime las lineas del archivo
          
    }
     fclose(arch);                         //cierra el archivo de usuario
     printf("\n Desea cotizar algo:\n");
     printf("\n1-si \n2-no");
    scanf("%d",&cotizaciones);   
    
    if(cotizaciones == 2){
		printf("\n\n\tGracias por preferirnos\n");
		exit (-1);                         //finaliza el programa 
		
	}
	}
	}else{
		
		printf("\n Usted no presenta cotizaciones anteriores\n");
        printf("\n Desea cotizar algo:\n");
        printf("\n1-si \n2-no\n");
        scanf("%d",&cotizaciones);
        
       if(cotizaciones == 2){
		printf("\n\n\tGracias por preferirnos\n");
		exit (-1);                          //finaliza el programa 
	}   
	}	
    
    printf("\n\nPor favor ingrese su presupuesto:");
     scanf("%d", &presupuesto);

    printf("\n Que desea cotizar? \n");
	printf(" 1. PC \n");
	printf(" 2. Notebook \n");
	printf(" 3. Monitor \n");
	printf(" 4. Mouse \n");
	scanf("%d", &opcion);
 
     fflush(stdin);
    switch(opcion){
		
		case 1: PC();  
		break;
		
		case 2: notebook();   
		break;
		
		case 3: pantalla();   
		break;
		
		case 4: mouse();	    
		break;
		
		default: printf("ERROR, opcion incorrecta");
		
		}
	
return 0;	
}

void PC(){

	int opcion;
	printf(" Cual es su necesidad de PC? \n");
			printf(" 1. Uso general \n");
	        printf(" 2. Gaming \n"); 
	        printf(" 3. Edicion y almacenamiento \n");
	        scanf("%d", &opcion);
	        
	     fflush(stdin);
	switch(opcion){
		
		case 1: 
		if(presupuesto >  209256){
			char Leer[] = "Torres03";
			general(Leer);
		
	}else{
		if(presupuesto >  137966){
			char Leer[] = "Torres02";
			general(Leer);
		}else{
			if(presupuesto >  93980){
			char Leer[] = "Torres01";
			general(Leer);
			
		}else{
			printf("Sus parametros de busquede con coinciden con nuestra base de datos");
			
		}	
		} 	
	}				
		break;
		
		case 2:
		
		if( presupuesto >  692960){
			char Leer[] = "Torres06";
			general(Leer);
		
	}else{
		if(presupuesto >  370156){
			char Leer[] = "Torres05";
			general(Leer);
		}else{
			if(presupuesto > 171.280){
			char Leer[] = "Torres04";
			general(Leer);
			
		}else{
			printf("Sus parametros de busquede con coinciden con nuestra base de datos");
			
		}	
		} 	
	}  
		break;
		
		case 3:
		
		if(presupuesto >  720870){
			char Leer[] = "Torres09";
			general(Leer);
		
	}else{
		if(presupuesto > 389156){
			char Leer[] = "Torres08";
			general(Leer);
		}else{
			if(presupuesto >  206670){
			char Leer[] = "Torres07";
			general(Leer);
			
		}else{
			printf("Sus parametros de busquede con coinciden con nuestra base de datos");
			
		}	
		} 	
	} 
		break;
	    default: printf("ERROR, opcion incorrecta");
		
	}	            
 }  


void notebook(){
	
	int opcion;
	
	 printf(" Cual es su necesidad de notebook? \n");
	 printf(" 1. Uso general \n");
	 printf(" 2. Gaming \n");
	 scanf("%d", &opcion);
	 
	      fflush(stdin);
	switch(opcion){
		
		case 1: 
		if(presupuesto > 449989){
			char Leer[] = "Note01";
			general(Leer);
		
	}else{
		if(presupuesto >  329988){
			char Leer[] = "Note02";
			general(Leer);
		}else{
			if(presupuesto >  199988){
			char Leer[] = "Note03";
			general(Leer);
			
		}else{
			printf("Sus parametros de busquede con coinciden con nuestra base de datos");
			
		}	
		} 	
	}				
		break;
		
		case 2:
		
		if( presupuesto >  1149988){
			char Leer[] = "Note06";
			general(Leer);
		
	}else{
		if(presupuesto >  729988){
			char Leer[] = "Note05";
			general(Leer);
		}else{
			if(presupuesto > 649988){
			char Leer[] = "Note04";
			general(Leer);
			
		}else{
			printf("Sus parametros de busquede con coinciden con nuestra base de datos");
			
		}	
		} 	
	}  
		break;
	    default: printf("ERROR, opcion incorrecta");
		
	}        
}

void pantalla(){

int opcion;

      printf(" Cual es su necesidad de pantalla? \n");
	  printf(" 1. Uso general \n");
	  printf(" 2. Gaming (Tasa de refresco) \n");
	  scanf("%d", &opcion);
	  
	       fflush(stdin);
	switch(opcion){
		
		case 1: 
		if(presupuesto > 129503){
			char Leer[] = "Monitor03";
			general(Leer);
		
	}else{
		if(presupuesto >  84989){
			char Leer[] = "Monitor02";
			general(Leer);
		}else{
			if(presupuesto >  54989){
			char Leer[] = "Monitor01";
			general(Leer);
			
		}else{
			printf("Sus parametros de busquede con coinciden con nuestra base de datos");
			
		}	
		} 	
	}				
		break;
		
		case 2:
		
		if( presupuesto >  644989){
			char Leer[] = "Monitor06";
			general(Leer);
		
	}else{
		if(presupuesto >  408489){
			char Leer[] = "Monitor05";
			general(Leer);
		}else{
			if(presupuesto > 214989){
			char Leer[] = "Monitor04";
			general(Leer);
			
		}else{
			printf("Sus parametros de busquede con coinciden con nuestra base de datos");
			
		}	
		} 	
	}  
		break;
	    default: printf("ERROR, opcion incorrecta");
		
	}
		         
}

void mouse(){
	
int opcion;	

	        printf(" Cual es su necesidad de su mouse? \n");
			printf(" 1. Uso general \n");
	        printf(" 2. Gaming \n");
	         scanf("%d", &opcion);
	         
	             fflush(stdin);
switch(opcion){
		
		case 1: 
		if(presupuesto > 6989){
			char Leer[] = "Mouse03";
			general(Leer);
		
	}else{
		if(presupuesto >  4989){
			char Leer[] = "Mouse02";
			general(Leer);
		}else{
			if(presupuesto >  2789){
			char Leer[] = "Mouse03";
			general(Leer);
			
		}else{
			printf("Sus parametros de busquede con coinciden con nuestra base de datos");
			
		}	
		} 	
	}				
		break;
		
		case 2:
		
		if( presupuesto >  39989){
			char Leer[] = "Mouse06";
			general(Leer);
		
	}else{
		if(presupuesto >  16989){
			char Leer[] = "Mouse05";
			general(Leer);
		}else{
			if(presupuesto > 8989){
			char Leer[] = "Mouse04";
			general(Leer);
			
		}else{
			printf("Sus parametros de busquede con coinciden con nuestra base de datos");
			
		}	
		} 	
	}  
		break;
	    default: printf("ERROR, opcion incorrecta");

	}
}

void general(char Leer[]){
	
	int comprar;
	char aux;
    char imprimir[50];
    int opcion;
    int cont = 0;
    
    strcat(Leer, ".txt");
    
    FILE* Productos = fopen(Leer,"r");
    
    if(Productos == NULL){
            printf("No se ha podido abrir el fichero. \n");
            exit(1);
            }
    while (!feof(Productos)){
			fgets(imprimir,50,Productos);
			cont++;
			}
					
    rewind(Productos);
    
    trab = (pieza*)malloc(cont*sizeof(pieza));
        
            for (int i = 0; !feof(Productos); i++){
				vaciar(imprimir);
				aux = '0';
				for(int j = 0; aux != '-'; j++){
					aux = fgetc(Productos);
					if(aux != '-'){
						imprimir[j] = aux;
					}
				}
			copiar(imprimir, i);
			fgets(imprimir,50,Productos);
			trab[i].precio = atoi(imprimir);
			
			printf (" %s Precio: %i. \n",trab[i].nombre,trab[i].precio);
				
			}
			
			fclose(Productos);
			fflush(stdin);
				
		system("pause");
		
			printf("Desea agregarlo al carro");
			printf("1-si \n 2-no");
			scanf("%d",&comprar);
			
			if(comprar == 1 ){
			
				FILE* arch = fopen(Usuario,"w");
                fprintf(arch,"\tCOTIZACIÓN\n");
                
    for (int i = 0; !feof(Productos); i++){
				vaciar(imprimir);
				aux = '0';
				for(int j = 0; aux != '-'; j++){
					aux = fgetc(Productos);
					if(aux != '-'){
						imprimir[j] = aux;
					}
				}
			copiar(imprimir, i);
			fgets(imprimir,50,Productos);
			trab[i].precio = atoi(imprimir);

			fprintf(arch," %s Precio: %d. \n",trab[i].nombre,trab[i].precio);
				
			}            
				
				fclose(arch);
				
			}
			 printf("Desea realizar otra operacion");
			 printf("1-si \n 2-no");
			 scanf("%d",&opcion);
			 
			 if(opcion == 1){
				main(); 
				  
			}else{
			printf("\n\n\tGracias por preferirnos\n");
			printf("\nSi desea colaborar de fomar monetaria en el desarrollo de este proyecto\n");
			printf("Aportes a la Cuenta RUT:19519703-2 \n");	
			printf("Cualquier aporte es bienvenido,GRACIAS.\n\n");
				exit (-1);                         //finaliza el programa 
					
				} 
			 
}

void copiar(char imprimir[], int i){
	int N = strlen(imprimir) + 1;
	trab[i].nombre = (char*)malloc(N*sizeof(char));
	
	if (trab[i].nombre == NULL){
		printf("No se ha podido reservar memoria. \n");
		exit(1);
		}
		strcpy(trab[i].nombre,imprimir);
	}	

			
	void vaciar(char imprimir[]){
	
	for (int i=0; i<50; i++){
		imprimir[i] = '\0';
		}
	
	}
