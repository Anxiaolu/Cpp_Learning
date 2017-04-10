#include<iostream>
using namespace std;

class Matrix {   
	friend Matrix operator+(const Matrix &a, const Matrix &b); 
	friend Matrix operator*(const Matrix &a, const Matrix &b); 
public :   
	Matrix(int l,int c);
	Matrix(const Matrix &m);
	~Matrix();
	void setLine(int l);  
	void setCol(int c);  
	void setElems();

	int getLine() const;  
	int getCol() const;  
	void print() const;     
	Matrix& operator= (const Matrix &m);  
	Matrix operator~ () const;   
private :  
	int line;  
	int col;  
	int *elems; 
};

Matrix::Matrix(int l,int c) {  
	setLine(l); 
	setCol(c);  
	elems = new int[col*line]; 
}  

Matrix::Matrix(const Matrix &m) {  
	line = m.line; col = m.col;  
	elems = new int[line * col]; 
	for(int i = 0;i < line * col;i++) 
		elems[i]= m.elems[i]; 
} 
