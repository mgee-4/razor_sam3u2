/***********************************************************************************************************************
File: main.h

Description:
Header file for main.c.
*******************************************************************************/

#ifndef __MAIN_H
#define __MAIN_H


/***********************************************************************************************************************
* Constant Definitions
***********************************************************************************************************************/
#define U8_MAX_DRINKS (u8)3
#define U8_MAX_SERVERS u(8)8
#define U32_DRINK_SERVE_TIME    (u32)3000   /* Loop iterations before drink is removed */

/***********************************************************************************************************************
* Type Definitions
***********************************************************************************************************************/
typedef enum {EMPTY, BEER, SHOOTER, WINE, HIBALL} DrinkType;

/***********************************************************************************************************************
* Structure declarations
***********************************************************************************************************************/ 
typdef struct{
  u8 u8ServerNum;
  DrinkType asServingTray[U8_MAX_DRINKS];
  void* psNextServer;
} Server;

/***********************************************************************************************************************
* Function declarations
***********************************************************************************************************************/  
bool CreateServer(Server** psServerList_)
{
  Server* psNewServer = 0;
  Server** pServerParser;
  if(Main_u8Servers >= U8_MAX_SERVERS)
  {
    return(FALSE);
  }
  psNewServer = malloc(sizeof(Server));
  
  return(TRUE);
}

bool RemoveServer(Server** psServerList_)
{
  Server* psNewServer = 0;
  Server** pServerParser;
  
  if(Main_u8Servers >= U8_MAX_SERVERS)
  {
    return(FALSE);
  }
  psNewServer = malloc(sizeof(Server));
  
  return(TRUE);
}
    
/*
Need to add:
- Function to add drinks to servers
- Function to delete finished server from linked list
- 
*/
      
    #endif /* __MAIN_H */