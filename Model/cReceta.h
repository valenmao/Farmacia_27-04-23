/**
 * Project Untitled
 */


#ifndef _CRECETA_H
#define _CRECETA_H

class cReceta {
public: 

cReceta(string _obraSoc, string _medicamento, int _dosis);
~cReceta();
int GET_DOSIS();

string GET_MEDICAMENTO();
    
string GET_OBRASOCIAL();

    

private: 
    string ObraSocial;
    string Medicamento;
    int Dosis;
};

#endif //_CRECETA_H