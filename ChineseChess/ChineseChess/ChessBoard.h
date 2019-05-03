#include <string>
#include <vector>
#include "chessBasic.h"
using namespace std;

class ChessBoard
{
public:
	//��l�ƴѽL
	ChessBoard(vector<vector<int>>,bool);
	//���o���e�y�дѤl
	int getChess(void);
	//���o���e�U�Ѥ�
	bool getTurn(void);
	//���ܤU�Ѥ�
	void changeTurn(void);
	//�������eX�y��
	int getCurX(void);
	//���o���eY�y��
	int getCurY(void);
	//���ʮy��
	void changeCoordinate(void);
	//��ܭn���ʪ��X�l
	bool chooseChess(chessBasic*);
	//�C������ESC�s�X���
	int menu(void);
	//���ʴѤl
	int move(chessBasic*);
	//�x�s�C�@�����p
	void saveBoard(void);
	//�x�s���e�ѧ��b�ɮפ�
	void saveFile(void);
	//����
	void regret(void);
	//���o�ѽL
	vector<vector<int>> getBoard(void);
private:
	vector<vector<int>> curBoard;
	vector<vector<vector<int>>> preBoard;
	bool turn;
	int curX, curY;
};