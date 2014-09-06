//! La clase Prueba .
/*!
* Acá una descripción detallada sobre la clase .
*/

class Test
{
public :
//! Una variable pública.
/*!
* Acá descripción detallada la variable publicInt.
*/

int publicInt;

char publicChar //!< Brief Acá breve descripción de la variable publicChar
//! Método Constructor.
/*! \brief Una descripción breve del constructor
*/

Test();
//! Método Constructor.
/*! \brief Una descripción breve del constructor
*/
~Test();

//! Método testMe ().
/*!
* Una descripción más detallada de este miembro
\param a Argumento de tipo entero.
\param s Puntero tipo caracter.
\return Este método devuelve un entero
\sa Test() , ~Test() and testMeToo()
*/

int testMe (int a , const char *s);
//! Otro miembro .
/*! \brief Una descripción breve del otro miembro.
\param c1 Prime r arguemto .
\param c2 Segundo argumento .
*/
virtual void testMeToo(char c1, char c2) = 0 ;
};
