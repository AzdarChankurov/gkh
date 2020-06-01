/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Authorisation_form
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Authorisation_form.h
*********************************************************************/

#ifndef Authorisation_form_H
#define Authorisation_form_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsMain_form
class Main_form;

//## package Default

//## class Authorisation_form
class Authorisation_form {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Authorisation_form();
    
    //## auto_generated
    ~Authorisation_form();
    
    ////    Operations    ////
    
    //## operation Authorisation()
    void Authorisation();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getLogin() const;
    
    //## auto_generated
    void setLogin(int p_Login);
    
    //## auto_generated
    int getPassword() const;
    
    //## auto_generated
    void setPassword(int p_Password);
    
    //## auto_generated
    Main_form* getItsMain_form() const;
    
    //## auto_generated
    void setItsMain_form(Main_form* p_Main_form);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Login;		//## attribute Login
    
    int Password;		//## attribute Password
    
    ////    Relations and components    ////
    
    Main_form* itsMain_form;		//## link itsMain_form
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsMain_form(Main_form* p_Main_form);
    
    //## auto_generated
    void _setItsMain_form(Main_form* p_Main_form);
    
    //## auto_generated
    void _clearItsMain_form();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Authorisation_form.h
*********************************************************************/
