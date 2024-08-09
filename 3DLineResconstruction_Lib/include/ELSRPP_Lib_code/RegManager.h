#ifndef REGMAN__H
#define REGMAN__H


#include"GeneralFuncs.h"
class RegManager
{
	int maxitera,i,j,maxidx;
public:
	cv::Point3i*reg;
	cv::Point3i*rectreg;
	cv::Point3i*anchorreg;

	uchar*iteraarr;
	float*gradarr;
	int counter,ed1,ed2,ed3,ed4,tailcounter,rectsize;
	RegManager(int m,int n);
	~RegManager(void);
	int splitTheReg();
	bool satisfyGradAligned(int anchorsize,int idx,float dis_2);

	float s_x2, s_xy, s_x, s_y2, s_y;
	void revise_sumxy(float x, float y);
	
	
};


#endif // !REGMAN__H