
/******************************************************************************
*
* Copyright (C) 2013 Liverpool Data Research Associates
*
* Language      : C
* Version       : 9.3.0
*
* This is the optimised shlayout file for generating C driver programs
*
* Must be used with option "System Executable history in a single file"
*
******************************************************************************/

/*
 *
 * Harness Program
 *
 * Sequence Name : seq8
 *
 * Sequence File List:
 * /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c <White Box>
 * /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtio.c <White Box>
 * /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c <White Box>
 * /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg.c <White Box>
 * /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/rsc_table_parser.c <White Box>
 * /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc_virtio.c <White Box>
 * /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c <White Box>
 * /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c <White Box>
 * /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c <White Box>
 * /proj/xhdsswstaff/kmakalas/15OCT/test_sam/src/ldra_main.c <White Box>
 *
 * Existing Test Cases ( ID Procedure File )
 * 1 remoteproc_remove /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 2 remoteproc_check_fw_format /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 3 remoteproc_check_fw_format /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 4 remoteproc_start /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 5 remoteproc_stop /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 6 remoteproc_shutdown /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 7 remoteproc_get_io_with_name /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 8 remoteproc_shutdown /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 9 remoteproc_patoda /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 10 remoteproc_datopa /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 11 remoteproc_load_noblock /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 12 remoteproc_allocate_id /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 13 remoteproc_shutdown /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 14 remoteproc_check_fw_format /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 15 remoteproc_stop /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 16 remoteproc_start /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 17 remoteproc_allocate_id /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 18 remoteproc_get_io_with_da /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 19 remoteproc_get_io_with_va /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 20 remoteproc_remove_virtio /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * 21 remoteproc_config /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 *
 * Program created on Thu Oct 25 2018 at 14:17:45
 *
 */

/*
 * To include source code before the declaration section
 * ****7 Driver declarations in /proj/xhdsswstaff/ssw/tools/LDRA/Unit Testing/alto_custom_routines/Zc702_serial_cshlayout_driver.dat
 * check the "Include Source Code Before Driver or Host Declarations" box
 * in the "S & H Generation" tab of the "TBrun Options" dialog.
 *
 * To set this as the default for all sequences, set the
 * profile string "TBRUN_INCLUDE_ON_TOP=TRUE" in Testbed.ini
 * prior to invoking TBrun.
 */
/* ****7 Driver declarations */

#include <stdio.h>
#include <stdlib.h>
#ifdef ldra_qq_no_constants
#define const
#endif

void ldra_qq_set_stub_hit_count (int* last_tc, int* this_count, int* total_count);
void ldra_qq_stub_start (char* ldra_qq_pname);
void ldra_qq_stub_end (int ldra_qq_stub_valid, char* ldra_qq_stub_message);
#if defined ldra_qq_nodotdotdot
void ldra_qq_test_comment (char* fmt, int start, int new_line);
#else
void ldra_qq_test_comment (char* fmt, ...);
#endif
void ldra_qq_stub_start_comment (char* ldra_qq_procname);
void ldra_qq_stub_end_comment (char* ldra_qq_procname);
void ldra_qq_stub_invalid_test (char* *ldra_qq_stub_mess, int* ldra_qq_stub_val);

void ldra_qq_set_stub_smho (int* ldra_qq_matrix, int* ldra_qq_index, int ldra_qq_max,
                            int ldra_qq_stub_id, char* ldra_qq_stub_name, int ldra_qq_hc);

const int ldra_qq_smho_unexecuted = 0;
const int ldra_qq_smho_executed_correct = 1;
const int ldra_qq_smho_executed_incorrect = -1;
const int ldra_qq_smho_hc_terminator = -10;
const int ldra_qq_smho_tc_terminator = -100;


/* ****1 Globals for output */

#include <stdarg.h>
/* Define if exit needs to be used */
/* extern void _exit (int status); */

/* ldra_port_init, ldra_port_write, ldra_port_is_configured */
#include "ldra_port.h"        

int testbed_out=0;

/*
 * Setting _ldra_tbrunlib_optimised_ allows all the analysis routines in
 * ctbrunlib.h to be optimised out to reduce the code size
 */
#define _ldra_tbrunlib_optimised_

/* If floating point is not used, then uncomment the following line */
/* #define NOFLOATINGPOINT */

/* if file i/o is not available, then uncomment the following line */
#define LDRA_QQ_DUMMY_FILE_IO

/*
 * Then we can renable just the routines that we actually need
 */
#define _ldra_qq_BOOL_convert_
#define _ldra_qq_bool_convert_
#define _ldra_qq_char_convert_
#define _ldra_qq_char_star_convert_
#define _ldra_qq_double_convert_ 
#define _ldra_qq_float_convert_
#define _ldra_qq_hex_convert_
#define _ldra_qq_long_double_convert_
#define _ldra_qq_long_long_convert_
#define _ldra_qq_ulong_long_convert_
#define _ldra_qq_const_string_compare_
#define _ldra_qq_file_exact_compare_
#define _ldra_qq_unsigned_char_convert_
#define _ldra_qq_string_compare_


/* Forward declarations for functions that will need to be changed for each target */
/* =============================================================================== */
  static int ldra_tbrun_open (void);
  static void ldra_tbrun_close (void);
  static void ldra_tbrun_exit (void);

  /* Open a file on the host */
  static int ldra_tbrun_open (void) {
    /* 
     * Protect against the case with just a single main and in white box
     * where the port can get initialised twice 
     */
    if ( ldra_port_is_configured() == 0 ) {
      ldra_port_init();                 /* Initialise the port */
      ldra_port_write("\n\n\n\n");      /* Ensure that any spurious characters are removed */
      ldra_port_write("LDRA_Start\n");  /* Tell the ComPorter to start capturing */
    }
    return 1;
  }

  /* Close the file on the host */
  static void ldra_tbrun_close (void) {
    /* stop collecting data from the port, terminate ComPorter */ 
    ldra_port_write("LDRA_Terminate\n"); 
    ldra_port_write("\n\n\n\n");        /* Ensure that ComPorter has time to close */
    /* Ensure that the function does something so that we can stub it */
    testbed_out = 0;
  }

  /* exit the test executable */
  static void ldra_tbrun_exit (void) {
/*    _exit (0); */
  }


char testbed_buff[512];

void ldra_qq_tbrun_output (char *fmt,...);
#define ldra_qq_tbrun
#define ldra_qq_tbrun_driver
int ldra_qq_history_in_target = 1;
char *ldra_qq_sequence_name = "seq8";
int ldra_qq_quiet_stubs = 0;
int ldra_qq_test_case_number = 0;
int ldra_qq_last_test_case = -1;
int ldra_qq_tc_iterator = -1;
int ldra_qq_tc_repeater = -1;
int ldra_qq_module_number = 0;
char *ldra_qq_module_name = NULL;
int ldra_qq_procedure_number = 0;
char *ldra_qq_procedure_name = NULL;
int ldra_qq_number_of_existing_tcs = 21;
int ldra_qq_in_existing_test_case = 0;
int ldra_qq_in_new_test_case = 0;
char *ldra_qq_action_code = "";
int inszt_confirm_enabled = 0;

/*
 * Pre-include code will be placed here
 * this code is located at global scope and should consist of
 * declarations, preprocessor directives (e.g. #include) or procedures
 */
#define qqoutput tbrun_qqoutput250
#ifdef _MSC_VER
#pragma message (" => Compiling source: /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_remoteproc.c started")
#endif
/* Start File Insert : /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_remoteproc.c */
/*
C TESTBED VERSION  : 9.5.4
FILE UNDER TEST  : "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remot
DATE OF ANALYSIS : Mon Oct 15 17:36:55 2018
*/
 
/*
 * Copyright (c) 2014, Mentor Graphics Corporation
 * All rights reserved.
 * Copyright (c) 2015 Xilinx, Inc. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include <metal/alloc.h>
#include <metal/log.h>
#include <metal/utilities.h>
#include <openamp/elf_loader.h>
#include <openamp/remoteproc.h>
#include <openamp/remoteproc_loader.h>
#include <openamp/remoteproc_virtio.h>
#include <openamp/rsc_table_parser.h>
/******************************************************************************
 * static functions
 *****************************************************************************/
#define QQQdialect GCC                                                                             
#undef QQQ146
#undef QQQ148
#undef QQQbndchk
#undef QQQ294
#undef QQQEMBEDDEDICE
 /* Note: for BITMAP execution histories QQQthreaded is not defined */
#undef QQQthreaded 
#undef QQQdo178b
#undef QQQfixbra
#define QQQswitch3
#undef QQQternary
#undef QQQswitch
#undef QQQmacrof
#undef QQQMULTIPROCESSEXH
#undef QQFLUSH
#undef QQNEWBS
#define qqqMaxBranchDepth     20
#undef QQQstructbitmap
 static int zzfileid250 =    250;
#define zzfileid zzfileid250
 static int qzzqfileid =    250;
#undef QQQALGONE
#undef QQQVCLFLG
#undef QQQFORKFL
#undef QQQIADDRF
#undef QQQRTI
#undef QQQPERFA
#undef QQQADRMOD
#undef QQQDCAPFL
#define QQQTEMPLATEONLY
#define QQQNOATEXIT
#define QQQUPLOADATEND
#define QQQNOSTDIO
#undef QQQASHLINGVITRA
#define QQQBITMAP 
#undef QQQBITMAPMCDC 
#undef QQQTIC2XSERIALIO
#undef QQQTIC2XFLASH
#undef QQQCOMPRESSED_EXH
#undef QQQMAINFL
#define QQQSINGLEFILE
#define QQQFILEID
#define QQQseparate
extern int QQQindicator;
static int QQQfirstmcdc=1;
#define remoteproc_250zzopen                                                                                  zzopen
 extern int remoteproc_250zzopen                                                                                ;
#define remoteproc_250zqqzqz1                                                                                 zqqzqz1
#if !defined(QQQTEMPLATEONLY) && !defined(FILE) && !defined(QQQNOSTDIO)                                                                                                                                                                                             
#include <stdio.h>                                                                                                                                                                                                                                                  
/*Added to use xil_printf serial routine */                                                                                                                                                                                                                         
/*AKG for Xilinx*/                                                                                                                                                                                                                                                  
#include "xil_printf.h"                                                                                                                                                                                                                                             
/* ----------------------------------------------------------------------* 100 *                                                                                                                                                                                    
 * If stdio.h is not available then insert:                                                                                                                                                                                                                         
 *      typedef int * FILE;                                                                                                                                                                                                                                         
 * -----------------------------------------------------------------------------                                                                                                                                                                                    
 */                                                                                                                                                                                                                                                                 
#endif  /* !defined(QQQTEMPLATEONLY) && !defined(FILE) && !defined(QQQNOSTDIO) */                                                                                                                                                                                   
#ifdef QQQ_KEEPCOMMENTS                                                                                                                                                                                                                                             
  /* -----------------------------------------------------------------------     *                                                                                                                                                                                  
  *            Special settings for systems lacking standard functions.                                                                                                                                                                                             
  * To include code for fprintf define ldra_fprintf                                                                                                                                                                                                                 
  * To include code for sscanf  define ldra_sscanf                                                                                                                                                                                                                  
  * -----------------------------------------------------------------------------                                                                                                                                                                                   
  */                                                                                                                                                                                                                                                                
#endif  /* QQQ_KEEPCOMMENTS */                                                                                                                                                                                                                                      
#if !defined(QQQSUPPRESS_UNDEF)                                                                                                                                                                                                                                     
#undef ldra_fprintf                                                                                                                                                                                                                                                 
#undef ldra_sscanf                                                                                                                                                                                                                                                  
#endif  /* !defined(QQQSUPPRESS_UNDEF) */                                                                                                                                                                                                                           
  /*  #define ldra_fprintf */                                                                                                                                                                                                                                       
  /*  #define ldra_sscanf */                                                                                                                                                                                                                                        
#undef QQQHITMAP_STORAGE                                                                                                                                                                                                                                            
#undef qqnull_params                                                                                                                                                                                                                                                
#define qqnull_params void                                                                                                                                                                                                                                          
  /* *********************************************************************** 101 *                                                                                                                                                                                  
   *                                                                             *                                                                                                                                                                                  
   *                                Template Only                                *                                                                                                                                                                                  
   *                                                                             *                                                                                                                                                                                  
   *  The default instrumented file will not produce any execution history.      *                                                                                                                                                                                  
   *                                                                             *                                                                                                                                                                                  
   *  Note that dots are used instead of spaces in the examples given below for  *                                                                                                                                                                                  
   *  the format expected in the execution history files to be input to Testbed. *                                                                                                                                                                                  
   *                                                                             *                                                                                                                                                                                  
   *******************************************************************************                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
#define QQQ_PROTOTYPE_DEF                                                                                                                                                                                                                                           
  /* Conventional Instrumentation */                                                                                                                                                                                                                                
#undef QQ_ANSI_PROTOTYPE                                                                                                                                                                                                                                            
#ifdef __STDC__                                                                                                                                                                                                                                                     
#define QQ_ANSI_PROTOTYPE 1                                                                                                                                                                                                                                         
#else                                                                                                                                                                                                                                                               
#ifdef VAXC                                                                                                                                                                                                                                                         
#define QQ_ANSI_PROTOTYPE 1                                                                                                                                                                                                                                         
#endif  /* VAXC */                                                                                                                                                                                                                                                  
#endif  /* __STDC__ */                                                                                                                                                                                                                                              
#define QQQnumfil 40  /* default setting */                                                                                                                                                                                                                         
  static unsigned char qqqzzglobflag = 0;                                                                                                                                                                                                                           
  /* *********************************************************************** 111 *                                                                                                                                                                                  
   *            TEMPLATE                                                                                                                                                                                                                                            
   * Some of the following prototypes may be changed to macro definitions to                                                                                                                                                                                        
   * provide in-line code.                                                                                                                                                                                                                                          
   * Note that the last letter of the alphabet has a special meaning in                                                                                                                                                                                             
   * CINSTR.DAT: it is used to tie up with section 3 names and to mark                                                                                                                                                                                              
   * where to insert the filename as a prefix.                                                                                                                                                                                                                      
   *******************************************************************************                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int swzzqqzz (int qqqi, int onoff);                                                                                                                                                                                                                        
  extern int remoteproc_250zqqzqz(qqnull_params);                                                                                                                                                                                                                   
  extern int remoteproc_250zqqzqz1(qqnull_params);                                                                                                                                                                                                                  
  static int remoteproc_250zzqqzz (int qqqi);                                                                                                                                                                                                                       
  static int remoteproc_250zqendz (int qqqi);                                                                                                                                                                                                                       
  static int remoteproc_250zqzqzq (int qqqi);                                                                                                                                                                                                                       
  static int remoteproc_250zzzqtz (int qqqa, int qqqb);                                                                                                                                                                                                             
  static int remoteproc_250zzzqfz (int qqqa, int qqqb);                                                                                                                                                                                                             
  void qqqupload (qqnull_params);                                                                                                                                                                                                                                   
/* ------------------------------ END OF TESTBED PROTOTYPES -------------------------------- */                                                                                                                                                                     
 
static struct loader_ops *
remoteproc_check_fw_format (
const void * img_data ,
size_t img_len )
{
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (       1 ) ; /* 37 */
  if
    (
    img_len <= 0
    )
 {
    remoteproc_250zzqqzz                                                                                 (      2 ) ; /* 1 */
    {
    remoteproc_250zqendz                                                                                 (       3 ) ; /* 30 */  
      return
      NULL ;
    }
    remoteproc_250zzqqzz                                                                                 (      4 ) ; /* 3 */
 }
  else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (      5 ); /* 2 */
    {
      if
        (
        elf_identify ( img_data , img_len ) == 0
        )
 {
    remoteproc_250zzqqzz                                                                                 (      6 ) ; /* 1 */
        {
    remoteproc_250zqendz                                                                                 (       7 ) ; /* 30 */  
          return
          &elf_ops ;
        }
    remoteproc_250zzqqzz                                                                                 (      8 ) ; /* 3 */
 }
      else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (      9 ); /* 2 */
        {
    remoteproc_250zqendz                                                                                 (      10 ) ; /* 30 */  
          return
          NULL ;
        }
 }
    }
 }
    remoteproc_250zqendz                                                                                 (      11 ) ; /* 30 */  
}
 
static struct remoteproc_mem *
remoteproc_get_mem (
struct remoteproc * rproc ,
const char * name ,
metal_phys_addr_t pa ,
metal_phys_addr_t da ,
void * va ,
size_t size )
{
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (      12 ) ; /* 37 */
  struct metal_list *
    node ;
  struct remoteproc_mem *
    mem ;
  metal_list_for_each ( & rproc -> mems , node )
  {
    mem = metal_container_of ( node , struct remoteproc_mem , node ) ;
    if
      (
      name
      )
 {
    remoteproc_250zzqqzz                                                                                 (     13 ) ; /* 1 */
      {
        if
          (
          ! strncmp ( name , mem -> name , sizeof ( mem -> name ) )
          )
 {
    remoteproc_250zzqqzz                                                                                 (     14 ) ; /* 1 */
          {
    remoteproc_250zqendz                                                                                 (      15 ) ; /* 30 */  
            return
            mem ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     16 ) ; /* 4 */
      }
    remoteproc_250zzqqzz                                                                                 (     17 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (     18 ); /* 2 */
      {
        if
          (
          pa != METAL_BAD_PHYS
          )
 {
    remoteproc_250zzqqzz                                                                                 (     19 ) ; /* 1 */
          {
            metal_phys_addr_t pa_start ,
              pa_end ;
            pa_start = mem -> pa ;
            pa_end = pa_start + mem -> size ;
            if
 (  /* 50 */
              (
              
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
              pa >= pa_start
  ? 1 : 0  ,      21  )  /*  54 */
              &&
              ( pa + size ) <= pa_end
              )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (     22 ) ; /* 1 */
              {
    remoteproc_250zqendz                                                                                 (      23 ) ; /* 30 */  
                return
                mem ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     24 ) ; /* 4 */
          }
    remoteproc_250zzqqzz                                                                                 (     25 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (     26 ); /* 2 */
          {
            if
              (
              pa != METAL_BAD_PHYS
              )
 {
    remoteproc_250zzqqzz                                                                                 (     27 ) ; /* 1 */
              {
                metal_phys_addr_t da_start ,
                  da_end ;
                da_start = mem -> da ;
                da_end = da_start + mem -> size ;
                if
 (  /* 50 */
                  (
                  
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
                  da >= da_start
  ? 1 : 0  ,      29  )  /*  54 */
                  &&
                  ( da + size ) <= da_end
                  )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (     30 ) ; /* 1 */
                  {
    remoteproc_250zqendz                                                                                 (      31 ) ; /* 30 */  
                    return
                    mem ;
                  }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     32 ) ; /* 4 */
              }
    remoteproc_250zzqqzz                                                                                 (     33 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (     34 ); /* 2 */
              {
                if
                  (
                  va
                  )
 {
    remoteproc_250zzqqzz                                                                                 (     35 ) ; /* 1 */
                  {
                    if
                      (
                      metal_io_virt_to_offset ( mem -> io , va ) != METAL_BAD_OFFSET
                      )
 {
    remoteproc_250zzqqzz                                                                                 (     36 ) ; /* 1 */
                      {
    remoteproc_250zqendz                                                                                 (      37 ) ; /* 30 */  
                        return
                        mem ;
                      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     38 ) ; /* 4 */
                  }
    remoteproc_250zzqqzz                                                                                 (     39 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (     40 ); /* 2 */
                  {
    remoteproc_250zqendz                                                                                 (      41 ) ; /* 30 */  
                    return
                    NULL ;
                  }
 }
              }
 }
          }
 }
      }
 }
  }
    remoteproc_250zqendz                                                                                 (      42 ) ; /* 30 */  
  return
  NULL ;
}
 
static metal_phys_addr_t
remoteproc_datopa (
struct remoteproc_mem * mem ,
metal_phys_addr_t da )
{
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (      43 ) ; /* 37 */
  metal_phys_addr_t
    pa ;
  pa = mem -> pa + da - mem -> da ;
    remoteproc_250zqendz                                                                                 (      44 ) ; /* 30 */  
  return
  pa ;
}
 
static metal_phys_addr_t
remoteproc_patoda (
struct remoteproc_mem * mem ,
metal_phys_addr_t pa )
{
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (      45 ) ; /* 37 */
  metal_phys_addr_t
    da ;
  da = mem -> da + pa - mem -> pa ;
    remoteproc_250zqendz                                                                                 (      46 ) ; /* 30 */  
  return
  da ;
}
 
static void *
  remoteproc_get_rsc_table (
  struct remoteproc * rproc ,
  void * store ,
  struct image_store_ops * store_ops ,
  size_t offset ,
  size_t len )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (      47 ) ; /* 37 */
    int
      ret ;
    void *
      rsc_table = NULL ;
    const void *
      img_data ;
        /* Copy the resource table to local memory,
         * the caller should be responsible to release the memory
         */
    rsc_table = metal_allocate_memory ( len ) ;
    if
      (
      ! rsc_table
      )
 {
    remoteproc_250zzqqzz                                                                                 (     48 ) ; /* 1 */
      {
    remoteproc_250zqendz                                                                                 (      49 ) ; /* 30 */  
        return
        RPROC_ERR_PTR ( - RPROC_ENOMEM ) ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     50 ) ; /* 4 */
    ret = store_ops -> load ( store , offset , len , & img_data , RPROC_LOAD_ANYADDR , NULL , 1 ) ;
    if
 (  /* 50 */
      (
      
  remoteproc_250zzzqtz                                                                                 (     /*  51 */ 
      ret < 0
  ? 1 : 0  ,      52  )  /*  54 */
      ||
      
  remoteproc_250zzzqtz                                                                                 (     /*  51 */ 
      ret < ( int ) len
  ? 1 : 0  ,      54  )  /*  54 */
      ||
      img_data == NULL
      )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (     55 ) ; /* 1 */
      {
        metal_log ( METAL_LOG_ERROR , "get rsc failed: 0x%llx, 0x%llx\r\n", offset , len ) ;
        rsc_table = RPROC_ERR_PTR ( - RPROC_EINVAL ) ;
 remoteproc_250zzqqzz                                                                                 (      56 ) ; /* 20 */
        goto error ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     57 ) ; /* 4 */
    memcpy ( rsc_table , img_data , len ) ;
    ret = handle_rsc_table ( rproc , rsc_table , len , NULL ) ;
    if
      (
      ret < 0
      )
 {
    remoteproc_250zzqqzz                                                                                 (     58 ) ; /* 1 */
      {
        rsc_table = RPROC_ERR_PTR ( ret ) ;
 remoteproc_250zzqqzz                                                                                 (      59 ) ; /* 20 */
        goto error ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     60 ) ; /* 4 */
    remoteproc_250zqendz                                                                                 (      61 ) ; /* 30 */  
    return
    rsc_table ;
 remoteproc_250zzqqzz                                                                                 (      62 ) ; /* 89 */
error :
    metal_free_memory ( rsc_table ) ;
    remoteproc_250zqendz                                                                                 (      63 ) ; /* 30 */  
    return
    rsc_table ;
  }
 
int
  remoteproc_parse_rsc_table (
  struct remoteproc * rproc ,
  struct resource_table * rsc_table ,
  size_t rsc_size )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (      64 ) ; /* 37 */
    struct metal_io_region *
      io ;
 remoteproc_250zzqqzz                                                                                 (      65 ) ; /* 23 */
    io =
      remoteproc_get_io_with_va (
      rproc , ( void * ) rsc_table ) ;
    remoteproc_250zqendz                                                                                 (      66 ) ; /* 30 */  
    return
    handle_rsc_table ( rproc , rsc_table , rsc_size , io ) ;
  }
 
int
  remoteproc_set_rsc_table (
  struct remoteproc * rproc ,
  struct resource_table * rsc_table ,
  size_t rsc_size )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (      67 ) ; /* 37 */
    int
      ret ;
    struct metal_io_region *
      io ;
 remoteproc_250zzqqzz                                                                                 (      68 ) ; /* 23 */
    io =
      remoteproc_get_io_with_va (
      rproc , ( void * ) rsc_table ) ;
    if
      (
      ! io
      )
 {
    remoteproc_250zzqqzz                                                                                 (     69 ) ; /* 1 */
      {
    remoteproc_250zqendz                                                                                 (      70 ) ; /* 30 */  
        return
        - EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     71 ) ; /* 4 */
 remoteproc_250zzqqzz                                                                                 (      72 ) ; /* 23 */
    ret =
      remoteproc_parse_rsc_table (
      rproc , rsc_table , rsc_size ) ;
    if
      (
      ! ret
      )
 {
    remoteproc_250zzqqzz                                                                                 (     73 ) ; /* 1 */
      {
        rproc -> rsc_table = rsc_table ;
        rproc -> rsc_len = rsc_size ;
        rproc -> rsc_io = io ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     74 ) ; /* 4 */
    remoteproc_250zqendz                                                                                 (      75 ) ; /* 30 */  
    return
    ret ;
  }
 
struct remoteproc *
remoteproc_init (
struct remoteproc * rproc ,
struct remoteproc_ops * ops ,
void * priv )
{
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (      76 ) ; /* 37 */
  if
    (
    rproc
    )
 {
    remoteproc_250zzqqzz                                                                                 (     77 ) ; /* 1 */
    {
      memset ( rproc , 0 , sizeof ( * rproc ) ) ;
      rproc -> state = RPROC_OFFLINE ;
      metal_mutex_init ( & rproc -> lock ) ;
      metal_list_init ( & rproc -> mems ) ;
      metal_list_init ( & rproc -> vdevs ) ;
    }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     78 ) ; /* 4 */
  rproc = ops -> init ( rproc , ops , priv ) ;
    remoteproc_250zqendz                                                                                 (      79 ) ; /* 30 */  
  return
  rproc ;
}
 
int
  remoteproc_remove (
  struct remoteproc * rproc )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (      80 ) ; /* 37 */
    int
      ret ;
    if
      (
      rproc
      )
 {
    remoteproc_250zzqqzz                                                                                 (     81 ) ; /* 1 */
      {
        metal_mutex_acquire ( & rproc -> lock ) ;
        if
          (
          rproc -> state == RPROC_OFFLINE
          )
 {
    remoteproc_250zzqqzz                                                                                 (     82 ) ; /* 1 */
          {
            rproc -> ops -> remove ( rproc ) ;
          }
    remoteproc_250zzqqzz                                                                                 (     83 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (     84 ); /* 2 */
          {
            ret = - EBUSY ;
          }
 }
        metal_mutex_release ( & rproc -> lock ) ;
      }
    remoteproc_250zzqqzz                                                                                 (     85 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (     86 ); /* 2 */
      {
        ret = - EINVAL ;
      }
 }
    remoteproc_250zqendz                                                                                 (      87 ) ; /* 30 */  
    return
    ret ;
  }
 
int
  remoteproc_config (
  struct remoteproc * rproc ,
  void * data )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (      88 ) ; /* 37 */
    int
      ret = - RPROC_ENODEV ;
    if
      (
      rproc
      )
 {
    remoteproc_250zzqqzz                                                                                 (     89 ) ; /* 1 */
      {
        metal_mutex_acquire ( & rproc -> lock ) ;
        if
          (
          rproc -> state == RPROC_OFFLINE
          )
 {
    remoteproc_250zzqqzz                                                                                 (     90 ) ; /* 1 */
          {
          /* configure operation is allowed if the state is
           * offline or ready. This function can be called
           * mulitple times before start the remote.
           */
            if
              (
              rproc -> ops -> config
              )
 {
    remoteproc_250zzqqzz                                                                                 (     91 ) ; /* 1 */
              {
                ret = rproc -> ops -> config ( rproc , data ) ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     92 ) ; /* 4 */
            rproc -> state = RPROC_READY ;
          }
    remoteproc_250zzqqzz                                                                                 (     93 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (     94 ); /* 2 */
          {
            ret = - RPROC_EINVAL ;
          }
 }
        metal_mutex_release ( & rproc -> lock ) ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (     95 ) ; /* 4 */
    remoteproc_250zqendz                                                                                 (      96 ) ; /* 30 */  
    return
    ret ;
  }
 
int
  remoteproc_start (
  struct remoteproc * rproc )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (      97 ) ; /* 37 */
    int
      ret = - RPROC_ENODEV ;
    if
      (
      rproc
      )
 {
    remoteproc_250zzqqzz                                                                                 (     98 ) ; /* 1 */
      {
        metal_mutex_acquire ( & rproc -> lock ) ;
        if
          (
          rproc -> state == RPROC_READY
          )
 {
    remoteproc_250zzqqzz                                                                                 (     99 ) ; /* 1 */
          {
            ret = rproc -> ops -> start ( rproc ) ;
            rproc -> state = RPROC_RUNNING ;
          }
    remoteproc_250zzqqzz                                                                                 (    100 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    101 ); /* 2 */
          {
            ret = - RPROC_EINVAL ;
          }
 }
        metal_mutex_release ( & rproc -> lock ) ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    102 ) ; /* 4 */
    remoteproc_250zqendz                                                                                 (     103 ) ; /* 30 */  
    return
    ret ;
  }
 
int
  remoteproc_stop (
  struct remoteproc * rproc )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     104 ) ; /* 37 */
    int
      ret = - RPROC_ENODEV ;
    if
      (
      rproc
      )
 {
    remoteproc_250zzqqzz                                                                                 (    105 ) ; /* 1 */
      {
        metal_mutex_acquire ( & rproc -> lock ) ;
        if
 (  /* 50 */
          (
          
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
          rproc -> state != RPROC_STOPPED
  ? 1 : 0  ,     107  )  /*  54 */
          &&
          rproc -> state != RPROC_OFFLINE
          )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    108 ) ; /* 1 */
          {
            if
              (
              rproc -> ops -> stop
              )
 {
    remoteproc_250zzqqzz                                                                                 (    109 ) ; /* 1 */
              {
                ret = rproc -> ops -> stop ( rproc ) ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    110 ) ; /* 4 */
            rproc -> state = RPROC_STOPPED ;
          }
    remoteproc_250zzqqzz                                                                                 (    111 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    112 ); /* 2 */
          {
            ret = 0 ;
          }
 }
        metal_mutex_release ( & rproc -> lock ) ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    113 ) ; /* 4 */
    remoteproc_250zqendz                                                                                 (     114 ) ; /* 30 */  
    return
    ret ;
  }
 
int
  remoteproc_shutdown (
  struct remoteproc * rproc )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     115 ) ; /* 37 */
    int
      ret = - RPROC_ENODEV ;
    if
      (
      rproc
      )
 {
    remoteproc_250zzqqzz                                                                                 (    116 ) ; /* 1 */
      {
        ret = 0 ;
        metal_mutex_acquire ( & rproc -> lock ) ;
        if
          (
          rproc -> state != RPROC_OFFLINE
          )
 {
    remoteproc_250zzqqzz                                                                                 (    117 ) ; /* 1 */
          {
            if
              (
              rproc -> state != RPROC_STOPPED
              )
 {
    remoteproc_250zzqqzz                                                                                 (    118 ) ; /* 1 */
              {
                if
                  (
                  rproc -> ops -> stop
                  )
 {
    remoteproc_250zzqqzz                                                                                 (    119 ) ; /* 1 */
                  {
                    ret = rproc -> ops -> stop ( rproc ) ;
                  }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    120 ) ; /* 4 */
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    121 ) ; /* 4 */
            if
              (
              ! ret
              )
 {
    remoteproc_250zzqqzz                                                                                 (    122 ) ; /* 1 */
              {
                if
                  (
                  rproc -> ops -> shutdown
                  )
 {
    remoteproc_250zzqqzz                                                                                 (    123 ) ; /* 1 */
                  {
                    ret = rproc -> ops -> shutdown ( rproc ) ;
                  }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    124 ) ; /* 4 */
                if
                  (
                  ! ret
                  )
 {
    remoteproc_250zzqqzz                                                                                 (    125 ) ; /* 1 */
                  {
                    rproc -> state = RPROC_OFFLINE ;
                  }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    126 ) ; /* 4 */
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    127 ) ; /* 4 */
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    128 ) ; /* 4 */
        metal_mutex_release ( & rproc -> lock ) ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    129 ) ; /* 4 */
    remoteproc_250zqendz                                                                                 (     130 ) ; /* 30 */  
    return
    ret ;
  }
 
struct metal_io_region *
remoteproc_get_io_with_name (
struct remoteproc * rproc ,
const char * name )
{
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     131 ) ; /* 37 */
  struct remoteproc_mem *
    mem ;
 remoteproc_250zzqqzz                                                                                 (     132 ) ; /* 23 */
  mem =
    remoteproc_get_mem (
    rproc , name , METAL_BAD_PHYS , METAL_BAD_PHYS , NULL , 0 ) ;
  if
    (
    mem
    )
 {
    remoteproc_250zzqqzz                                                                                 (    133 ) ; /* 1 */
    {
    remoteproc_250zqendz                                                                                 (     134 ) ; /* 30 */  
      return
      mem -> io ;
    }
    remoteproc_250zzqqzz                                                                                 (    135 ) ; /* 3 */
 }
  else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    136 ); /* 2 */
    {
    remoteproc_250zqendz                                                                                 (     137 ) ; /* 30 */  
      return
      NULL ;
    }
 }
    remoteproc_250zqendz                                                                                 (     138 ) ; /* 30 */  
}
 
struct metal_io_region *
remoteproc_get_io_with_pa (
struct remoteproc * rproc ,
metal_phys_addr_t pa )
{
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     139 ) ; /* 37 */
  struct remoteproc_mem *
    mem ;
 remoteproc_250zzqqzz                                                                                 (     140 ) ; /* 23 */
  mem =
    remoteproc_get_mem (
    rproc , NULL , pa , METAL_BAD_PHYS , NULL , 0 ) ;
  if
    (
    mem
    )
 {
    remoteproc_250zzqqzz                                                                                 (    141 ) ; /* 1 */
    {
    remoteproc_250zqendz                                                                                 (     142 ) ; /* 30 */  
      return
      mem -> io ;
    }
    remoteproc_250zzqqzz                                                                                 (    143 ) ; /* 3 */
 }
  else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    144 ); /* 2 */
    {
    remoteproc_250zqendz                                                                                 (     145 ) ; /* 30 */  
      return
      NULL ;
    }
 }
    remoteproc_250zqendz                                                                                 (     146 ) ; /* 30 */  
}
 
struct metal_io_region *
remoteproc_get_io_with_da (
struct remoteproc * rproc ,
metal_phys_addr_t da ,
unsigned long * offset )
{
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     147 ) ; /* 37 */
  struct remoteproc_mem *
    mem ;
 remoteproc_250zzqqzz                                                                                 (     148 ) ; /* 23 */
  mem =
    remoteproc_get_mem (
    rproc , NULL , METAL_BAD_PHYS , da , NULL , 0 ) ;
  if
    (
    mem
    )
 {
    remoteproc_250zzqqzz                                                                                 (    149 ) ; /* 1 */
    {
      struct metal_io_region *
        io ;
      metal_phys_addr_t
        pa ;
      io = mem -> io ;
 remoteproc_250zzqqzz                                                                                 (     150 ) ; /* 23 */
      pa =
        remoteproc_datopa (
        mem , da ) ;
      * offset = metal_io_phys_to_offset ( io , pa ) ;
    remoteproc_250zqendz                                                                                 (     151 ) ; /* 30 */  
      return
      io ;
    }
    remoteproc_250zzqqzz                                                                                 (    152 ) ; /* 3 */
 }
  else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    153 ); /* 2 */
    {
    remoteproc_250zqendz                                                                                 (     154 ) ; /* 30 */  
      return
      NULL ;
    }
 }
    remoteproc_250zqendz                                                                                 (     155 ) ; /* 30 */  
}
 
struct metal_io_region *
remoteproc_get_io_with_va (
struct remoteproc * rproc ,
void * va )
{
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     156 ) ; /* 37 */
  struct remoteproc_mem *
    mem ;
 remoteproc_250zzqqzz                                                                                 (     157 ) ; /* 23 */
  mem =
    remoteproc_get_mem (
    rproc , NULL , METAL_BAD_PHYS , METAL_BAD_PHYS , va , 0 ) ;
  if
    (
    mem
    )
 {
    remoteproc_250zzqqzz                                                                                 (    158 ) ; /* 1 */
    {
    remoteproc_250zqendz                                                                                 (     159 ) ; /* 30 */  
      return
      mem -> io ;
    }
    remoteproc_250zzqqzz                                                                                 (    160 ) ; /* 3 */
 }
  else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    161 ); /* 2 */
    {
    remoteproc_250zqendz                                                                                 (     162 ) ; /* 30 */  
      return
      NULL ;
    }
 }
    remoteproc_250zqendz                                                                                 (     163 ) ; /* 30 */  
}
 
void *
  remoteproc_mmap (
  struct remoteproc * rproc ,
  metal_phys_addr_t * pa ,
  metal_phys_addr_t * da ,
  size_t size ,
  unsigned int attribute ,
  struct metal_io_region ** io )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     164 ) ; /* 37 */
    void *
      va = NULL ;
    metal_phys_addr_t lpa ,
      lda ;
    struct remoteproc_mem *
      mem ;
    if
      (
      ! rproc
      )
 {
    remoteproc_250zzqqzz                                                                                 (    165 ) ; /* 1 */
      {
    remoteproc_250zqendz                                                                                 (     166 ) ; /* 30 */  
        return
        NULL ;
      }
    remoteproc_250zzqqzz                                                                                 (    167 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    168 ); /* 2 */
      {
        if
 (  /* 50 */
          (
          
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
          ! pa
  ? 1 : 0  ,     170  )  /*  54 */
          &&
          ! da
          )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    171 ) ; /* 1 */
          {
    remoteproc_250zqendz                                                                                 (     172 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    173 ) ; /* 4 */
      }
 }
    if
      (
      pa
      )
 {
    remoteproc_250zzqqzz                                                                                 (    174 ) ; /* 1 */
      {
        lpa = *pa ;
      }
    remoteproc_250zzqqzz                                                                                 (    175 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    176 ); /* 2 */
      {
        lpa = METAL_BAD_PHYS ;
      }
 }
    if
      (
      da
      )
 {
    remoteproc_250zzqqzz                                                                                 (    177 ) ; /* 1 */
      {
        lda = *da ;
      }
    remoteproc_250zzqqzz                                                                                 (    178 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    179 ); /* 2 */
      {
        lda = METAL_BAD_PHYS ;
      }
 }
 remoteproc_250zzqqzz                                                                                 (     180 ) ; /* 23 */
    mem =
      remoteproc_get_mem (
      rproc , NULL , lpa , lda , NULL , size ) ;
    if
      (
      mem
      )
 {
    remoteproc_250zzqqzz                                                                                 (    181 ) ; /* 1 */
      {
        if
          (
          lpa != METAL_BAD_PHYS
          )
 {
    remoteproc_250zzqqzz                                                                                 (    182 ) ; /* 1 */
          {
 remoteproc_250zzqqzz                                                                                 (     183 ) ; /* 23 */
            lda =
              remoteproc_patoda (
              mem , lpa ) ;
          }
    remoteproc_250zzqqzz                                                                                 (    184 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    185 ); /* 2 */
          {
            if
              (
              lda != METAL_BAD_PHYS
              )
 {
    remoteproc_250zzqqzz                                                                                 (    186 ) ; /* 1 */
              {
 remoteproc_250zzqqzz                                                                                 (     187 ) ; /* 23 */
                lpa =
                  remoteproc_datopa (
                  mem , lda ) ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    188 ) ; /* 4 */
          }
 }
        if
          (
          io
          )
 {
    remoteproc_250zzqqzz                                                                                 (    189 ) ; /* 1 */
          {
            * io = mem -> io ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    190 ) ; /* 4 */
        va = metal_io_phys_to_virt ( mem -> io , lpa ) ;
      }
    remoteproc_250zzqqzz                                                                                 (    191 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    192 ); /* 2 */
      {
        if
          (
          rproc -> ops -> mmap
          )
 {
    remoteproc_250zzqqzz                                                                                 (    193 ) ; /* 1 */
          {
            va = rproc -> ops -> mmap ( rproc , & lpa , & lda , size , attribute , io ) ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    194 ) ; /* 4 */
      }
 }
    if
      (
      pa
      )
 {
    remoteproc_250zzqqzz                                                                                 (    195 ) ; /* 1 */
      {
        * pa = lpa ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    196 ) ; /* 4 */
    if
      (
      da
      )
 {
    remoteproc_250zzqqzz                                                                                 (    197 ) ; /* 1 */
      {
        * da = lda ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    198 ) ; /* 4 */
    remoteproc_250zqendz                                                                                 (     199 ) ; /* 30 */  
    return
    va ;
  }
 
int
  remoteproc_load (
  struct remoteproc * rproc ,
  const char * path ,
  void * store ,
  struct image_store_ops * store_ops ,
  void ** img_info )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     200 ) ; /* 37 */
    int
      ret ;
    struct loader_ops *
      loader ;
    const void *
      img_data ;
    void *
      limg_info = NULL ;
    size_t
      offset ,
      noffset ;
    size_t
      len ,
      nlen ;
    int
      last_load_state ;
    metal_phys_addr_t da ,
      rsc_da ;
    int
      rsc_len ;
    size_t
      rsc_size ;
    void *
      rsc_table = NULL ;
    struct metal_io_region *
      io = NULL ;
    if
      (
      ! rproc
      )
 {
    remoteproc_250zzqqzz                                                                                 (    201 ) ; /* 1 */
      {
    remoteproc_250zqendz                                                                                 (     202 ) ; /* 30 */  
        return
        - RPROC_ENODEV ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    203 ) ; /* 4 */
    metal_mutex_acquire ( & rproc -> lock ) ;
    metal_log ( METAL_LOG_DEBUG , "%s: check remoteproc status\r\n", __func__ ) ;
        /* If remoteproc is not in ready state, cannot load executable */
    if
 (  /* 50 */
      (
      
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
      rproc -> state != RPROC_READY
  ? 1 : 0  ,     205  )  /*  54 */
      &&
      rproc -> state != RPROC_CONFIGURED
      )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    206 ) ; /* 1 */
      {
        metal_log ( METAL_LOG_ERROR , "load failure: invalid rproc state %d.\r\n", rproc -> state ) ;
        metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     207 ) ; /* 30 */  
        return
        - RPROC_EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    208 ) ; /* 4 */
    if
      (
      ! store_ops
      )
 {
    remoteproc_250zzqqzz                                                                                 (    209 ) ; /* 1 */
      {
        metal_log ( METAL_LOG_ERROR , "load failure: loader ops is not set.\r\n") ;
        metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     210 ) ; /* 30 */  
        return
        - RPROC_EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    211 ) ; /* 4 */
        /* Open exectuable to get ready to parse */
    metal_log ( METAL_LOG_DEBUG , "%s: open exectuable image\r\n", __func__ ) ;
    ret = store_ops -> open ( store , path , & img_data ) ;
    if
      (
      ret <= 0
      )
 {
    remoteproc_250zzqqzz                                                                                 (    212 ) ; /* 1 */
      {
        metal_log ( METAL_LOG_ERROR , "load failure: failed to open firmware %d.\n", ret ) ;
        metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     213 ) ; /* 30 */  
        return
        - RPROC_EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    214 ) ; /* 4 */
    len = ret ;
    metal_assert ( img_data != NULL ) ;
        /* Check executable format to select a parser */
    loader = rproc -> loader ;
    if
      (
      ! loader
      )
 {
    remoteproc_250zzqqzz                                                                                 (    215 ) ; /* 1 */
      {
        metal_log ( METAL_LOG_DEBUG , "%s: check loader\r\n", __func__ ) ;
 remoteproc_250zzqqzz                                                                                 (     216 ) ; /* 23 */
        loader =
          remoteproc_check_fw_format (
          img_data , len ) ;
        if
          (
          ! loader
          )
 {
    remoteproc_250zzqqzz                                                                                 (    217 ) ; /* 1 */
          {
            metal_log ( METAL_LOG_ERROR , "load failure: failed to get store ops.\n") ;
            ret = - RPROC_EINVAL ;
 remoteproc_250zzqqzz                                                                                 (     218 ) ; /* 20 */
            goto error1 ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    219 ) ; /* 4 */
        rproc -> loader = loader ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    220 ) ; /* 4 */
        /* Load exectuable headers */
    metal_log ( METAL_LOG_DEBUG , "%s: loading headers\r\n", __func__ ) ;
    offset = 0 ;
    last_load_state = RPROC_LOADER_NOT_READY ;
    while
      (
 (  /* 21 */ 
      1
  )  /* 7 */
      )
      {
 { /* 32 */
  int zzqqzs = remoteproc_250zzqqzz                                                                                 (    221 ) ; /* 32a */
        ret = loader -> load_header ( img_data , offset , len , & limg_info , last_load_state , & noffset , & nlen ) ;
        last_load_state = ( unsigned int ) ret ;
        metal_log ( METAL_LOG_DEBUG , "%s, load header 0x%lx, 0x%x, next 0x%lx, 0x%x\r\n", __func__ , offset , len , noffset , nlen ) ;
        if
          (
          ret < 0
          )
 {
    remoteproc_250zzqqzz                                                                                 (    222 ) ; /* 1 */
          {
            metal_log ( METAL_LOG_ERROR , "load header failed 0x%lx,%d.\r\n", offset , len ) ;
 remoteproc_250zzqqzz                                                                                 (     223 ) ; /* 20 */
            goto error2 ;
          }
    remoteproc_250zzqqzz                                                                                 (    224 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    225 ); /* 2 */
          {
            if
              (
              ( ret & RPROC_LOADER_READY_TO_LOAD ) != 0
              )
 {
    remoteproc_250zzqqzz                                                                                 (    226 ) ; /* 1 */
              {
                if
                  (
                  nlen == 0
                  )
 {
    remoteproc_250zzqqzz                                                                                 (    227 ) ; /* 1 */
                  {
 remoteproc_250zzqqzz                                                                                 (     228 ) ; 
goto l100925 ; /* 16 */
                  }
    remoteproc_250zzqqzz                                                                                 (    229 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    230 ); /* 2 */
                  {
                    if
 (  /* 50 */
                      (
                      
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
                      (
                      noffset > ( offset + len )
                      )
  ? 1 : 0  ,     232  )  /*  54 */
                      &&
                      ( store_ops -> features & SUPPORT_SEEK ) == 0
                      )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    233 ) ; /* 1 */
                      {
           /* Required data is not continued, however
            * seek is not supported, stop to load
            * headers such as ELF section headers which
            * is usually located to the end of image.
            * Continue to load binary data to target
            * memory.
            */
 remoteproc_250zzqqzz                                                                                 (     234 ) ; 
goto l100925 ; /* 16 */
                      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    235 ) ; /* 4 */
                  }
 }
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    236 ) ; /* 4 */
              /* Continue to load headers image data */
          }
 }
        img_data = NULL ;
        ret = store_ops -> load ( store , noffset , nlen , & img_data , RPROC_LOAD_ANYADDR , NULL , 1 ) ;
        if
          (
          ret < ( int ) nlen
          )
 {
    remoteproc_250zzqqzz                                                                                 (    237 ) ; /* 1 */
          {
            metal_log ( METAL_LOG_ERROR , "load image data failed 0x%x,%d\r\n", noffset , nlen ) ;
 remoteproc_250zzqqzz                                                                                 (     238 ) ; /* 20 */
            goto error2 ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    239 ) ; /* 4 */
        offset = noffset ;
        len = nlen ;
    remoteproc_250zzqqzz                                                                                 (    240 ) ;} /* 6 */
      }
    remoteproc_250zzqqzz                                                                                 (    241 ) ; /* 5 */
l100925 : 
 ; /* 18 */
    ret = elf_locate_rsc_table ( limg_info , & rsc_da , & offset , & rsc_size ) ;
    if
 (  /* 50 */
      (
      
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
      ret == 0
  ? 1 : 0  ,     243  )  /*  54 */
      &&
      rsc_size > 0
      )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    244 ) ; /* 1 */
      {
         /* parse resource table */
        rsc_len = ( int ) rsc_size ;
 remoteproc_250zzqqzz                                                                                 (     245 ) ; /* 23 */
        rsc_table =
          remoteproc_get_rsc_table (
          rproc , store , store_ops , offset , rsc_len ) ;
      }
    remoteproc_250zzqqzz                                                                                 (    246 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    247 ); /* 2 */
      {
        rsc_len = ret ;
      }
 }
        /* load executable data */
    metal_log ( METAL_LOG_DEBUG , "%s: load executable data\r\n", __func__ ) ;
    offset = 0 ;
    len = 0 ;
    ret = - EINVAL ;
    while
      (
 (  /* 21 */ 
      1
  )  /* 7 */
      )
      {
 { /* 32 */
  int zzqqzs = remoteproc_250zzqqzz                                                                                 (    248 ) ; /* 32a */
        unsigned char
          padding ;
        size_t
          nmemsize ;
        metal_phys_addr_t
          pa ;
        da = RPROC_LOAD_ANYADDR ;
        nlen = 0 ;
        nmemsize = 0 ;
        noffset = 0 ;
        ret = loader -> load_data ( rproc , img_data , offset , len , & limg_info , last_load_state , & da , & noffset , & nlen , & padding , & nmemsize ) ;
        if
          (
          ret < 0
          )
 {
    remoteproc_250zzqqzz                                                                                 (    249 ) ; /* 1 */
          {
            metal_log ( METAL_LOG_ERROR , "load data failed,0x%lx,%d\r\n", noffset , nlen ) ;
 remoteproc_250zzqqzz                                                                                 (     250 ) ; /* 20 */
            goto error3 ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    251 ) ; /* 4 */
        metal_log ( METAL_LOG_DEBUG , "load data: da 0x%lx, offset 0x%lx, len = 0x%lx, memsize = 0x%lx, state 0x%x\r\n", da , noffset , nlen , nmemsize , ret ) ;
        last_load_state = ret ;
        if
          (
          da != RPROC_LOAD_ANYADDR
          )
 {
    remoteproc_250zzqqzz                                                                                 (    252 ) ; /* 1 */
          {
          /* Data is supposed to be loaded to target memory */
            img_data = NULL ;
            /* get the I/O region from remoteproc */
            pa = METAL_BAD_PHYS ;
 remoteproc_250zzqqzz                                                                                 (     253 ) ; /* 23 */
            ( void )
              remoteproc_mmap (
              rproc , & pa , & da , nmemsize , 0 , & io ) ;
            if
 (  /* 50 */
              (
              
  remoteproc_250zzzqtz                                                                                 (     /*  51 */ 
              pa == METAL_BAD_PHYS
  ? 1 : 0  ,     255  )  /*  54 */
              ||
              io == NULL
              )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    256 ) ; /* 1 */
              {
                metal_log ( METAL_LOG_ERROR , "load failed, no mapping for 0x%llx.\r\n", da ) ;
                ret = - RPROC_EINVAL ;
 remoteproc_250zzqqzz                                                                                 (     257 ) ; /* 20 */
                goto error3 ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    258 ) ; /* 4 */
            if
              (
              nlen > 0
              )
 {
    remoteproc_250zzqqzz                                                                                 (    259 ) ; /* 1 */
              {
                ret = store_ops -> load ( store , noffset , nlen , & img_data , pa , io , 1 ) ;
                if
                  (
                  ret != ( int ) nlen
                  )
 {
    remoteproc_250zzqqzz                                                                                 (    260 ) ; /* 1 */
                  {
                    metal_log ( METAL_LOG_ERROR , "load data failed 0x%lx, 0x%lx, 0x%x\r\n", pa , noffset , nlen ) ;
                    ret = - RPROC_EINVAL ;
 remoteproc_250zzqqzz                                                                                 (     261 ) ; /* 20 */
                    goto error3 ;
                  }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    262 ) ; /* 4 */
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    263 ) ; /* 4 */
            if
              (
              nmemsize > nlen
              )
 {
    remoteproc_250zzqqzz                                                                                 (    264 ) ; /* 1 */
              {
                size_t
                  tmpoffset ;
                tmpoffset = metal_io_phys_to_offset ( io , pa + nlen ) ;
                metal_io_block_set ( io , tmpoffset , padding , ( nmemsize - nlen ) ) ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    265 ) ; /* 4 */
          }
    remoteproc_250zzqqzz                                                                                 (    266 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    267 ); /* 2 */
          {
            if
              (
              nlen != 0
              )
 {
    remoteproc_250zzqqzz                                                                                 (    268 ) ; /* 1 */
              {
                ret = store_ops -> load ( store , noffset , nlen , & img_data , RPROC_LOAD_ANYADDR , NULL , 1 ) ;
                if
                  (
                  ret < ( int ) nlen
                  )
 {
    remoteproc_250zzqqzz                                                                                 (    269 ) ; /* 1 */
                  {
                    if
                      (
                      ( last_load_state & RPROC_LOADER_POST_DATA_LOAD ) != 0
                      )
 {
    remoteproc_250zzqqzz                                                                                 (    270 ) ; /* 1 */
                      {
                        metal_log ( METAL_LOG_WARNING , "not all the headers are loaded\r\n") ;
 remoteproc_250zzqqzz                                                                                 (     271 ) ; 
goto l101058 ; /* 16 */
                      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    272 ) ; /* 4 */
                    metal_log ( METAL_LOG_ERROR , "post-load image data failed 0x%x,%d\r\n", noffset , nlen ) ;
 remoteproc_250zzqqzz                                                                                 (     273 ) ; /* 20 */
                    goto error3 ;
                  }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    274 ) ; /* 4 */
                offset = noffset ;
                len = nlen ;
              }
    remoteproc_250zzqqzz                                                                                 (    275 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    276 ); /* 2 */
              {
              /* (last_load_state & RPROC_LOADER_LOAD_COMPLETE) != 0 */
 remoteproc_250zzqqzz                                                                                 (     277 ) ; 
goto l101058 ; /* 16 */
              }
 }
          }
 }
    remoteproc_250zzqqzz                                                                                 (    278 ) ;} /* 6 */
      }
    remoteproc_250zzqqzz                                                                                 (    279 ) ; /* 5 */
l101058 : 
 ; /* 18 */
    if
      (
      rsc_len < 0
      )
 {
    remoteproc_250zzqqzz                                                                                 (    280 ) ; /* 1 */
      {
        ret = elf_locate_rsc_table ( limg_info , & rsc_da , & offset , & rsc_size ) ;
        if
 (  /* 50 */
          (
          
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
          ret == 0
  ? 1 : 0  ,     282  )  /*  54 */
          &&
          rsc_size > 0
          )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    283 ) ; /* 1 */
          {
          /* parse resource table */
            rsc_len = ( int ) rsc_size ;
 remoteproc_250zzqqzz                                                                                 (     284 ) ; /* 23 */
            rsc_table =
              remoteproc_get_rsc_table (
              rproc , store , store_ops , offset , rsc_len ) ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    285 ) ; /* 4 */
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    286 ) ; /* 4 */
        /* Update resource table */
    if
 (  /* 50 */
      (
      
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
      rsc_len
  ? 1 : 0  ,     288  )  /*  54 */
      &&
      rsc_da != METAL_BAD_PHYS
      )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    289 ) ; /* 1 */
      {
        void *
          rsc_table_cp = rsc_table ;
        metal_log ( METAL_LOG_DEBUG , "%s, update resource table\r\n", __func__ ) ;
 remoteproc_250zzqqzz                                                                                 (     290 ) ; /* 23 */
        rsc_table =
          remoteproc_mmap (
          rproc , NULL , & rsc_da , rsc_len , 0 , & io ) ;
        if
          (
          rsc_table
          )
 {
    remoteproc_250zzqqzz                                                                                 (    291 ) ; /* 1 */
          {
            size_t
              rsc_io_offset ;
              /* Update resource table */
            rsc_io_offset = metal_io_virt_to_offset ( io , rsc_table ) ;
            ret = metal_io_block_write ( io , rsc_io_offset , rsc_table_cp , rsc_len ) ;
            if
              (
              ret != rsc_len
              )
 {
    remoteproc_250zzqqzz                                                                                 (    292 ) ; /* 1 */
              {
                metal_log ( METAL_LOG_WARNING , "load: failed to update rsc\r\n") ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    293 ) ; /* 4 */
            rproc -> rsc_table = rsc_table ;
            rproc -> rsc_len = rsc_len ;
          }
    remoteproc_250zzqqzz                                                                                 (    294 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    295 ); /* 2 */
          {
            metal_log ( METAL_LOG_WARNING , "load: not able to update rsc table.\n") ;
          }
 }
        metal_free_memory ( rsc_table_cp ) ;
         /* So that the rsc_table will not get released */
        rsc_table = NULL ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    296 ) ; /* 4 */
    metal_log ( METAL_LOG_DEBUG , "%s: successfully load firmware\r\n", __func__ ) ;
        /* get entry point from the firmware */
    rproc -> bootaddr = loader -> get_entry ( limg_info ) ;
    rproc -> state = RPROC_READY ;
    metal_mutex_release ( & rproc -> lock ) ;
    if
      (
      img_info
      )
 {
    remoteproc_250zzqqzz                                                                                 (    297 ) ; /* 1 */
      {
        * img_info = limg_info ;
      }
    remoteproc_250zzqqzz                                                                                 (    298 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    299 ); /* 2 */
      {
        loader -> release ( limg_info ) ;
      }
 }
    store_ops -> close ( store ) ;
    remoteproc_250zqendz                                                                                 (     300 ) ; /* 30 */  
    return
    0 ;
 remoteproc_250zzqqzz                                                                                 (     301 ) ; /* 89 */
error3 :
    if
      (
      rsc_table
      )
 {
    remoteproc_250zzqqzz                                                                                 (    302 ) ; /* 1 */
      {
        metal_free_memory ( rsc_table ) ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    303 ) ; /* 4 */
 remoteproc_250zzqqzz                                                                                 (     304 ) ; /* 89 */
error2 :
    loader -> release ( limg_info ) ;
 remoteproc_250zzqqzz                                                                                 (     305 ) ; /* 89 */
error1 :
    store_ops -> close ( store ) ;
    metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     306 ) ; /* 30 */  
    return
    ret ;
  }
 
int
  remoteproc_load_noblock (
  struct remoteproc * rproc ,
  const void * img_data ,
  size_t offset ,
  size_t len ,
  void ** img_info ,
  metal_phys_addr_t * pa ,
  struct metal_io_region ** io ,
  size_t * noffset ,
  size_t * nlen ,
  size_t * nmlen ,
  unsigned char * padding )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     307 ) ; /* 37 */
    int
      ret ;
    struct loader_ops *
      loader ;
    void *
      limg_info = NULL ;
    int
      last_load_state ;
    metal_phys_addr_t da ,
      rsc_da ;
    size_t
      rsc_size ;
    void *
      rsc_table = NULL ,
      * lrsc_table = NULL ;
    if
      (
      ! rproc
      )
 {
    remoteproc_250zzqqzz                                                                                 (    308 ) ; /* 1 */
      {
    remoteproc_250zqendz                                                                                 (     309 ) ; /* 30 */  
        return
        - RPROC_ENODEV ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    310 ) ; /* 4 */
    metal_assert ( pa != NULL ) ;
    metal_assert ( io != NULL ) ;
    metal_assert ( noffset != NULL ) ;
    metal_assert ( nlen != NULL ) ;
    metal_assert ( nmlen != NULL ) ;
    metal_assert ( padding != NULL ) ;
    metal_mutex_acquire ( & rproc -> lock ) ;
    metal_log ( METAL_LOG_DEBUG , "%s: check remoteproc status\r\n", __func__ ) ;
        /* If remoteproc is not in ready state, cannot load executable */
    if
      (
      rproc -> state != RPROC_READY
      )
 {
    remoteproc_250zzqqzz                                                                                 (    311 ) ; /* 1 */
      {
        metal_log ( METAL_LOG_ERROR , "load failure: invalid rproc state %d.\r\n", rproc -> state ) ;
        metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     312 ) ; /* 30 */  
        return
        - RPROC_EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    313 ) ; /* 4 */
        /* Check executable format to select a parser */
    loader = rproc -> loader ;
    if
      (
      ! loader
      )
 {
    remoteproc_250zzqqzz                                                                                 (    314 ) ; /* 1 */
      {
        metal_log ( METAL_LOG_DEBUG , "%s: check loader\r\n", __func__ ) ;
        if
 (  /* 50 */
          (
          
  remoteproc_250zzzqtz                                                                                 (     /*  51 */ 
          img_data == NULL
  ? 1 : 0  ,     316  )  /*  54 */
          ||
          
  remoteproc_250zzzqtz                                                                                 (     /*  51 */ 
          offset != 0
  ? 1 : 0  ,     318  )  /*  54 */
          ||
          len == 0
          )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    319 ) ; /* 1 */
          {
            metal_log ( METAL_LOG_ERROR , "load failure, invalid inputs, not able to identify image.\r\n") ;
            metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     320 ) ; /* 30 */  
            return
            - RPROC_EINVAL ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    321 ) ; /* 4 */
 remoteproc_250zzqqzz                                                                                 (     322 ) ; /* 23 */
        loader =
          remoteproc_check_fw_format (
          img_data , len ) ;
        if
          (
          ! loader
          )
 {
    remoteproc_250zzqqzz                                                                                 (    323 ) ; /* 1 */
          {
            metal_log ( METAL_LOG_ERROR , "load failure: failed to identify image.\n") ;
            ret = - RPROC_EINVAL ;
            metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     324 ) ; /* 30 */  
            return
            - RPROC_EINVAL ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    325 ) ; /* 4 */
        rproc -> loader = loader ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    326 ) ; /* 4 */
    if
 (  /* 50 */
      (
      
  remoteproc_250zzzqtz                                                                                 (     /*  51 */ 
      img_info == NULL
  ? 1 : 0  ,     328  )  /*  54 */
      ||
      * img_info == NULL
      )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    329 ) ; /* 1 */
      {
        last_load_state = 0 ;
      }
    remoteproc_250zzqqzz                                                                                 (    330 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    331 ); /* 2 */
      {
        limg_info = *img_info ;
        last_load_state = loader -> get_load_state ( limg_info ) ;
        if
          (
          last_load_state < 0
          )
 {
    remoteproc_250zzqqzz                                                                                 (    332 ) ; /* 1 */
          {
            metal_log ( METAL_LOG_ERROR , "load failure, not able get load state.\r\n") ;
            metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     333 ) ; /* 30 */  
            return
            - RPROC_EINVAL ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    334 ) ; /* 4 */
      }
 }
    da = RPROC_LOAD_ANYADDR ;
    * nlen = 0 ;
    if
 (  /* 50 */
      (
      
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
      ( last_load_state & RPROC_LOADER_READY_TO_LOAD ) == 0
  ? 1 : 0  ,     336  )  /*  54 */
      &&
      ( last_load_state & RPROC_LOADER_LOAD_COMPLETE ) == 0
      )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    337 ) ; /* 1 */
      {
         /* Get the mandatory executable headers */
        ret = loader -> load_header ( img_data , offset , len , & limg_info , last_load_state , noffset , nlen ) ;
        last_load_state = ( unsigned int ) ret ;
        metal_log ( METAL_LOG_DEBUG , "%s, load header 0x%lx, 0x%x, next 0x%lx, 0x%x\r\n", __func__ , offset , len , * noffset , * nlen ) ;
        if
          (
          ret < 0
          )
 {
    remoteproc_250zzqqzz                                                                                 (    338 ) ; /* 1 */
          {
            metal_log ( METAL_LOG_ERROR , "load header failed 0x%lx,%d.\r\n", offset , len ) ;
 remoteproc_250zzqqzz                                                                                 (     339 ) ; /* 20 */
            goto error1 ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    340 ) ; /* 4 */
        last_load_state = loader -> get_load_state ( limg_info ) ;
        if
 (  /* 50 */
          (
          
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
          *nlen != 0
  ? 1 : 0  ,     342  )  /*  54 */
          &&
          ( last_load_state & RPROC_LOADER_READY_TO_LOAD ) == 0
          )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    343 ) ; /* 1 */
          {
 remoteproc_250zzqqzz                                                                                 (     344 ) ; /* 20 */
            goto out ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    345 ) ; /* 4 */
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    346 ) ; /* 4 */
    if
 (  /* 50 */
      (
      
  remoteproc_250zzzqtz                                                                                 (     /*  51 */ 
      ( last_load_state & RPROC_LOADER_READY_TO_LOAD ) != 0
  ? 1 : 0  ,     348  )  /*  54 */
      ||
      ( last_load_state & RPROC_LOADER_POST_DATA_LOAD ) != 0
      )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    349 ) ; /* 1 */
      {
         /* Enough information to know which target memory for
          * which data.
          */
        ret = loader -> load_data ( rproc , img_data , offset , len , & limg_info , last_load_state , & da , noffset , nlen , padding , nmlen ) ;
        metal_log ( METAL_LOG_DEBUG , "%s, load data 0x%lx, 0x%x, next 0x%lx, 0x%x\r\n", __func__ , offset , len , * noffset , * nlen ) ;
        if
          (
          ret < 0
          )
 {
    remoteproc_250zzqqzz                                                                                 (    350 ) ; /* 1 */
          {
            metal_log ( METAL_LOG_ERROR , "load data failed,0x%lx,%d\r\n", offset , len ) ;
 remoteproc_250zzqqzz                                                                                 (     351 ) ; /* 20 */
            goto error1 ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    352 ) ; /* 4 */
        if
          (
          da != RPROC_LOAD_ANYADDR
          )
 {
    remoteproc_250zzqqzz                                                                                 (    353 ) ; /* 1 */
          {
          /* get the I/O region from remoteproc */
            * pa = METAL_BAD_PHYS ;
 remoteproc_250zzqqzz                                                                                 (     354 ) ; /* 23 */
            ( void )
              remoteproc_mmap (
              rproc , pa , & da , * nmlen , 0 , io ) ;
            if
 (  /* 50 */
              (
              
  remoteproc_250zzzqtz                                                                                 (     /*  51 */ 
              *pa == METAL_BAD_PHYS
  ? 1 : 0  ,     356  )  /*  54 */
              ||
              io == NULL
              )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    357 ) ; /* 1 */
              {
                metal_log ( METAL_LOG_ERROR , "load failed, no mapping for 0x%llx.\r\n", da ) ;
                ret = - RPROC_EINVAL ;
 remoteproc_250zzqqzz                                                                                 (     358 ) ; /* 20 */
                goto error1 ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    359 ) ; /* 4 */
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    360 ) ; /* 4 */
        if
          (
          *nlen != 0
          )
 {
    remoteproc_250zzqqzz                                                                                 (    361 ) ; /* 1 */
          {
 remoteproc_250zzqqzz                                                                                 (     362 ) ; /* 20 */
            goto out ;
          }
    remoteproc_250zzqqzz                                                                                 (    363 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    364 ); /* 2 */
          {
            last_load_state = loader -> get_load_state ( limg_info ) ;
          }
 }
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    365 ) ; /* 4 */
    if
      (
      ( last_load_state & RPROC_LOADER_LOAD_COMPLETE ) != 0
      )
 {
    remoteproc_250zzqqzz                                                                                 (    366 ) ; /* 1 */
      {
         /* Get resource table */
        size_t
          rsc_offset ;
        size_t
          rsc_io_offset ;
        ret = elf_locate_rsc_table ( limg_info , & rsc_da , & rsc_offset , & rsc_size ) ;
        if
 (  /* 50 */
          (
          
  remoteproc_250zzzqfz                                                                                 (     /*  52 */ 
          ret == 0
  ? 1 : 0  ,     368  )  /*  54 */
          &&
          rsc_size > 0
          )
  ) /* 1 */
 {
    remoteproc_250zzqqzz                                                                                 (    369 ) ; /* 1 */
          {
            lrsc_table = metal_allocate_memory ( rsc_size ) ;
            if
              (
              lrsc_table == NULL
              )
 {
    remoteproc_250zzqqzz                                                                                 (    370 ) ; /* 1 */
              {
                ret = - RPROC_ENOMEM ;
 remoteproc_250zzqqzz                                                                                 (     371 ) ; /* 20 */
                goto error1 ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    372 ) ; /* 4 */
 remoteproc_250zzqqzz                                                                                 (     373 ) ; /* 23 */
            rsc_table =
              remoteproc_mmap (
              rproc , NULL , & rsc_da , rsc_size , 0 , io ) ;
            if
              (
              *io == NULL
              )
 {
    remoteproc_250zzqqzz                                                                                 (    374 ) ; /* 1 */
              {
                metal_log ( METAL_LOG_ERROR , "load failed: failed to mmap rsc\r\n") ;
                metal_free_memory ( lrsc_table ) ;
 remoteproc_250zzqqzz                                                                                 (     375 ) ; /* 20 */
                goto error1 ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    376 ) ; /* 4 */
            rsc_io_offset = metal_io_virt_to_offset ( * io , rsc_table ) ;
            ret = metal_io_block_read ( * io , rsc_io_offset , lrsc_table , ( int ) rsc_size ) ;
            if
              (
              ret != ( int ) rsc_size
              )
 {
    remoteproc_250zzqqzz                                                                                 (    377 ) ; /* 1 */
              {
                metal_log ( METAL_LOG_ERROR , "load failed: failed to get rsc\r\n") ;
                metal_free_memory ( lrsc_table ) ;
 remoteproc_250zzqqzz                                                                                 (     378 ) ; /* 20 */
                goto error1 ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    379 ) ; /* 4 */
              /* parse resource table */
 remoteproc_250zzqqzz                                                                                 (     380 ) ; /* 23 */
            ret =
              remoteproc_parse_rsc_table (
              rproc , lrsc_table , rsc_size ) ;
            if
              (
              ret == ( int ) rsc_size
              )
 {
    remoteproc_250zzqqzz                                                                                 (    381 ) ; /* 1 */
              {
                metal_log ( METAL_LOG_ERROR , "load failed: failed to parse rsc\r\n") ;
                metal_free_memory ( lrsc_table ) ;
 remoteproc_250zzqqzz                                                                                 (     382 ) ; /* 20 */
                goto error1 ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    383 ) ; /* 4 */
              /* Update resource table */
            ret = metal_io_block_write ( * io , rsc_io_offset , lrsc_table , ( int ) rsc_size ) ;
            if
              (
              ret != ( int ) rsc_size
              )
 {
    remoteproc_250zzqqzz                                                                                 (    384 ) ; /* 1 */
              {
                metal_log ( METAL_LOG_WARNING , "load exectuable, failed to update rsc\r\n") ;
              }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    385 ) ; /* 4 */
            rproc -> rsc_table = rsc_table ;
            rproc -> rsc_len = ( int ) rsc_size ;
            metal_free_memory ( lrsc_table ) ;
          }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    386 ) ; /* 4 */
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    387 ) ; /* 4 */
 remoteproc_250zzqqzz                                                                                 (     388 ) ; /* 89 */
out :
    if
      (
      img_info != NULL
      )
 {
    remoteproc_250zzqqzz                                                                                 (    389 ) ; /* 1 */
      {
        * img_info = limg_info ;
      }
    remoteproc_250zzqqzz                                                                                 (    390 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
remoteproc_250zzqqzz                                                                                 (    391 ); /* 2 */
      {
        loader -> release ( limg_info ) ;
      }
 }
    metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     392 ) ; /* 30 */  
    return
    0 ;
 remoteproc_250zzqqzz                                                                                 (     393 ) ; /* 89 */
error1 :
    loader -> release ( limg_info ) ;
    metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     394 ) ; /* 30 */  
    return
    ret ;
  }
 
unsigned int
  remoteproc_allocate_id (
  struct remoteproc * rproc ,
  unsigned int start ,
  unsigned int end )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     395 ) ; /* 37 */
    unsigned int
      notifyid ;
    if
      (
      start == RSC_NOTIFY_ID_ANY
      )
 {
    remoteproc_250zzqqzz                                                                                 (    396 ) ; /* 1 */
      {
        start = 0 ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    397 ) ; /* 4 */
    if
      (
      end == RSC_NOTIFY_ID_ANY
      )
 {
    remoteproc_250zzqqzz                                                                                 (    398 ) ; /* 1 */
      {
        end = METAL_BITS_PER_ULONG ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    399 ) ; /* 4 */
    notifyid = metal_bitmap_next_set_bit ( & rproc -> bitmap , start , end ) ;
    if
      (
      notifyid != end
      )
 {
    remoteproc_250zzqqzz                                                                                 (    400 ) ; /* 1 */
      {
        metal_bitmap_set_bit ( & rproc -> bitmap , notifyid ) ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    401 ) ; /* 4 */
    remoteproc_250zqendz                                                                                 (     402 ) ; /* 30 */  
    return
    notifyid ;
  }
 
static int
  remoteproc_virtio_notify (
  void * priv ,
  uint32_t id )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     403 ) ; /* 37 */
    struct remoteproc *
      rproc = priv ;
    remoteproc_250zqendz                                                                                 (     404 ) ; /* 30 */  
    return
    rproc -> ops -> notify ( rproc , id ) ;
  }
 
struct virtio_device *
remoteproc_create_virtio (
struct remoteproc * rproc ,
int vdev_id ,
unsigned int role ,
void ( * rst_cb ) ( struct virtio_device * vdev ) )
{
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     405 ) ; /* 37 */
  char *
    rsc_table ;
  struct fw_rsc_vdev *
    vdev_rsc ;
  struct metal_io_region *
    vdev_rsc_io ;
  struct virtio_device *
    vdev ;
  struct remoteproc_virtio *
    rpvdev ;
  size_t
    vdev_rsc_offset ;
  unsigned int
    notifyid ;
  unsigned int
    num_vrings ,
    i ;
  struct metal_list *
    node ;
  metal_assert ( rproc ) ;
  metal_mutex_acquire ( & rproc -> lock ) ;
  rsc_table = rproc -> rsc_table ;
  vdev_rsc_io = rproc -> rsc_io ;
  vdev_rsc_offset = find_rsc ( rsc_table , RSC_VDEV , vdev_id ) ;
  if
    (
    ! vdev_rsc_offset
    )
 {
    remoteproc_250zzqqzz                                                                                 (    406 ) ; /* 1 */
    {
      metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     407 ) ; /* 30 */  
      return
      NULL ;
    }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    408 ) ; /* 4 */
  vdev_rsc = ( struct fw_rsc_vdev * ) ( rsc_table + vdev_rsc_offset ) ;
  notifyid = vdev_rsc -> notifyid ;
        /* Check if the virtio device is already created */
  metal_list_for_each ( & rproc -> vdevs , node )
  {
    rpvdev = metal_container_of ( node , struct remoteproc_virtio , node ) ;
    if
      (
      rpvdev -> vdev.index == notifyid
      )
 {
    remoteproc_250zzqqzz                                                                                 (    409 ) ; /* 1 */
      {
    remoteproc_250zqendz                                                                                 (     410 ) ; /* 30 */  
        return
        &rpvdev -> vdev ;
      }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    411 ) ; /* 4 */
  }
  vdev = rproc_virtio_create_vdev ( role , notifyid , vdev_rsc , vdev_rsc_io , rproc ,
      remoteproc_virtio_notify , rst_cb ) ;
  num_vrings = vdev_rsc -> num_of_vrings ;
        /* set the notification id for vrings */
  for
    (
    i = 0
    ;
  ( /* 28 */
    i < num_vrings
  )  /* 7 */
    ;
  ( /* 7 */
    i ++
  ,remoteproc_250zzqqzz                                                                                 (     412 ) /* 27b */
  ,remoteproc_250zzqqzz                                                                                 (     413 )) /* 27e */
    )
    {
 { /* 32 */
 int                  QZZZ =   
remoteproc_250zzqqzz                                                                                 (     414 ) ; /* 32 */
      struct fw_rsc_vdev_vring *
        vring_rsc ;
      metal_phys_addr_t
        da ;
      unsigned int
        num_descs ,
        align ;
      struct metal_io_region *
        io ;
      void *
        va ;
      size_t
        size ;
      int
        ret ;
      vring_rsc = &vdev_rsc -> vring[ i ] ;
      notifyid = vring_rsc -> notifyid ;
      da = vring_rsc -> da ;
      num_descs = vring_rsc -> num ;
      align = vring_rsc -> align ;
      size = vring_size ( num_descs , align ) ;
 remoteproc_250zzqqzz                                                                                 (     415 ) ; /* 23 */
      va =
        remoteproc_mmap (
        rproc , NULL , & da , size , 0 , & io ) ;
      if
        (
        ! va
        )
 {
    remoteproc_250zzqqzz                                                                                 (    416 ) ; /* 1 */
        {
 remoteproc_250zzqqzz                                                                                 (     417 ) ; /* 20 */
          goto err1 ;
        }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    418 ) ; /* 4 */
      ret = rproc_virtio_init_vring ( vdev , i , notifyid , va , io , num_descs , align ) ;
      if
        (
        ret
        )
 {
    remoteproc_250zzqqzz                                                                                 (    419 ) ; /* 1 */
        {
 remoteproc_250zzqqzz                                                                                 (     420 ) ; /* 20 */
          goto err1 ;
        }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    421 ) ; /* 4 */
    remoteproc_250zzqqzz                                                                                 (    422 ) ;} /* 6 */
    }
    remoteproc_250zzqqzz                                                                                 (    423 ) ; /* 5 */
  rpvdev = metal_container_of ( vdev , struct remoteproc_virtio , vdev ) ;
  metal_list_add_tail ( & rproc -> vdevs , & rpvdev -> node ) ;
  metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     424 ) ; /* 30 */  
  return
  vdev ;
 remoteproc_250zzqqzz                                                                                 (     425 ) ; /* 89 */
err1 :
 remoteproc_250zzqqzz                                                                                 (     426 ) ; /* 23 */
 
  remoteproc_remove_virtio (
  rproc , vdev ) ;
  metal_mutex_release ( & rproc -> lock ) ;
    remoteproc_250zqendz                                                                                 (     427 ) ; /* 30 */  
  return
  NULL ;
}
 
void
  remoteproc_remove_virtio (
  struct remoteproc * rproc ,
  struct virtio_device * vdev )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     428 ) ; /* 37 */
    struct remoteproc_virtio *
      rpvdev ;
    ( void ) rproc ;
    metal_assert ( vdev ) ;
    rpvdev = metal_container_of ( vdev , struct remoteproc_virtio , vdev ) ;
    metal_list_del ( & rpvdev -> node ) ;
    rproc_virtio_remove_vdev ( & rpvdev -> vdev ) ;
    remoteproc_250zqendz                                                                                 (     429 ) ; /* 30 */  
  }
 
int
  remoteproc_get_notification (
  struct remoteproc * rproc ,
  uint32_t notifyid )
  {
   int iremoteproc_250zzqqzz                                                                                
 = remoteproc_250zzqqzz                                                                                 (     430 ) ; /* 37 */
    struct remoteproc_virtio *
      rpvdev ;
    struct metal_list *
      node ;
    int
      ret ;
    metal_list_for_each ( & rproc -> vdevs , node )
    {
      rpvdev = metal_container_of ( node , struct remoteproc_virtio , node ) ;
      ret = rproc_virtio_notified ( & rpvdev -> vdev , notifyid ) ;
      if
        (
        ret
        )
 {
    remoteproc_250zzqqzz                                                                                 (    431 ) ; /* 1 */
        {
    remoteproc_250zqendz                                                                                 (     432 ) ; /* 30 */  
          return
          ret ;
        }
 }                                                                                                   
else                                                                                                
  remoteproc_250zzqqzz                                                                                 (    433 ) ; /* 4 */
    }
    remoteproc_250zqendz                                                                                 (     434 ) ; /* 30 */  
    return
    0 ;
  }
#define qqqbranches    434
#define QQQMAXMCDCSIZE      2
#define ldra_fprintf                                                                                                                                                                                                                                                
#define ldra_sscanf                                                                                                                                                                                                                                                 
  /* put in undefs to protect our parameter names from macros */                                                                                                                                                                                                    
#undef f  /* 01/09/06 */                                                                                                                                                                                                                                            
#undef i  /* 01/09/06 */                                                                                                                                                                                                                                            
#undef j  /* 01/09/06 */                                                                                                                                                                                                                                            
#undef k  /* 01/09/06 */                                                                                                                                                                                                                                            
#undef s  /* 01/09/06 */                                                                                                                                                                                                                                            
#undef l  /* 01/09/06 */                                                                                                                                                                                                                                            
#undef ii  /* 01/09/06 */                                                                                                                                                                                                                                           
#undef some  /* 01/09/06 */                                                                                                                                                                                                                                         
#undef none  /* 01/09/06 */                                                                                                                                                                                                                                         
#undef from  /* 01/09/06 */                                                                                                                                                                                                                                         
#undef a  /* 01/09/06 */                                                                                                                                                                                                                                            
#undef b  /* 01/09/06 */                                                                                                                                                                                                                                            
#undef iz  /* 01/09/06 */                                                                                                                                                                                                                                           
#undef jz  /* 01/09/06 */                                                                                                                                                                                                                                           
#undef qqnull_params                                                                                                                                                                                                                                                
#define qqnull_params void                                                                                                                                                                                                                                          
  /* Conventional Instrumentation */                                                                                                                                                                                                                                
#define qqzzidfield 1                                                                                                                                                                                                                                               
  /* uncompressed data structures */                                                                                                                                                                                                                                
  /* uncompressed  bitmap */                                                                                                                                                                                                                                        
#define QQQFIXEDSIZE                                                                                                                                                                                                                                                
  static int qqqlast = 0;                                                                                                                                                                                                                                           
  static unsigned int bitmaparr[(qqqbranches/8)+1];                                                                                                                                                                                                                 
  extern unsigned int * qqzzglobarrb[QQQnumfil]; /*a*/                                                                                                                                                                                                              
  extern short qqzzglobbrns[QQQnumfil];                                                                                                                                                                                                                             
  extern short qqzzglobfileid[QQQnumfil];                                                                                                                                                                                                                           
  extern int qqupload_registered;                                                                                                                                                                                                                                   
    /* ----------------------------------------------------------------------* 176 *                                                                                                                                                                                
     *            Procedures                                                                                                                                                                                                                                        
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
  /* ----------- zscanf ---------------------------------------------------* 177 *                                                                                                                                                                                  
   *        Returns an integer extracted from a string                                                                                                                                                                                                              
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int remoteproc_250zscanf(char * qqscan_str)                                                                                                                                                                                                                
  {                                                                                                                                                                                                                                                                 
    int qqvalue;                                                                                                                                                                                                                                                    
    int qqisign;                                                                                                                                                                                                                                                    
    char * qqcptr;                                                                                                                                                                                                                                                  
    qqvalue = 0;                                                                                                                                                                                                                                                    
    qqisign = 1;                                                                                                                                                                                                                                                    
    qqcptr  = qqscan_str;                                                                                                                                                                                                                                           
    /* Skip spaces */                                                                                                                                                                                                                                               
    while (qqcptr[0] == ' ')                                                                                                                                                                                                                                        
    {                                                                                                                                                                                                                                                               
      qqcptr++;                                                                                                                                                                                                                                                     
    }                                                                                                                                                                                                                                                               
    /* Check for a leading ---                                                                                                                                                                                                                                      
    */                                                                                                                                                                                                                                                              
    if (qqcptr[0] == '-')                                                                                                                                                                                                                                           
    {                                                                                                                                                                                                                                                               
      qqisign = -1;                                                                                                                                                                                                                                                 
      qqcptr++;                                                                                                                                                                                                                                                     
    }                                                                                                                                                                                                                                                               
    /* Extract digits */                                                                                                                                                                                                                                            
    while ((qqcptr[0] >= '0') && (qqcptr[0] <= '9'))                                                                                                                                                                                                                
    {                                                                                                                                                                                                                                                               
      qqvalue = 10 * qqvalue;                                                                                                                                                                                                                                       
      qqvalue = qqvalue + (qqcptr[0] - '0');                                                                                                                                                                                                                        
      qqcptr++;                                                                                                                                                                                                                                                     
    }                                                                                                                                                                                                                                                               
    qqvalue = qqisign * qqvalue;                                                                                                                                                                                                                                    
    return qqvalue;                                                                                                                                                                                                                                                 
  } /* End of zscanf */                                                                                                                                                                                                                                             
  /* ----------------------------------------------------------------------* 195 *                                                                                                                                                                                  
   *            qqqqinitialise                                                                                                                                                                                                                                      
   * This procedure initialises the structures for                                                                                                                                                                                                                  
   * compressed execution histories.                                                                                                                                                                                                                                
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static void qqqqinitialise(int ii)                                                                                                                                                                                                                                
  {                                                                                                                                                                                                                                                                 
    unsigned int i;                                                                                                                                                                                                                                                 
    /* First time through. */                                                                                                                                                                                                                                       
    /* bitmap */                                                                                                                                                                                                                                                    
    for (i=0;i<(qqqbranches/8)+1;i++)                                                                                                                                                                                                                               
    {                                                                                                                                                                                                                                                               
      bitmaparr[i] = 0;                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    /* And so we don't optimise qqqupload() away */                                                                                                                                                                                                                 
    if (bitmaparr[0] != 0)                                                                                                                                                                                                                                          
    {                                                                                                                                                                                                                                                               
      qqqupload();                                                                                                                                                                                                                                                  
    }                                                                                                                                                                                                                                                               
    /* bitmap separate */                                                                                                                                                                                                                                           
    qqqlast = 1; /* stops qqfun() calling initialise again */                                                                                                                                                                                                       
    /* bitmap */                                                                                                                                                                                                                                                    
    /* bitmap singlefile */                                                                                                                                                                                                                                         
    /* bitmap singlefile notmainfl */                                                                                                                                                                                                                               
    i = -1;                                                                                                                                                                                                                                                         
    do                                                                                                                                                                                                                                                              
    {                                                                                                                                                                                                                                                               
      i++;                                                                                                                                                                                                                                                          
    }                                                                                                                                                                                                                                                               
    while(qqzzglobarrb[i] != (unsigned int * ) 0 );                                                                                                                                                                                                                 
    qqzzglobarrb[i] = &bitmaparr[0];/*b*/                                                                                                                                                                                                                           
    qqzzglobbrns[i] = qqqbranches;                                                                                                                                                                                                                                  
    qqzzglobfileid[i] = (0,zzfileid); /* deliberate */                                                                                                                                                                                                              
  } /*endof qqqqinitialise */                                                                                                                                                                                                                                       
#undef QQQTEMP1                                                                                                                                                                                                                                                     
  /* ----------- zzqqzz ---------------------------------------------------* 294 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* *********************************************************************** 295 *                                                                                                                                                                                  
   *            TEMPLATE MAIN OUTPUT ROUTINE                                                                                                                                                                                                                        
   * This routine should output one or more integers (as                                                                                                                                                                                                            
   * supplied in the procedure interface) to eventually                                                                                                                                                                                                             
   * become a record in the execution history file.                                                                                                                                                                                                                 
   *******************************************************************************                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int remoteproc_250zzqqzz(int qqqi)                                                                                                                                                                                                                         
  {                                                                                                                                                                                                                                                                 
    /* ----------------------------------------------------------------------* 297 *                                                                                                                                                                                
     * The following variables may be required rather than                                                                                                                                                                                                          
     * the normal variables for some compilers: e.g. Cosmic                                                                                                                                                                                                         
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    /* Local copy of the first parameter */                                                                                                                                                                                                                         
    int qqqtemp;                                                                                                                                                                                                                                                    
    /* Local copy of the file identifier */                                                                                                                                                                                                                         
    int qzzqqlocalid;                                                                                                                                                                                                                                               
    qqqtemp = qqqi;                                                                                                                                                                                                                                                 
    qzzqqlocalid = qzzqfileid;                                                                                                                                                                                                                                      
    if ( remoteproc_250zzopen != 1 )                                                                                                                                                                                                                                
    {                                                                                                                                                                                                                                                               
      remoteproc_250zqqzqz1();                                                                                                                                                                                                                                      
    };                                                                                                                                                                                                                                                              
    if ( remoteproc_250zzopen )                                                                                                                                                                                                                                     
    {                                                                                                                                                                                                                                                               
      /* bitmap   */                                                                                                                                                                                                                                                
      if ( qqqi > 0 )                                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
         /* Standard probe */                                                                                                                                                                                                                                       
        /* Single execution history, not main program file */                                                                                                                                                                                                       
        if ( qqqlast == 0 )                                                                                                                                                                                                                                         
        {                                                                                                                                                                                                                                                           
          qqqqinitialise(qqqi);                                                                                                                                                                                                                                     
          qqqlast = 1;                                                                                                                                                                                                                                              
        }                                                                                                                                                                                                                                                           
        bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  } /* End of zzqqzz */                                                                                                                                                                                                                                             
  /* ----------- zqendz ---------------------------------------------------* 303 *                                                                                                                                                                                  
   * This routine is called on exiting a routine in a                                                                                                                                                                                                               
   * module. It closes the execution history.                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
static int remoteproc_250zqendz(int qqqi)                                                                                                                                                                                                                           
  {                                                                                                                                                                                                                                                                 
      if ( remoteproc_250zzopen != 1 )                                                                                                                                                                                                                              
      {                                                                                                                                                                                                                                                             
        remoteproc_250zqqzqz1();                                                                                                                                                                                                                                    
      };                                                                                                                                                                                                                                                            
      /* ----------------------------------------------------------------------* 304 *                                                                                                                                                                              
       * this is the one which puts an integer into                                                                                                                                                                                                                 
       * the execution history file and returns unity.                                                                                                                                                                                                              
       * The format of each field consists of six columns,                                                                                                                                                                                                          
       * the number is right justified in this field.                                                                                                                                                                                                               
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      if ( remoteproc_250zzopen )                                                                                                                                                                                                                                   
      {                                                                                                                                                                                                                                                             
        /* uncompressed */                                                                                                                                                                                                                                          
        /* uncompressed unbuffered */                                                                                                                                                                                                                               
      /* uncompressed unbuffered bitmap  */                                                                                                                                                                                                                         
        if ( qqqi > 0 )                                                                                                                                                                                                                                             
        {                                                                                                                                                                                                                                                           
          bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                     
        }                                                                                                                                                                                                                                                           
        else                                                                                                                                                                                                                                                        
        {                                                                                                                                                                                                                                                           
        }                                                                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    /* ----------------------------------------------------------------------* 307 *                                                                                                                                                                                
     * fclose(remoteproc_250zzhfil);                                                                                                                                                                                                                                
     * remoteproc_250zzopen = 0;                                                                                                                                                                                                                                    
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    return(1);                                                                                                                                                                                                                                                      
  } /* endof zqendz */                                                                                                                                                                                                                                              
  /* ----------- zqzqzq ---------------------------------------------------* 315 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* *********************************************************************** 316 *                                                                                                                                                                                  
   *            TEMPLATE                                                                                                                                                                                                                                            
   * This routine should ideally be called with the last instrumentation                                                                                                                                                                                            
   * point before the program terminates.  It should perform any final actions                                                                                                                                                                                      
   * required.                                                                                                                                                                                                                                                      
   * Note that with host-target systems it is usually not possible for LDRA                                                                                                                                                                                         
   * Testbed to determine where the program is going to be terminated. In such                                                                                                                                                                                      
   * cases a specific call must be provided to perform any final actions.                                                                                                                                                                                           
   *******************************************************************************                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int remoteproc_250zqzqzq(int qqqi)                                                                                                                                                                                                                         
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if ( remoteproc_250zzopen != 1 )                                                                                                                                                                                                                              
      {                                                                                                                                                                                                                                                             
        remoteproc_250zqqzqz1();                                                                                                                                                                                                                                    
      };                                                                                                                                                                                                                                                            
      /* not compressed */                                                                                                                                                                                                                                          
      /* do nothing for bitmap*/                                                                                                                                                                                                                                    
      /* upload the history */                                                                                                                                                                                                                                      
      /* bitmap */                                                                                                                                                                                                                                                  
      /* uncompressed  bitmap */                                                                                                                                                                                                                                    
      remoteproc_250zqendz(qqqi);                                                                                                                                                                                                                                   
        /* qqqupload closes the execution history file */                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    return(1);                                                                                                                                                                                                                                                      
  } /* endof zqzqzq */                                                                                                                                                                                                                                              
  /*   the following routines should be left alone */                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 328 *                                                                                                                                                                                  
   *            remoteproc_250zzzqtz                                                                                                                                                                                                                                
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is not 0.                                                                                                                                                                                                                 
   *                                                                                                                                                                                                                                                                
   *   qqqa - value of expression                                                                                                                                                                                                                                   
   *   qqqb - jump table index.                                                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int remoteproc_250zzzqtz(int qqqa, int qqqb)                                                                                                                                                                                                               
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        remoteproc_250zzqqzz(qqqb) ;                                                                                                                                                                                                                                
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        remoteproc_250zzqqzz(qqqb-1);                                                                                                                                                                                                                               
      };                                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* endof zzzqtz */                                                                                                                                                                                                                                              
  /* ----------------------------------------------------------------------* 329 *                                                                                                                                                                                  
   *            remoteproc_250zzzqfz                                                                                                                                                                                                                                
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is 0.                                                                                                                                                                                                                     
   *                                                                                                                                                                                                                                                                
   *  qqqa - value of expression                                                                                                                                                                                                                                    
   *  qqqb - jump table index.                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int remoteproc_250zzzqfz(int qqqa,int qqqb)                                                                                                                                                                                                                
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        remoteproc_250zzqqzz(qqqb-1);                                                                                                                                                                                                                               
        return(qqqa);                                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        remoteproc_250zzqqzz(qqqb);                                                                                                                                                                                                                                 
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* zzzqfz */                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 333 *                                                                                                                                                                                  
   *            swzzqqzz                                                                                                                                                                                                                                            
   *  The purpose of this routine is to handle empty cases in switch statements                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int swzzqqzz(int qqqi, int onoff)                                                                                                                                                                                                                          
  {                                                                                                                                                                                                                                                                 
  if ( qqqzzglobflag == 1 || onoff == 1)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    if ( remoteproc_250zzopen != 1 )                                                                                                                                                                                                                                
    {                                                                                                                                                                                                                                                               
      remoteproc_250zqqzqz1();                                                                                                                                                                                                                                      
    };                                                                                                                                                                                                                                                              
    if ( remoteproc_250zzopen )                                                                                                                                                                                                                                     
    {                                                                                                                                                                                                                                                               
      if ( qqqi > 0 )                                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
        bitmaparr[((qqqi-1) >> 3)] |= (1<<((qqqi-1) & 0x07));                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    if ( qqqzzglobflag == 1 )                                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      qqqzzglobflag = 0;                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      qqqzzglobflag = 1;                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
  }                                                                                                                                                                                                                                                                 
    return(1);                                                                                                                                                                                                                                                      
  } /* end of swzzqqzz */                                                                                                                                                                                                                                           
/* END OF TESTBED INSTRUMENTATION */                                                                                                                                                                                                                                
 
/* End File Insert : /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_remoteproc.c */
#ifdef _MSC_VER
#pragma message (" => Compiling source: /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_remoteproc.c finished")
#endif
#undef qqoutput
/*
 * Post-include code will be placed here
 * this code is located at global scope and should consist of
 * declarations, preprocessor directives (e.g. #include) or procedures
 */
/*
 * To include tbrunlib.h before the source code
 * set the profile_string "TBRUNLIB_BEFORE_SOURCE=TRUE"
 * in Testbed.ini prior to invoking TBrun
 */
/* Start File Insert : /proj/xhdsswstaff/ssw/tools/LDRA/Non-Safety/ldra_toolsuite954/c/ctbrunlib.h */
#ifndef  LDRA_TBRUNLIB
#define  LDRA_TBRUNLIB

/*
 * include files required by the conversion routines
 */
#include <string.h>
#include <ctype.h>
#ifdef _WIN32
#include <float.h>
#endif

#if defined __ghs__
#define ldra_qq_fp_routines_static
#else
#undef ldra_qq_fp_routines_static
#endif

#define ldra_int_sprintf sprintf

#if defined _WCHAR_T_DEFINED
#if defined __MINGW_H
#if defined __need_wchar_t
#define __LDRA_QQ_WCHAR_T_DEFINED
#include <stdlib.h>
#define __LDRA_QQ_STDLIB_INCLUDED
#endif
#else
#define __LDRA_QQ_WCHAR_T_DEFINED
#include <stdlib.h>
#define __LDRA_QQ_STDLIB_INCLUDED
#endif
#endif

#ifndef __LDRA_QQ_STDLIB_INCLUDED
#if defined __LDRA_QQ_INCLUDE_STDLIB
#include <stdlib.h>
#define __LDRA_QQ_STDLIB_INCLUDED
#endif
#endif

#ifndef __LDRA_QQ_STDLIB_INCLUDED
#if defined _STDLIB_H || defined _INC_STDLIB || defined _STDLIB_H_
#define __LDRA_QQ_STDLIB_INCLUDED
#endif
#endif

/*
 * definition of redundant conversion routines for backwards compatibility
 */
#define BOOL_to_string_convert ldra_qq_BOOL_convert
#define char_to_string_convert ldra_qq_char_convert
#define char_star_to_string_convert ldra_qq_char_star_convert

/*
 *
 * Module ctbrunlib.h contains various conversion and comparison routines
 * used in TBrun.
 *
 * All procedures declared are not to be declared as static. They should
 * be preprocessed with the ldra_qq_tbrun_host with a semi-colon in the
 * true section (making it a prototype) and the function definition in the
 * else section. This is so that the function is declared in the driver
 * program and is prototyped in the host programs.
 *
 * The first parameter in the conversion routines (value) is of the
 * declaration type of the variable being converted to text.
 *
 * The second parameter in the conversion routines (res) points to a char
 * buffer created in the sequencer and harness programs. This has a default size
 * of 512 but this can be modified by setting the value of the profile string
 * TBRUN_SH_BUFFER_SIZE in testbed.ini accordingly.
 *
 * In addition to the comparison routines contained within this file,
 * operator == will also be used by default.
 *
 * When a declaration type has no known conversion method, the user will be
 * prompted to enter the appropiate details. In the cases of declaration types
 * BOOL, char, char*, CString and string the dialog will automatically be populated
 * with the LDRA supplied procedures ldra_qq_BOOL_convert,
 * ldra_qq_char_convert, ldra_qq_char_star_convert, CString_to_char_convert
 * and ldra_qq_string_convert respectively. These defaults may then be altered
 * as required by the user.
 *
 */

#ifndef _ldra_qq_strcmp_
#define _ldra_qq_strcmp_
int ldra_qq_strcmp (const char *a,const char *b)
#if defined ldra_qq_tbrun_host
;
#else
{
  int ret = 0;

  if (a == (const char*)(0) && b == (const char*)(0))
  {
    ret = 0;
  }
  else if (a == (const char*)(0))
  {
    ret = 1;
  }
  else if (b == (const char*)(0))
  {
    ret = -1;
  }
  else
  {
    while (!(ret = *(unsigned char *)a - *(unsigned char *)b) && *b)
    {
      ++a;
      ++b;
    }

    if (ret < 0 )
    {
      ret = -1;
    }
    else if (ret > 0)
    {
      ret = 1;
    }
  }

  return ret;
}
#endif
#endif

#if defined __LDRA_QQ_WCHAR_T_DEFINED
#ifndef _ldra_qq_wcscmp_
#define _ldra_qq_wcscmp_
int ldra_qq_wcscmp (const wchar_t *a,const wchar_t *b)
#if defined ldra_qq_tbrun_host
;
#else
{
  int ret = 0;

  if (a == (const wchar_t*)(0) && b == (const wchar_t*)(0))
  {
    ret = 0;
  }
  else if (a == (const wchar_t*)(0))
  {
    ret = 1;
  }
  else if (b == (const wchar_t*)(0))
  {
    ret = -1;
  }
  else
  {
    while (!(ret = *(wchar_t *)a - *(wchar_t *)b) && *b)
    {
      ++a;
      ++b;
    }

    if (ret < 0 )
    {
      ret = -1;
    }
    else if (ret > 0)
    {
      ret = 1;
    }
  }

  return ret;
}
#endif
#endif
#endif

#ifndef _ldra_qq_strlen_
#define _ldra_qq_strlen_
int ldra_qq_strlen (const char *s)
#if defined ldra_qq_tbrun_host
;
#else
{
  int sz = 0;
  char *sptr = (char*) s;

  if (sptr != (char *)(0))
  {
    while (*sptr != '\0')
    {
      sptr++;
      sz++;
    }
  }

  return sz;
}
#endif
#endif

#ifndef _ldra_qq_strcpy_
#define _ldra_qq_strcpy_
char *ldra_qq_strcpy (char *dest,const char *src)
#if defined ldra_qq_tbrun_host
;
#else
{
  char *d = dest;

  while (*src)
  {
    *d = *src;
    d++;
    src++;
  }

  *d = '\0';

  return dest;
}
#endif
#endif

#ifndef _ldra_qq_strcat_
#define _ldra_qq_strcat_
char *ldra_qq_strcat (char *dest,const char *src)
#if defined ldra_qq_tbrun_host
;
#else
{
  char *d = dest;

  while (*d)
  {
    d++;
  }

  while (*src)
  {
    *d = *src;
    d++;
    src++;
  }

  *d = '\0';

  return dest;
}
#endif
#endif

#ifndef _ldra_qq_mem_alloc_
#define _ldra_qq_mem_alloc_
void *ldra_qq_mem_alloc (unsigned sz,const void *mem)
#if defined ldra_qq_tbrun_host
;
#else
{
  void *ret;

#if defined __LDRA_QQ_STDLIB_INCLUDED
/*
 * calloc requires the inclusion of stdlib.h
 */
  ret = calloc (1,sz);
  if (ret != (void*)(0) && mem != (const void*)(0))
  {
    unsigned i;
    void * dst = ret;
    const void * src = mem;

    for (i=0;i<sz;i++)
    {
      *(char *)dst = *(char *)src;
      dst = (char *)dst + 1;
      src = (char *)src + 1;
    }
  }
#else
  ret = (void*)(0);
#endif

  return ret;
}
#endif
#endif

/*** TBrun_qq_Search_Convert : ldra_qq_BOOL_convert : BOOL
 *
 * procedure ldra_qq_BOOL_convert
 *
 * Converts a variable of type BOOL into an ASCII string
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_BOOL_convert_
#ifdef ldra_qq_BOOL_used
int ldra_qq_BOOL_convert(BOOL value,char *res)
#if defined ldra_qq_tbrun_host
;
#else
{
  int valid = 1;

#if 1  
  if (value)
  {
    ldra_qq_strcpy (res,"TRUE");
  }
  else
  {
    ldra_qq_strcpy (res,"FALSE");
  }
#else
/*
 * this is the better algorithm for evaluating BOOL
 * but it depends on TRUE and FALSE being defined
 */
  if (value == TRUE)
  {
    ldra_qq_strcpy (res,"TRUE");
  }
  else if (value == FALSE)
  {
    ldra_qq_strcpy (res,"FALSE");
  }
  else
  {
    ldra_qq_strcpy (res,"Invalid BOOL Value");
    valid = 0;
  }
#endif

  return valid;
}
#endif
#endif
#endif

/*** TBrun_qq_Search_Convert : ldra_qq_bool_convert : bool
 *
 * procedure ldra_qq_bool_convert
 *
 * Converts a variable of type bool into an ASCII string
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_bool_convert_
#ifdef ldra_qq_bool_used
int ldra_qq_bool_convert(bool value,char *res)
#if defined ldra_qq_tbrun_host
;
#else
{
  int valid = 1;

#if 1  
  if (value)
  {
    ldra_qq_strcpy (res,"true");
  }
  else
  {
    ldra_qq_strcpy (res,"false");
  }
#else
/*
 * this is the better algorithm for evaluating bool
 * but it depends on true and false being defined
 */
  if (value == true)
  {
    ldra_qq_strcpy (res,"true");
  }
  else if (value == false)
  {
    ldra_qq_strcpy (res,"false");
  }
  else
  {
    ldra_qq_strcpy (res,"Invalid bool Value");
    valid = 0;
  }
#endif

  return valid;
}
#endif
#endif
#endif

/*** TBrun_qq_Search_Convert : ldra_qq_char_convert : char
 *
 * procedure ldra_qq_char_convert
 *
 * Converts a variable of type char into an ASCII string
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_char_convert_
int ldra_qq_char_convert(char value,char *res)
#if defined ldra_qq_tbrun_host
;
#else
{
  if (value == '\\' || value == '%' || value == 0x27 || value == 0x22)
  {
/*
 * special case to handle escape characters
 */
    sprintf (res,"%d",(int)value);
  }
  else if (isprint (value))
  {
    sprintf (res,"'%c'",value);
  }
  else
  {
    sprintf (res,"%d",(int)value);
  }
  return 1;
}
#endif
#endif

/*** TBrun_qq_Search_Convert : ldra_qq_char_star_convert : char*
 *
 * procedure ldra_qq_char_star_convert
 *
 * Converts a variable of type char* into an ASCII string
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_char_star_convert_
int ldra_qq_char_star_convert(char *value,char *res)
#if defined ldra_qq_tbrun_host
;
#else
{
  int valid = 1;

  if (value == NULL)
  {
    ldra_qq_strcpy (res,"NULL");
  }
  else
  {
    char *v = value;
    int escapes = 0;

    while (*v != '\0' && valid == 1)
    {
#if !defined __Char_Is_Unsigned__ && !defined _CHAR_UNSIGNED
      if (*v < 0)
      {
        valid = 0;
      }
      else
#endif
      if (isprint (*v) == 0)
      {
        if (isspace (*v) == 0)
        {
          valid = 0;
        }
        else
        {
          escapes++;
        }
      }
      else if (*v == '\"' || *v == '\\')
      {
        escapes++;
      }

      v++;
    }

    if (valid == 1)
    {
      if (escapes == 0)
      {
        sprintf (res,"\"%s\"",value);
      }
      else
      {
        char *r = res;
        v = value;
        *r++ = '\"';

        while (*v != '\0')
        {
          if (*v == '\"')
          {
            *r++ = '\\';
            *r++ = '\"';
          }
          else if (*v == '\\')
          {
            *r++ = '\\';
            *r++ = '\\';
          }
          else if (isspace (*v) != 0)
          {
            switch (*v)
            {
              case '\t':
                *r++ = '\\';
                *r++ = 't';
                break;
              case '\n':
                *r++ = '\\';
                *r++ = 'n';
                break;
              case '\v':
                *r++ = '\\';
                *r++ = 'v';
                break;
              case '\f':
                *r++ = '\\';
                *r++ = 'f';
                break;
              case '\r':
                *r++ = '\\';
                *r++ = 'r';
                break;
              default:
                *r++ = *v;
                break;
            }
          }
          else
          {
            *r++ = *v;
          }

          v++;
        }

        *r++ = '\"';
        *r++ = '\0';
      }
    }
    else
    {
      ldra_qq_strcpy (res,"Invalid char* Value");
    }
  }
  return valid;
}
#endif
#endif

#if defined __LDRA_QQ_WCHAR_T_DEFINED
/*** TBrun_qq_Search_Convert : ldra_qq_wchar_t_convert : wchar_t
 *
 * procedure ldra_qq_wchar_t_convert
 *
 * Converts a variable of type wchar_t into an ASCII string
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_wchar_t_convert_
int ldra_qq_wchar_t_convert(wchar_t value,char *res)
#if defined ldra_qq_tbrun_host
;
#else
{
  if (value == '\\' || value == '%' || value == 0x27 || value == 0x22)
  {
/*
 * special case to handle escape characters
 */
    sprintf (res,"%d",(int)value);
  }
#if defined _WCTYPE_DEFINED
  else if (iswprint (value))
  {
    char val = 0;
    wctomb (&val,value);
    sprintf (res,"L'%c'",val);
  }
#endif
  else
  {
    sprintf (res,"%d",(int)value);
  }
  return 1;
}
#endif
#endif

/*** TBrun_qq_Search_Convert : ldra_qq_wchar_t_star_convert : wchar_t*
 *
 * procedure ldra_qq_wchar_t_star_convert
 *
 * Converts a variable of type wchar_t* into an ASCII string
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_wchar_t_star_convert_
int ldra_qq_wchar_t_star_convert(wchar_t *value,char *res)
#if defined ldra_qq_tbrun_host
;
#else
{
  if (value == NULL)
  {
    ldra_qq_strcpy (res,"NULL");
  }
  else
  {
    wchar_t *v = value;
    char *r = res;
    *r = 'L';
    r++;
    *r = '"';
    r++;
    while (*v != 0)
    {
      char val = 0;
#if defined _WCTYPE_DEFINED
      if (iswprint (*v))
      {
        wctomb (&val,*v);
      }
      else
#endif
      {
        val = (char) *v;
      }
      *r = val;
      v++;
      r++;
    }
    *r = '"';
    r++;
    *r = '\0';
  }
  return 1;
}
#endif
#endif
#endif

#ifdef _MFC_VER
/*** TBrun_qq_Search_Convert : ldra_qq_CString_convert : CString
 *
 * procedure ldra_qq_CString_convert
 *
 * Converts a variable of type CString into an ASCII string
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_CString_convert_
int ldra_qq_CString_convert(CString &value,char *res)
#if defined ldra_qq_tbrun_host
;
#else
{
  sprintf (res,"CString (\"%s\")",value);
  return 1;
}
#endif
#endif
#endif

/*** TBrun_qq_Search_Convert : ldra_qq_double_convert : double
 *
 * procedure ldra_qq_double_convert
 *
 * Converts a variable of type double into an ASCII string
 *
 */
#if defined ldra_qq_fp_routines_static
static
#endif
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_double_convert_
int ldra_qq_double_convert (double value,char *res)
#if defined ldra_qq_tbrun_host && !defined ldra_qq_fp_routines_static
;
#else
{
  int valid = 1;

#ifdef _WIN32
  if (_isnan (value))
  {
    valid = 0;
    ldra_qq_strcpy (res,"Not a Number");
  }
  else if (_finite (value) == 0)
  {
    valid = 0;
    ldra_qq_strcpy (res,"Infinite");
  }
  else
#endif
  {
    sprintf (res,"%e",value);
 
    if (ldra_qq_strcmp (res,"inf") == 0 ||
        ldra_qq_strcmp (res,"Inf") == 0)
    {
      valid = 0;
      ldra_qq_strcpy (res,"Infinite");
    }	    
  }

  return valid;
}
#endif
#endif

/*** TBrun_qq_Search_Convert : ldra_qq_float_convert : float
 *
 * procedure ldra_qq_float_convert
 *
 * Converts a variable of type float into an ASCII string
 *
 */
#if defined ldra_qq_fp_routines_static
static
#endif
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_float_convert_
int ldra_qq_float_convert (float value,char *res)
#if defined ldra_qq_tbrun_host && !defined ldra_qq_fp_routines_static
;
#else
{
  int valid = 1;

#ifdef _WIN32
  if (_isnan (value))
  {
    valid = 0;
    ldra_qq_strcpy (res,"Not a Number");
  }
  else if (_finite (value) == 0)
  {
    valid = 0;
    ldra_qq_strcpy (res,"Infinite");
  }
  else
#endif
  {
    sprintf (res,"%e",(double)value);
    if (ldra_qq_strcmp (res,"inf") == 0 ||
        ldra_qq_strcmp (res,"Inf") == 0)
    {
      valid = 0;
      ldra_qq_strcpy (res,"Infinite");
    }	
  }

  return valid;
}
#endif
#endif

/*** TBrun_qq_Search_Convert : ldra_qq_hex_convert : int
 *
 * procedure ldra_qq_hex_convert
 *
 * Converts a variable of type int into an ASCII string in hex format
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_hex_convert_
int ldra_qq_hex_convert(int value,char *res)
#if defined ldra_qq_tbrun_host
;
#else
{
  sprintf (res,"0x%x",value);
  return 1;
}
#endif
#endif

/*** TBrun_qq_Search_Convert : ldra_qq_long_double_convert : long double
 *
 * procedure ldra_qq_long_double_convert
 *
 * Converts a variable of type long double into an ASCII string
 *
 */
#if defined ldra_qq_fp_routines_static
static
#endif
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_long_double_convert_
int ldra_qq_long_double_convert (long double value,char *res)
#if defined ldra_qq_tbrun_host && !defined ldra_qq_fp_routines_static
;
#else
{
  int valid = 1;

#ifdef _WIN32
  if (_isnan (value))
  {
    valid = 0;
    ldra_qq_strcpy (res,"Not a Number");
  }
  else if (_finite (value) == 0)
  {
    valid = 0;
    ldra_qq_strcpy (res,"Infinite");
  }
  else
#endif
  {
    sprintf (res,"%Le",value);
    if (ldra_qq_strcmp (res,"inf") == 0 ||
        ldra_qq_strcmp (res,"Inf") == 0)
    {
      valid = 0;
      ldra_qq_strcpy (res,"Infinite");
    }	    
  }

  return valid;
}
#endif
#endif

#if defined __GNUC__ || defined __ghs__
#if !defined __STRICT_ANSI__ || defined __LL_BIT
#define __LDRA_QQ_LONG_LONG_DEFINED__
#endif
#else
#if defined _MSC_VER
#if _MSC_VER >= 1400
#define __LDRA_QQ_LONG_LONG_DEFINED__
#endif
#endif
#endif

#if defined __LDRA_QQ_LONG_LONG_DEFINED__
/*** TBrun_qq_Search_Convert : ldra_qq_long_long_convert : long long
 *
 * procedure ldra_qq_long_long_convert
 *
 * Converts a variable of type long long into an ASCII string
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_long_long_convert_
int ldra_qq_long_long_convert(long long value,char *res)
#if defined ldra_qq_tbrun_host
;
#else
{
  unsigned long long llbig;
  unsigned long long llsmall;

  unsigned int ibig;
  unsigned int ismall;

  int negative = 0;
  if (value < 0)
  {
    negative = 1;
    value = 0 - value;
  }

  llbig = value & 0x7FFFFFFF00000000LL;
  llsmall = value & 0xFFFFFFFFLL;
  llbig = llbig >> 32;

  ibig = (unsigned int)llbig;
  ismall = (unsigned int)llsmall;

  if (ibig == 0 && ismall == 0)
  {
    if (negative == 1)
    {
      ldra_int_sprintf (res,"-0x80000000%08x",ismall);
    }
    else
    {
      ldra_qq_strcpy (res,"0");
    }
  }
  else if (ibig > 0)
  {
    if (negative == 1)
    {
      sprintf (res,"-0x%x%08x",ibig,ismall);
    }
    else
    {
      sprintf (res,"0x%x%08x",ibig,ismall);
    }
  }
  else
  {
    if (negative == 1)
    {
      sprintf (res,"-0x%08x",ismall);
    }
    else
    {
      sprintf (res,"0x%08x",ismall);
    }
  }

  return 1;
}
#endif
#endif

/*** TBrun_qq_Search_Convert : ldra_qq_ulong_long_convert : unsigned long long
 *
 * procedure ldra_qq_ulong_long_convert
 *
 * Converts a variable of type unsigned long long into an ASCII string
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_ulong_long_convert_
int ldra_qq_ulong_long_convert(unsigned long long value,char *res)
#if defined ldra_qq_tbrun_host
;
#else
{
  unsigned long long llbig;
  unsigned long long llsmall;

  unsigned int ibig;
  unsigned int ismall;

  llbig = value & 0xFFFFFFFF00000000LL;
  llsmall = value & 0xFFFFFFFFLL;
  llbig = llbig >> 32;

  ibig = (unsigned int)llbig;
  ismall = (unsigned int)llsmall;

  if (ibig > 0)
  {
    sprintf (res,"0x%x%08x",ibig,ismall);
  }
  else
  {
    sprintf (res,"0x%08x",ismall);
  }

  return 1;
}
#endif
#endif
#endif

/*** TBrun_qq_Search_Convert : ldra_qq_unsigned_char_convert : unsigned char
 *
 * procedure ldra_qq_unsigned_char_convert
 *
 * Converts a variable of type unsigned char into an ASCII string
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_unsigned_char_convert_
int ldra_qq_unsigned_char_convert(unsigned char value,char *res)
#if defined ldra_qq_tbrun_host
;
#else
{
  if (value > 127)
  {
    sprintf (res,"%d",(int)value);
  }
  else
  {
    if (value == '\\' || value == '%' || value == 0x27 || value == 0x22)
    {
/*
 * special case to handle escape characters
 */
      sprintf (res,"%d",(int)value);
    }
    else if (isprint (value))
    {
      sprintf (res,"'%c'",value);
    }
    else
    {
      sprintf (res,"%d",(int)value);
    }
  }
  return 1;
}
#endif
#endif

/*** TBrun_qq_Search_Compare : ldra_qq_string_compare : char*
 *
 * procedure ldra_qq_string_compare
 *
 *
 * Compares two char* strings and returns TRUE if they are equal
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_string_compare_
int ldra_qq_string_compare (char *a,char *b)
#if defined ldra_qq_tbrun_host
;
#else
{
  int equal = 0;

  if (a == NULL && b == NULL)
  {
    equal = 1;
  }
  else if (a != NULL && b != NULL)
  {
    equal = ldra_qq_strcmp (a,b) == 0;
  }

  return equal;
}
#endif
#endif

/*** TBrun_qq_Search_Compare : ldra_qq_const_string_compare : const char*
 *
 * procedure ldra_qq_const_string_compare
 *
 *
 * Compares two const char* strings and returns TRUE if they are equal
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_const_string_compare_
int ldra_qq_const_string_compare (const char *a,const char *b)
#if defined ldra_qq_tbrun_host
;
#else
{
  int equal = 0;

  if (a == NULL && b == NULL)
  {
    equal = 1;
  }
  else if (a != NULL && b != NULL)
  {
    equal = ldra_qq_strcmp (a,b) == 0;
  }

  return equal;
}
#endif
#endif

#if defined __LDRA_QQ_WCHAR_T_DEFINED
/*** TBrun_qq_Search_Compare : ldra_qq_wstring_compare : wchar_t*
 *
 * procedure ldra_qq_wstring_compare
 *
 *
 * Compares two wchar_t* strings and returns TRUE if they are equal
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_wstring_compare_
int ldra_qq_wstring_compare (wchar_t *a,wchar_t *b)
#if defined ldra_qq_tbrun_host
;
#else
{
  int equal = 0;

  if (a == NULL && b == NULL)
  {
    equal = 1;
  }
  else if (a != NULL && b != NULL)
  {
    equal = ldra_qq_wcscmp (a,b) == 0;
  }

  return equal;
}
#endif
#endif

/*** TBrun_qq_Search_Compare : ldra_qq_const_wstring_compare : wchar_t*
 *
 * procedure ldra_qq_const_wstring_compare
 *
 *
 * Compares two const wchar_t* strings and returns TRUE if they are equal
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_const_wstring_compare_
int ldra_qq_const_wstring_compare (const wchar_t *a,const wchar_t *b)
#if defined ldra_qq_tbrun_host
;
#else
{
  int equal = 0;

  if (a == NULL && b == NULL)
  {
    equal = 1;
  }
  else if (a != NULL && b != NULL)
  {
    equal = ldra_qq_wcscmp (a,b) == 0;
  }

  return equal;
}
#endif
#endif
#endif

/* 
 * LDRA_QQ_DUMMY_FILE_IO is defined in:
 * KC51_Cshlayout.dat
 * KC166_Cshlayout.dat
 * compilers have no FILE type.
 */
#ifndef LDRA_QQ_DUMMY_FILE_IO
/*** TBrun_qq_Search_Compare : ldra_qq_file_exact_compare : char*
 *
 * procedure ldra_qq_file_exact_compare
 *
 *
 * Compares two files named by char* strings and returns TRUE if they are equal
 *
 */
#if !defined _ldra_tbrunlib_optimised_ || defined _ldra_qq_file_exact_compare_
int ldra_qq_file_exact_compare (char *file1,char *file2)
#if defined ldra_qq_tbrun_host
;
#else
{
  int equal = 0;
  FILE *fp1 = NULL;
  FILE* fp2 = NULL;
  int ch1;
  int ch2;
  int end_found = 0;

  if (file1 != NULL && file2 != NULL)
  {
    fp1 = fopen (file1,"r");
    fp2 = fopen (file2,"r");

    if (fp1 != NULL && fp2 != NULL)
    {
      do
      {
        ch1 = fgetc (fp1);
        ch2 = fgetc (fp2);
        if (ch1 == EOF || ch2 == EOF)
        {
          end_found = 1;
        }
        if (ch1 == ch2)
        {
          equal = 1;
        }
        else
        {
          equal = 0;
        }
      } while (equal == 1 && end_found == 0);
    }

    if (fp1 != NULL)
    {
      fclose (fp1);
    }

    if (fp2 != NULL)
    {
      fclose (fp2);
    }
  }

  return equal;
}
#endif
#endif
#endif
#endif

/* End File Insert : /proj/xhdsswstaff/ssw/tools/LDRA/Non-Safety/ldra_toolsuite954/c/ctbrunlib.h */


/*
 * Additional user defined globals
 */
struct remoteproc temp;
struct remoteproc_mem temp2;
struct remoteproc_mem temp3;
struct remoteproc_ops temp4;
struct remoteproc_ops zynqmp_r5_a53_proc_ops;
metal_phys_addr_t pa;
unsigned long* offset;
void* va;
struct virtio_device temp5;
struct remoteproc_virtio temp7;
void* data;
void* priv;

/* ****20 Stub utilities */

struct ldra_qq_stub_hit_count
{
  int last_tc;
  int this_count;
  int total_count;
};

struct ldra_qq_stub_hit_order
{
  int total;
  int index;
  /*
   * 0 = no error
   * 1 = stub hit order total exceeded
   * 2 = incorrect stub hit found
   */
  int error_code;
};

void ldra_qq_set_stub_smho (int* ldra_qq_matrix, int* ldra_qq_index, int ldra_qq_max,
                            int ldra_qq_stub_id, char* ldra_qq_stub_name, int ldra_qq_hc)
{
  char ecc = '\0';
  int found = 0;
  int ind;
  int hc;
#if defined ldra_qq_nodotdotdot
  char buff[50];
#endif

  if (ldra_qq_quiet_stubs == 0)
  {
    do
    {
      if (*ldra_qq_index >= ldra_qq_max ||
          ldra_qq_matrix[*ldra_qq_index] == ldra_qq_smho_tc_terminator)
      {
        /* stub hit order total exceeded */
        ecc = 'X';
      }
      else if (ldra_qq_matrix[*ldra_qq_index] == ldra_qq_hc)
      {
        /* hit count found - look for stub id */
        hc = *ldra_qq_index + 1;
        ind = hc + 1;
        while (ecc == '\0' && ldra_qq_matrix[ind] != ldra_qq_smho_hc_terminator)
        {
          if (ldra_qq_matrix[ind] == ldra_qq_stub_id)
          {
            ecc = 'P';
            ldra_qq_matrix[hc] = 1;
          }
          ind++;
        }
        if (ecc == '\0')
        {
          ecc = 'F';
          ldra_qq_matrix[hc] = -1;
        }
      }
      else if (ldra_qq_matrix[*ldra_qq_index] < ldra_qq_hc)
      {
        /* move on to the next hit */
        do
        {
          (*ldra_qq_index)++;
        } while (ldra_qq_matrix[*ldra_qq_index] != ldra_qq_smho_hc_terminator);
        (*ldra_qq_index)++;
      }
      else
      {
        /* not specified for this hit */
        ecc = 'U';
      }
    } while (ecc == '\0');

#if defined ldra_qq_nodotdotdot
    ldra_qq_tbrun_output ("Y ",1,0);

    buff[0] = ecc;
    buff[1] = ' ';
    buff[2] = '\0';
    ldra_qq_tbrun_output (buff,0,0);

    sprintf (buff,"%d ",ldra_qq_stub_id);
    ldra_qq_tbrun_output (buff,0,0);

    ldra_qq_tbrun_output (ldra_qq_stub_name,0,1);
#else
    ldra_qq_tbrun_output ("Y %c %d %s\n",ecc,ldra_qq_stub_id,ldra_qq_stub_name);
#endif
  }
} /* end of ldra_qq_set_stub_smho */

int ldra_qq_confirm_smho (int* ldra_qq_matrix, int ldra_qq_ho_total)
{
  int ret = 1;
  int ldra_qq_ho_expected = 0;
  int ec = 0;
  char pf = 'P';
#if defined ldra_qq_nodotdotdot
  char buff[50];
#endif

  if (ldra_qq_quiet_stubs == 0)
  {
    while (*ldra_qq_matrix != ldra_qq_smho_tc_terminator)
    {
      ldra_qq_ho_expected = *ldra_qq_matrix;
      ldra_qq_matrix++;
      if (*ldra_qq_matrix == ldra_qq_smho_executed_incorrect)
      {
        ec |= 2;
        pf = 'F';
      }
      while (*ldra_qq_matrix != ldra_qq_smho_hc_terminator)
      {
        ldra_qq_matrix++;
      }
      ldra_qq_matrix++;
    }

    if (ldra_qq_ho_expected < ldra_qq_ho_total)
    {
      ec |= 1;
      pf = 'F';
    }
    else if (ldra_qq_ho_expected > ldra_qq_ho_total)
    {
      ec |= 4;
      pf = 'F';
    }

#if defined ldra_qq_nodotdotdot
    ldra_qq_tbrun_output ("Z ",1,0);

    buff[0] = pf;
    buff[1] = ' ';
    buff[2] = '\0';
    ldra_qq_tbrun_output (buff,0,0);

    sprintf (buff,"%d ",ldra_qq_ho_total);
    ldra_qq_tbrun_output (buff,0,0);

    sprintf (buff,"%d ",ldra_qq_ho_expected);
    ldra_qq_tbrun_output (buff,0,0);

    sprintf (buff,"%d ",ec);
    ldra_qq_tbrun_output (buff,0,1);
#else
    ldra_qq_tbrun_output ("Z %c %d %d %d\n",pf,ldra_qq_ho_total,ldra_qq_ho_expected,ec);
#endif
  }

  return ret;
} /* end of ldra_qq_confirm_smho */

int ldra_qq_set_stub_hit_order (struct ldra_qq_stub_hit_order* ldra_qq_stub_ho,
                                int* ldra_qq_ho_arr, char* ldra_qq_ho_name, int ldra_qq_ho_code)
{
  int ret = -1;
  int ec = 0;
  char ecc = 'P';
#if defined ldra_qq_nodotdotdot
  char buff[50];
#endif

  if (ldra_qq_quiet_stubs == 0)
  {
    ldra_qq_stub_ho->index = ldra_qq_stub_ho->index + 1;
    if (ldra_qq_stub_ho->index < ldra_qq_stub_ho->total)
    {
      if (ldra_qq_ho_arr[ldra_qq_stub_ho->index] == ldra_qq_ho_code)
      {
        /* return the index of the verified call */
        ret = ldra_qq_stub_ho->index;
      }
      else
      {
        /* incorrect stub hit found */
        ec = 2;
        ecc = 'F';
      }
    }
    else
    {
      /* stub hit order total exceeded */
      ec = 1;
      ecc = 'X';
    }

    if (ldra_qq_stub_ho->error_code == 0 && ec != 0)
    {
      ldra_qq_stub_ho->error_code = ec;
    }

#if defined ldra_qq_nodotdotdot
    ldra_qq_tbrun_output ("Y ",1,0);

    buff[0] = ecc;
    buff[1] = ' ';
    buff[2] = '\0';
    ldra_qq_tbrun_output (buff,0,0);

    sprintf (buff,"%d ",ldra_qq_stub_ho->index);
    ldra_qq_tbrun_output (buff,0,0);

    ldra_qq_tbrun_output (ldra_qq_ho_name,0,1);
#else
    ldra_qq_tbrun_output ("Y %c %d %s\n",ecc,ldra_qq_stub_ho->index,ldra_qq_ho_name);
#endif
  }

  return ret;
} /* end of ldra_qq_set_stub_hit_order */

int ldra_qq_confirm_stub_hit_order (struct ldra_qq_stub_hit_order ldra_qq_stub_ho)
{
  int ret = 1;
  char pf = 'P';
#if defined ldra_qq_nodotdotdot
  char buff[50];
#endif

  if (ldra_qq_quiet_stubs == 0)
  {
    if (ldra_qq_stub_ho.error_code != 0)
    {
      pf = 'F';
      ret = 0;
    }
    else
    {
      if ((ldra_qq_stub_ho.index + 1) != ldra_qq_stub_ho.total)
      {
        pf = 'F';
        ret = 0;
      }
    }

#if defined ldra_qq_nodotdotdot
    ldra_qq_tbrun_output ("Z ",1,0);

    buff[0] = pf;
    buff[1] = ' ';
    buff[2] = '\0';
    ldra_qq_tbrun_output (buff,0,0);

    sprintf (buff,"%d ",ldra_qq_stub_ho.total);
    ldra_qq_tbrun_output (buff,0,0);

    sprintf (buff,"%d ",ldra_qq_stub_ho.index);
    ldra_qq_tbrun_output (buff,0,0);

    sprintf (buff,"%d ",ldra_qq_stub_ho.error_code);
    ldra_qq_tbrun_output (buff,0,1);
#else
    ldra_qq_tbrun_output ("Z %c %d %d %d\n",pf,ldra_qq_stub_ho.total,
                          ldra_qq_stub_ho.index,ldra_qq_stub_ho.error_code);
#endif
  }

  return ret;
} /* end of ldra_qq_confirm_stub_hit_order */

void ldra_qq_set_stub_hit_count (int* last_tc, int* this_count, int* total_count)
{
  if (*last_tc != ldra_qq_test_case_number)
  {
  /*
   * the test case has changed from the last hit -
   * so change the test case number and reset the hit count
   */
    *last_tc = ldra_qq_test_case_number;
    *this_count = 0;
  }
  (*this_count)++;
  (*total_count)++;
} /* end of ldra_qq_set_stub_hit_count */

void ldra_qq_stub_start (char* ldra_qq_pname)
{
  if (ldra_qq_quiet_stubs == 0)
  {
#if defined ldra_qq_nodotdotdot
    ldra_qq_tbrun_output ("P S ",1,0);
    ldra_qq_tbrun_output (ldra_qq_pname,0,1);
#else
    ldra_qq_tbrun_output ("P S %s\n",ldra_qq_pname);
#endif
  }
} /* end of ldra_qq_stub_start */

void ldra_qq_stub_end (int ldra_qq_stub_valid, char* ldra_qq_stub_message)
{
  if (ldra_qq_quiet_stubs == 0)
  {
#if defined ldra_qq_nodotdotdot
    if (ldra_qq_stub_message == (char*)(0))
    {
      if (ldra_qq_stub_valid)
      {
        ldra_qq_tbrun_output ("P E V",1,1);
      }
      else
      {
        ldra_qq_tbrun_output ("P E F",1,1);
      }
    }
    else
    {
      if (ldra_qq_stub_valid)
      {
        ldra_qq_tbrun_output ("P E V ",1,0);
        ldra_qq_tbrun_output (ldra_qq_stub_message,0,1);
      }
      else
      {
        ldra_qq_tbrun_output ("P E F ",1,0);
        ldra_qq_tbrun_output (ldra_qq_stub_message,0,1);
      }
    }
#else
    if (ldra_qq_stub_message == (char*)(0))
    {
      if (ldra_qq_stub_valid)
      {
        ldra_qq_tbrun_output ("P E V\n");
      }
      else
      {
        ldra_qq_tbrun_output ("P E F\n");
      }
    }
    else
    {
      if (ldra_qq_stub_valid)
      {
        ldra_qq_tbrun_output ("P E V %s\n",ldra_qq_stub_message);
      }
      else
      {
        ldra_qq_tbrun_output ("P E F %s\n",ldra_qq_stub_message);
      }
    }
#endif
  }
} /* end of ldra_qq_stub_end */

#if defined ldra_qq_nodotdotdot
void ldra_qq_test_comment (char* fmt, int start, int new_line)
#else
void ldra_qq_test_comment (char* fmt, ...)
#endif
{
  if (ldra_qq_quiet_stubs == 0)
  {
    if (fmt == (char*)(0))
    {
#if defined ldra_qq_nodotdotdot
      if (start)
      {
        ldra_qq_tbrun_output ("M ",1,0);
      }
      ldra_qq_tbrun_output ("",0,new_line);
#else
      ldra_qq_tbrun_output ("M\n");
#endif
    }
    else
    {
#if defined ldra_qq_nodotdotdot
      if (start)
      {
        ldra_qq_tbrun_output ("M ",1,0);
      }
      ldra_qq_tbrun_output (fmt,0,new_line);
#else
      char buff[1024] = {0};
      va_list va;

      va_start (va,fmt);
      vsprintf (buff,fmt,va);
      va_end (va);
      ldra_qq_tbrun_output ("M %s\n",buff);
#endif
    }
  }
} /* end of ldra_qq_test_comment */

void ldra_qq_stub_start_comment (char* ldra_qq_procname)
{
  if (ldra_qq_quiet_stubs == 0)
  {
#if defined ldra_qq_nodotdotdot
    ldra_qq_test_comment ("***",1,1);
#else
    ldra_qq_test_comment ("***");
#endif
    if (ldra_qq_procname == (char*)(0))
    {
#if defined ldra_qq_nodotdotdot
      ldra_qq_test_comment ("*** Starting Stub",1,1);
#else
      ldra_qq_test_comment ("*** Starting Stub");
#endif
    }
    else
    {
#if defined ldra_qq_nodotdotdot
      ldra_qq_test_comment ("*** Starting Stub : ",1,0);
      ldra_qq_test_comment (ldra_qq_procname,0,1);
#else
      ldra_qq_test_comment ("*** Starting Stub : %s",ldra_qq_procname);
#endif
    }
#if defined ldra_qq_nodotdotdot
    ldra_qq_test_comment ("***",1,1);
#else
    ldra_qq_test_comment ("***");
#endif
  }
} /* end of ldra_qq_stub_start_comment */

void ldra_qq_stub_end_comment (char* ldra_qq_procname)
{
  if (ldra_qq_quiet_stubs == 0)
  {
#if defined ldra_qq_nodotdotdot
    ldra_qq_test_comment ("###",1,1);
#else
    ldra_qq_test_comment ("###");
#endif
    if (ldra_qq_procname == (char*)(0))
    {
#if defined ldra_qq_nodotdotdot
      ldra_qq_test_comment ("### Ending Stub",1,1);
#else
      ldra_qq_test_comment ("### Ending Stub");
#endif
    }
    else
    {
#if defined ldra_qq_nodotdotdot
      ldra_qq_test_comment ("### Ending Stub : ",1,0);
      ldra_qq_test_comment (ldra_qq_procname,0,1);
#else
      ldra_qq_test_comment ("### Ending Stub : %s",ldra_qq_procname);
#endif
    }
#if defined ldra_qq_nodotdotdot
    ldra_qq_test_comment ("###",1,1);
#else
    ldra_qq_test_comment ("###");
#endif
  }
} /* end of ldra_qq_stub_end_comment */

void ldra_qq_stub_invalid_test (char** ldra_qq_stub_mess, int* ldra_qq_stub_val)
{
  *ldra_qq_stub_mess = "Test Failed";
  *ldra_qq_stub_val = 0;
} /* end of ldra_qq_stub_invalid_test */

void ldra_qq_stub_hit_count_test (struct ldra_qq_stub_hit_count ldra_qq_stub_hc,
                                  int tcstyle, char* name, int style, int expected)
{
  int actual = ldra_qq_stub_hc.total_count;
  char tcseq = 'S';
  char pf = 'V';
#if defined ldra_qq_nodotdotdot
  char buff[50];
#endif

  if (ldra_qq_quiet_stubs == 0)
  {
    if (style == 1 || style == 2 || style == 3)
    {
      if (tcstyle)
      {
        tcseq = 'T';
        actual = ldra_qq_stub_hc.this_count;
      }
      switch (style)
      {
        case 1:
          /* fails if executed */
          if (actual > 0)
          {
            pf = 'F';
          }
          break;
        case 2:
          /* fails if not executed */
          if (actual < 1)
          {
            pf = 'F';
          }
          break;
        case 3:
          /* fails if not executed correct number of times */
          if (actual != expected)
          {
            pf = 'F';
          }
          break;
      }

#if defined ldra_qq_nodotdotdot
      ldra_qq_tbrun_output ("H ",1,0);

      buff[0] = tcseq;
      buff[1] = ' ';
      buff[2] = '\0';
      ldra_qq_tbrun_output (buff,0,0);

      ldra_qq_tbrun_output (name,0,0);

      sprintf (buff," %d ",style);
      ldra_qq_tbrun_output (buff,0,0);

      sprintf (buff,"%d ",expected);
      ldra_qq_tbrun_output (buff,0,0);

      sprintf (buff,"%d ",actual);
      ldra_qq_tbrun_output (buff,0,0);

      buff[0] = pf;
      buff[1] = ' ';
      buff[2] = '\0';
      ldra_qq_tbrun_output (buff,0,1);
#else
      ldra_qq_tbrun_output ("H %c %s %d %d %d %c\n",tcseq,name,style,expected,actual,pf);
#endif
    }
  }
} /* end of ldra_qq_stub_hit_count_test */

void ldra_qq_stub_hit_count_comment (struct ldra_qq_stub_hit_count ldra_qq_stub_hc)
{
  if (ldra_qq_quiet_stubs == 0)
  {
#if defined ldra_qq_nodotdotdot
    char buff[50];

    sprintf (buff,"%d",ldra_qq_stub_hc.this_count);
    ldra_qq_test_comment ("Test Case Hit Count : ",1,0);
    ldra_qq_test_comment (buff,0,1);

    sprintf (buff,"%d",ldra_qq_stub_hc.total_count);
    ldra_qq_test_comment ("Sequence Hit Count : ",1,0);
    ldra_qq_test_comment (buff,0,1);
#else
    ldra_qq_test_comment ("Test Case Hit Count : %d",ldra_qq_stub_hc.this_count);
    ldra_qq_test_comment ("Sequence Hit Count  : %d",ldra_qq_stub_hc.total_count);
#endif
  }
} /* end of ldra_qq_stub_hit_count_comment */

/* ****9 Action code comparison routine */

#define ldra_qq_action_code_compare(A) ldra_qq_strcmp (A,ldra_qq_action_code) == 0


/*
 * Return declaration(s) for existing test case(s)
 */
int tbrun_qq_tc1_return;
struct loader_ops * tbrun_qq_tc2_return;
struct loader_ops * tbrun_qq_tc3_return;
int tbrun_qq_tc4_return;
int tbrun_qq_tc5_return;
int tbrun_qq_tc6_return;
struct metal_io_region * tbrun_qq_tc7_return;
int tbrun_qq_tc8_return;
metal_phys_addr_t tbrun_qq_tc9_return;
metal_phys_addr_t tbrun_qq_tc10_return;
int tbrun_qq_tc11_return;
unsigned int tbrun_qq_tc12_return;
int tbrun_qq_tc13_return;
struct loader_ops * tbrun_qq_tc14_return;
int tbrun_qq_tc15_return;
int tbrun_qq_tc16_return;
unsigned int tbrun_qq_tc17_return;
struct metal_io_region * tbrun_qq_tc18_return;
struct metal_io_region * tbrun_qq_tc19_return;
int tbrun_qq_tc21_return;

static int ldra_qq_dtop_int (int expected_value,int actual_value,char * name,
                             char * svalue,char df,int convert,int compare,
                             int convert_ok,char * expstr)
{
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
  char ldra_qq_df_str[3];
  int ldra_qq_saved_history_in_target = ldra_qq_history_in_target;
  testbed_buff[0] = '\0';
  ldra_qq_df_str[0] = df;
  ldra_qq_df_str[1] = ' ';
  ldra_qq_df_str[2] = '\0';
    if (convert == 1)
    {
      sprintf (testbed_buff,"%d",actual_value);
    }
  if (ldra_qq_var_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("O X %c %s\n",df,name);
    ldra_qq_variable_passed = 0;
  }
  else
  {
    if (convert > 0)
    {
      ldra_qq_tbrun_output ("O V %c %s\n",df,name);
      ldra_qq_tbrun_output ("E %s\n",svalue);
    }
    else
    {
      ldra_qq_tbrun_output ("O C %c %s\n",df,name);
      ldra_qq_tbrun_output ("E %s\n",svalue);
    }
    if (ldra_qq_variable_converted == 1)
    {
        ldra_qq_variable_passed = 0;
        if (compare == 1)
        {
          if (expected_value != actual_value)
          {
            ldra_qq_variable_passed = 0;
          }
          else
          {
            ldra_qq_variable_passed = 1;
          }
        }
    }
    else
    {
      if (convert_ok == 0)
      {
        ldra_qq_variable_passed = ldra_qq_string_compare (expstr,testbed_buff);
      }
      else
      {
        ldra_qq_variable_passed = 0;
      }
    }
    if (ldra_qq_variable_passed == 1)
    {
      ldra_qq_tbrun_output ("P ");
    }
    else
    {
      ldra_qq_tbrun_output ("F ");
    }
    ldra_qq_history_in_target = 0;
    if (ldra_qq_variable_converted == 1)
    {
      ldra_qq_tbrun_output ("V");
    }
    else
    {
      ldra_qq_tbrun_output ("F");
    }
    if (convert > 0)
    {
      ldra_qq_tbrun_output (" ");
      ldra_qq_tbrun_output (testbed_buff);
    }
    ldra_qq_tbrun_output ("\n");
    ldra_qq_history_in_target = ldra_qq_saved_history_in_target;
  }
  return ldra_qq_variable_passed;
} /* end of ldra_qq_dtop_int */

static int ldra_qq_dtop_unsigned_int (unsigned int expected_value,unsigned int actual_value,char * name,
                                      char * svalue,char df,int convert,int compare,
                                      int convert_ok,char * expstr)
{
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
  char ldra_qq_df_str[3];
  int ldra_qq_saved_history_in_target = ldra_qq_history_in_target;
  testbed_buff[0] = '\0';
  ldra_qq_df_str[0] = df;
  ldra_qq_df_str[1] = ' ';
  ldra_qq_df_str[2] = '\0';
    if (convert == 1)
    {
      sprintf (testbed_buff,"%u",actual_value);
    }
  if (ldra_qq_var_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("O X %c %s\n",df,name);
    ldra_qq_variable_passed = 0;
  }
  else
  {
    if (convert > 0)
    {
      ldra_qq_tbrun_output ("O V %c %s\n",df,name);
      ldra_qq_tbrun_output ("E %s\n",svalue);
    }
    else
    {
      ldra_qq_tbrun_output ("O C %c %s\n",df,name);
      ldra_qq_tbrun_output ("E %s\n",svalue);
    }
    if (ldra_qq_variable_converted == 1)
    {
        ldra_qq_variable_passed = 0;
        if (compare == 1)
        {
          if (expected_value != actual_value)
          {
            ldra_qq_variable_passed = 0;
          }
          else
          {
            ldra_qq_variable_passed = 1;
          }
        }
    }
    else
    {
      if (convert_ok == 0)
      {
        ldra_qq_variable_passed = ldra_qq_string_compare (expstr,testbed_buff);
      }
      else
      {
        ldra_qq_variable_passed = 0;
      }
    }
    if (ldra_qq_variable_passed == 1)
    {
      ldra_qq_tbrun_output ("P ");
    }
    else
    {
      ldra_qq_tbrun_output ("F ");
    }
    ldra_qq_history_in_target = 0;
    if (ldra_qq_variable_converted == 1)
    {
      ldra_qq_tbrun_output ("V");
    }
    else
    {
      ldra_qq_tbrun_output ("F");
    }
    if (convert > 0)
    {
      ldra_qq_tbrun_output (" ");
      ldra_qq_tbrun_output (testbed_buff);
    }
    ldra_qq_tbrun_output ("\n");
    ldra_qq_history_in_target = ldra_qq_saved_history_in_target;
  }
  return ldra_qq_variable_passed;
} /* end of ldra_qq_dtop_unsigned_int */

/*
 * Prototypes for existing test cases
 */
int ldra_qq_execute_test_case_1 ();
int ldra_qq_execute_test_case_2 ();
int ldra_qq_execute_test_case_3 ();
int ldra_qq_execute_test_case_4 ();
int ldra_qq_execute_test_case_5 ();
int ldra_qq_execute_test_case_6 ();
int ldra_qq_execute_test_case_7 ();
int ldra_qq_execute_test_case_8 ();
int ldra_qq_execute_test_case_9 ();
int ldra_qq_execute_test_case_10 ();
int ldra_qq_execute_test_case_11 ();
int ldra_qq_execute_test_case_12 ();
int ldra_qq_execute_test_case_13 ();
int ldra_qq_execute_test_case_14 ();
int ldra_qq_execute_test_case_15 ();
int ldra_qq_execute_test_case_16 ();
int ldra_qq_execute_test_case_17 ();
int ldra_qq_execute_test_case_18 ();
int ldra_qq_execute_test_case_19 ();
int ldra_qq_execute_test_case_20 ();
int ldra_qq_execute_test_case_21 ();

void ldra_qq_sequence_init ()
{
/*
 * Sequence initialisation code will be placed here
 * Variables declared in this section do not have global scope
 */
} /* end of ldra_qq_sequence_init */

void ldra_qq_sequence_cleanup ()
{
/*
 * Sequence initialisation code will be placed here
 * Variables declared in this section do not have global scope
 */
} /* end of ldra_qq_sequence_cleanup */

void ldra_qq_etc_completion ()
{
/* ****3 Existing test case completion */


} /* end of ldra_qq_etc_completion */

int ldra_qq_etc_initialisation ()
{
/* ****2 Existing test case initialisation */

  testbed_out = ldra_tbrun_open ();
  return 1;


} /* end of ldra_qq_etc_initialisation */

void ldra_qq_ntc_completion ()
{
/* ****5 New test case completion */


} /* end of ldra_qq_ntc_completion */

int ldra_qq_ntc_initialisation ()
{
/* ****4 New test case initialisation */

  testbed_out = ldra_tbrun_open ();
  return 1;

} /* end of ldra_qq_ntc_initialisation */

void ldra_qq_tbrun_output (char *fmt,...)
{
/* ****6 TBrun output routine */

#if defined ldra_qq_nodotdotdot
  char* s = fmt;

  if (ldra_qq_history_in_target && start)
  {
    if (s[0] != 10)
    {
      if (ldra_qq_in_new_test_case)
      {
        ldra_port_write ("LDRA->S ");
      }
      else
      {
        ldra_port_write ("LDRA->H ");
      }
    }
  }

  ldra_port_write (fmt);

  if (new_line)
  {
    ldra_port_write ("\n");
  }
#else
  char buff[1024] = {0};
  va_list va;
  va_start (va,fmt);
  vsprintf (buff,fmt,va);
  va_end (va);
  if (ldra_qq_history_in_target)
  {
    if (buff[0] != 10)
    {
      if (ldra_qq_in_new_test_case)
      {
        ldra_port_write ("LDRA->S ");
      }
      else
      {
        ldra_port_write ("LDRA->H ");
      }
    }
  }
  ldra_port_write (buff);
#endif


} /* end of ldra_qq_tbrun_output */

static void ldra_qq_file_tc_init_code ()
{
/*
 * File based test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 */
} /* end of ldra_qq_file_tc_init_code */

static void ldra_qq_file_tc_cleanup_code ()
{
/*
 * File based test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 */
} /* end of ldra_qq_file_tc_cleanup_code */

/*
 *
 * Procedure to execute test case 1
 * Procedure to execute existing test case 1
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_remove
 *
 */
int ldra_qq_execute_test_case_1 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 1 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 1
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 1;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 9;
  ldra_qq_procedure_name = "remoteproc_remove";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 1 250 9 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = NULL;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc1_return = remoteproc_remove
      (rproc);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-22,tbrun_qq_tc1_return,"%%",
                        "-22",'O',1,1,
                        1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -2;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 1 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_1 */

/*
 *
 * Procedure to execute test case 2
 * Procedure to execute existing test case 2
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_check_fw_format
 *
 */
int ldra_qq_execute_test_case_2 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 2 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 2
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  void* img_data;
  size_t img_len;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 2;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 1;
  ldra_qq_procedure_name = "remoteproc_check_fw_format";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 2 250 1 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - img_data
 */
  img_data = 0;
  ldra_qq_tbrun_output ("I V Z img_data\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - img_len
 */
  img_len = 0;
  ldra_qq_tbrun_output ("I V Z img_len\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc2_return = remoteproc_check_fw_format
      (img_data,
       img_len);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O %%%%\n");

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -3;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 2 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_2 */

/*
 *
 * Procedure to execute test case 3
 * Procedure to execute existing test case 3
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_check_fw_format
 *
 */
int ldra_qq_execute_test_case_3 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 3 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 3
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  void* img_data;
  size_t img_len;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 3;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 1;
  ldra_qq_procedure_name = "remoteproc_check_fw_format";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 3 250 1 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - img_data
 */
  img_data = NULL;
  ldra_qq_tbrun_output ("I V Z img_data\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - img_len
 */
  img_len = 2;
  ldra_qq_tbrun_output ("I V Z img_len\n");
  ldra_qq_tbrun_output ("E 2\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc3_return = remoteproc_check_fw_format
      (img_data,
       img_len);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O %%%%\n");

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -4;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 3 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_3 */

/*
 *
 * Procedure to execute test case 4
 * Procedure to execute existing test case 4
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_start
 *
 */
int ldra_qq_execute_test_case_4 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 4 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 4
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 4;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 11;
  ldra_qq_procedure_name = "remoteproc_start";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 4 250 11 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = NULL;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc4_return = remoteproc_start
      (rproc);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-3,tbrun_qq_tc4_return,"%%",
                        "-3",'O',1,1,
                        1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -5;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 4 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_4 */

/*
 *
 * Procedure to execute test case 5
 * Procedure to execute existing test case 5
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_stop
 *
 */
int ldra_qq_execute_test_case_5 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 5 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 5
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 5;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 12;
  ldra_qq_procedure_name = "remoteproc_stop";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 5 250 12 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = NULL;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc5_return = remoteproc_stop
      (rproc);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-3,tbrun_qq_tc5_return,"%%",
                        "-3",'O',1,1,
                        1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -6;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 5 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_5 */

/*
 *
 * Procedure to execute test case 6
 * Procedure to execute existing test case 6
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_shutdown
 *
 */
int ldra_qq_execute_test_case_6 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 6 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 6
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 6;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 13;
  ldra_qq_procedure_name = "remoteproc_shutdown";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 6 250 13 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = NULL;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc6_return = remoteproc_shutdown
      (rproc);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-3,tbrun_qq_tc6_return,"%%",
                        "-3",'O',1,1,
                        1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -7;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 6 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_6 */

/*
 *
 * Procedure to execute test case 7
 * Procedure to execute existing test case 7
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_get_io_with_name
 *
 */
int ldra_qq_execute_test_case_7 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 7 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 7
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;
  char* name;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 7;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 14;
  ldra_qq_procedure_name = "remoteproc_get_io_with_name";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 7 250 14 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = NULL;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - name
 */
  name = NULL;
  ldra_qq_tbrun_output ("I V Z name\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc7_return = remoteproc_get_io_with_name
      (rproc,
       name);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O %%%%\n");

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -8;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 7 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_7 */

/*
 *
 * Procedure to execute test case 8
 * Procedure to execute existing test case 8
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_shutdown
 *
 */
int ldra_qq_execute_test_case_8 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 8 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 8
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 8;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 13;
  ldra_qq_procedure_name = "remoteproc_shutdown";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 8 250 13 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = &temp;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc8_return = remoteproc_shutdown
      (rproc);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (0,tbrun_qq_tc8_return,"%%",
                        "0",'O',1,1,
                        1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -9;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 8 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_8 */

/*
 *
 * Procedure to execute test case 9
 * Procedure to execute existing test case 9
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_patoda
 *
 */
int ldra_qq_execute_test_case_9 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 9 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 9
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc_mem* mem;
  metal_phys_addr_t pa;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 9;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 4;
  ldra_qq_procedure_name = "remoteproc_patoda";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 9 250 4 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - mem
 */
  mem = &temp2;
  ldra_qq_tbrun_output ("I V Z mem\n");
  ldra_qq_tbrun_output ("E &temp2\n");

/*
 * Assign Input parameter applied through local - pa
 */
  pa = 0;
  ldra_qq_tbrun_output ("I V Z pa\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc9_return = remoteproc_patoda
      (mem,
       pa);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O %%%%\n");

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -10;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 9 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_9 */

/*
 *
 * Procedure to execute test case 10
 * Procedure to execute existing test case 10
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_datopa
 *
 */
int ldra_qq_execute_test_case_10 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 10 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 10
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc_mem* mem;
  metal_phys_addr_t da;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 10;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 3;
  ldra_qq_procedure_name = "remoteproc_datopa";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 10 250 3 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - mem
 */
  mem = &temp3;
  ldra_qq_tbrun_output ("I V Z mem\n");
  ldra_qq_tbrun_output ("E &temp3\n");

/*
 * Assign Input parameter applied through local - da
 */
  da = 0;
  ldra_qq_tbrun_output ("I V Z da\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc10_return = remoteproc_datopa
      (mem,
       da);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O %%%%\n");

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -11;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 10 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_10 */

/*
 *
 * Procedure to execute test case 11
 * Procedure to execute existing test case 11
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_load_noblock
 *
 */
int ldra_qq_execute_test_case_11 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 11 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 11
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;
  void* img_data;
  size_t offset;
  size_t len;
  void** img_info;
  metal_phys_addr_t* pa;
  struct metal_io_region** io;
  size_t* noffset;
  size_t* nlen;
  size_t* nmlen;
  unsigned char* padding;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 11;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 20;
  ldra_qq_procedure_name = "remoteproc_load_noblock";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 11 250 20 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = 0;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - img_data
 */
  img_data = 0;
  ldra_qq_tbrun_output ("I V Z img_data\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - offset
 */
  offset = 0;
  ldra_qq_tbrun_output ("I V Z offset\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = 0;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - img_info
 */
  img_info = 0;
  ldra_qq_tbrun_output ("I V Z img_info\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - pa
 */
  pa = 0;
  ldra_qq_tbrun_output ("I V Z pa\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - io
 */
  io = 0;
  ldra_qq_tbrun_output ("I V Z io\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - noffset
 */
  noffset = 0;
  ldra_qq_tbrun_output ("I V Z noffset\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - nlen
 */
  nlen = 0;
  ldra_qq_tbrun_output ("I V Z nlen\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - nmlen
 */
  nmlen = 0;
  ldra_qq_tbrun_output ("I V Z nmlen\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - padding
 */
  padding = 0;
  ldra_qq_tbrun_output ("I V Z padding\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc11_return = remoteproc_load_noblock
      (rproc,
       img_data,
       offset,
       len,
       img_info,
       pa,
       io,
       noffset,
       nlen,
       nmlen,
       padding);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O img_info\n");

/*
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O pa\n");

/*
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O io\n");

/*
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O nlen\n");

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-3,tbrun_qq_tc11_return,"%%",
                        "-3",'O',1,1,
                        1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -12;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 11 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_11 */

/*
 *
 * Procedure to execute test case 12
 * Procedure to execute existing test case 12
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_allocate_id
 *
 */
int ldra_qq_execute_test_case_12 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 12 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 12
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;
  unsigned int start;
  unsigned int end;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 12;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 21;
  ldra_qq_procedure_name = "remoteproc_allocate_id";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 12 250 21 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = NULL;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - start
 */
  start = 12;
  ldra_qq_tbrun_output ("I V Z start\n");
  ldra_qq_tbrun_output ("E 12\n");

/*
 * Assign Input parameter applied through local - end
 */
  end = 13;
  ldra_qq_tbrun_output ("I V Z end\n");
  ldra_qq_tbrun_output ("E 13\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc12_return = remoteproc_allocate_id
      (rproc,
       start,
       end);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_unsigned_int (13,tbrun_qq_tc12_return,"%%",
                                 "13",'O',1,1,
                                 1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -13;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 12 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_12 */

/*
 *
 * Procedure to execute test case 13
 * Procedure to execute existing test case 13
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_shutdown
 *
 */
int ldra_qq_execute_test_case_13 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 13 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 13
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 13;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 13;
  ldra_qq_procedure_name = "remoteproc_shutdown";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 13 250 13 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = &temp;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc13_return = remoteproc_shutdown
      (rproc);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (0,tbrun_qq_tc13_return,"%%",
                        "0",'O',1,1,
                        1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -14;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 13 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_13 */

/*
 *
 * Procedure to execute test case 14
 * Procedure to execute existing test case 14
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_check_fw_format
 *
 */
int ldra_qq_execute_test_case_14 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 14 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 14
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  void* img_data;
  size_t img_len;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 14;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 1;
  ldra_qq_procedure_name = "remoteproc_check_fw_format";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 14 250 1 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - img_data
 */
  img_data = "\177ELF";
  ldra_qq_tbrun_output ("I V Z img_data\n");
  ldra_qq_tbrun_output ("E \"\\177ELF\"\n");

/*
 * Assign Input parameter applied through local - img_len
 */
  img_len = 10;
  ldra_qq_tbrun_output ("I V Z img_len\n");
  ldra_qq_tbrun_output ("E 10\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc14_return = remoteproc_check_fw_format
      (img_data,
       img_len);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O %%%%\n");

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -15;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 14 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_14 */

/*
 *
 * Procedure to execute test case 15
 * Procedure to execute existing test case 15
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_stop
 *
 */
int ldra_qq_execute_test_case_15 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 15 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 15
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 15;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 12;
  ldra_qq_procedure_name = "remoteproc_stop";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 15 250 12 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = &temp;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc15_return = remoteproc_stop
      (rproc);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (0,tbrun_qq_tc15_return,"%%",
                        "0",'O',1,1,
                        1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -16;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 15 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_15 */

/*
 *
 * Procedure to execute test case 16
 * Procedure to execute existing test case 16
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_start
 *
 */
int ldra_qq_execute_test_case_16 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 16 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 16
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 16;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 11;
  ldra_qq_procedure_name = "remoteproc_start";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 16 250 11 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = &temp;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc16_return = remoteproc_start
      (rproc);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-2,tbrun_qq_tc16_return,"%%",
                        "-2",'O',1,1,
                        1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -17;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 16 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_16 */

/*
 *
 * Procedure to execute test case 17
 * Procedure to execute existing test case 17
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_allocate_id
 *
 */
int ldra_qq_execute_test_case_17 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 17 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 17
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;
  unsigned int start;
  unsigned int end;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 17;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 21;
  ldra_qq_procedure_name = "remoteproc_allocate_id";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 17 250 21 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = &temp;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - start
 */
  start = 0xFFFFFFFFUL;
  ldra_qq_tbrun_output ("I V Z start\n");
  ldra_qq_tbrun_output ("E 0xFFFFFFFFUL\n");

/*
 * Assign Input parameter applied through local - end
 */
  end = 0xFFFFFFFFUL;
  ldra_qq_tbrun_output ("I V Z end\n");
  ldra_qq_tbrun_output ("E 0xFFFFFFFFUL\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc17_return = remoteproc_allocate_id
      (rproc,
       start,
       end);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_unsigned_int (32,tbrun_qq_tc17_return,"%%",
                                 "32",'O',1,1,
                                 1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -18;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 17 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_17 */

/*
 *
 * Procedure to execute test case 18
 * Procedure to execute existing test case 18
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_get_io_with_da
 *
 */
int ldra_qq_execute_test_case_18 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 18 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 18
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;
  metal_phys_addr_t da;
  unsigned long* offset;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 18;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 16;
  ldra_qq_procedure_name = "remoteproc_get_io_with_da";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 18 250 16 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = &temp;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - da
 */
  da = 0;
  ldra_qq_tbrun_output ("I V Z da\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - offset
 */
  offset = &offset;
  ldra_qq_tbrun_output ("I V Z offset\n");
  ldra_qq_tbrun_output ("E &offset\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc18_return = remoteproc_get_io_with_da
      (rproc,
       da,
       offset);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O offset\n");

/*
 * check Function result for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O %%%%\n");

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -19;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 18 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_18 */

/*
 *
 * Procedure to execute test case 19
 * Procedure to execute existing test case 19
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_get_io_with_va
 *
 */
int ldra_qq_execute_test_case_19 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 19 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 19
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;
  void* va;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 19;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 17;
  ldra_qq_procedure_name = "remoteproc_get_io_with_va";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 19 250 17 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = &temp;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - va
 */
  ldra_qq_tbrun_output ("I V Z va\n");
  ldra_qq_tbrun_output ("E va\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc19_return = remoteproc_get_io_with_va
      (rproc,
       va);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O va\n");

/*
 * check Function result for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O %%%%\n");

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -20;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 19 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_19 */

/*
 *
 * Procedure to execute test case 20
 * Procedure to execute existing test case 20
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_remove_virtio
 *
 */
int ldra_qq_execute_test_case_20 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 20 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 20
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;
  struct virtio_device* vdev;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 20;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 24;
  ldra_qq_procedure_name = "remoteproc_remove_virtio";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 20 250 24 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = &temp;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - vdev
 */
  vdev = &temp5;
  ldra_qq_tbrun_output ("I V Z vdev\n");
  ldra_qq_tbrun_output ("E &temp5\n");
/*
 * Call Procedure for Test Case
 */
    remoteproc_remove_virtio      (rproc,
       vdev);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -21;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 20 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_20 */

/*
 *
 * Procedure to execute test case 21
 * Procedure to execute existing test case 21
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c
 * Procedure for test case : remoteproc_config
 *
 */
int ldra_qq_execute_test_case_21 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 21 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 21
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  struct remoteproc* rproc;
  void* data;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 21;
  ldra_qq_module_number = 250;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/remoteproc.c";
  ldra_qq_procedure_number = 10;
  ldra_qq_procedure_name = "remoteproc_config";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 21 250 10 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rproc
 */
  rproc = NULL;
  ldra_qq_tbrun_output ("I V Z rproc\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - data
 */
  data = NULL;
  ldra_qq_tbrun_output ("I V Z data\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc21_return = remoteproc_config
      (rproc,
       data);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O data\n");

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-3,tbrun_qq_tc21_return,"%%",
                        "-3",'O',1,1,
                        1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O %%%%\n");
  }

/*
 * Test case cleanup code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */
  ldra_qq_tbrun_output ("D\n\n");

  ldra_qq_last_test_case = -22;
  ldra_qq_test_case_number = 0;
  ldra_qq_tc_iterator = -1;
  ldra_qq_tc_repeater = -1;
  ldra_qq_module_number = 0;
  ldra_qq_module_name = NULL;
  ldra_qq_procedure_number = 0;
  ldra_qq_procedure_name = NULL;
  ldra_qq_in_existing_test_case = 0;
  ldra_qq_action_code = "";

#ifdef _MSC_VER
#pragma message (" => Test Case 21 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_21 */

/* ****11 Entry-Point routine start */
#if defined(QQQBITMAP)
#if defined(QQQstructbitmap)
#define QQQtbruninitbitmap
#endif
#endif

#if defined(QQQtbruninitbitmap)
  int tbrun_qqqinitialise ()
  {
    qqqqinitialise(0);
    return 0;
  }
#endif

int main(void)
{
#if defined(QQQtbruninitbitmap)
  int tbrun_qqq_init = tbrun_qqqinitialise();
#endif

  int ldra_qq_fail_count = 0;

  ldra_qq_sequence_init ();

  if (ldra_qq_etc_initialisation ())
  {
/*
 * Execute existing test cases
 */
    if (ldra_qq_execute_test_case_1 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_2 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_3 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_4 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_5 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_6 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_7 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_8 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_9 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_10 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_11 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_12 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_13 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_14 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_15 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_16 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_17 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_18 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_19 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_20 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_21 () == 0)
    {
      ldra_qq_fail_count++;
    }

    ldra_qq_etc_completion ();

  }

  ldra_qq_sequence_cleanup ();

/* ****12 Entry-Point routine end */

#if defined(QQQBITMAP)
  qqqupload ();
#endif
  ldra_tbrun_close();
#if defined ldra_qq_terminate_main
  ldra_tbrun_exit();
#endif
return 0;
} /* end of main */

