#pragma once
enum class JudgeResult
{
	Hit,
	Blow
};

//　ランダムに生成した数と入力した数を比較
JudgeResult CompareNumber(int RandomNumber, int InputNumber);
//　結果表示
void ShowResult(JudgeResult result);
