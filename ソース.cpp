/*--+----1----+----2----+----3----+----4----+----5-----+----6----+----7----+----8----+----9----+---*/
//DxLib����m�F�p�̃v���O����


//���������� �v���O�����ǉ��������� ����������������������������������������

//########## �w�b�_�[�t�@�C���ǂݍ��� ##########
#include "DxLib.h"

#include "header.h"

//########## �v���O�����ōŏ��Ɏ��s�����֐� ##########
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);			//�E�B���h�E���[�h�ɐݒ�
	SetGraphMode(GAME_WIDTH, GAME_HEIGHT, GAME_COLOR);	//�w��̐��l�ŃE�B���h�E��\������
	SetWindowStyleMode(GAME_WINDOW_BAR);		//�^�C�g���o�[�̓f�t�H���g�ɂ���
	SetMainWindowText(TEXT(GAME_WINDOW_NAME));	//�E�B���h�E�̃^�C�g���̕���
	SetAlwaysRunFlag(TRUE);						//��A�N�e�B�u�ł����s����

	if (DxLib_Init() == -1) { return -1; }	//�c�w���C�u��������������

	int DrawX = 0;	//�\���ʒuX
	int DrawY = 0;	//�\���ʒuY

	DrawString(DrawX, DrawY, "Hello World", GetColor(255, 255, 255));	//������`��

	WaitKey();	//�L�[�[���͑҂�
	DxLib_End();	//�c�w���C�u�����g�p�̏I������

	return 0;
}
//���������� �v���O�����ǉ������܂� ��������������������������������������������
