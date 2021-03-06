
  #include "pingpong.h"
  #define P_SEQ
  #define P_STMT_0(s, x0, f0) P_SEQ(p_tmp_stmt_0 = (x0), (s), ((f0) ? PrtFreeValue(p_tmp_stmt_0) : 0U))
  #define P_STMT_1(s, x1, f1, x0, f0) P_SEQ(p_tmp_stmt_0 = (x0), p_tmp_stmt_1 = (x1), (s), ((f0) ? PrtFreeValue(p_tmp_stmt_0) : 0U), ((f1) ? PrtFreeValue(p_tmp_stmt_1) : 0U))
  #define P_BOOL_EXPR(x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_bool = PrtPrimGetBool(p_tmp_expr_0), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), p_tmp_bool)
  #define P_EXPR_0(x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_expr_0)
  #define P_EXPR_3(x3, f3, x2, f2, x1, f1, x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_expr_1 = (x1), p_tmp_expr_2 = (x2), p_tmp_expr_3 = (x3), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), ((f1) ? PrtFreeValue(p_tmp_expr_1) : 0U), ((f2) ? PrtFreeValue(p_tmp_expr_2) : 0U), p_tmp_expr_3)
  #define P_TUPLE_0(t, x0) P_SEQ(p_tmp_tuple = PrtMkDefaultValue(t), PrtTupleSet(p_tmp_tuple, 0U, (x0)), p_tmp_tuple)
  static PRT_TYPE P_GEND_TYPE_0 = 
  {
    PRT_KIND_BOOL,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_1 = 
  {
    PRT_KIND_EVENT,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_2 = 
  {
    PRT_KIND_INT,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_3 = 
  {
    PRT_KIND_MACHINE,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_4 = 
  {
    PRT_KIND_NULL,
    
    {
        NULL
    }
  };
  PRT_EVENTDECL *P_GEND_EVENTSET_Ping_INNER[] = 
  {
    &P_EVENT_Ping_STRUCT
  };
  PRT_EVENTDECL *P_GEND_EVENTSET_Pong_INNER[] = 
  {
    &P_EVENT_Pong_STRUCT
  };
  PRT_EVENTDECL *P_GEND_EVENTSET_Success_INNER[] = 
  {
    &P_EVENT_Success_STRUCT
  };
  PRT_EVENTDECL P_EVENT_Ping_STRUCT = 
  {
    
    {
        PRT_VALUE_KIND_EVENT,
        0U
    },
    "Ping",
    1U,
    &P_GEND_TYPE_3,
    0U,
    NULL
  };
  PRT_EVENTDECL P_EVENT_Pong_STRUCT = 
  {
    
    {
        PRT_VALUE_KIND_EVENT,
        0U
    },
    "Pong",
    1U,
    &P_GEND_TYPE_4,
    0U,
    NULL
  };
  PRT_EVENTDECL P_EVENT_Success_STRUCT = 
  {
    
    {
        PRT_VALUE_KIND_EVENT,
        0U
    },
    "Success",
    4294967295U,
    &P_GEND_TYPE_4,
    0U,
    NULL
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET = 
  {
    0U,
    NULL,
    NULL
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET_Ping = 
  {
    1U,
    P_GEND_EVENTSET_Ping_INNER,
    NULL
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET_Pong = 
  {
    1U,
    P_GEND_EVENTSET_Pong_INNER,
    NULL
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET_Success = 
  {
    1U,
    P_GEND_EVENTSET_Success_INNER,
    NULL
  };
  PRT_TYPE P_GEND_TYPE_Main = 
  {
    PRT_KIND_MACHINE,
    
    {
        NULL
    }
  };
  PRT_TYPE P_GEND_TYPE_PONG = 
  {
    PRT_KIND_MACHINE,
    
    {
        NULL
    }
  };
  PRT_VARDECL P_GEND_VARS_Main[] = 
  {
    
    {
        "pongId",
        &P_GEND_TYPE_3,
        0U,
        NULL
    }
  };
  PRT_TRANSDECL P_GEND_TRANS_Main_Ping_Init[] = 
  {
    
    {
        P_STATE_Main_Ping_Init,
        &P_EVENT_Success_STRUCT,
        P_STATE_Main_Ping_SendPing,
        &P_FUN_Main_ANON2_STRUCT,
        0U,
        NULL
    }
  };
  PRT_TRANSDECL P_GEND_TRANS_Main_Ping_SendPing[] = 
  {
    
    {
        P_STATE_Main_Ping_SendPing,
        &P_EVENT_Success_STRUCT,
        P_STATE_Main_Ping_WaitPong,
        &P_FUN_Main_ANON5_STRUCT,
        0U,
        NULL
    }
  };
  PRT_TRANSDECL P_GEND_TRANS_Main_Ping_WaitPong[] = 
  {
    
    {
        P_STATE_Main_Ping_WaitPong,
        &P_EVENT_Pong_STRUCT,
        P_STATE_Main_Ping_SendPing,
        &P_FUN_Main_ANON8_STRUCT,
        0U,
        NULL
    }
  };
  PRT_TRANSDECL P_GEND_TRANS_PONG_Pong_SendPong[] = 
  {
    
    {
        P_STATE_PONG_Pong_SendPong,
        &P_EVENT_Success_STRUCT,
        P_STATE_PONG_Pong_WaitPing,
        &P_FUN_PONG_ANON6_STRUCT,
        0U,
        NULL
    }
  };
  PRT_TRANSDECL P_GEND_TRANS_PONG_Pong_WaitPing[] = 
  {
    
    {
        P_STATE_PONG_Pong_WaitPing,
        &P_EVENT_Ping_STRUCT,
        P_STATE_PONG_Pong_SendPong,
        &P_FUN_PONG_ANON3_STRUCT,
        0U,
        NULL
    }
  };
  static PRT_VALUE *P_FUN_Main_ANON0_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON10_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON11_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_funstmt_ret;
      PRT_VALUE *p_tmp_ret;
      PRT_VALUE *p_tmp_stmt_0;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      p_tmp_funstmt_ret = PrtCloneValue(PrtMkInterface(context, P_I_PONG, 0U)->id);
      PrtSetGlobalVarEx(p_tmp_mach_priv, P_VAR_Main_pongId, p_tmp_funstmt_ret, PRT_FALSE);
      P_STMT_0(PrtRaise(p_tmp_mach_priv, p_tmp_stmt_0, 0U), P_EXPR_0(&P_EVENT_Success_STRUCT.value, PRT_FALSE), PRT_FALSE);
      goto P_EXIT_FUN;
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON12_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_event;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_expr_1;
      PRT_VALUE *p_tmp_expr_2;
      PRT_VALUE *p_tmp_expr_3;
      PRT_VALUE *p_tmp_machine;
      PRT_VALUE *p_tmp_ret;
      PRT_VALUE *p_tmp_stmt_0;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      P_SEQ(p_tmp_machine = P_EXPR_0(p_tmp_mach_priv->varValues[P_VAR_Main_pongId], PRT_FALSE), p_tmp_event = P_EXPR_0(&P_EVENT_Ping_STRUCT.value, PRT_FALSE), P_EXPR_3(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_expr_2), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_expr_2), p_tmp_expr_1, 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), NULL), PRT_FALSE, p_tmp_machine, PRT_FALSE, p_tmp_event, PRT_FALSE, p_tmp_mach_priv->id, PRT_FALSE));
      P_STMT_0(PrtRaise(p_tmp_mach_priv, p_tmp_stmt_0, 0U), P_EXPR_0(&P_EVENT_Success_STRUCT.value, PRT_FALSE), PRT_FALSE);
      goto P_EXIT_FUN;
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON1_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON2_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON3_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON4_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON5_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON6_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON7_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON8_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Main_ANON9_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_PONG_ANON0_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_PONG_ANON1_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_PONG_ANON2_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_PONG_ANON3_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_PONG_ANON4_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_PONG_ANON5_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_PONG_ANON6_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_PONG_ANON7_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_ret;
      PRT_VALUE *p_tmp_stmt_0;
      PRT_VALUE *p_tmp_stmt_1;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      P_STMT_1(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_stmt_0), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_stmt_0), p_tmp_stmt_1, 0U)), P_EXPR_0(&P_EVENT_Pong_STRUCT.value, PRT_FALSE), PRT_FALSE, P_EXPR_0(p_tmp_frame.locals[0U], PRT_FALSE), PRT_FALSE);
      P_STMT_0(PrtRaise(p_tmp_mach_priv, p_tmp_stmt_0, 0U), P_EXPR_0(&P_EVENT_Success_STRUCT.value, PRT_FALSE), PRT_FALSE);
      goto P_EXIT_FUN;
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  PRT_FUNDECL *P_GEND_FUNS_Main[] = 
  {
    &P_FUN_Main_ANON0_STRUCT,
    &P_FUN_Main_ANON1_STRUCT,
    &P_FUN_Main_ANON2_STRUCT,
    &P_FUN_Main_ANON3_STRUCT,
    &P_FUN_Main_ANON4_STRUCT,
    &P_FUN_Main_ANON5_STRUCT,
    &P_FUN_Main_ANON6_STRUCT,
    &P_FUN_Main_ANON7_STRUCT,
    &P_FUN_Main_ANON8_STRUCT,
    &P_FUN_Main_ANON9_STRUCT,
    &P_FUN_Main_ANON10_STRUCT,
    &P_FUN_Main_ANON11_STRUCT,
    &P_FUN_Main_ANON12_STRUCT
  };
  PRT_FUNDECL *P_GEND_FUNS_PONG[] = 
  {
    &P_FUN_PONG_ANON0_STRUCT,
    &P_FUN_PONG_ANON1_STRUCT,
    &P_FUN_PONG_ANON2_STRUCT,
    &P_FUN_PONG_ANON3_STRUCT,
    &P_FUN_PONG_ANON4_STRUCT,
    &P_FUN_PONG_ANON5_STRUCT,
    &P_FUN_PONG_ANON6_STRUCT,
    &P_FUN_PONG_ANON7_STRUCT
  };
  PRT_FUNDECL P_FUN_Main_ANON0_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON0_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON10_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON10_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON11_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON11_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON12_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON12_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON1_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON1_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON2_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON2_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON3_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON3_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON4_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON4_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON5_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON5_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON6_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON6_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON7_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON7_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON8_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON8_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Main_ANON9_STRUCT = 
  {
    NULL,
    &P_FUN_Main_ANON9_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_PONG_ANON0_STRUCT = 
  {
    NULL,
    &P_FUN_PONG_ANON0_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_PONG_ANON1_STRUCT = 
  {
    NULL,
    &P_FUN_PONG_ANON1_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_PONG_ANON2_STRUCT = 
  {
    NULL,
    &P_FUN_PONG_ANON2_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_PONG_ANON3_STRUCT = 
  {
    NULL,
    &P_FUN_PONG_ANON3_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_PONG_ANON4_STRUCT = 
  {
    NULL,
    &P_FUN_PONG_ANON4_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_PONG_ANON5_STRUCT = 
  {
    NULL,
    &P_FUN_PONG_ANON5_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_PONG_ANON6_STRUCT = 
  {
    NULL,
    &P_FUN_PONG_ANON6_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_PONG_ANON7_STRUCT = 
  {
    NULL,
    &P_FUN_PONG_ANON7_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_3,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_STATEDECL P_GEND_STATES_Main[] = 
  {
    
    {
        "Done",
        0,
        0,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET,
        NULL,
        NULL,
        &P_FUN_Main_ANON9_STRUCT,
        &P_FUN_Main_ANON10_STRUCT,
        0U,
        NULL
    },
    
    {
        "Ping_Init",
        1,
        0,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET_Success,
        &P_GEND_EVENTSET,
        P_GEND_TRANS_Main_Ping_Init,
        NULL,
        &P_FUN_Main_ANON11_STRUCT,
        &P_FUN_Main_ANON1_STRUCT,
        0U,
        NULL
    },
    
    {
        "Ping_SendPing",
        1,
        0,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET_Success,
        &P_GEND_EVENTSET,
        P_GEND_TRANS_Main_Ping_SendPing,
        NULL,
        &P_FUN_Main_ANON12_STRUCT,
        &P_FUN_Main_ANON4_STRUCT,
        0U,
        NULL
    },
    
    {
        "Ping_WaitPong",
        1,
        0,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET_Pong,
        &P_GEND_EVENTSET,
        P_GEND_TRANS_Main_Ping_WaitPong,
        NULL,
        &P_FUN_Main_ANON6_STRUCT,
        &P_FUN_Main_ANON7_STRUCT,
        0U,
        NULL
    }
  };
  PRT_STATEDECL P_GEND_STATES_PONG[] = 
  {
    
    {
        "Pong_SendPong",
        1,
        0,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET_Success,
        &P_GEND_EVENTSET,
        P_GEND_TRANS_PONG_Pong_SendPong,
        NULL,
        &P_FUN_PONG_ANON7_STRUCT,
        &P_FUN_PONG_ANON5_STRUCT,
        0U,
        NULL
    },
    
    {
        "Pong_WaitPing",
        1,
        0,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET_Ping,
        &P_GEND_EVENTSET,
        P_GEND_TRANS_PONG_Pong_WaitPing,
        NULL,
        &P_FUN_PONG_ANON0_STRUCT,
        &P_FUN_PONG_ANON2_STRUCT,
        0U,
        NULL
    }
  };
  PRT_MACHINEDECL P_MACHINE_Main_STRUCT = 
  {
    0U,
    "Main",
    1,
    4,
    13,
    4294967295,
    P_STATE_Main_Ping_Init,
    P_GEND_VARS_Main,
    P_GEND_STATES_Main,
    P_GEND_FUNS_Main,
    0U,
    NULL
  };
  PRT_MACHINEDECL P_MACHINE_PONG_STRUCT = 
  {
    0U,
    "PONG",
    0,
    2,
    8,
    4294967295,
    P_STATE_PONG_Pong_WaitPing,
    NULL,
    P_GEND_STATES_PONG,
    P_GEND_FUNS_PONG,
    0U,
    NULL
  };
  