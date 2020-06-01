/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dispatcher
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Dispatcher.h
*********************************************************************/

#ifndef Dispatcher_H
#define Dispatcher_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## actor Dispatcher
#include "Electrician.h"
//## actor Dispatcher
#include "Plumber.h"
//## package Default

//## actor Dispatcher
class Dispatcher : public Plumber, public Electrician {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Dispatcher();
    
    //## auto_generated
    ~Dispatcher();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dispatcher.h
*********************************************************************/
