
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
 * Sequence Name : seq6
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
 * 1 rpmsg_rpc_ept_cb /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 2 rpmsg_service_unbind /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 3 rpmsg_rpc_release /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 4 rpmsg_rpc_release /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 5 rpmsg_set_default_rpc /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 6 rpmsg_set_default_rpc /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 7 _open /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 8 _read /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 9 _write /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 10 _close /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 11 rpmsg_rpc_send /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 12 rpmsg_rpc_init /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * 13 rpmsg_rpc_init /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 *
 * Program created on Thu Oct 25 2018 at 14:21:20
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
char *ldra_qq_sequence_name = "seq6";
int ldra_qq_quiet_stubs = 0;
int ldra_qq_test_case_number = 0;
int ldra_qq_last_test_case = -1;
int ldra_qq_tc_iterator = -1;
int ldra_qq_tc_repeater = -1;
int ldra_qq_module_number = 0;
char *ldra_qq_module_name = NULL;
int ldra_qq_procedure_number = 0;
char *ldra_qq_procedure_name = NULL;
int ldra_qq_number_of_existing_tcs = 13;
int ldra_qq_in_existing_test_case = 0;
int ldra_qq_in_new_test_case = 0;
char *ldra_qq_action_code = "";
int inszt_confirm_enabled = 0;

/*
 * Pre-include code will be placed here
 * this code is located at global scope and should consist of
 * declarations, preprocessor directives (e.g. #include) or procedures
 */
#define qqoutput tbrun_qqoutput248
#ifdef _MSC_VER
#pragma message (" => Compiling source: /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_rpmsg_retarget.c started")
#endif
/* Start File Insert : /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_rpmsg_retarget.c */
/*
C TESTBED VERSION  : 9.5.4
FILE UNDER TEST  : "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy
DATE OF ANALYSIS : Mon Oct 15 17:36:01 2018
*/
 
#include <metal/mutex.h>
#include <metal/spinlock.h>
#include <metal/utilities.h>
#include <openamp/open_amp.h>
#include <openamp/rpmsg_retarget.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
/*************************************************************************
 *      Description
 *      This files contains rpmsg based redefinitions for C RTL system calls
 *      such as _open, _read, _write, _close.
 *************************************************************************/
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
 static int zzfileid248 =    248;
#define zzfileid zzfileid248
 static int qzzqfileid =    248;
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
#define rpmsg_retarget_248zzopen                                                                              zzopen
 extern int rpmsg_retarget_248zzopen                                                                            ;
#define rpmsg_retarget_248zqqzqz1                                                                             zqqzqz1
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
  extern int rpmsg_retarget_248zqqzqz(qqnull_params);                                                                                                                                                                                                               
  extern int rpmsg_retarget_248zqqzqz1(qqnull_params);                                                                                                                                                                                                              
  static int rpmsg_retarget_248zzqqzz (int qqqi);                                                                                                                                                                                                                   
  static int rpmsg_retarget_248zqendz (int qqqi);                                                                                                                                                                                                                   
  static int rpmsg_retarget_248zqzqzq (int qqqi);                                                                                                                                                                                                                   
  static int rpmsg_retarget_248zzzqtz (int qqqa, int qqqb);                                                                                                                                                                                                         
  static int rpmsg_retarget_248zzzqfz (int qqqa, int qqqb);                                                                                                                                                                                                         
  void qqqupload (qqnull_params);                                                                                                                                                                                                                                   
/* ------------------------------ END OF TESTBED PROTOTYPES -------------------------------- */                                                                                                                                                                     
 
static struct rpmsg_rpc_data *
  rpmsg_default_rpc ;
 
static int
  rpmsg_rpc_ept_cb (
  struct rpmsg_endpoint * ept ,
  void * data ,
  size_t len ,
  uint32_t src ,
  void * priv )
  {
   int irpmsg_retarget_248zzqqzz                                                                            
 = rpmsg_retarget_248zzqqzz                                                                             (       1 ) ; /* 37 */
    struct rpmsg_rpc_syscall *
      syscall ;
    ( void ) priv ;
    ( void ) src ;
    if
 (  /* 50 */
      (
      
  rpmsg_retarget_248zzzqfz                                                                             (     /*  52 */ 
      data != NULL
  ? 1 : 0  ,       3  )  /*  54 */
      &&
      ept != NULL
      )
  ) /* 1 */
 {
    rpmsg_retarget_248zzqqzz                                                                             (      4 ) ; /* 1 */
      {
        syscall = data ;
        if
          (
          syscall -> id == TERM_SYSCALL_ID
          )
 {
    rpmsg_retarget_248zzqqzz                                                                             (      5 ) ; /* 1 */
          {
            rpmsg_destroy_ept ( ept ) ;
          }
    rpmsg_retarget_248zzqqzz                                                                             (      6 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
rpmsg_retarget_248zzqqzz                                                                             (      7 ); /* 2 */
          {
            struct rpmsg_rpc_data *
              rpc ;
            rpc = metal_container_of ( ept , struct rpmsg_rpc_data , ept ) ;
            metal_spinlock_acquire ( & rpc -> buflock ) ;
            if
 (  /* 50 */
              (
              
  rpmsg_retarget_248zzzqfz                                                                             (     /*  52 */ 
              rpc -> respbuf != NULL
  ? 1 : 0  ,       9  )  /*  54 */
              &&
              rpc -> respbuf_len != 0
              )
  ) /* 1 */
 {
    rpmsg_retarget_248zzqqzz                                                                             (     10 ) ; /* 1 */
              {
                if
                  (
                  len > rpc -> respbuf_len
                  )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     11 ) ; /* 1 */
                  {
                    len = rpc -> respbuf_len ;
                  }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     12 ) ; /* 4 */
                memcpy ( rpc -> respbuf , data , len ) ;
              }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     13 ) ; /* 4 */
            atomic_flag_clear ( & rpc -> nacked ) ;
            metal_spinlock_release ( & rpc -> buflock ) ;
          }
 }
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     14 ) ; /* 4 */
    rpmsg_retarget_248zqendz                                                                             (      15 ) ; /* 30 */  
    return
    RPMSG_SUCCESS ;
  }
 
static void
  rpmsg_service_unbind (
  struct rpmsg_endpoint * ept )
  {
   int irpmsg_retarget_248zzqqzz                                                                            
 = rpmsg_retarget_248zzqqzz                                                                             (      16 ) ; /* 37 */
    struct rpmsg_rpc_data *
      rpc ;
    rpc = metal_container_of ( ept , struct rpmsg_rpc_data , ept ) ;
    rpc -> ept_destroyed = 1 ;
    rpmsg_destroy_ept ( ept ) ;
    atomic_flag_clear ( & rpc -> nacked ) ;
    if
      (
      rpc -> shutdown_cb
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     17 ) ; /* 1 */
      {
        rpc -> shutdown_cb ( rpc ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     18 ) ; /* 4 */
    rpmsg_retarget_248zqendz                                                                             (      19 ) ; /* 30 */  
  }
 
int
  rpmsg_rpc_init (
  struct rpmsg_rpc_data * rpc ,
  struct rpmsg_device * rdev ,
  const char * ept_name ,
  uint32_t ept_addr ,
  uint32_t ept_raddr ,
  void * poll_arg ,
  rpmsg_rpc_poll poll ,
  rpmsg_rpc_shutdown_cb shutdown_cb )
  {
   int irpmsg_retarget_248zzqqzz                                                                            
 = rpmsg_retarget_248zzqqzz                                                                             (      20 ) ; /* 37 */
    int
      ret ;
    if
 (  /* 50 */
      (
      
  rpmsg_retarget_248zzzqtz                                                                             (     /*  51 */ 
      rpc == NULL
  ? 1 : 0  ,      22  )  /*  54 */
      ||
      rdev == NULL
      )
  ) /* 1 */
 {
    rpmsg_retarget_248zzqqzz                                                                             (     23 ) ; /* 1 */
      {
    rpmsg_retarget_248zqendz                                                                             (      24 ) ; /* 30 */  
        return
        - EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     25 ) ; /* 4 */
    metal_spinlock_init ( & rpc -> buflock ) ;
    metal_mutex_init ( & rpc -> lock ) ;
    rpc -> shutdown_cb = shutdown_cb ;
    rpc -> poll_arg = poll_arg ;
    rpc -> poll = poll ;
    rpc -> ept_destroyed = 0 ;
    rpc -> respbuf = NULL ;
    rpc -> respbuf_len = 0 ;
    atomic_init ( & rpc -> nacked , 1 ) ;
    ret = rpmsg_create_ept ( & rpc -> ept , rdev , ept_name , ept_addr , ept_raddr ,
        rpmsg_rpc_ept_cb ,
        rpmsg_service_unbind ) ;
    if
      (
      ret != 0
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     26 ) ; /* 1 */
      {
        metal_mutex_release ( & rpc -> lock ) ;
    rpmsg_retarget_248zqendz                                                                             (      27 ) ; /* 30 */  
        return
        - EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     28 ) ; /* 4 */
    while
      (
 (  /* 21 */ 
      ! is_rpmsg_ept_ready ( & rpc -> ept )
  )  /* 7 */
      )
      {
 { /* 32 */
  int zzqqzs = rpmsg_retarget_248zzqqzz                                                                             (     29 ) ; /* 32a */
        if
          (
          rpc -> poll
          )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     30 ) ; /* 1 */
          {
            rpc -> poll ( rpc -> poll_arg ) ;
          }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     31 ) ; /* 4 */
    rpmsg_retarget_248zzqqzz                                                                             (     32 ) ;} /* 6 */
      }
    rpmsg_retarget_248zzqqzz                                                                             (     33 ) ; /* 5 */
    rpmsg_retarget_248zqendz                                                                             (      34 ) ; /* 30 */  
    return
    0 ;
  }
 
void
  rpmsg_rpc_release (
  struct rpmsg_rpc_data * rpc )
  {
   int irpmsg_retarget_248zzqqzz                                                                            
 = rpmsg_retarget_248zzqqzz                                                                             (      35 ) ; /* 37 */
    if
      (
      rpc == NULL
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     36 ) ; /* 1 */
      {
    rpmsg_retarget_248zqendz                                                                             (      37 ) ; /* 30 */  
        return
        ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     38 ) ; /* 4 */
    if
      (
      rpc -> ept_destroyed == 0
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     39 ) ; /* 1 */
      {
        rpmsg_destroy_ept ( & rpc -> ept ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     40 ) ; /* 4 */
    metal_mutex_acquire ( & rpc -> lock ) ;
    metal_spinlock_acquire ( & rpc -> buflock ) ;
    rpc -> respbuf = NULL ;
    rpc -> respbuf_len = 0 ;
    metal_spinlock_release ( & rpc -> buflock ) ;
    metal_mutex_release ( & rpc -> lock ) ;
    metal_mutex_deinit ( & rpc -> lock ) ;
    rpmsg_retarget_248zqendz                                                                             (      41 ) ; /* 30 */  
    return
    ;
  }
 
int
  rpmsg_rpc_send (
  struct rpmsg_rpc_data * rpc ,
  void * req ,
  size_t len ,
  void * resp ,
  size_t resp_len )
  {
   int irpmsg_retarget_248zzqqzz                                                                            
 = rpmsg_retarget_248zzqqzz                                                                             (      42 ) ; /* 37 */
    int
      ret ;
    if
      (
      rpc == NULL
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     43 ) ; /* 1 */
      {
    rpmsg_retarget_248zqendz                                                                             (      44 ) ; /* 30 */  
        return
        - EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     45 ) ; /* 4 */
    metal_spinlock_acquire ( & rpc -> buflock ) ;
    rpc -> respbuf = resp ;
    rpc -> respbuf_len = resp_len ;
    metal_spinlock_release ( & rpc -> buflock ) ;
    ( void ) atomic_flag_test_and_set ( & rpc -> nacked ) ;
    ret = rpmsg_send ( & rpc -> ept , req , len ) ;
    if
      (
      ret < 0
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     46 ) ; /* 1 */
      {
    rpmsg_retarget_248zqendz                                                                             (      47 ) ; /* 30 */  
        return
        - EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     48 ) ; /* 4 */
    if
      (
      ! resp
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     49 ) ; /* 1 */
      {
    rpmsg_retarget_248zqendz                                                                             (      50 ) ; /* 30 */  
        return
        ret ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     51 ) ; /* 4 */
    while
      (
 (  /* 21 */ 
      ( atomic_flag_test_and_set ( & rpc -> nacked ) )
  )  /* 7 */
      )
      {
 { /* 32 */
  int zzqqzs = rpmsg_retarget_248zzqqzz                                                                             (     52 ) ; /* 32a */
        if
          (
          rpc -> poll
          )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     53 ) ; /* 1 */
          {
            rpc -> poll ( rpc -> poll_arg ) ;
          }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     54 ) ; /* 4 */
    rpmsg_retarget_248zzqqzz                                                                             (     55 ) ;} /* 6 */
      }
    rpmsg_retarget_248zzqqzz                                                                             (     56 ) ; /* 5 */
    rpmsg_retarget_248zqendz                                                                             (      57 ) ; /* 30 */  
    return
    ret ;
  }
 
void
  rpmsg_set_default_rpc (
  struct rpmsg_rpc_data * rpc )
  {
   int irpmsg_retarget_248zzqqzz                                                                            
 = rpmsg_retarget_248zzqqzz                                                                             (      58 ) ; /* 37 */
    if
      (
      rpc == NULL
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     59 ) ; /* 1 */
      {
    rpmsg_retarget_248zqendz                                                                             (      60 ) ; /* 30 */  
        return
        ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     61 ) ; /* 4 */
    rpmsg_default_rpc = rpc ;
    rpmsg_retarget_248zqendz                                                                             (      62 ) ; /* 30 */  
  }
/*************************************************************************
 *
 * FUNCTION
 *
 * _open
 *
 * DESCRIPTION
 *
 * Open a file. Minimal implementation
 *
 *************************************************************************/
#define MAX_BUF_LEN 496UL
 
int
  _open (
  const char * filename ,
  int flags ,
  int mode )
  {
   int irpmsg_retarget_248zzqqzz                                                                            
 = rpmsg_retarget_248zzqqzz                                                                             (      63 ) ; /* 37 */
    struct rpmsg_rpc_data *
      rpc = rpmsg_default_rpc ;
    struct rpmsg_rpc_syscall *
      syscall ;
    struct rpmsg_rpc_syscall
      resp ;
    int
      filename_len = strlen ( filename ) + 1 ;
    int
      payload_size = sizeof ( * syscall ) + filename_len ;
    unsigned char
      tmpbuf [ 496UL ] ;
    int
      ret ;
    if
 (  /* 50 */
      (
      
  rpmsg_retarget_248zzzqtz                                                                             (     /*  51 */ 
      filename == NULL
  ? 1 : 0  ,      65  )  /*  54 */
      ||
      payload_size > ( int ) 496UL
      )
  ) /* 1 */
 {
    rpmsg_retarget_248zzqqzz                                                                             (     66 ) ; /* 1 */
      {
    rpmsg_retarget_248zqendz                                                                             (      67 ) ; /* 30 */  
        return
        - EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     68 ) ; /* 4 */
    if
      (
      rpc == NULL
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     69 ) ; /* 1 */
      {
    rpmsg_retarget_248zqendz                                                                             (      70 ) ; /* 30 */  
        return
        - EINVAL ;
        /* Construct rpc payload */
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     71 ) ; /* 4 */
    syscall = ( struct rpmsg_rpc_syscall * ) tmpbuf ;
    syscall -> id = OPEN_SYSCALL_ID ;
    syscall -> args.int_field1 = flags ;
    syscall -> args.int_field2 = mode ;
    syscall -> args.data_len = filename_len ;
    memcpy ( tmpbuf + sizeof ( * syscall ) , filename , filename_len ) ;
    resp.id = 0 ;
 rpmsg_retarget_248zzqqzz                                                                             (      72 ) ; /* 23 */
    ret =
      rpmsg_rpc_send (
      rpc , tmpbuf , payload_size , ( void * ) & resp , sizeof ( resp ) ) ;
    if
      (
      ret >= 0
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     73 ) ; /* 1 */
      {
         /* Obtain return args and return to caller */
        if
          (
          resp.id == OPEN_SYSCALL_ID
          )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     74 ) ; /* 1 */
          {
            ret = resp.args.int_field1 ;
          }
    rpmsg_retarget_248zzqqzz                                                                             (     75 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
rpmsg_retarget_248zzqqzz                                                                             (     76 ); /* 2 */
          {
            ret = - EINVAL ;
          }
 }
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     77 ) ; /* 4 */
    rpmsg_retarget_248zqendz                                                                             (      78 ) ; /* 30 */  
    return
    ret ;
  }
/*************************************************************************
 *
 * FUNCTION
 *
 * _read
 *
 * DESCRIPTION
 *
 * Low level function to redirect IO to serial.
 *
 *************************************************************************/
 
int
  _read (
  int fd ,
  char * buffer ,
  int buflen )
  {
   int irpmsg_retarget_248zzqqzz                                                                            
 = rpmsg_retarget_248zzqqzz                                                                             (      79 ) ; /* 37 */
    struct rpmsg_rpc_syscall
      syscall ;
    struct rpmsg_rpc_syscall *
      resp ;
    struct rpmsg_rpc_data *
      rpc = rpmsg_default_rpc ;
    int
      payload_size = sizeof ( syscall ) ;
    unsigned char
      tmpbuf [ 496UL ] ;
    int
      ret ;
    if
 (  /* 50 */
      (
      
  rpmsg_retarget_248zzzqtz                                                                             (     /*  51 */ 
      rpc == NULL
  ? 1 : 0  ,      81  )  /*  54 */
      ||
      
  rpmsg_retarget_248zzzqtz                                                                             (     /*  51 */ 
      buffer == NULL
  ? 1 : 0  ,      83  )  /*  54 */
      ||
      buflen == 0
      )
  ) /* 1 */
 {
    rpmsg_retarget_248zzqqzz                                                                             (     84 ) ; /* 1 */
      {
    rpmsg_retarget_248zqendz                                                                             (      85 ) ; /* 30 */  
        return
        - EINVAL ;
        /* Construct rpc payload */
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     86 ) ; /* 4 */
    syscall.id = READ_SYSCALL_ID ;
    syscall.args.int_field1 = fd ;
    syscall.args.int_field2 = buflen ;
    syscall.args.data_len = 0 ;    /*not used */
    resp = ( struct rpmsg_rpc_syscall * ) tmpbuf ;
    resp -> id = 0 ;
 rpmsg_retarget_248zzqqzz                                                                             (      87 ) ; /* 23 */
    ret =
      rpmsg_rpc_send (
      rpc , ( void * ) & syscall , payload_size , tmpbuf , sizeof ( tmpbuf ) ) ;
        /* Obtain return args and return to caller */
    if
      (
      ret >= 0
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     88 ) ; /* 1 */
      {
        if
          (
          resp -> id == READ_SYSCALL_ID
          )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     89 ) ; /* 1 */
          {
            if
              (
              resp -> args.int_field1 > 0
              )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     90 ) ; /* 1 */
              {
                int
                  tmplen = resp -> args.data_len ;
                unsigned char *
                  tmpptr = tmpbuf ;
                tmpptr += sizeof ( * resp ) ;
                if
                  (
                  tmplen > buflen
                  )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     91 ) ; /* 1 */
                  {
                    tmplen = buflen ;
                  }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     92 ) ; /* 4 */
                memcpy ( buffer , tmpptr , tmplen ) ;
              }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     93 ) ; /* 4 */
            ret = resp -> args.int_field1 ;
          }
    rpmsg_retarget_248zzqqzz                                                                             (     94 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
rpmsg_retarget_248zzqqzz                                                                             (     95 ); /* 2 */
          {
            ret = - EINVAL ;
          }
 }
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (     96 ) ; /* 4 */
    rpmsg_retarget_248zqendz                                                                             (      97 ) ; /* 30 */  
    return
    ret ;
  }
/*************************************************************************
 *
 * FUNCTION
 *
 * _write
 *
 * DESCRIPTION
 *
 * Low level function to redirect IO to serial.
 *
 *************************************************************************/
 
int
  _write (
  int fd ,
  const char * ptr ,
  int len )
  {
   int irpmsg_retarget_248zzqqzz                                                                            
 = rpmsg_retarget_248zzqqzz                                                                             (      98 ) ; /* 37 */
    int
      ret ;
    struct rpmsg_rpc_syscall *
      syscall ;
    struct rpmsg_rpc_syscall
      resp ;
    int
      payload_size = sizeof ( * syscall ) + len ;
    struct rpmsg_rpc_data *
      rpc = rpmsg_default_rpc ;
    unsigned char
      tmpbuf [ 496UL ] ;
    unsigned char *
      tmpptr ;
    int
      null_term = 0 ;
    if
      (
      rpc == NULL
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (     99 ) ; /* 1 */
      {
    rpmsg_retarget_248zqendz                                                                             (     100 ) ; /* 30 */  
        return
        - EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (    101 ) ; /* 4 */
    if
      (
      fd == 1
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (    102 ) ; /* 1 */
      {
        null_term = 1 ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (    103 ) ; /* 4 */
    syscall = ( struct rpmsg_rpc_syscall * ) tmpbuf ;
    syscall -> id = WRITE_SYSCALL_ID ;
    syscall -> args.int_field1 = fd ;
    syscall -> args.int_field2 = len ;
    syscall -> args.data_len = len + null_term ;
    tmpptr = tmpbuf + sizeof ( * syscall ) ;
    memcpy ( tmpptr , ptr , len ) ;
    if
      (
      null_term == 1
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (    104 ) ; /* 1 */
      {
        *( char * ) ( tmpptr + len + null_term ) = 0 ;
        payload_size += 1 ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (    105 ) ; /* 4 */
    resp.id = 0 ;
 rpmsg_retarget_248zzqqzz                                                                             (     106 ) ; /* 23 */
    ret =
      rpmsg_rpc_send (
      rpc , tmpbuf , payload_size , ( void * ) & resp , sizeof ( resp ) ) ;
    if
      (
      ret >= 0
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (    107 ) ; /* 1 */
      {
        if
          (
          resp.id == WRITE_SYSCALL_ID
          )
 {
    rpmsg_retarget_248zzqqzz                                                                             (    108 ) ; /* 1 */
          {
            ret = resp.args.int_field1 ;
          }
    rpmsg_retarget_248zzqqzz                                                                             (    109 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
rpmsg_retarget_248zzqqzz                                                                             (    110 ); /* 2 */
          {
            ret = - EINVAL ;
          }
 }
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (    111 ) ; /* 4 */
    rpmsg_retarget_248zqendz                                                                             (     112 ) ; /* 30 */  
    return
    ret ;
  }
/*************************************************************************
 *
 * FUNCTION
 *
 * _close
 *
 * DESCRIPTION
 *
 * Close a file. Minimal implementation
 *
 *************************************************************************/
 
int
  _close (
  int fd )
  {
   int irpmsg_retarget_248zzqqzz                                                                            
 = rpmsg_retarget_248zzqqzz                                                                             (     113 ) ; /* 37 */
    int
      ret ;
    struct rpmsg_rpc_syscall
      syscall ;
    struct rpmsg_rpc_syscall
      resp ;
    int
      payload_size = sizeof ( syscall ) ;
    struct rpmsg_rpc_data *
      rpc = rpmsg_default_rpc ;
    if
      (
      rpc == NULL
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (    114 ) ; /* 1 */
      {
    rpmsg_retarget_248zqendz                                                                             (     115 ) ; /* 30 */  
        return
        - EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (    116 ) ; /* 4 */
    syscall.id = CLOSE_SYSCALL_ID ;
    syscall.args.int_field1 = fd ;
    syscall.args.int_field2 = 0 ;    /*not used */
    syscall.args.data_len = 0 ;    /*not used */
    resp.id = 0 ;
 rpmsg_retarget_248zzqqzz                                                                             (     117 ) ; /* 23 */
    ret =
      rpmsg_rpc_send (
      rpc , ( void * ) & syscall , payload_size , ( void * ) & resp , sizeof ( resp ) ) ;
    if
      (
      ret >= 0
      )
 {
    rpmsg_retarget_248zzqqzz                                                                             (    118 ) ; /* 1 */
      {
        if
          (
          resp.id == CLOSE_SYSCALL_ID
          )
 {
    rpmsg_retarget_248zzqqzz                                                                             (    119 ) ; /* 1 */
          {
            ret = resp.args.int_field1 ;
          }
    rpmsg_retarget_248zzqqzz                                                                             (    120 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
rpmsg_retarget_248zzqqzz                                                                             (    121 ); /* 2 */
          {
            ret = - EINVAL ;
          }
 }
      }
 }                                                                                                   
else                                                                                                
  rpmsg_retarget_248zzqqzz                                                                             (    122 ) ; /* 4 */
    rpmsg_retarget_248zqendz                                                                             (     123 ) ; /* 30 */  
    return
    ret ;
  }
#define qqqbranches    123
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
  static int rpmsg_retarget_248zscanf(char * qqscan_str)                                                                                                                                                                                                            
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
  static int rpmsg_retarget_248zzqqzz(int qqqi)                                                                                                                                                                                                                     
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
    if ( rpmsg_retarget_248zzopen != 1 )                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      rpmsg_retarget_248zqqzqz1();                                                                                                                                                                                                                                  
    };                                                                                                                                                                                                                                                              
    if ( rpmsg_retarget_248zzopen )                                                                                                                                                                                                                                 
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
static int rpmsg_retarget_248zqendz(int qqqi)                                                                                                                                                                                                                       
  {                                                                                                                                                                                                                                                                 
      if ( rpmsg_retarget_248zzopen != 1 )                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        rpmsg_retarget_248zqqzqz1();                                                                                                                                                                                                                                
      };                                                                                                                                                                                                                                                            
      /* ----------------------------------------------------------------------* 304 *                                                                                                                                                                              
       * this is the one which puts an integer into                                                                                                                                                                                                                 
       * the execution history file and returns unity.                                                                                                                                                                                                              
       * The format of each field consists of six columns,                                                                                                                                                                                                          
       * the number is right justified in this field.                                                                                                                                                                                                               
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      if ( rpmsg_retarget_248zzopen )                                                                                                                                                                                                                               
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
     * fclose(rpmsg_retarget_248zzhfil);                                                                                                                                                                                                                            
     * rpmsg_retarget_248zzopen = 0;                                                                                                                                                                                                                                
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
  static int rpmsg_retarget_248zqzqzq(int qqqi)                                                                                                                                                                                                                     
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if ( rpmsg_retarget_248zzopen != 1 )                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        rpmsg_retarget_248zqqzqz1();                                                                                                                                                                                                                                
      };                                                                                                                                                                                                                                                            
      /* not compressed */                                                                                                                                                                                                                                          
      /* do nothing for bitmap*/                                                                                                                                                                                                                                    
      /* upload the history */                                                                                                                                                                                                                                      
      /* bitmap */                                                                                                                                                                                                                                                  
      /* uncompressed  bitmap */                                                                                                                                                                                                                                    
      rpmsg_retarget_248zqendz(qqqi);                                                                                                                                                                                                                               
        /* qqqupload closes the execution history file */                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    return(1);                                                                                                                                                                                                                                                      
  } /* endof zqzqzq */                                                                                                                                                                                                                                              
  /*   the following routines should be left alone */                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 328 *                                                                                                                                                                                  
   *            rpmsg_retarget_248zzzqtz                                                                                                                                                                                                                            
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is not 0.                                                                                                                                                                                                                 
   *                                                                                                                                                                                                                                                                
   *   qqqa - value of expression                                                                                                                                                                                                                                   
   *   qqqb - jump table index.                                                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int rpmsg_retarget_248zzzqtz(int qqqa, int qqqb)                                                                                                                                                                                                           
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        rpmsg_retarget_248zzqqzz(qqqb) ;                                                                                                                                                                                                                            
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        rpmsg_retarget_248zzqqzz(qqqb-1);                                                                                                                                                                                                                           
      };                                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* endof zzzqtz */                                                                                                                                                                                                                                              
  /* ----------------------------------------------------------------------* 329 *                                                                                                                                                                                  
   *            rpmsg_retarget_248zzzqfz                                                                                                                                                                                                                            
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is 0.                                                                                                                                                                                                                     
   *                                                                                                                                                                                                                                                                
   *  qqqa - value of expression                                                                                                                                                                                                                                    
   *  qqqb - jump table index.                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int rpmsg_retarget_248zzzqfz(int qqqa,int qqqb)                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        rpmsg_retarget_248zzqqzz(qqqb-1);                                                                                                                                                                                                                           
        return(qqqa);                                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        rpmsg_retarget_248zzqqzz(qqqb);                                                                                                                                                                                                                             
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
    if ( rpmsg_retarget_248zzopen != 1 )                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      rpmsg_retarget_248zqqzqz1();                                                                                                                                                                                                                                  
    };                                                                                                                                                                                                                                                              
    if ( rpmsg_retarget_248zzopen )                                                                                                                                                                                                                                 
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
 
/* End File Insert : /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_rpmsg_retarget.c */
#ifdef _MSC_VER
#pragma message (" => Compiling source: /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_rpmsg_retarget.c finished")
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
struct rpmsg_endpoint temp;
struct rpmsg_rpc_data temp2;
struct rpmsg_device temp3;
void* priv;
rpmsg_rpc_poll platform_poll;
rpmsg_rpc_shutdown_cb rpmsg_rpc_shutdown;

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
int tbrun_qq_tc7_return;
int tbrun_qq_tc8_return;
int tbrun_qq_tc9_return;
int tbrun_qq_tc10_return;
int tbrun_qq_tc11_return;
int tbrun_qq_tc12_return;
int tbrun_qq_tc13_return;

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

static int ldra_qq_dtop_charstar (char* expected_value,char* actual_value,char * name,
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
      ldra_qq_variable_converted = ldra_qq_char_star_convert (actual_value,testbed_buff);
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
          ldra_qq_variable_passed = ldra_qq_string_compare (expected_value,actual_value);
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
} /* end of ldra_qq_dtop_charstar */

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : rpmsg_rpc_ept_cb
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
  struct rpmsg_endpoint* ept;
  void* data;
  size_t len;
  uint32_t src;
  void* priv;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 1;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 1;
  ldra_qq_procedure_name = "rpmsg_rpc_ept_cb";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 1 248 1 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - ept
 */
  ept = &temp;
  ldra_qq_tbrun_output ("I V Z ept\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - data
 */
  data = 0xfffff;
  ldra_qq_tbrun_output ("I V Z data\n");
  ldra_qq_tbrun_output ("E 0xfffff\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = 10;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 10\n");

/*
 * Assign Input parameter applied through local - src
 */
  src = 0x7fffffff;
  ldra_qq_tbrun_output ("I V Z src\n");
  ldra_qq_tbrun_output ("E 0x7fffffff\n");

/*
 * Assign Input parameter applied through local - priv
 */
  priv = 0;
  ldra_qq_tbrun_output ("I V Z priv\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc1_return = rpmsg_rpc_ept_cb
      (ept,
       data,
       len,
       src,
       priv);

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
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O priv\n");

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (0,tbrun_qq_tc1_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : rpmsg_service_unbind
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
  struct rpmsg_endpoint* ept;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 2;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 2;
  ldra_qq_procedure_name = "rpmsg_service_unbind";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 2 248 2 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - ept
 */
  ept = &temp;
  ldra_qq_tbrun_output ("I V Z ept\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    rpmsg_service_unbind      (ept);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : rpmsg_rpc_release
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
  struct rpmsg_rpc_data* rpc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 3;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 4;
  ldra_qq_procedure_name = "rpmsg_rpc_release";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 3 248 4 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rpc
 */
  rpc = NULL;
  ldra_qq_tbrun_output ("I V Z rpc\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    rpmsg_rpc_release      (rpc);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : rpmsg_rpc_release
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
  struct rpmsg_rpc_data* rpc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 4;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 4;
  ldra_qq_procedure_name = "rpmsg_rpc_release";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 4 248 4 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rpc
 */
  rpc = &temp2;
  ldra_qq_tbrun_output ("I V Z rpc\n");
  ldra_qq_tbrun_output ("E &temp2\n");
/*
 * Call Procedure for Test Case
 */
    rpmsg_rpc_release      (rpc);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : rpmsg_set_default_rpc
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
  struct rpmsg_rpc_data* rpc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 5;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 6;
  ldra_qq_procedure_name = "rpmsg_set_default_rpc";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 5 248 6 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rpc
 */
  rpc = &temp2;
  ldra_qq_tbrun_output ("I V Z rpc\n");
  ldra_qq_tbrun_output ("E &temp2\n");

/*
 * Assign Global pointer initialisation - rpmsg_default_rpc
 */
  rpmsg_default_rpc = NULL;
  ldra_qq_tbrun_output ("I V Q rpmsg_default_rpc\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    rpmsg_set_default_rpc      (rpc);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Output global for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X H rpmsg_default_rpc\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : rpmsg_set_default_rpc
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
  struct rpmsg_rpc_data* rpc;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 6;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 6;
  ldra_qq_procedure_name = "rpmsg_set_default_rpc";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 6 248 6 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rpc
 */
  rpc = NULL;
  ldra_qq_tbrun_output ("I V Z rpc\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Global pointer initialisation - rpmsg_default_rpc
 */
  rpmsg_default_rpc = NULL;
  ldra_qq_tbrun_output ("I V Q rpmsg_default_rpc\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    rpmsg_set_default_rpc      (rpc);

  if (ldra_qq_no_exception_raised == 1)
  {
    ldra_qq_tbrun_output ("C V\n");
  }
  else
  {
    ldra_qq_tbrun_output ("C E\n");
  }

/*
 * check Output global for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X H rpmsg_default_rpc\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : _open
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
  char* filename;
  int flags;
  int mode;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 7;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 7;
  ldra_qq_procedure_name = "_open";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 7 248 7 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - filename
 */
  filename = "dev";
  ldra_qq_tbrun_output ("I V Z filename\n");
  ldra_qq_tbrun_output ("E \"dev\"\n");

/*
 * Assign Input parameter applied through local - flags
 */
  flags = 2147483647;
  ldra_qq_tbrun_output ("I V Z flags\n");
  ldra_qq_tbrun_output ("E 2147483647\n");

/*
 * Assign Input parameter applied through local - mode
 */
  mode = 2147483647;
  ldra_qq_tbrun_output ("I V Z mode\n");
  ldra_qq_tbrun_output ("E 2147483647\n");

/*
 * Assign Input global - rpmsg_default_rpc
 */
  rpmsg_default_rpc = &temp2;
  ldra_qq_tbrun_output ("I V G rpmsg_default_rpc\n");
  ldra_qq_tbrun_output ("E &temp2\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc7_return = _open
      (filename,
       flags,
       mode);

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
  if (ldra_qq_dtop_int (-22,tbrun_qq_tc7_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : _read
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
  int fd;
  char* buffer;
  int buflen;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 8;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 8;
  ldra_qq_procedure_name = "_read";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 8 248 8 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - fd
 */
  fd = 2147483647;
  ldra_qq_tbrun_output ("I V Z fd\n");
  ldra_qq_tbrun_output ("E 2147483647\n");

/*
 * Assign Input parameter applied through local - buffer
 */
  buffer = "de";
  ldra_qq_tbrun_output ("I V Z buffer\n");
  ldra_qq_tbrun_output ("E \"de\"\n");

/*
 * Assign Input parameter applied through local - buflen
 */
  buflen = 10;
  ldra_qq_tbrun_output ("I V Z buflen\n");
  ldra_qq_tbrun_output ("E 10\n");

/*
 * Assign Input global - rpmsg_default_rpc
 */
  rpmsg_default_rpc = &temp2;
  ldra_qq_tbrun_output ("I V G rpmsg_default_rpc\n");
  ldra_qq_tbrun_output ("E &temp2\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc8_return = _read
      (fd,
       buffer,
       buflen);

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
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_charstar ((char*)"de",(char*)buffer,"buffer",
                             "\"de\"",'O',1,1,
                             1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O buffer\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-22,tbrun_qq_tc8_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : _write
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
  int fd;
  char* ptr;
  int len;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 9;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 9;
  ldra_qq_procedure_name = "_write";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 9 248 9 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - fd
 */
  fd = 2147483647;
  ldra_qq_tbrun_output ("I V Z fd\n");
  ldra_qq_tbrun_output ("E 2147483647\n");

/*
 * Assign Input parameter applied through local - ptr
 */
  ptr = "de";
  ldra_qq_tbrun_output ("I V Z ptr\n");
  ldra_qq_tbrun_output ("E \"de\"\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = 10;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 10\n");

/*
 * Assign Input global - rpmsg_default_rpc
 */
  rpmsg_default_rpc = &temp2;
  ldra_qq_tbrun_output ("I V G rpmsg_default_rpc\n");
  ldra_qq_tbrun_output ("E &temp2\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc9_return = _write
      (fd,
       ptr,
       len);

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
  if (ldra_qq_dtop_int (-22,tbrun_qq_tc9_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : _close
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
  int fd;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 10;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 10;
  ldra_qq_procedure_name = "_close";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 10 248 10 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - fd
 */
  fd = 2147483647;
  ldra_qq_tbrun_output ("I V Z fd\n");
  ldra_qq_tbrun_output ("E 2147483647\n");

/*
 * Assign Input global - rpmsg_default_rpc
 */
  rpmsg_default_rpc = &temp2;
  ldra_qq_tbrun_output ("I V G rpmsg_default_rpc\n");
  ldra_qq_tbrun_output ("E &temp2\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc10_return = _close
      (fd);

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
  if (ldra_qq_dtop_int (-22,tbrun_qq_tc10_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : rpmsg_rpc_send
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
  struct rpmsg_rpc_data* rpc;
  void* req;
  size_t len;
  void* resp;
  size_t resp_len;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 11;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 5;
  ldra_qq_procedure_name = "rpmsg_rpc_send";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 11 248 5 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rpc
 */
  rpc = NULL;
  ldra_qq_tbrun_output ("I V Z rpc\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - req
 */
  req = NULL;
  ldra_qq_tbrun_output ("I V Z req\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = 10;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 10\n");

/*
 * Assign Input parameter applied through local - resp
 */
  resp = NULL;
  ldra_qq_tbrun_output ("I V Z resp\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - resp_len
 */
  resp_len = 0;
  ldra_qq_tbrun_output ("I V Z resp_len\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc11_return = rpmsg_rpc_send
      (rpc,
       req,
       len,
       resp,
       resp_len);

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
  ldra_qq_tbrun_output ("O X O req\n");

/*
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O resp\n");

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-22,tbrun_qq_tc11_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : rpmsg_rpc_init
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
  struct rpmsg_rpc_data* rpc;
  struct rpmsg_device* rdev;
  char* ept_name;
  uint32_t ept_addr;
  uint32_t ept_raddr;
  void* poll_arg;
  rpmsg_rpc_poll poll;
  rpmsg_rpc_shutdown_cb shutdown_cb;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 12;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 3;
  ldra_qq_procedure_name = "rpmsg_rpc_init";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 12 248 3 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rpc
 */
  rpc = &temp2;
  ldra_qq_tbrun_output ("I V Z rpc\n");
  ldra_qq_tbrun_output ("E &temp2\n");

/*
 * Assign Input parameter applied through local - rdev
 */
  rdev = &temp3;
  ldra_qq_tbrun_output ("I V Z rdev\n");
  ldra_qq_tbrun_output ("E &temp3\n");

/*
 * Assign Input parameter applied through local - ept_name
 */
  ept_name = "dev";
  ldra_qq_tbrun_output ("I V Z ept_name\n");
  ldra_qq_tbrun_output ("E \"dev\"\n");

/*
 * Assign Input parameter applied through local - ept_addr
 */
  ept_addr = 0xfffffff;
  ldra_qq_tbrun_output ("I V Z ept_addr\n");
  ldra_qq_tbrun_output ("E 0xfffffff\n");

/*
 * Assign Input parameter applied through local - ept_raddr
 */
  ept_raddr = 0xfffffff;
  ldra_qq_tbrun_output ("I V Z ept_raddr\n");
  ldra_qq_tbrun_output ("E 0xfffffff\n");

/*
 * Assign Input parameter applied through local - poll_arg
 */
  poll_arg = priv;
  ldra_qq_tbrun_output ("I V Z poll_arg\n");
  ldra_qq_tbrun_output ("E priv\n");

/*
 * Assign Input parameter applied through local - poll
 */
  poll = platform_poll;
  ldra_qq_tbrun_output ("I V Z poll\n");
  ldra_qq_tbrun_output ("E platform_poll\n");

/*
 * Assign Input parameter applied through local - shutdown_cb
 */
  shutdown_cb = rpmsg_rpc_shutdown;
  ldra_qq_tbrun_output ("I V Z shutdown_cb\n");
  ldra_qq_tbrun_output ("E rpmsg_rpc_shutdown\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc12_return = rpmsg_rpc_init
      (rpc,
       rdev,
       ept_name,
       ept_addr,
       ept_raddr,
       poll_arg,
       poll,
       shutdown_cb);

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
  ldra_qq_tbrun_output ("O X O poll_arg\n");

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-22,tbrun_qq_tc12_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c
 * Procedure for test case : rpmsg_rpc_init
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
  struct rpmsg_rpc_data* rpc;
  struct rpmsg_device* rdev;
  char* ept_name;
  uint32_t ept_addr;
  uint32_t ept_raddr;
  void* poll_arg;
  rpmsg_rpc_poll poll;
  rpmsg_rpc_shutdown_cb shutdown_cb;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 13;
  ldra_qq_module_number = 248;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/proxy/rpmsg_retarget.c";
  ldra_qq_procedure_number = 3;
  ldra_qq_procedure_name = "rpmsg_rpc_init";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 13 248 3 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rpc
 */
  rpc = NULL;
  ldra_qq_tbrun_output ("I V Z rpc\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - rdev
 */
  rdev = NULL;
  ldra_qq_tbrun_output ("I V Z rdev\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - ept_name
 */
  ept_name = NULL;
  ldra_qq_tbrun_output ("I V Z ept_name\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - ept_addr
 */
  ept_addr = RPMSG_ADDR_ANY;
  ldra_qq_tbrun_output ("I V Z ept_addr\n");
  ldra_qq_tbrun_output ("E RPMSG_ADDR_ANY\n");

/*
 * Assign Input parameter applied through local - ept_raddr
 */
  ept_raddr = RPMSG_ADDR_ANY;
  ldra_qq_tbrun_output ("I V Z ept_raddr\n");
  ldra_qq_tbrun_output ("E RPMSG_ADDR_ANY\n");

/*
 * Assign Input parameter applied through local - poll_arg
 */
  poll_arg = priv;
  ldra_qq_tbrun_output ("I V Z poll_arg\n");
  ldra_qq_tbrun_output ("E priv\n");

/*
 * Assign Input parameter applied through local - poll
 */
  poll = platform_poll;
  ldra_qq_tbrun_output ("I V Z poll\n");
  ldra_qq_tbrun_output ("E platform_poll\n");

/*
 * Assign Input parameter applied through local - shutdown_cb
 */
  shutdown_cb = rpmsg_rpc_shutdown;
  ldra_qq_tbrun_output ("I V Z shutdown_cb\n");
  ldra_qq_tbrun_output ("E rpmsg_rpc_shutdown\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc13_return = rpmsg_rpc_init
      (rpc,
       rdev,
       ept_name,
       ept_addr,
       ept_raddr,
       poll_arg,
       poll,
       shutdown_cb);

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
  ldra_qq_tbrun_output ("O X O poll_arg\n");

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-22,tbrun_qq_tc13_return,"%%",
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

