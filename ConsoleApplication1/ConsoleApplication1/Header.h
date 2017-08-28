#pragma once
#ifndef Calculator_H
#define Calculator_H
namespace calculator
{
	class Calculator
	{
	private:
		double num1, num2;
		double result;
	public:
		Calculator();
		~Calculator();
		void Handler(int number1, int number2);//
		void ChangeSignNumber();//����� ����� � ����� �� ���������������
		void SetNumber1();//
		void SetNumber2();//
		void AdditionNumber();//��������
		void SubtractionNumber();//���������
		void DivisionNumber();//�������
		void MultiplicationNumber();//���������
		void TakingFromSquare();//������ �� ��� ����������� �����
		void ErectioToTheSquare();//���������� � �������
		void OneDivideX();//1/�
		void ShowMenuFirst();
		void ShowMenuSecond();
		void RaisingNumberAnyDegree();
		void SinCosTan();
		void Log();
		void Factorial();

		
	};


}
#endif // !Calculator
