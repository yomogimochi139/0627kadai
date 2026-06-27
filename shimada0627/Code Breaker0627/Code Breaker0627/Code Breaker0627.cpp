#include <stdio.h>
#include <random>
#include "input.h"
#include "judge.h"

int main()
{
	//　ランダムな数字の生成
	int _randomNumber = FourRandomNumber();

	//　生成された数字と入力した数字が一致するまで繰り返す
	while (true)
	{
		//　入力した数字の取得
		int _inputNumber = FourInputNumber();

		//　生成された数字と入力した数字を比較
		JudgeResult result = CompareNumber(_randomNumber, _inputNumber);
		ShowResult(result);
	}
}
