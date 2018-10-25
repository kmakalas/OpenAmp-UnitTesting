
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
 * Sequence Name : seq4
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
 * 1 rpmsg_virtio_shm_pool_get_buffer /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * 2 rpmsg_virtio_init_shm_pool /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * 3 rpmsg_virtio_return_buffer /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * 4 rpmsg_virtio_enqueue_buffer /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * 5 rpmsg_virtio_get_tx_buffer /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * 6 rpmsg_virtio_get_rx_buffer /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * 7 rpmsg_virtio_tx_callback /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * 8 rpmsg_virtio_get_buffer_size /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * 9 rpmsg_virtio_get_buffer_size /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * 10 rpmsg_virtio_ns_callback /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * 11 rpmsg_virtio_shm_pool_get_buffer /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * 12 rpmsg_virtio_init_shm_pool /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 *
 * Program created on Thu Oct 25 2018 at 14:20:20
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
char *ldra_qq_sequence_name = "seq4";
int ldra_qq_quiet_stubs = 0;
int ldra_qq_test_case_number = 0;
int ldra_qq_last_test_case = -1;
int ldra_qq_tc_iterator = -1;
int ldra_qq_tc_repeater = -1;
int ldra_qq_module_number = 0;
char *ldra_qq_module_name = NULL;
int ldra_qq_procedure_number = 0;
char *ldra_qq_procedure_name = NULL;
int ldra_qq_number_of_existing_tcs = 12;
int ldra_qq_in_existing_test_case = 0;
int ldra_qq_in_new_test_case = 0;
char *ldra_qq_action_code = "";
int inszt_confirm_enabled = 0;

/*
 * Pre-include code will be placed here
 * this code is located at global scope and should consist of
 * declarations, preprocessor directives (e.g. #include) or procedures
 */
#define qqoutput tbrun_qqoutput254
#ifdef _MSC_VER
#pragma message (" => Compiling source: /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_rpmsg_virtio.c started")
#endif
/* Start File Insert : /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_rpmsg_virtio.c */
/*
C TESTBED VERSION  : 9.5.4
FILE UNDER TEST  : "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg
DATE OF ANALYSIS : Mon Oct 15 17:38:58 2018
*/
 
/*
 * Copyright (c) 2014, Mentor Graphics Corporation
 * All rights reserved.
 * Copyright (c) 2016 Freescale Semiconductor, Inc. All rights reserved.
 * Copyright (c) 2018 Linaro, Inc. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include <metal/alloc.h>
#include <metal/cache.h>
#include <metal/sleep.h>
#include <metal/utilities.h>
#include <openamp/rpmsg_virtio.h>
#include <openamp/virtqueue.h>
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
#define QQQternary
#undef QQQswitch
#undef QQQmacrof
#undef QQQMULTIPROCESSEXH
#undef QQFLUSH
#undef QQNEWBS
#define qqqMaxBranchDepth     20
#undef QQQstructbitmap
 static int zzfileid254 =    254;
#define zzfileid zzfileid254
 static int qzzqfileid =    254;
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
#define rpmsg_virtio_254zzopen                                                                                zzopen
 extern int rpmsg_virtio_254zzopen                                                                              ;
#define rpmsg_virtio_254zqqzqz1                                                                               zqqzqz1
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
  extern int rpmsg_virtio_254zqqzqz(qqnull_params);                                                                                                                                                                                                                 
  extern int rpmsg_virtio_254zqqzqz1(qqnull_params);                                                                                                                                                                                                                
  static int rpmsg_virtio_254zzqqzz (int qqqi);                                                                                                                                                                                                                     
  static int rpmsg_virtio_254zqendz (int qqqi);                                                                                                                                                                                                                     
  static int rpmsg_virtio_254zqzqzq (int qqqi);                                                                                                                                                                                                                     
  static int rpmsg_virtio_254zzqqqq                                                                                                                                                                                                                                 
    (int qqqc,int qqqi, int qqqnthen,int qqqnelse,                                                                                                                                                                                                                  
   char *qqqsthen,char *qqqselse);                                                                                                                                                                                                                                  
  static int rpmsg_virtio_254zzzqtz (int qqqa, int qqqb);                                                                                                                                                                                                           
  static int rpmsg_virtio_254zzzqfz (int qqqa, int qqqb);                                                                                                                                                                                                           
  void qqqupload (qqnull_params);                                                                                                                                                                                                                                   
/* ------------------------------ END OF TESTBED PROTOTYPES -------------------------------- */                                                                                                                                                                     
/* OPEN FILE /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_internal.h */
/*
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * $FreeBSD$
 */
#ifndef _RPMSG_INTERNAL_H_
#define _RPMSG_INTERNAL_H_
#include <stdint.h>
#include <openamp/rpmsg.h>
#define RPMSG_ASSERT( _exp , _msg ) do { if ( ! ( _exp ) ) while ( 1 ) { ; } } while ( 0 )
#define RPMSG_LOCATE_DATA( p ) ( ( unsigned char * ) ( p ) + sizeof ( struct rpmsg_hdr ) )
/**
 * enum rpmsg_ns_flags - dynamic name service announcement flags
 *
 * @RPMSG_NS_CREATE: a new remote service was just created
 * @RPMSG_NS_DESTROY: a known remote service was just destroyed
 * @RPMSG_NS_CREATE_WITH_ACK: a new remote service was just created waiting
 * acknowledgment.
 */
 
enum rpmsg_ns_flags
{
  RPMSG_NS_CREATE = 0 ,
  RPMSG_NS_DESTROY = 1 ,
} ;
/**
 * struct rpmsg_hdr - common header for all rpmsg messages
 * @src: source address
 * @dst: destination address
 * @reserved: reserved for future use
 * @len: length of payload (in bytes)
 * @flags: message flags
 *
 * Every message sent(/received) on the rpmsg bus begins with this header.
 */
 
OPENAMP_PACKED_BEGIN struct rpmsg_hdr
{
  uint32_t src ;
  uint32_t dst ;
  uint32_t reserved ;
  uint16_t len ;
  uint16_t flags ;
} OPENAMP_PACKED_END ;
/**
 * struct rpmsg_ns_msg - dynamic name service announcement message
 * @name: name of remote service that is published
 * @addr: address of remote service that is published
 * @flags: indicates whether service is created or destroyed
 *
 * This message is sent across to publish a new service, or announce
 * about its removal. When we receive these messages, an appropriate
 * rpmsg channel (i.e device) is created/destroyed. In turn, the ->probe()
 * or ->remove() handler of the appropriate rpmsg driver will be invoked
 * (if/as-soon-as one is registered).
 */
 
OPENAMP_PACKED_BEGIN struct rpmsg_ns_msg
{
  char name [ RPMSG_NAME_SIZE ] ;
  uint32_t addr ;
  uint32_t flags ;
} OPENAMP_PACKED_END ;
 
int
  rpmsg_send_ns_message (
  struct rpmsg_endpoint * ept ,
  unsigned long flags ) ;
 
struct rpmsg_endpoint *
  rpmsg_get_endpoint (
  struct rpmsg_device * rvdev ,
  const char * name ,
  uint32_t addr ,
  uint32_t dest_addr ) ;
 
int
  rpmsg_register_endpoint (
  struct rpmsg_device * rdev ,
  struct rpmsg_endpoint * ept ) ;
 
static inline struct rpmsg_endpoint *
rpmsg_get_ept_from_addr (
struct rpmsg_device * rdev ,
uint32_t addr )
{
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (       1 ) ; /* 37 */
    rpmsg_virtio_254zqendz                                                                               (       2 ) ; /* 30 */  
  return
  rpmsg_get_endpoint ( rdev , NULL , addr , RPMSG_ADDR_ANY ) ;
}
       /* _RPMSG_INTERNAL_H_ */
#endif /*00 /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_internal.h*/
/*   CLOSE_FILE Include File */
 
#define RPMSG_NUM_VRINGS ( 2 )
/* Total tick count for 15secs - 1msec tick. */
#define RPMSG_TICK_COUNT 15000
/* Time to wait - In multiple of 10 msecs. */
#define RPMSG_TICKS_PER_INTERVAL 10
#define WORD_SIZE sizeof ( unsigned long )
#define WORD_ALIGN( a ) ( ( ( ( a ) & ( WORD_SIZE - 1 ) ) != 0 ) ? ( ( ( a ) & ( ~ ( WORD_SIZE - 1 ) ) ) + WORD_SIZE ) : ( a ) )
 
metal_weak void *
  rpmsg_virtio_shm_pool_get_buffer (
  struct rpmsg_virtio_shm_pool * shpool ,
  size_t size )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (       3 ) ; /* 37 */
    void *
      buffer ;
    if
      (
      shpool -> avail < size
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (      4 ) ; /* 1 */
      {
    rpmsg_virtio_254zqendz                                                                               (       5 ) ; /* 30 */  
        return
        NULL ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (      6 ) ; /* 4 */
    buffer = ( void * ) (
    ( char * ) shpool -> base + shpool -> size - shpool -> avail ) ;
    shpool -> avail -= size ;
    rpmsg_virtio_254zqendz                                                                               (       7 ) ; /* 30 */  
    return
    buffer ;
  }
       /*!VIRTIO_SLAVE_ONLY*/
 
void
  rpmsg_virtio_init_shm_pool (
  struct rpmsg_virtio_shm_pool * shpool ,
  void * shb ,
  size_t size )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (       8 ) ; /* 37 */
    if
      (
      ! shpool
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (      9 ) ; /* 1 */
      {
    rpmsg_virtio_254zqendz                                                                               (      10 ) ; /* 30 */  
        return
        ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     11 ) ; /* 4 */
    shpool -> base = shb ;
    shpool -> size = (
     
  rpmsg_virtio_254zzqqqq                                                                               ( (  /*  67 */ 
 
    (
    (
    ( size ) & ( sizeof ( unsigned long ) - 1 ) ) != 0 )
)?1:0,      13,0,0,(char *) 0,(char * ) 0 ) /*  66 */ 
    ?
    (
    (
    ( size ) & ( ~ ( sizeof ( unsigned long ) - 1 ) ) ) + sizeof ( unsigned long ) )
    :
    ( size )
      )
    ;
    shpool -> avail = (
     
  rpmsg_virtio_254zzqqqq                                                                               ( (  /*  67 */ 
 
    (
    (
    ( size ) & ( sizeof ( unsigned long ) - 1 ) ) != 0 )
)?1:0,      17,0,0,(char *) 0,(char * ) 0 ) /*  66 */ 
    ?
    (
    (
    ( size ) & ( ~ ( sizeof ( unsigned long ) - 1 ) ) ) + sizeof ( unsigned long ) )
    :
    ( size )
      )
    ;
    rpmsg_virtio_254zqendz                                                                               (      20 ) ; /* 30 */  
  }
/**
 * rpmsg_virtio_return_buffer
 *
 * Places the used buffer back on the virtqueue.
 *
 * @param rvdev - pointer to remote core
 * @param buffer - buffer pointer
 * @param len - buffer length
 * @param idx - buffer index
 *
 */
 
static void
  rpmsg_virtio_return_buffer (
  struct rpmsg_virtio_device * rvdev ,
  void * buffer ,
  unsigned long len ,
  unsigned short idx )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (      21 ) ; /* 37 */
    unsigned int
      role = rpmsg_virtio_get_role ( rvdev ) ;
    if
      (
      role == RPMSG_MASTER
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     22 ) ; /* 1 */
      {
        struct virtqueue_buf
          vqbuf ;
        ( void ) idx ;
         /* Initialize buffer node */
        vqbuf.buf = buffer ;
        vqbuf.len = len ;
        virtqueue_add_buffer ( rvdev -> rvq , & vqbuf , 0 , 1 , buffer ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     23 ) ; /* 4 */
       /*VIRTIO_SLAVE_ONLY*/
    if
      (
      role == RPMSG_REMOTE
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     24 ) ; /* 1 */
      {
        ( void ) buffer ;
        virtqueue_add_consumed_buffer ( rvdev -> rvq , idx , len ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     25 ) ; /* 4 */
       /*VIRTIO_MASTER_ONLY*/
    rpmsg_virtio_254zqendz                                                                               (      26 ) ; /* 30 */  
  }
/**
 * rpmsg_virtio_enqueue_buffer
 *
 * Places buffer on the virtqueue for consumption by the other side.
 *
 * @param rvdev - pointer to rpmsg virtio
 * @param buffer - buffer pointer
 * @param len - buffer length
 * @param idx - buffer index
 *
 * @return - status of function execution
 */
 
static int
  rpmsg_virtio_enqueue_buffer (
  struct rpmsg_virtio_device * rvdev ,
  void * buffer ,
  unsigned long len ,
  unsigned short idx )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (      27 ) ; /* 37 */
    unsigned int
      role = rpmsg_virtio_get_role ( rvdev ) ;
    if
      (
      role == RPMSG_MASTER
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     28 ) ; /* 1 */
      {
        struct virtqueue_buf
          vqbuf ;
        ( void ) idx ;
         /* Initialize buffer node */
        vqbuf.buf = buffer ;
        vqbuf.len = len ;
    rpmsg_virtio_254zqendz                                                                               (      29 ) ; /* 30 */  
        return
        virtqueue_add_buffer ( rvdev -> svq , & vqbuf , 0 , 1 , buffer ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     30 ) ; /* 4 */
       /*!VIRTIO_SLAVE_ONLY*/
    if
      (
      role == RPMSG_REMOTE
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     31 ) ; /* 1 */
      {
        ( void ) buffer ;
    rpmsg_virtio_254zqendz                                                                               (      32 ) ; /* 30 */  
        return
        virtqueue_add_consumed_buffer ( rvdev -> svq , idx , len ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     33 ) ; /* 4 */
       /*!VIRTIO_MASTER_ONLY*/
    rpmsg_virtio_254zqendz                                                                               (      34 ) ; /* 30 */  
    return
    0 ;
  }
/**
 * rpmsg_virtio_get_tx_buffer
 *
 * Provides buffer to transmit messages.
 *
 * @param rvdev - pointer to rpmsg device
 * @param len - length of returned buffer
 * @param idx - buffer index
 *
 * return - pointer to buffer.
 */
 
static void *
  rpmsg_virtio_get_tx_buffer (
  struct rpmsg_virtio_device * rvdev ,
  unsigned long * len ,
  unsigned short * idx )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (      35 ) ; /* 37 */
    unsigned int
      role = rpmsg_virtio_get_role ( rvdev ) ;
    void *
      data = NULL ;
    if
      (
      role == RPMSG_MASTER
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     36 ) ; /* 1 */
      {
        data = virtqueue_get_buffer ( rvdev -> svq , ( uint32_t * ) len , idx ) ;
        if
          (
          data == NULL
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     37 ) ; /* 1 */
          {
 rpmsg_virtio_254zzqqzz                                                                               (      38 ) ; /* 23 */
            data =
              rpmsg_virtio_shm_pool_get_buffer (
              rvdev -> shpool , RPMSG_BUFFER_SIZE ) ;
            * len = RPMSG_BUFFER_SIZE ;
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     39 ) ; /* 4 */
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     40 ) ; /* 4 */
       /*!VIRTIO_SLAVE_ONLY*/
    if
      (
      role == RPMSG_REMOTE
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     41 ) ; /* 1 */
      {
        data = virtqueue_get_available_buffer ( rvdev -> svq , idx , ( uint32_t * ) len ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     42 ) ; /* 4 */
       /*!VIRTIO_MASTER_ONLY*/
    rpmsg_virtio_254zqendz                                                                               (      43 ) ; /* 30 */  
    return
    data ;
  }
/**
 * rpmsg_virtio_get_rx_buffer
 *
 * Retrieves the received buffer from the virtqueue.
 *
 * @param rvdev - pointer to rpmsg device
 * @param len - size of received buffer
 * @param idx - index of buffer
 *
 * @return - pointer to received buffer
 *
 */
 
static void *
  rpmsg_virtio_get_rx_buffer (
  struct rpmsg_virtio_device * rvdev ,
  unsigned long * len ,
  unsigned short * idx )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (      44 ) ; /* 37 */
    unsigned int
      role = rpmsg_virtio_get_role ( rvdev ) ;
    void *
      data = NULL ;
    if
      (
      role == RPMSG_MASTER
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     45 ) ; /* 1 */
      {
        data = virtqueue_get_buffer ( rvdev -> rvq , ( uint32_t * ) len , idx ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     46 ) ; /* 4 */
       /*!VIRTIO_SLAVE_ONLY*/
    if
      (
      role == RPMSG_REMOTE
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     47 ) ; /* 1 */
      {
        data = virtqueue_get_available_buffer ( rvdev -> rvq , idx , ( uint32_t * ) len ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     48 ) ; /* 4 */
       /*!VIRTIO_MASTER_ONLY*/
    if
      (
      data
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     49 ) ; /* 1 */
      {
         /* FIX ME: library should not worry about if it needs
          * to flush/invalidate cache, it is shared memory.
          * The shared memory should be mapped properly before
          * using it.
          */
        metal_cache_invalidate ( data , ( unsigned int ) ( * len ) ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     50 ) ; /* 4 */
    rpmsg_virtio_254zqendz                                                                               (      51 ) ; /* 30 */  
    return
    data ;
  }
/**
 * check if the remote is ready to start RPMsg communication
 */
 
static int
  rpmsg_virtio_wait_remote_ready (
  struct rpmsg_virtio_device * rvdev )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (      52 ) ; /* 37 */
    uint8_t
      status ;
    while
      (
 (  /* 21 */ 
      1
  )  /* 7 */
      )
      {
 { /* 32 */
  int zzqqzs = rpmsg_virtio_254zzqqzz                                                                               (     53 ) ; /* 32a */
        status = rpmsg_virtio_get_status ( rvdev ) ;
         /* Busy wait until the remote is ready */
        if
          (
          status & VIRTIO_CONFIG_STATUS_NEEDS_RESET
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     54 ) ; /* 1 */
          {
            rpmsg_virtio_set_status ( rvdev , 0 ) ;
            /* TODO notify remote processor */
          }
    rpmsg_virtio_254zzqqzz                                                                               (     55 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
rpmsg_virtio_254zzqqzz                                                                               (     56 ); /* 2 */
          {
            if
              (
              status & VIRTIO_CONFIG_STATUS_DRIVER_OK
              )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     57 ) ; /* 1 */
              {
    rpmsg_virtio_254zqendz                                                                               (      58 ) ; /* 30 */  
                return
                true ;
              }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     59 ) ; /* 4 */
              /* TODO: clarify metal_cpu_yield usage*/
          }
 }
        metal_cpu_yield () ;
    rpmsg_virtio_254zzqqzz                                                                               (     60 ) ;} /* 6 */
      }
    rpmsg_virtio_254zzqqzz                                                                               (     61 ) ; /* 5 */
    rpmsg_virtio_254zqendz                                                                               (      62 ) ; /* 30 */  
    return
    false ;
  }
       /*!VIRTIO_MASTER_ONLY*/
/**
 * _rpmsg_virtio_get_buffer_size
 *
 * Returns buffer size available for sending messages.
 *
 * @param channel - pointer to rpmsg channel
 *
 * @return - buffer size
 *
 */
 
static int
  _rpmsg_virtio_get_buffer_size (
  struct rpmsg_virtio_device * rvdev )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (      63 ) ; /* 37 */
    unsigned int
      role = rpmsg_virtio_get_role ( rvdev ) ;
    int
      length = 0 ;
    if
      (
      role == RPMSG_MASTER
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     64 ) ; /* 1 */
      {
         /*
          * If device role is Remote then buffers are provided by us
          * (RPMSG Master), so just provide the macro.
          */
        length = RPMSG_BUFFER_SIZE - sizeof ( struct rpmsg_hdr ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     65 ) ; /* 4 */
       /*!VIRTIO_SLAVE_ONLY*/
    if
      (
      role == RPMSG_REMOTE
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     66 ) ; /* 1 */
      {
         /*
          * If other core is Master then buffers are provided by it,
          * so get the buffer size from the virtqueue.
          */
        length = ( int ) virtqueue_get_desc_size ( rvdev -> svq ) - sizeof ( struct rpmsg_hdr ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     67 ) ; /* 4 */
       /*!VIRTIO_MASTER_ONLY*/
    rpmsg_virtio_254zqendz                                                                               (      68 ) ; /* 30 */  
    return
    length ;
  }
/**
 * This function sends rpmsg "message" to remote device.
 *
 * @param rdev - pointer to rpmsg device
 * @param src - source address of channel
 * @param dst - destination address of channel
 * @param data - data to transmit
 * @param size - size of data
 * @param wait - boolean, wait or not for buffer to become
 * available
 *
 * @return - size of data sent or negative value for failure.
 *
 */
 
static int
  rpmsg_virtio_send_offchannel_raw (
  struct rpmsg_device * rdev ,
  uint32_t src ,
  uint32_t dst ,
  const void * data ,
  int size ,
  int wait )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (      69 ) ; /* 37 */
    struct rpmsg_virtio_device *
      rvdev ;
    struct rpmsg_hdr
      rp_hdr ;
    void *
      buffer = NULL ;
    unsigned short
      idx ;
    int
      tick_count = 0 ;
    unsigned long
      buff_len ;
    int
      status ;
    struct metal_io_region *
      io ;
        /* Get the associated remote device for channel. */
    rvdev = metal_container_of ( rdev , struct rpmsg_virtio_device , rdev ) ;
    status = rpmsg_virtio_get_status ( rvdev ) ;
        /* Validate device state */
    if
      (
      ! ( status & VIRTIO_CONFIG_STATUS_DRIVER_OK )
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     70 ) ; /* 1 */
      {
    rpmsg_virtio_254zqendz                                                                               (      71 ) ; /* 30 */  
        return
        RPMSG_ERR_DEV_STATE ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     72 ) ; /* 4 */
    if
      (
      wait
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     73 ) ; /* 1 */
      {
        tick_count = 15000 /
        10 ;
      }
    rpmsg_virtio_254zzqqzz                                                                               (     74 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
rpmsg_virtio_254zzqqzz                                                                               (     75 ); /* 2 */
      {
        tick_count = 0 ;
      }
 }
    while
      (
 (  /* 21 */ 
      1
  )  /* 7 */
      )
      {
 { /* 32 */
  int zzqqzs = rpmsg_virtio_254zzqqzz                                                                               (     76 ) ; /* 32a */
        int
          avail_size ;
          /* Lock the device to enable exclusive access to virtqueues */
        metal_mutex_acquire ( & rdev -> lock ) ;
 rpmsg_virtio_254zzqqzz                                                                               (      77 ) ; /* 23 */
        avail_size =
          _rpmsg_virtio_get_buffer_size (
          rvdev ) ;
        if
          (
          size <= avail_size
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     78 ) ; /* 1 */
          {
 rpmsg_virtio_254zzqqzz                                                                               (      79 ) ; /* 23 */
            buffer =
              rpmsg_virtio_get_tx_buffer (
              rvdev , & buff_len , & idx ) ;
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     80 ) ; /* 4 */
        metal_mutex_release ( & rdev -> lock ) ;
        if
 (  /* 50 */
          (
          
  rpmsg_virtio_254zzzqtz                                                                               (     /*  51 */ 
          buffer
  ? 1 : 0  ,      82  )  /*  54 */
          ||
          ! tick_count
          )
  ) /* 1 */
 {
    rpmsg_virtio_254zzqqzz                                                                               (     83 ) ; /* 1 */
          {
 rpmsg_virtio_254zzqqzz                                                                               (      84 ) ; 
goto l100583 ; /* 16 */
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     85 ) ; /* 4 */
        if
          (
          avail_size != 0
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     86 ) ; /* 1 */
          {
    rpmsg_virtio_254zqendz                                                                               (      87 ) ; /* 30 */  
            return
            RPMSG_ERR_BUFF_SIZE ;
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     88 ) ; /* 4 */
        metal_sleep_usec ( 10 ) ;
        tick_count -- ;
    rpmsg_virtio_254zzqqzz                                                                               (     89 ) ;} /* 6 */
      }
    rpmsg_virtio_254zzqqzz                                                                               (     90 ) ; /* 5 */
l100583 : 
 ; /* 18 */
    if
      (
      ! buffer
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     91 ) ; /* 1 */
      {
    rpmsg_virtio_254zqendz                                                                               (      92 ) ; /* 30 */  
        return
        RPMSG_ERR_NO_BUFF ;
        /* Initialize RPMSG header. */
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     93 ) ; /* 4 */
    rp_hdr.dst = dst ;
    rp_hdr.src = src ;
    rp_hdr.len = size ;
    rp_hdr.reserved = 0 ;
        /* Copy data to rpmsg buffer. */
    io = rvdev -> shbuf_io ;
    status = metal_io_block_write ( io ,
    metal_io_virt_to_offset ( io , buffer ) , & rp_hdr , sizeof ( rp_hdr ) ) ;
    do
      {
        if
          (
          ! ( status == sizeof ( rp_hdr ) )
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (     94 ) ; /* 1 */
          {
            while
              (
 (  /* 21 */ 
              1
  )  /* 7 */
              )
              {
 { /* 32 */
  int zzqqzs = rpmsg_virtio_254zzqqzz                                                                               (     95 ) ; /* 32a */
                ;
    rpmsg_virtio_254zzqqzz                                                                               (     96 ) ;} /* 6 */
              }
    rpmsg_virtio_254zzqqzz                                                                               (     97 ) ; /* 5 */
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (     98 ) ; /* 4 */
      }
    while
 (  /* 50 */
      (
      0
           ) &&                                                                                                  
rpmsg_virtio_254zzqqzz                                                                               (      99 ) /* 24 */
      || !rpmsg_virtio_254zzqqzz                                                                               (     100 ) /* 24A */
      ) ;
    status = metal_io_block_write ( io ,
    metal_io_virt_to_offset ( io , (
    ( unsigned char * ) ( buffer ) + sizeof ( struct rpmsg_hdr ) ) ) , data , size ) ;
    do
      {
        if
          (
          ! ( status == size )
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    101 ) ; /* 1 */
          {
            while
              (
 (  /* 21 */ 
              1
  )  /* 7 */
              )
              {
 { /* 32 */
  int zzqqzs = rpmsg_virtio_254zzqqzz                                                                               (    102 ) ; /* 32a */
                ;
    rpmsg_virtio_254zzqqzz                                                                               (    103 ) ;} /* 6 */
              }
    rpmsg_virtio_254zzqqzz                                                                               (    104 ) ; /* 5 */
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    105 ) ; /* 4 */
      }
    while
 (  /* 50 */
      (
      0
           ) &&                                                                                                  
rpmsg_virtio_254zzqqzz                                                                               (     106 ) /* 24 */
      || !rpmsg_virtio_254zzqqzz                                                                               (     107 ) /* 24A */
      ) ;
    metal_mutex_acquire ( & rdev -> lock ) ;
        /* Enqueue buffer on virtqueue. */
 rpmsg_virtio_254zzqqzz                                                                               (     108 ) ; /* 23 */
    status =
      rpmsg_virtio_enqueue_buffer (
      rvdev , buffer , buff_len , idx ) ;
    do
      {
        if
          (
          ! ( status == VQUEUE_SUCCESS )
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    109 ) ; /* 1 */
          {
            while
              (
 (  /* 21 */ 
              1
  )  /* 7 */
              )
              {
 { /* 32 */
  int zzqqzs = rpmsg_virtio_254zzqqzz                                                                               (    110 ) ; /* 32a */
                ;
    rpmsg_virtio_254zzqqzz                                                                               (    111 ) ;} /* 6 */
              }
    rpmsg_virtio_254zzqqzz                                                                               (    112 ) ; /* 5 */
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    113 ) ; /* 4 */
      }
    while
 (  /* 50 */
      (
      0
           ) &&                                                                                                  
rpmsg_virtio_254zzqqzz                                                                               (     114 ) /* 24 */
      || !rpmsg_virtio_254zzqqzz                                                                               (     115 ) /* 24A */
      ) ;
        /* Let the other side know that there is a job to process. */
    virtqueue_kick ( rvdev -> svq ) ;
    metal_mutex_release ( & rdev -> lock ) ;
    rpmsg_virtio_254zqendz                                                                               (     116 ) ; /* 30 */  
    return
    size ;
  }
/**
 * rpmsg_virtio_tx_callback
 *
 * Tx callback function.
 *
 * @param vq - pointer to virtqueue on which Tx is has been
 * completed.
 *
 */
 
static void
  rpmsg_virtio_tx_callback (
  struct virtqueue * vq )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (     117 ) ; /* 37 */
    ( void ) vq ;
    rpmsg_virtio_254zqendz                                                                               (     118 ) ; /* 30 */  
  }
/**
 * rpmsg_virtio_rx_callback
 *
 * Rx callback function.
 *
 * @param vq - pointer to virtqueue on which messages is received
 *
 */
 
static void
  rpmsg_virtio_rx_callback (
  struct virtqueue * vq )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (     119 ) ; /* 37 */
    struct virtio_device * vdev = vq -> vq_dev ;
    struct rpmsg_virtio_device * rvdev = vdev -> priv ;
    struct rpmsg_device *
      rdev = &rvdev -> rdev ;
    struct rpmsg_endpoint *
      ept ;
    struct rpmsg_hdr *
      rp_hdr ;
    unsigned long
      len ;
    unsigned short
      idx ;
    int
      status ;
    metal_mutex_acquire ( & rdev -> lock ) ;
        /* Process the received data from remote node */
 rpmsg_virtio_254zzqqzz                                                                               (     120 ) ; /* 23 */
    rp_hdr = ( struct rpmsg_hdr * )
      rpmsg_virtio_get_rx_buffer (
      rvdev , & len , & idx ) ;
    metal_mutex_release ( & rdev -> lock ) ;
    while
      (
 (  /* 21 */ 
      rp_hdr
  )  /* 7 */
      )
      {
 { /* 32 */
  int zzqqzs = rpmsg_virtio_254zzqqzz                                                                               (    121 ) ; /* 32a */
         /* Get the channel node from the remote device channels list. */
        metal_mutex_acquire ( & rdev -> lock ) ;
 rpmsg_virtio_254zzqqzz                                                                               (     122 ) ; /* 23 */
        ept =
          rpmsg_get_ept_from_addr (
          rdev , rp_hdr -> dst ) ;
        metal_mutex_release ( & rdev -> lock ) ;
        if
          (
          ! ept
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    123 ) ; /* 1 */
          /* Fatal error no endpoint for the given dst addr. */
          {
    rpmsg_virtio_254zqendz                                                                               (     124 ) ; /* 30 */  
            return
            ;
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    125 ) ; /* 4 */
        if
          (
          ept -> dest_addr == RPMSG_ADDR_ANY
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    126 ) ; /* 1 */
          {
          /*
           * First message received from the remote side,
           * update channel destination address
           */
            ept -> dest_addr = rp_hdr -> src ;
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    127 ) ; /* 4 */
        status = ept -> cb ( ept , ( void * ) (
        ( unsigned char * ) ( rp_hdr ) + sizeof ( struct rpmsg_hdr ) ) , rp_hdr -> len , ept -> addr , ept -> priv ) ;
        do
          {
            if
              (
              ! ( status == RPMSG_SUCCESS )
              )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    128 ) ; /* 1 */
              {
                while
                  (
 (  /* 21 */ 
                  1
  )  /* 7 */
                  )
                  {
 { /* 32 */
  int zzqqzs = rpmsg_virtio_254zzqqzz                                                                               (    129 ) ; /* 32a */
                    ;
    rpmsg_virtio_254zzqqzz                                                                               (    130 ) ;} /* 6 */
                  }
    rpmsg_virtio_254zzqqzz                                                                               (    131 ) ; /* 5 */
              }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    132 ) ; /* 4 */
          }
        while
 (  /* 50 */
          (
          0
           ) &&                                                                                                  
rpmsg_virtio_254zzqqzz                                                                               (     133 ) /* 24 */
      || !rpmsg_virtio_254zzqqzz                                                                               (     134 ) /* 24A */
          ) ;
        metal_mutex_acquire ( & rdev -> lock ) ;
         /* Return used buffers. */
 rpmsg_virtio_254zzqqzz                                                                               (     135 ) ; /* 23 */
 
        rpmsg_virtio_return_buffer (
        rvdev , rp_hdr , len , idx ) ;
 rpmsg_virtio_254zzqqzz                                                                               (     136 ) ; /* 23 */
        rp_hdr = ( struct rpmsg_hdr * )
          rpmsg_virtio_get_rx_buffer (
          rvdev , & len , & idx ) ;
        metal_mutex_release ( & rdev -> lock ) ;
    rpmsg_virtio_254zzqqzz                                                                               (    137 ) ;} /* 6 */
      }
    rpmsg_virtio_254zzqqzz                                                                               (    138 ) ; /* 5 */
    rpmsg_virtio_254zqendz                                                                               (     139 ) ; /* 30 */  
  }
/**
 * rpmsg_virtio_ns_callback
 *
 * This callback handles name service announcement from the remote device
 * and creates/deletes rpmsg channels.
 *
 * @param server_chnl - pointer to server channel control block.
 * @param data - pointer to received messages
 * @param len - length of received data
 * @param priv - any private data
 * @param src - source address
 *
 * @return - rpmag endpoint callback handled
 */
 
static int
  rpmsg_virtio_ns_callback (
  struct rpmsg_endpoint * ept ,
  void * data ,
  size_t len ,
  uint32_t src ,
  void * priv )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (     140 ) ; /* 37 */
    struct rpmsg_device * rdev = ept -> rdev ;
    struct rpmsg_virtio_device * rvdev =
    ( struct rpmsg_virtio_device * ) rdev ;
    struct metal_io_region * io = rvdev -> shbuf_io ;
    struct rpmsg_endpoint *
      _ept ;
    struct rpmsg_ns_msg *
      ns_msg ;
    uint32_t
      dest ;
    char
      name [ RPMSG_NAME_SIZE ] ;
    ( void ) priv ;
    ( void ) src ;
    ns_msg = ( struct rpmsg_ns_msg * ) data ;
    if
      (
      len != sizeof ( * ns_msg )
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    141 ) ; /* 1 */
         /* Returns as the message is corrupted */
      {
    rpmsg_virtio_254zqendz                                                                               (     142 ) ; /* 30 */  
        return
        RPMSG_SUCCESS ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    143 ) ; /* 4 */
    metal_io_block_read ( io ,
    metal_io_virt_to_offset ( io , ns_msg -> name ) , & name , sizeof ( name ) ) ;
    dest = ns_msg -> addr ;
        /* check if a Ept has been locally registered */
    metal_mutex_acquire ( & rdev -> lock ) ;
    _ept = rpmsg_get_endpoint ( rdev , name , RPMSG_ADDR_ANY , dest ) ;
    if
      (
      ns_msg -> flags & RPMSG_NS_DESTROY
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    144 ) ; /* 1 */
      {
        if
          (
          _ept
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    145 ) ; /* 1 */
          {
            _ept -> dest_addr = RPMSG_ADDR_ANY ;
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    146 ) ; /* 4 */
        metal_mutex_release ( & rdev -> lock ) ;
        if
 (  /* 50 */
          (
          
  rpmsg_virtio_254zzzqfz                                                                               (     /*  52 */ 
          _ept
  ? 1 : 0  ,     148  )  /*  54 */
          &&
          _ept -> ns_unbind_cb
          )
  ) /* 1 */
 {
    rpmsg_virtio_254zzqqzz                                                                               (    149 ) ; /* 1 */
          {
            _ept -> ns_unbind_cb ( ept ) ;
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    150 ) ; /* 4 */
      }
    rpmsg_virtio_254zzqqzz                                                                               (    151 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
rpmsg_virtio_254zzqqzz                                                                               (    152 ); /* 2 */
      {
        if
          (
          ! _ept
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    153 ) ; /* 1 */
          {
          /*
           * send callback to application, that can
           * - create the associated endpoints.
           * - store information for future use.
           * - just ignore the requet as service not supported.
           */
            metal_mutex_release ( & rdev -> lock ) ;
            if
              (
              rdev -> ns_bind_cb
              )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    154 ) ; /* 1 */
              {
                rdev -> ns_bind_cb ( rdev , name , dest ) ;
              }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    155 ) ; /* 4 */
          }
    rpmsg_virtio_254zzqqzz                                                                               (    156 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
rpmsg_virtio_254zzqqzz                                                                               (    157 ); /* 2 */
          {
            _ept -> dest_addr = dest ;
            metal_mutex_release ( & rdev -> lock ) ;
          }
 }
      }
 }
    rpmsg_virtio_254zqendz                                                                               (     158 ) ; /* 30 */  
    return
    RPMSG_SUCCESS ;
  }
 
int
  rpmsg_virtio_get_buffer_size (
  struct rpmsg_device * rdev )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (     159 ) ; /* 37 */
    int
      size ;
    struct rpmsg_virtio_device *
      rvdev ;
    if
      (
      ! rdev
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    160 ) ; /* 1 */
      {
    rpmsg_virtio_254zqendz                                                                               (     161 ) ; /* 30 */  
        return
        RPMSG_ERR_PARAM ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    162 ) ; /* 4 */
    metal_mutex_acquire ( & rdev -> lock ) ;
    rvdev = ( struct rpmsg_virtio_device * ) rdev ;
 rpmsg_virtio_254zzqqzz                                                                               (     163 ) ; /* 23 */
    size =
      _rpmsg_virtio_get_buffer_size (
      rvdev ) ;
    metal_mutex_release ( & rdev -> lock ) ;
    rpmsg_virtio_254zqendz                                                                               (     164 ) ; /* 30 */  
    return
    size ;
  }
 
int
  rpmsg_init_vdev (
  struct rpmsg_virtio_device * rvdev ,
  struct virtio_device * vdev ,
  rpmsg_ns_bind_cb ns_bind_cb ,
  struct metal_io_region * shm_io ,
  struct rpmsg_virtio_shm_pool * shpool )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (     165 ) ; /* 37 */
    struct rpmsg_device *
      rdev ;
    const char *
      vq_names [ ( 2 ) ] ;
    typedef
    void ( * vqcallback ) ( struct virtqueue * vq ) ;
    vqcallback
        callback [ ( 2 ) ] ;
    unsigned long
      dev_features ;
    int
      status ;
    unsigned int
      i ,
      role ;
    rdev = &rvdev -> rdev ;
    memset ( rdev , 0 , sizeof ( * rdev ) ) ;
    metal_mutex_init ( & rdev -> lock ) ;
    rvdev -> vdev = vdev ;
    rdev -> ns_bind_cb = ns_bind_cb ;
    vdev -> priv = rvdev ;
    rdev -> ops.send_offchannel_raw = rpmsg_virtio_send_offchannel_raw ;
    role = rpmsg_virtio_get_role ( rvdev ) ;
    if
      (
      role == RPMSG_MASTER
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    166 ) ; /* 1 */
      {
         /*
          * Since device is RPMSG Remote so we need to manage the
          * shared buffers. Create shared memory pool to handle buffers.
          */
        if
          (
          ! shpool
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    167 ) ; /* 1 */
          {
    rpmsg_virtio_254zqendz                                                                               (     168 ) ; /* 30 */  
            return
            RPMSG_ERR_PARAM ;
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    169 ) ; /* 4 */
        if
          (
          ! shpool -> size
          )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    170 ) ; /* 1 */
          {
    rpmsg_virtio_254zqendz                                                                               (     171 ) ; /* 30 */  
            return
            RPMSG_ERR_NO_BUFF ;
          }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    172 ) ; /* 4 */
        rvdev -> shpool = shpool ;
        vq_names[ 0 ] = "rx_vq";
        vq_names[ 1 ] = "tx_vq";
        callback [ 0 ] = rpmsg_virtio_rx_callback ;
        callback [ 1 ] = rpmsg_virtio_tx_callback ;
        rvdev -> rvq = vdev -> vrings_info[ 0 ].vq ;
        rvdev -> svq = vdev -> vrings_info[ 1 ].vq ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    173 ) ; /* 4 */
       /*!VIRTIO_SLAVE_ONLY*/
    ( void ) shpool ;
    if
      (
      role == RPMSG_REMOTE
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    174 ) ; /* 1 */
      {
        vq_names[ 0 ] = "tx_vq";
        vq_names[ 1 ] = "rx_vq";
        callback [ 0 ] = rpmsg_virtio_tx_callback ;
        callback [ 1 ] = rpmsg_virtio_rx_callback ;
        rvdev -> rvq = vdev -> vrings_info[ 1 ].vq ;
        rvdev -> svq = vdev -> vrings_info[ 0 ].vq ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    175 ) ; /* 4 */
       /*!VIRTIO_MASTER_ONLY*/
    rvdev -> shbuf_io = shm_io ;
    if
      (
      role == RPMSG_REMOTE
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    176 ) ; /* 1 */
      {
         /* wait synchro with the master */
 rpmsg_virtio_254zzqqzz                                                                               (     177 ) ; /* 23 */
 
        rpmsg_virtio_wait_remote_ready (
        rvdev ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    178 ) ; /* 4 */
       /*!VIRTIO_MASTER_ONLY*/
        /* Create virtqueues for remote device */
    status = rpmsg_virtio_create_virtqueues ( rvdev , 0 , ( 2 ) , vq_names , callback ) ;
    if
      (
      status != RPMSG_SUCCESS
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    179 ) ; /* 1 */
      {
    rpmsg_virtio_254zqendz                                                                               (     180 ) ; /* 30 */  
        return
        status ;
        /* TODO: can have a virtio function to set the shared memory I/O */
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    181 ) ; /* 4 */
    for
      (
      i = 0
      ;
  ( /* 28 */
      i < ( 2 )
  )  /* 7 */
      ;
  ( /* 7 */
      i ++
  ,rpmsg_virtio_254zzqqzz                                                                               (     182 ) /* 27b */
  ,rpmsg_virtio_254zzqqzz                                                                               (     183 )) /* 27e */
      )
      {
 { /* 32 */
 int                  QZZZ =   
rpmsg_virtio_254zzqqzz                                                                               (     184 ) ; /* 32 */
        struct virtqueue *
          vq ;
        vq = vdev -> vrings_info[ i ].vq ;
        vq -> shm_io = shm_io ;
    rpmsg_virtio_254zzqqzz                                                                               (    185 ) ;} /* 6 */
      }
    rpmsg_virtio_254zzqqzz                                                                               (    186 ) ; /* 5 */
    if
      (
      role == RPMSG_MASTER
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    187 ) ; /* 1 */
      {
        struct virtqueue_buf
          vqbuf ;
        unsigned int
          idx ;
        void *
          buffer ;
        vqbuf.len = RPMSG_BUFFER_SIZE ;
        for
          (
          idx = 0
          ;
  ( /* 28 */
          idx < rvdev -> rvq -> vq_nentries
  )  /* 7 */
          ;
  ( /* 7 */
          idx ++
  ,rpmsg_virtio_254zzqqzz                                                                               (     188 ) /* 27b */
  ,rpmsg_virtio_254zzqqzz                                                                               (     189 )) /* 27e */
          )
          {
 { /* 32 */
 int                  QZZZ =   
rpmsg_virtio_254zzqqzz                                                                               (     190 ) ; /* 32 */
          /* Initialize TX virtqueue buffers for remote device */
 rpmsg_virtio_254zzqqzz                                                                               (     191 ) ; /* 23 */
            buffer =
              rpmsg_virtio_shm_pool_get_buffer (
              shpool , RPMSG_BUFFER_SIZE ) ;
            if
              (
              ! buffer
              )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    192 ) ; /* 1 */
              {
    rpmsg_virtio_254zqendz                                                                               (     193 ) ; /* 30 */  
                return
                RPMSG_ERR_NO_BUFF ;
              }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    194 ) ; /* 4 */
            vqbuf.buf = buffer ;
            metal_io_block_set ( shm_io ,
            metal_io_virt_to_offset ( shm_io , buffer ) , 0x00 , RPMSG_BUFFER_SIZE ) ;
            status = virtqueue_add_buffer ( rvdev -> rvq , & vqbuf , 0 , 1 , buffer ) ;
            if
              (
              status != RPMSG_SUCCESS
              )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    195 ) ; /* 1 */
              {
    rpmsg_virtio_254zqendz                                                                               (     196 ) ; /* 30 */  
                return
                status ;
              }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    197 ) ; /* 4 */
    rpmsg_virtio_254zzqqzz                                                                               (    198 ) ;} /* 6 */
          }
    rpmsg_virtio_254zzqqzz                                                                               (    199 ) ; /* 5 */
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    200 ) ; /* 4 */
       /*!VIRTIO_SLAVE_ONLY*/
        /* Initialize channels and endpoints list */
    metal_list_init ( & rdev -> endpoints ) ;
    dev_features = rpmsg_virtio_get_features ( rvdev ) ;
        /*
         * Create name service announcement endpoint if device supports name
         * service announcement feature.
         */
    if
      (
      ( dev_features & ( 1 << VIRTIO_RPMSG_F_NS ) )
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    201 ) ; /* 1 */
      {
        rpmsg_init_ept ( & rdev -> ns_ept , "NS", RPMSG_NS_EPT_ADDR , RPMSG_NS_EPT_ADDR ,
            rpmsg_virtio_ns_callback , NULL ) ;
        ( void ) rpmsg_register_endpoint ( rdev , & rdev -> ns_ept ) ;
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    202 ) ; /* 4 */
    if
      (
      role == RPMSG_MASTER
      )
 {
    rpmsg_virtio_254zzqqzz                                                                               (    203 ) ; /* 1 */
      {
        rpmsg_virtio_set_status ( rvdev , VIRTIO_CONFIG_STATUS_DRIVER_OK ) ;
        /*!VIRTIO_SLAVE_ONLY*/
      }
 }                                                                                                   
else                                                                                                
  rpmsg_virtio_254zzqqzz                                                                               (    204 ) ; /* 4 */
    rpmsg_virtio_254zqendz                                                                               (     205 ) ; /* 30 */  
    return
    status ;
  }
 
void
  rpmsg_deinit_vdev (
  struct rpmsg_virtio_device * rvdev )
  {
   int irpmsg_virtio_254zzqqzz                                                                              
 = rpmsg_virtio_254zzqqzz                                                                               (     206 ) ; /* 37 */
    struct metal_list *
      node ;
    struct rpmsg_device *
      rdev ;
    struct rpmsg_endpoint *
      ept ;
    rdev = &rvdev -> rdev ;
    while
      (
 (  /* 21 */ 
      ! metal_list_is_empty ( & rdev -> endpoints )
  )  /* 7 */
      )
      {
 { /* 32 */
  int zzqqzs = rpmsg_virtio_254zzqqzz                                                                               (    207 ) ; /* 32a */
        node = rdev -> endpoints.next ;
        ept = metal_container_of ( node , struct rpmsg_endpoint , node ) ;
        rpmsg_destroy_ept ( ept ) ;
    rpmsg_virtio_254zzqqzz                                                                               (    208 ) ;} /* 6 */
      }
    rpmsg_virtio_254zzqqzz                                                                               (    209 ) ; /* 5 */
    rvdev -> rvq = 0 ;
    rvdev -> svq = 0 ;
    metal_mutex_deinit ( & rdev -> lock ) ;
    rpmsg_virtio_254zqendz                                                                               (     210 ) ; /* 30 */  
  }
#define qqqbranches    210
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
  static int rpmsg_virtio_254zzqqqq                                                                                                                                                                                                                                 
    (int qqqc,int qqqi, int qqqnthen,int qqqnelse,                                                                                                                                                                                                                  
     char *qqqsthen,char *qqqselse);                                                                                                                                                                                                                                
    /* ----------------------------------------------------------------------* 176 *                                                                                                                                                                                
     *            Procedures                                                                                                                                                                                                                                        
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
  /* ----------- zscanf ---------------------------------------------------* 177 *                                                                                                                                                                                  
   *        Returns an integer extracted from a string                                                                                                                                                                                                              
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int rpmsg_virtio_254zscanf(char * qqscan_str)                                                                                                                                                                                                              
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
  static int rpmsg_virtio_254zzqqzz(int qqqi)                                                                                                                                                                                                                       
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
    if ( rpmsg_virtio_254zzopen != 1 )                                                                                                                                                                                                                              
    {                                                                                                                                                                                                                                                               
      rpmsg_virtio_254zqqzqz1();                                                                                                                                                                                                                                    
    };                                                                                                                                                                                                                                                              
    if ( rpmsg_virtio_254zzopen )                                                                                                                                                                                                                                   
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
static int rpmsg_virtio_254zqendz(int qqqi)                                                                                                                                                                                                                         
  {                                                                                                                                                                                                                                                                 
      if ( rpmsg_virtio_254zzopen != 1 )                                                                                                                                                                                                                            
      {                                                                                                                                                                                                                                                             
        rpmsg_virtio_254zqqzqz1();                                                                                                                                                                                                                                  
      };                                                                                                                                                                                                                                                            
      /* ----------------------------------------------------------------------* 304 *                                                                                                                                                                              
       * this is the one which puts an integer into                                                                                                                                                                                                                 
       * the execution history file and returns unity.                                                                                                                                                                                                              
       * The format of each field consists of six columns,                                                                                                                                                                                                          
       * the number is right justified in this field.                                                                                                                                                                                                               
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      if ( rpmsg_virtio_254zzopen )                                                                                                                                                                                                                                 
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
     * fclose(rpmsg_virtio_254zzhfil);                                                                                                                                                                                                                              
     * rpmsg_virtio_254zzopen = 0;                                                                                                                                                                                                                                  
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
  static int rpmsg_virtio_254zqzqzq(int qqqi)                                                                                                                                                                                                                       
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if ( rpmsg_virtio_254zzopen != 1 )                                                                                                                                                                                                                            
      {                                                                                                                                                                                                                                                             
        rpmsg_virtio_254zqqzqz1();                                                                                                                                                                                                                                  
      };                                                                                                                                                                                                                                                            
      /* not compressed */                                                                                                                                                                                                                                          
      /* do nothing for bitmap*/                                                                                                                                                                                                                                    
      /* upload the history */                                                                                                                                                                                                                                      
      /* bitmap */                                                                                                                                                                                                                                                  
      /* uncompressed  bitmap */                                                                                                                                                                                                                                    
      rpmsg_virtio_254zqendz(qqqi);                                                                                                                                                                                                                                 
        /* qqqupload closes the execution history file */                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    return(1);                                                                                                                                                                                                                                                      
  } /* endof zqzqzq */                                                                                                                                                                                                                                              
  /* ----------- zzqqqq ---------------------------------------------------* 321 *                                                                                                                                                                                  
   * This routine is used in  ternary expressions.                                                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int rpmsg_virtio_254zzqqqq(int qqqc,int qqqi, int qqqnthen,int qqqnelse,                                                                                                                                                                                   
   char *qqqsthen,char *qqqselse)                                                                                                                                                                                                                                   
  {                                                                                                                                                                                                                                                                 
    int qqqj = qqqi + 1;                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      /* This routine is called in conditional expressions with strings */                                                                                                                                                                                          
      if ( rpmsg_virtio_254zzopen != 1 )                                                                                                                                                                                                                            
      {                                                                                                                                                                                                                                                             
        rpmsg_virtio_254zqqzqz1();                                                                                                                                                                                                                                  
      };                                                                                                                                                                                                                                                            
      if ( qqqc && rpmsg_virtio_254zzopen )                                                                                                                                                                                                                         
      {                                                                                                                                                                                                                                                             
        /* then clause executed */                                                                                                                                                                                                                                  
        int qqqj1 = qqqj+1;                                                                                                                                                                                                                                         
        /* condition is true, unbuffered, not rentrant, type 65 jump */                                                                                                                                                                                             
        rpmsg_virtio_254zzqqzz(qqqi-1); /* a, a+1 */                                                                                                                                                                                                                
        rpmsg_virtio_254zzqqzz(qqqj);                                                                                                                                                                                                                               
        rpmsg_virtio_254zzqqzz(qqqj1);                                                                                                                                                                                                                              
        if (qqqnthen != 0 )                                                                                                                                                                                                                                         
        {                                                                                                                                                                                                                                                           
          int i, from;                                                                                                                                                                                                                                              
          for ( i = 1; i <= qqqnthen; i++)                                                                                                                                                                                                                          
          {                                                                                                                                                                                                                                                         
            from = rpmsg_virtio_254zscanf(qqqsthen);                                                                                                                                                                                                                
            qqqsthen += 8;                                                                                                                                                                                                                                          
            /* unbuffered */                                                                                                                                                                                                                                        
            rpmsg_virtio_254zzqqzz(from);                                                                                                                                                                                                                           
          }                                                                                                                                                                                                                                                         
        }                                                                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* else clause executed */                                                                                                                                                                                                                                  
        /* condition false, unbuffered,  not reentrant, type 66 jump */                                                                                                                                                                                             
        rpmsg_virtio_254zzqqzz(qqqi);                                                                                                                                                                                                                               
        if (qqqnelse != 0 )                                                                                                                                                                                                                                         
        {                                                                                                                                                                                                                                                           
          int i,from;                                                                                                                                                                                                                                               
          for ( i = 1; i <= qqqnelse; i++)                                                                                                                                                                                                                          
          {                                                                                                                                                                                                                                                         
            from = rpmsg_virtio_254zscanf(qqqselse);                                                                                                                                                                                                                
            qqqselse += 8;                                                                                                                                                                                                                                          
            rpmsg_virtio_254zzqqzz(from);                                                                                                                                                                                                                           
          }                                                                                                                                                                                                                                                         
        }                                                                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(qqqc);                                                                                                                                                                                                                                                   
  } /* endof zzqqqq */                                                                                                                                                                                                                                              
  /*   the following routines should be left alone */                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 328 *                                                                                                                                                                                  
   *            rpmsg_virtio_254zzzqtz                                                                                                                                                                                                                              
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is not 0.                                                                                                                                                                                                                 
   *                                                                                                                                                                                                                                                                
   *   qqqa - value of expression                                                                                                                                                                                                                                   
   *   qqqb - jump table index.                                                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int rpmsg_virtio_254zzzqtz(int qqqa, int qqqb)                                                                                                                                                                                                             
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        rpmsg_virtio_254zzqqzz(qqqb) ;                                                                                                                                                                                                                              
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        rpmsg_virtio_254zzqqzz(qqqb-1);                                                                                                                                                                                                                             
      };                                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* endof zzzqtz */                                                                                                                                                                                                                                              
  /* ----------------------------------------------------------------------* 329 *                                                                                                                                                                                  
   *            rpmsg_virtio_254zzzqfz                                                                                                                                                                                                                              
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is 0.                                                                                                                                                                                                                     
   *                                                                                                                                                                                                                                                                
   *  qqqa - value of expression                                                                                                                                                                                                                                    
   *  qqqb - jump table index.                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int rpmsg_virtio_254zzzqfz(int qqqa,int qqqb)                                                                                                                                                                                                              
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        rpmsg_virtio_254zzqqzz(qqqb-1);                                                                                                                                                                                                                             
        return(qqqa);                                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        rpmsg_virtio_254zzqqzz(qqqb);                                                                                                                                                                                                                               
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
    if ( rpmsg_virtio_254zzopen != 1 )                                                                                                                                                                                                                              
    {                                                                                                                                                                                                                                                               
      rpmsg_virtio_254zqqzqz1();                                                                                                                                                                                                                                    
    };                                                                                                                                                                                                                                                              
    if ( rpmsg_virtio_254zzopen )                                                                                                                                                                                                                                   
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
 
/* End File Insert : /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_rpmsg_virtio.c */
#ifdef _MSC_VER
#pragma message (" => Compiling source: /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_rpmsg_virtio.c finished")
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
struct rpmsg_virtio_shm_pool temp;
struct rpmsg_virtio_device temp2;
struct virtqueue temp3;
struct rpmsg_device temp4;
struct rpmsg_endpoint temp7;
void* shbuf;
struct virtio_device vdev;
struct rpmsg_hdr rp_hdr;

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
metal_weak void * tbrun_qq_tc1_return;
int tbrun_qq_tc4_return;
void * tbrun_qq_tc5_return;
void * tbrun_qq_tc6_return;
int tbrun_qq_tc8_return;
int tbrun_qq_tc9_return;
int tbrun_qq_tc10_return;
metal_weak void * tbrun_qq_tc11_return;

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_shm_pool_get_buffer
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
  struct rpmsg_virtio_shm_pool* shpool;
  size_t size;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 1;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 2;
  ldra_qq_procedure_name = "rpmsg_virtio_shm_pool_get_buffer";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 1 254 2 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - shpool
 */
  shpool = &temp;
  ldra_qq_tbrun_output ("I V Z shpool\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - size
 */
  size = 0xffff;
  ldra_qq_tbrun_output ("I V Z size\n");
  ldra_qq_tbrun_output ("E 0xffff\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc1_return = rpmsg_virtio_shm_pool_get_buffer
      (shpool,
       size);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_init_shm_pool
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
  struct rpmsg_virtio_shm_pool* shpool;
  void* shb;
  size_t size;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 2;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 3;
  ldra_qq_procedure_name = "rpmsg_virtio_init_shm_pool";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 2 254 3 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - shpool
 */
  shpool = &temp;
  ldra_qq_tbrun_output ("I V Z shpool\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - shb
 */
  shb = NULL;
  ldra_qq_tbrun_output ("I V Z shb\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - size
 */
  size = 0;
  ldra_qq_tbrun_output ("I V Z size\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    rpmsg_virtio_init_shm_pool      (shpool,
       shb,
       size);

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
  ldra_qq_tbrun_output ("O X O shb\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_return_buffer
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
  struct rpmsg_virtio_device* rvdev;
  void* buffer;
  unsigned long len;
  unsigned short idx;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 3;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 4;
  ldra_qq_procedure_name = "rpmsg_virtio_return_buffer";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 3 254 4 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rvdev
 */
  rvdev = &temp2;
  ldra_qq_tbrun_output ("I V Z rvdev\n");
  ldra_qq_tbrun_output ("E &temp2\n");

/*
 * Assign Input parameter applied through local - buffer
 */
  buffer = 0xfffff;
  ldra_qq_tbrun_output ("I V Z buffer\n");
  ldra_qq_tbrun_output ("E 0xfffff\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = 10;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 10\n");

/*
 * Assign Input parameter applied through local - idx
 */
  idx = 10;
  ldra_qq_tbrun_output ("I V Z idx\n");
  ldra_qq_tbrun_output ("E 10\n");
/*
 * Call Procedure for Test Case
 */
    rpmsg_virtio_return_buffer      (rvdev,
       buffer,
       len,
       idx);

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
  ldra_qq_tbrun_output ("O X O buffer\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_enqueue_buffer
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
  struct rpmsg_virtio_device* rvdev;
  void* buffer;
  unsigned long len;
  unsigned short idx;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 4;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 5;
  ldra_qq_procedure_name = "rpmsg_virtio_enqueue_buffer";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 4 254 5 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rvdev
 */
  rvdev = &temp2;
  ldra_qq_tbrun_output ("I V Z rvdev\n");
  ldra_qq_tbrun_output ("E &temp2\n");

/*
 * Assign Input parameter applied through local - buffer
 */
  buffer = 0xffff;
  ldra_qq_tbrun_output ("I V Z buffer\n");
  ldra_qq_tbrun_output ("E 0xffff\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = 10;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 10\n");

/*
 * Assign Input parameter applied through local - idx
 */
  idx = 10;
  ldra_qq_tbrun_output ("I V Z idx\n");
  ldra_qq_tbrun_output ("E 10\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc4_return = rpmsg_virtio_enqueue_buffer
      (rvdev,
       buffer,
       len,
       idx);

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
  ldra_qq_tbrun_output ("O X O buffer\n");

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (0,tbrun_qq_tc4_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_get_tx_buffer
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
  struct rpmsg_virtio_device* rvdev;
  unsigned long* len;
  unsigned short* idx;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 5;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 6;
  ldra_qq_procedure_name = "rpmsg_virtio_get_tx_buffer";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 5 254 6 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rvdev
 */
  rvdev = &temp2;
  ldra_qq_tbrun_output ("I V Z rvdev\n");
  ldra_qq_tbrun_output ("E &temp2\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = 10;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 10\n");

/*
 * Assign Input parameter applied through local - idx
 */
  idx = 0;
  ldra_qq_tbrun_output ("I V Z idx\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc5_return = rpmsg_virtio_get_tx_buffer
      (rvdev,
       len,
       idx);

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
  ldra_qq_tbrun_output ("O X O len\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_get_rx_buffer
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
  struct rpmsg_virtio_device* rvdev;
  unsigned long* len;
  unsigned short* idx;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 6;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 7;
  ldra_qq_procedure_name = "rpmsg_virtio_get_rx_buffer";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 6 254 7 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rvdev
 */
  rvdev = &temp2;
  ldra_qq_tbrun_output ("I V Z rvdev\n");
  ldra_qq_tbrun_output ("E &temp2\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = 10;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 10\n");

/*
 * Assign Input parameter applied through local - idx
 */
  idx = 10;
  ldra_qq_tbrun_output ("I V Z idx\n");
  ldra_qq_tbrun_output ("E 10\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc6_return = rpmsg_virtio_get_rx_buffer
      (rvdev,
       len,
       idx);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_tx_callback
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
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 7;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 11;
  ldra_qq_procedure_name = "rpmsg_virtio_tx_callback";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 7 254 11 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp3;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp3\n");
/*
 * Call Procedure for Test Case
 */
    rpmsg_virtio_tx_callback      (vq);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_get_buffer_size
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
  struct rpmsg_device* rdev;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 8;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 14;
  ldra_qq_procedure_name = "rpmsg_virtio_get_buffer_size";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 8 254 14 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rdev
 */
  rdev = (struct rpmsg_device*)(0);
  ldra_qq_tbrun_output ("I V Z rdev\n");
  ldra_qq_tbrun_output ("E (struct rpmsg_device*)(0)\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc8_return = rpmsg_virtio_get_buffer_size
      (rdev);

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
  if (ldra_qq_dtop_int (-2003,tbrun_qq_tc8_return,"%%",
                        "-2003",'O',1,1,
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_get_buffer_size
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
  struct rpmsg_device* rdev;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 9;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 14;
  ldra_qq_procedure_name = "rpmsg_virtio_get_buffer_size";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 9 254 14 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - rdev
 */
  rdev = &temp4;
  ldra_qq_tbrun_output ("I V Z rdev\n");
  ldra_qq_tbrun_output ("E &temp4\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc9_return = rpmsg_virtio_get_buffer_size
      (rdev);

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
  if (ldra_qq_dtop_int (0,tbrun_qq_tc9_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_ns_callback
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
  struct rpmsg_endpoint* ept;
  void* data;
  size_t len;
  uint32_t src;
  void* priv;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 10;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 13;
  ldra_qq_procedure_name = "rpmsg_virtio_ns_callback";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 10 254 13 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - ept
 */
  ept = &temp7;
  ldra_qq_tbrun_output ("I V Z ept\n");
  ldra_qq_tbrun_output ("E &temp7\n");

/*
 * Assign Input parameter applied through local - data
 */
  data = 0xffff;
  ldra_qq_tbrun_output ("I V Z data\n");
  ldra_qq_tbrun_output ("E 0xffff\n");

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
  priv = NULL;
  ldra_qq_tbrun_output ("I V Z priv\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc10_return = rpmsg_virtio_ns_callback
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
  if (ldra_qq_dtop_int (0,tbrun_qq_tc10_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_shm_pool_get_buffer
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
  struct rpmsg_virtio_shm_pool* shpool;
  size_t size;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 11;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 2;
  ldra_qq_procedure_name = "rpmsg_virtio_shm_pool_get_buffer";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 11 254 2 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - shpool
 */
  shpool = temp2.shpool;
  ldra_qq_tbrun_output ("I V Z shpool\n");
  ldra_qq_tbrun_output ("E temp2.shpool\n");

/*
 * Assign Input parameter applied through local - size
 */
  size = RPMSG_BUFFER_SIZE;
  ldra_qq_tbrun_output ("I V Z size\n");
  ldra_qq_tbrun_output ("E RPMSG_BUFFER_SIZE\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc11_return = rpmsg_virtio_shm_pool_get_buffer
      (shpool,
       size);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c
 * Procedure for test case : rpmsg_virtio_init_shm_pool
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
  struct rpmsg_virtio_shm_pool* shpool;
  void* shb;
  size_t size;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 12;
  ldra_qq_module_number = 254;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/rpmsg/rpmsg_virtio.c";
  ldra_qq_procedure_number = 3;
  ldra_qq_procedure_name = "rpmsg_virtio_init_shm_pool";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 12 254 3 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - shpool
 */
  shpool = temp.avail;
  ldra_qq_tbrun_output ("I V Z shpool\n");
  ldra_qq_tbrun_output ("E temp.avail\n");

/*
 * Assign Input parameter applied through local - shb
 */
  shb = &shb;
  ldra_qq_tbrun_output ("I V Z shb\n");
  ldra_qq_tbrun_output ("E &shb\n");

/*
 * Assign Input parameter applied through local - size
 */
  size = 256;
  ldra_qq_tbrun_output ("I V Z size\n");
  ldra_qq_tbrun_output ("E 256\n");
/*
 * Call Procedure for Test Case
 */
    rpmsg_virtio_init_shm_pool      (shpool,
       shb,
       size);

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
  ldra_qq_tbrun_output ("O X O shb\n");

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

