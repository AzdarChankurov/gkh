/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Add_Tenants_form;

//## auto_generated
class Authorisation_form;

//## auto_generated
class Button_Add;

//## auto_generated
class Button_Delete;

//## auto_generated
class Button_Edit;

//## auto_generated
class DataBaseTable_Tenants;

//## auto_generated
class Delete_Tenants_form;

//## auto_generated
class Edit_Tenants_form;

//## auto_generated
class Main_form;

//#[ ignore
#define Error_Default_id 18601

#define Authorization_Default_id 18602

#define Authorisation_Default_id 18603
//#]

//## package Default



//## event Error()
class Error : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Error();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event Authorization()
class Authorization : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Authorization();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event Authorisation()
class Authorisation : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Authorisation();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
