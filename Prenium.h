#pragma once
#include "SOFITEL.h"
class Prenium : public SOFITEL {
protected:
	float PhiDichVu;
public:
	Prenium() : SOFITEL(){
		PhiDichVu = 0;
	}
	Prenium(int sd, float PhiDV) : SOFITEL(sd) {
		PhiDichVu = PhiDV;
	}
	long long TinhDoanhThu();
	 
	~Prenium() {}
	
};