void matriz::mostrar(int Ma[m][n], int N)
{
	int m,n;
	 {  for (m=0; m<n; m++)
	      {  for (n=0; n<N; n++)
	           {  cout<<"Ma["<<m<<"]["<<n<<"] =" ;
                  cin>>Ma[m][n];
	           }
	      }
     } 

void matriz::ordenar(int Ma[m][n], int N)
{
	int m,n,aux,aux2,x ;
	for ( m=0 ; m<N-1 ; m++ )
	 {
		for (n=0; n<N-1; n++)
		    {  for( x=i+1 ; x<N ; x++ )
		       { if( Ma[m][n]>vec[x] )
			      {	aux = Ma[x];
			     	Ma[x] = Ma[m];
				    Ma[m] = aux;
			      }
	        	}
        	}
      }
}

