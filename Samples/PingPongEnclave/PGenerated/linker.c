
  #include "linker.h"
  PRT_UINT32 P_I_Main = 0;
  PRT_UINT32 P_I_PONG = 1;
  PRT_UINT32 P_MACHINE_Main = 0;
  PRT_UINT32 P_MACHINE_PONG = 1;
  PRT_UINT32 _P_FOREIGN_TYPES_COUNT = 0;
  PRT_UINT32 _P_I_COUNT = 2;
  PRT_UINT32 _P_MACHINES_COUNT = 2;
  PRT_UINT32 P_GEND_LINKMAP_Main[] = 
  {
    0U,
    1U
  };
  PRT_UINT32 P_GEND_LINKMAP_PONG[] = 
  {
    -1L,
    1U
  };
  PRT_UINT32 P_GEND_MACHDEF_MAP[] = 
  {
    0U,
    1U
  };
  PRT_EVENTDECL *P_GEND_EVENTS[] = 
  {
    &_P_EVENT_NULL_STRUCT,
    &_P_EVENT_HALT_STRUCT,
    &P_EVENT_Ping_STRUCT,
    &P_EVENT_Pong_STRUCT,
    &P_EVENT_Success_STRUCT
  };
  PRT_MACHINEDECL *P_GEND_MACHINES[] = 
  {
    &P_MACHINE_Main_STRUCT,
    &P_MACHINE_PONG_STRUCT
  };
  PRT_UINT32 *P_GEND_LINKMAP[] = 
  {
    P_GEND_LINKMAP_Main,
    P_GEND_LINKMAP_PONG
  };
  PRT_PROGRAMDECL P_GEND_PROGRAM = 
  {
    5U,
    2U,
    0U,
    0U,
    P_GEND_EVENTS,
    P_GEND_MACHINES,
    NULL,
    NULL,
    P_GEND_LINKMAP,
    P_GEND_MACHDEF_MAP,
    0U,
    NULL
  };
  