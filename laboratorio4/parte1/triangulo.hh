#include "figura.hh"

class MiTriangulo: public MiFigura{ 
	public:
		MiTriangulo(void);
		bool area(void);
		bool perimetro(void);
		bool girarHorizontal(void);
		bool girarVertical(void);
};
