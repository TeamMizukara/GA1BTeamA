#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//オブジェクト:ブロック
class CObjBlock :public CObj
{
public:
	CObjBlock();
	~CObjBlock() {};
	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー
private:
	int m_map[20][25]; //マップ情報仮
};