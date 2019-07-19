#pragma once
#include"Math.h"

class Device {
public:
	Device(void *fb, int width, int height);

	~Device();

	void clear();

	void drawPixel(const int &x, const int &y, const XieColor &color);

private:
	//transform_t transform;      // ����任��
	int m_width;                  // ���ڿ��
	int m_height;                 // ���ڸ߶�
	IUINT32 **m_framebuffer;      // ���ػ��棺framebuffer[y] ����� y��
	//float **zbuffer;            // ��Ȼ��棺zbuffer[y] Ϊ�� y��ָ��
	//IUINT32 **texture;          // ����ͬ����ÿ������
	//int tex_width;              // ������
	//int tex_height;             // ����߶�
	//float max_u;                // ��������ȣ�tex_width - 1
	//float max_v;                // �������߶ȣ�tex_height - 1
	//int render_state;           // ��Ⱦ״̬
	XieColor m_foreground;
	XieColor m_background;

private:
	IUINT32 gdiColorTransform(XieColor color);
};
