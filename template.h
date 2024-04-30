/***********************************************************************************************************************
 *
 * @file    template.h
 * @brief   Standard Leandro C file template
 * @author  Leandro Pereira
 * @date    30/10/2023
 * @company 
 *
 **********************************************************************************************************************/

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

/***********************************************************************************************************************
 * INCLUDES
 **********************************************************************************************************************/

#include <stdint.h>
//Include in header files only those declarations that are required for 
//the header file to work correctly and as expected when using the header file's contents.
//Adding multiple include statements to a header file can cause problems

/***********************************************************************************************************************
 * MACROS
 **********************************************************************************************************************/

#define _swap_int16(x) (((unsigned short)(x) >> 8) | ((unsigned short)(x) << 8))

//The #define directive can be use to define MACROS or CONSTANTS, the location of the declaration in this section
// or in the section below is based on the type of the declaration, if it is a MACRO it should be declared in this
// section, if it is a CONSTANT it should be declared in the section below.

/***********************************************************************************************************************
 * COSNTANTS
 **********************************************************************************************************************/

#define VALUE 4

const int GLOBAL_CONSTANT = 2;

/***********************************************************************************************************************
 * GLOGAL TYPES DECLARATIONS
 **********************************************************************************************************************/

typedef struct {
    int dataMember;
} TemplateStructDeclaration;

typedef enum {
    ENUM_MEMBER = 0
} TemplateEnumDeclaration;
/***********************************************************************************************************************
 * GLOBALS VARIABLES
 **********************************************************************************************************************/

int g_globalVariable
int * gp_PointerToGlobalVariable = &g_globalVariable;

/***********************************************************************************************************************
 * PUBLIC FUNCTIONS
 **********************************************************************************************************************/

void Template_Public_Function(float var1, int var2);

/***********************************************************************************************************************
 * END OF FILE
 **********************************************************************************************************************/
#endif /* TEMPLATE_H_ */


// --- Copyng section ---
// Copy this section below when creating a new file for a .h file

/***********************************************************************************************************************
 *
 * @file    template.h
 * @brief   Standard Leandro C file template
 * @author  Leandro Pereira
 * @date    30/10/2023
 * @company 
 *
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * INCLUDES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * COSNTANTS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * GLOGAL TYPES DECLARATIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * GLOBALS VARIABLES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * PUBLIC FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * END OF FILE
 **********************************************************************************************************************/
