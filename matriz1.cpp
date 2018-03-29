int main()
{	int Ma[m][n], N, op;
    matriz, matriz1;
	do
	{      cout<<"ingrese las filas"<<endl;
           cin>>m;
           cout<<"ingrese las columnas"<<endl;
           cin>>n;
	}while ((N>Ma[m][n]) || (N<=0));
    do
	{cout<<"MENU"<<endl;
	 cout<<"[1]=Cargar matriz"<<endl;
	 cout<<"[2]=Mostrar matriz"<<endl;
	 cout<<"[3]=Ordenar matriz"<<endl;
	 cout<<"[0]=Salir"<<endl;
	 cout<<"ELIJA UNA OPCION"<<endl;
	 cin>>op;
	}while (
	
	switch (op)
	{case 1:
			matriz1.cargar(Ma[m][n], N); 
			break;
		case 2:
			matriz1.mostrar(Ma[m][n], N);
			break;
		case 3:
			matriz1.ordenar(Ma[m][n], N);
			break;
		case 0: 
			cout<<"Salir"<<endl;
			break;
		default:
			cout<<"Error: Opcion no valida..."<<endl;
			break;
		}
	}while(op!=0);
getch();
  
}
