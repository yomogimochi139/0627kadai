#include <stdio.h>
#include <random>
#include "input.h"
#include "judge.h"

JudgeResult CompareNumber(int RandomNumber, int InputNumber)
{
	if (InputNumber == RandomNumber)
	{
		//　入力した数字が生成されたランダムな数字と一致した場合
		return JudgeResult::Hit;
	}
	else
	{
		//　入力した数字が生成されたランダムな数字と一致しなかった場合
		return JudgeResult::Blow;
	}
}

void ShowResult(JudgeResult result)
{
	switch (result)
	{
	case JudgeResult::Hit:
		printf("ヒット\n");
		break;
	case JudgeResult::Blow:
		printf("ブロー\n");
		break;
	}
}