#include <iostream>
#include "SOFITEL.h"
#include "Prenium.h"

long long Prenium::TinhDoanhThu() {
	return this->SoDem * 500000 + this->PhiDichVu;
}
