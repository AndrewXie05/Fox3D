#pragma once

#include <windows.h>

#ifdef _MSC_VER
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "user32.lib")
#endif

class Screen {
public:
	static int m_exit;
	unsigned char *m_fb = NULL;		// frame buffer
	static int m_keys[512];	// ��ǰ���̰���״̬

public:
	int init(int w, int h, const char *title);	// ��Ļ��ʼ��
	void dispatch(void);							// ������Ϣ
	void update(void);							// ��ʾ FrameBuffer

private:
	int m_w, m_h;
	int m_mx = 0, m_my = 0, m_mb = 0;
	HWND m_handle = NULL;		// ������ HWND          
	HDC m_dc = NULL;			// ���׵� HDC          
	HBITMAP m_hb = NULL;		// DIB                
	HBITMAP m_ob = NULL;		// �ϵ� BITMAP         
	long m_pitch = 0;

private:
	int close(void);								// �ر���Ļ

};
