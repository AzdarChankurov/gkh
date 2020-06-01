/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataBaseTable_Tenants
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DataBaseTable_Tenants.h
*********************************************************************/

#ifndef DataBaseTable_Tenants_H
#define DataBaseTable_Tenants_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsAdd_Tenants_form
class Add_Tenants_form;

//## link itsDelete_Tenants_form
class Delete_Tenants_form;

//## link itsEdit_Tenants_form
class Edit_Tenants_form;

//## package Default

//## class DataBaseTable_Tenants
class DataBaseTable_Tenants {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DataBaseTable_Tenants();
    
    //## auto_generated
    ~DataBaseTable_Tenants();
    
    ////    Operations    ////
    
    //## operation Show()
    void Show();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getAddress() const;
    
    //## auto_generated
    void setAddress(int p_Address);
    
    //## auto_generated
    int getMiddlename() const;
    
    //## auto_generated
    void setMiddlename(int p_Middlename);
    
    //## auto_generated
    int getName() const;
    
    //## auto_generated
    void setName(int p_Name);
    
    //## auto_generated
    int getPassport() const;
    
    //## auto_generated
    void setPassport(int p_Passport);
    
    //## auto_generated
    int getSurname() const;
    
    //## auto_generated
    void setSurname(int p_Surname);
    
    //## auto_generated
    Add_Tenants_form* getItsAdd_Tenants_form() const;
    
    //## auto_generated
    void setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form);
    
    //## auto_generated
    Delete_Tenants_form* getItsDelete_Tenants_form() const;
    
    //## auto_generated
    void setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form);
    
    //## auto_generated
    Edit_Tenants_form* getItsEdit_Tenants_form() const;
    
    //## auto_generated
    void setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Address;		//## attribute Address
    
    int Middlename;		//## attribute Middlename
    
    int Name;		//## attribute Name
    
    int Passport;		//## attribute Passport
    
    int Surname;		//## attribute Surname
    
    ////    Relations and components    ////
    
    Add_Tenants_form* itsAdd_Tenants_form;		//## link itsAdd_Tenants_form
    
    Delete_Tenants_form* itsDelete_Tenants_form;		//## link itsDelete_Tenants_form
    
    Edit_Tenants_form* itsEdit_Tenants_form;		//## link itsEdit_Tenants_form
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form);
    
    //## auto_generated
    void _setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form);
    
    //## auto_generated
    void _clearItsAdd_Tenants_form();
    
    //## auto_generated
    void __setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form);
    
    //## auto_generated
    void _setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form);
    
    //## auto_generated
    void _clearItsDelete_Tenants_form();
    
    //## auto_generated
    void __setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form);
    
    //## auto_generated
    void _setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form);
    
    //## auto_generated
    void _clearItsEdit_Tenants_form();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataBaseTable_Tenants.h
*********************************************************************/
