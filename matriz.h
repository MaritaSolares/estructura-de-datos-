#pragma once
class matriz
{
private:
	int Ma[m][n], N;
	m=2;
	n=3;
public:
	//cnstc
	matriz(void);
	//dstrc
	~matriz(void);
	//metods
	void cargar(int Ma[m][n], int N);
	void mostar(int Ma[m][n], int N);
	void ordenar(int Ma[m][n], int N)
};

