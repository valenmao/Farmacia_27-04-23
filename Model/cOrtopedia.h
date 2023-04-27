/**
 * Project Untitled
 */


#ifndef _CORTOPEDIA_H
#define _CORTOPEDIA_H

#include "cProducto.h"
#include "eOrtopedia.h"

class cOrtopedia: public cProducto {
private:
    eOrtopedia tipoProducto;

public: 
    
eOrtopedia GET_TIPO();
    
/**
 * @param float
 * @param string
 * @param int
 * @param string
 * @param eOrtopedia
 */
cOrtopedia(float _precio, string _nombre, int _cantidad, string _marca, eOrtopedia _tipoProduct) {

}

~cOrtopedia();

};

#endif //_CORTOPEDIA_H