
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
 * Sequence Name : seqv3
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
 * 1 virtqueue_virt_to_phys /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 2 virtqueue_nused /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 3 virtqueue_dump /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 4 virtqueue_dump /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 5 virtqueue_enable_cb /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 6 virtqueue_free /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 7 virtqueue_kick /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 8 virtqueue_get_buffer_length /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 9 virtqueue_get_desc_size /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 10 virtqueue_add_consumed_buffer /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 11 virtqueue_add_consumed_buffer /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 12 virtqueue_disable_cb /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 13 virtqueue_get_buffer /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 14 vq_ring_free_chain /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 15 vq_ring_init /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 16 virtqueue_add_buffer /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 17 virtqueue_create /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 18 virtqueue_get_available_buffer /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 19 virtqueue_notification /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 20 virtqueue_free /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * 21 virtqueue_disable_cb /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 *
 * Program created on Thu Oct 25 2018 at 14:23:25
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
char *ldra_qq_sequence_name = "seqv3";
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
#define qqoutput tbrun_qqoutput256
#ifdef _MSC_VER
#pragma message (" => Compiling source: /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_virtqueue.c started")
#endif
/* Start File Insert : /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_virtqueue.c */
/*
C TESTBED VERSION  : 9.5.4
FILE UNDER TEST  : "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virti
DATE OF ANALYSIS : Mon Oct 15 17:39:54 2018
*/
 
/*-
 * Copyright (c) 2011, Bryan Venteicher <bryanv@FreeBSD.org>
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */
#include <string.h>
#include <openamp/virtqueue.h>
#include <metal/atomic.h>
#include <metal/log.h>
#include <metal/alloc.h>
/* Prototype for internal functions. */
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
 static int zzfileid256 =    256;
#define zzfileid zzfileid256
 static int qzzqfileid =    256;
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
#define virtqueue_256zzopen                                                                                   zzopen
 extern int virtqueue_256zzopen                                                                                 ;
#define virtqueue_256zqqzqz1                                                                                  zqqzqz1
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
  extern int virtqueue_256zqqzqz(qqnull_params);                                                                                                                                                                                                                    
  extern int virtqueue_256zqqzqz1(qqnull_params);                                                                                                                                                                                                                   
  static int virtqueue_256zzqqzz (int qqqi);                                                                                                                                                                                                                        
  static int virtqueue_256zqendz (int qqqi);                                                                                                                                                                                                                        
  static int virtqueue_256zqzqzq (int qqqi);                                                                                                                                                                                                                        
  static int virtqueue_256zzzqtz (int qqqa, int qqqb);                                                                                                                                                                                                              
  static int virtqueue_256zzzqfz (int qqqa, int qqqb);                                                                                                                                                                                                              
  void qqqupload (qqnull_params);                                                                                                                                                                                                                                   
/* ------------------------------ END OF TESTBED PROTOTYPES -------------------------------- */                                                                                                                                                                     
 
static void
  vq_ring_init (
  struct virtqueue * ,
  void * ,
  int ) ;
 
static void
  vq_ring_update_avail (
  struct virtqueue * ,
  uint16_t ) ;
 
static uint16_t
  vq_ring_add_buffer (
  struct virtqueue * ,
  struct vring_desc * ,
  uint16_t ,
  struct virtqueue_buf * ,
  int ,
  int ) ;
 
static int
  vq_ring_enable_interrupt (
  struct virtqueue * ,
  uint16_t ) ;
 
static void
  vq_ring_free_chain (
  struct virtqueue * ,
  uint16_t ) ;
 
static int
  vq_ring_must_notify_host (
  struct virtqueue * vq ) ;
 
static void
  vq_ring_notify_host (
  struct virtqueue * vq ) ;
 
static int
  virtqueue_nused (
  struct virtqueue * vq ) ;
  /* Default implementation of P2V based on libmetal */
 
static inline void *
  virtqueue_phys_to_virt (
  struct virtqueue * vq ,
  metal_phys_addr_t phys )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (       1 ) ; /* 37 */
    struct metal_io_region * io = vq -> shm_io ;
    virtqueue_256zqendz                                                                                  (       2 ) ; /* 30 */  
    return
    metal_io_phys_to_virt ( io , phys ) ;
  }
  /* Default implementation of V2P based on libmetal */
 
static inline metal_phys_addr_t
virtqueue_virt_to_phys (
struct virtqueue * vq ,
void * buf )
{
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (       3 ) ; /* 37 */
  struct metal_io_region * io = vq -> shm_io ;
    virtqueue_256zqendz                                                                                  (       4 ) ; /* 30 */  
  return
  metal_io_virt_to_phys ( io , buf ) ;
}
/**
 * virtqueue_create - Creates new VirtIO queue
 *
 * @param device - Pointer to VirtIO device
 * @param id - VirtIO queue ID , must be unique
 * @param name - Name of VirtIO queue
 * @param ring - Pointer to vring_alloc_info control block
 * @param callback - Pointer to callback function, invoked
 * when message is available on VirtIO queue
 * @param notify - Pointer to notify function, used to notify
 * other side that there is job available for it
 * @param vq - Created VirtIO queue.
 *
 * @return - Function status
 */
 
int
  virtqueue_create (
  struct virtio_device * virt_dev ,
  unsigned short id ,
  const char * name ,
  struct vring_alloc_info * ring ,
  void ( * callback ) ( struct virtqueue * vq ) ,
  void ( * notify ) ( struct virtqueue * vq ) ,
  struct virtqueue * vq )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (       5 ) ; /* 37 */
    int
      status = VQUEUE_SUCCESS ;
    VQ_PARAM_CHK ( ring == NULL , status , ERROR_VQUEUE_INVLD_PARAM ) ;
    VQ_PARAM_CHK ( ring -> num_descs == 0 , status , ERROR_VQUEUE_INVLD_PARAM ) ;
    VQ_PARAM_CHK ( ring -> num_descs & ( ring -> num_descs - 1 ) , status , ERROR_VRING_ALIGN ) ;
    VQ_PARAM_CHK ( vq == NULL , status , ERROR_NO_MEM ) ;
    if
      (
      status == VQUEUE_SUCCESS
      )
 {
    virtqueue_256zzqqzz                                                                                  (      6 ) ; /* 1 */
      {
        vq -> vq_dev = virt_dev ;
        vq -> vq_name = name ;
        vq -> vq_queue_index = id ;
        vq -> vq_nentries = ring -> num_descs ;
        vq -> vq_free_cnt = vq -> vq_nentries ;
        vq -> callback = callback ;
        vq -> notify = notify ;
         /* Initialize vring control block in virtqueue. */
 virtqueue_256zzqqzz                                                                                  (       7 ) ; /* 23 */
 
        vq_ring_init (
        vq , ( void * ) ring -> vaddr , ring -> align ) ;
         /* Disable callbacks - will be enabled by the application
          * once initialization is completed.
          */
 virtqueue_256zzqqzz                                                                                  (       8 ) ; /* 23 */
 
        virtqueue_disable_cb (
        vq ) ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (      9 ) ; /* 4 */
    virtqueue_256zqendz                                                                                  (      10 ) ; /* 30 */  
    return
    ( status ) ;
  }
/**
 * virtqueue_add_buffer() - Enqueues new buffer in vring for consumption
 * by other side. Readable buffers are always
 * inserted before writable buffers
 *
 * @param vq - Pointer to VirtIO queue control block.
 * @param buf_list - Pointer to a list of virtqueue buffers.
 * @param readable - Number of readable buffers
 * @param writable - Number of writable buffers
 * @param cookie - Pointer to hold call back data
 *
 * @return - Function status
 */
 
int
  virtqueue_add_buffer (
  struct virtqueue * vq ,
  struct virtqueue_buf * buf_list ,
  int readable ,
  int writable ,
  void * cookie )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      11 ) ; /* 37 */
    struct vq_desc_extra *
      dxp = NULL ;
    int
      status = VQUEUE_SUCCESS ;
    uint16_t
      head_idx ;
    uint16_t
      idx ;
    int
      needed ;
    needed = readable + writable ;
    VQ_PARAM_CHK ( vq == NULL , status , ERROR_VQUEUE_INVLD_PARAM ) ;
    VQ_PARAM_CHK ( needed < 1 , status , ERROR_VQUEUE_INVLD_PARAM ) ;
    VQ_PARAM_CHK ( vq -> vq_free_cnt == 0 , status , ERROR_VRING_FULL ) ;
    VQUEUE_BUSY ( vq ) ;
    if
      (
      status == VQUEUE_SUCCESS
      )
 {
    virtqueue_256zzqqzz                                                                                  (     12 ) ; /* 1 */
      {
        VQASSERT ( vq , cookie != NULL , "enqueuing with no cookie") ;
        head_idx = vq -> vq_desc_head_idx ;
        VQ_RING_ASSERT_VALID_IDX ( vq , head_idx ) ;
        dxp = &vq -> vq_descx[ head_idx ] ;
        VQASSERT ( vq , dxp -> cookie == NULL , "cookie already exists for index") ;
        dxp -> cookie = cookie ;
        dxp -> ndescs = needed ;
         /* Enqueue buffer onto the ring. */
 virtqueue_256zzqqzz                                                                                  (      13 ) ; /* 23 */
        idx =
          vq_ring_add_buffer (
          vq , vq -> vq_ring.desc , head_idx , buf_list , readable , writable ) ;
        vq -> vq_desc_head_idx = idx ;
        vq -> vq_free_cnt -= needed ;
        if
          (
          vq -> vq_free_cnt == 0
          )
 {
    virtqueue_256zzqqzz                                                                                  (     14 ) ; /* 1 */
          {
            VQ_RING_ASSERT_CHAIN_TERM ( vq ) ;
          }
    virtqueue_256zzqqzz                                                                                  (     15 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
virtqueue_256zzqqzz                                                                                  (     16 ); /* 2 */
          {
            VQ_RING_ASSERT_VALID_IDX ( vq , idx ) ;
          }
 }
         /*
          * Update vring_avail control block fields so that other
          * side can get buffer using it.
          */
 virtqueue_256zzqqzz                                                                                  (      17 ) ; /* 23 */
 
        vq_ring_update_avail (
        vq , head_idx ) ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     18 ) ; /* 4 */
    VQUEUE_IDLE ( vq ) ;
    virtqueue_256zqendz                                                                                  (      19 ) ; /* 30 */  
    return
    status ;
  }
/**
 * virtqueue_get_buffer - Returns used buffers from VirtIO queue
 *
 * @param vq - Pointer to VirtIO queue control block
 * @param len - Length of conumed buffer
 * @param idx - index of the buffer
 *
 * @return - Pointer to used buffer
 */
 
void *
  virtqueue_get_buffer (
  struct virtqueue * vq ,
  uint32_t * len ,
  uint16_t * idx )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      20 ) ; /* 37 */
    struct vring_used_elem *
      uep ;
    void *
      cookie ;
    uint16_t
      used_idx ,
      desc_idx ;
    if
 (  /* 50 */
      (
      
  virtqueue_256zzzqtz                                                                                  (     /*  51 */ 
      ! vq
  ? 1 : 0  ,      22  )  /*  54 */
      ||
      vq -> vq_used_cons_idx == vq -> vq_ring.used -> idx
      )
  ) /* 1 */
 {
    virtqueue_256zzqqzz                                                                                  (     23 ) ; /* 1 */
      {
    virtqueue_256zqendz                                                                                  (      24 ) ; /* 30 */  
        return
        ( NULL ) ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     25 ) ; /* 4 */
    VQUEUE_BUSY ( vq ) ;
    used_idx = vq -> vq_used_cons_idx ++ & ( vq -> vq_nentries - 1 ) ;
    uep = &vq -> vq_ring.used -> ring[ used_idx ] ;
    atomic_thread_fence ( memory_order_seq_cst ) ;
    desc_idx = ( uint16_t ) uep -> id ;
    if
      (
      len
      )
 {
    virtqueue_256zzqqzz                                                                                  (     26 ) ; /* 1 */
      {
        * len = uep -> len ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     27 ) ; /* 4 */
 virtqueue_256zzqqzz                                                                                  (      28 ) ; /* 23 */
 
    vq_ring_free_chain (
    vq , desc_idx ) ;
    cookie = vq -> vq_descx[ desc_idx ].cookie ;
    vq -> vq_descx[ desc_idx ].cookie = NULL ;
    if
      (
      idx
      )
 {
    virtqueue_256zzqqzz                                                                                  (     29 ) ; /* 1 */
      {
        * idx = used_idx ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     30 ) ; /* 4 */
    VQUEUE_IDLE ( vq ) ;
    virtqueue_256zqendz                                                                                  (      31 ) ; /* 30 */  
    return
    cookie ;
  }
 
uint32_t
  virtqueue_get_buffer_length (
  struct virtqueue * vq ,
  uint16_t idx )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      32 ) ; /* 37 */
    virtqueue_256zqendz                                                                                  (      33 ) ; /* 30 */  
    return
    vq -> vq_ring.desc[ idx ].len ;
  }
/**
 * virtqueue_free - Frees VirtIO queue resources
 *
 * @param vq - Pointer to VirtIO queue control block
 *
 */
 
void
  virtqueue_free (
  struct virtqueue * vq )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      34 ) ; /* 37 */
    if
      (
      vq
      )
 {
    virtqueue_256zzqqzz                                                                                  (     35 ) ; /* 1 */
      {
        if
          (
          vq -> vq_free_cnt != vq -> vq_nentries
          )
 {
    virtqueue_256zzqqzz                                                                                  (     36 ) ; /* 1 */
          {
            metal_log ( METAL_LOG_WARNING , "%s: freeing non-empty virtqueue\r\n", vq -> vq_name ) ;
          }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     37 ) ; /* 4 */
        metal_free_memory ( vq ) ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     38 ) ; /* 4 */
    virtqueue_256zqendz                                                                                  (      39 ) ; /* 30 */  
  }
/**
 * virtqueue_get_available_buffer - Returns buffer available for use in the
 * VirtIO queue
 *
 * @param vq - Pointer to VirtIO queue control block
 * @param avail_idx - Pointer to index used in vring desc table
 * @param len - Length of buffer
 *
 * @return - Pointer to available buffer
 */
 
void *
  virtqueue_get_available_buffer (
  struct virtqueue * vq ,
  uint16_t * avail_idx ,
  uint32_t * len )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      40 ) ; /* 37 */
    uint16_t
      head_idx = 0 ;
    void *
      buffer ;
    atomic_thread_fence ( memory_order_seq_cst ) ;
    if
      (
      vq -> vq_available_idx == vq -> vq_ring.avail -> idx
      )
 {
    virtqueue_256zzqqzz                                                                                  (     41 ) ; /* 1 */
      {
    virtqueue_256zqendz                                                                                  (      42 ) ; /* 30 */  
        return
        NULL ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     43 ) ; /* 4 */
    VQUEUE_BUSY ( vq ) ;
    head_idx = vq -> vq_available_idx ++ & ( vq -> vq_nentries - 1 ) ;
    * avail_idx = vq -> vq_ring.avail -> ring[ head_idx ] ;
 virtqueue_256zzqqzz                                                                                  (      44 ) ; /* 23 */
    buffer =
      virtqueue_phys_to_virt (
      vq , vq -> vq_ring.desc[ * avail_idx ].addr ) ;
    * len = vq -> vq_ring.desc[ * avail_idx ].len ;
    VQUEUE_IDLE ( vq ) ;
    virtqueue_256zqendz                                                                                  (      45 ) ; /* 30 */  
    return
    buffer ;
  }
/**
 * virtqueue_add_consumed_buffer - Returns consumed buffer back to VirtIO queue
 *
 * @param vq - Pointer to VirtIO queue control block
 * @param head_idx - Index of vring desc containing used buffer
 * @param len - Length of buffer
 *
 * @return - Function status
 */
 
int
  virtqueue_add_consumed_buffer (
  struct virtqueue * vq ,
  uint16_t head_idx ,
  uint32_t len )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      46 ) ; /* 37 */
    struct vring_used_elem *
      used_desc = NULL ;
    uint16_t
      used_idx ;
    if
      (
      head_idx > vq -> vq_nentries
      )
 {
    virtqueue_256zzqqzz                                                                                  (     47 ) ; /* 1 */
      {
    virtqueue_256zqendz                                                                                  (      48 ) ; /* 30 */  
        return
        ERROR_VRING_NO_BUFF ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     49 ) ; /* 4 */
    VQUEUE_BUSY ( vq ) ;
    used_idx = vq -> vq_ring.used -> idx & ( vq -> vq_nentries - 1 ) ;
    used_desc = &vq -> vq_ring.used -> ring[ used_idx ] ;
    used_desc -> id = head_idx ;
    used_desc -> len = len ;
    atomic_thread_fence ( memory_order_seq_cst ) ;
    vq -> vq_ring.used -> idx ++ ;
    VQUEUE_IDLE ( vq ) ;
    virtqueue_256zqendz                                                                                  (      50 ) ; /* 30 */  
    return
    VQUEUE_SUCCESS ;
  }
/**
 * virtqueue_enable_cb - Enables callback generation
 *
 * @param vq - Pointer to VirtIO queue control block
 *
 * @return - Function status
 */
 
int
  virtqueue_enable_cb (
  struct virtqueue * vq )
  {
 /* 36 */int virtqueue_256izzzqq;
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      51 ) ; /* 37 */
 virtqueue_256zzqqzz                                                                                  (      52 ) ; /* 23 */
   virtqueue_256izzzqq =
      vq_ring_enable_interrupt (
      vq , 0 ) ;
 
    virtqueue_256zqendz                                                                                  (      53 ) ; /* 30 */  
    ;
return ( virtqueue_256izzzqq );
  }
/**
 * virtqueue_enable_cb - Disables callback generation
 *
 * @param vq - Pointer to VirtIO queue control block
 *
 */
 
void
  virtqueue_disable_cb (
  struct virtqueue * vq )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      54 ) ; /* 37 */
    VQUEUE_BUSY ( vq ) ;
    if
      (
      vq -> vq_flags & VIRTQUEUE_FLAG_EVENT_IDX
      )
 {
    virtqueue_256zzqqzz                                                                                  (     55 ) ; /* 1 */
      {
        vring_used_event ( & vq -> vq_ring ) = vq -> vq_used_cons_idx - vq -> vq_nentries - 1 ;
      }
    virtqueue_256zzqqzz                                                                                  (     56 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
virtqueue_256zzqqzz                                                                                  (     57 ); /* 2 */
      {
        vq -> vq_ring.avail -> flags |= VRING_AVAIL_F_NO_INTERRUPT ;
      }
 }
    VQUEUE_IDLE ( vq ) ;
    virtqueue_256zqendz                                                                                  (      58 ) ; /* 30 */  
  }
/**
 * virtqueue_kick - Notifies other side that there is buffer available for it.
 *
 * @param vq - Pointer to VirtIO queue control block
 */
 
void
  virtqueue_kick (
  struct virtqueue * vq )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      59 ) ; /* 37 */
    VQUEUE_BUSY ( vq ) ;
        /* Ensure updated avail->idx is visible to host. */
    atomic_thread_fence ( memory_order_seq_cst ) ;
    if
 (  /* 50 */
      (
 virtqueue_256zzqqzz                                                                                  (      60 ) , /* 23e */
        vq_ring_must_notify_host (
        vq )
      )
  ) /* 1 */
 {
    virtqueue_256zzqqzz                                                                                  (     61 ) ; /* 1 */
      {
 virtqueue_256zzqqzz                                                                                  (      62 ) ; /* 23 */
 
        vq_ring_notify_host (
        vq ) ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     63 ) ; /* 4 */
    vq -> vq_queued_cnt = 0 ;
    VQUEUE_IDLE ( vq ) ;
    virtqueue_256zqendz                                                                                  (      64 ) ; /* 30 */  
  }
/**
 * virtqueue_dump Dumps important virtqueue fields , use for debugging purposes
 *
 * @param vq - Pointer to VirtIO queue control block
 */
 
void
  virtqueue_dump (
  struct virtqueue * vq )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      65 ) ; /* 37 */
    if
      (
      ! vq
      )
 {
    virtqueue_256zzqqzz                                                                                  (     66 ) ; /* 1 */
      {
    virtqueue_256zqendz                                                                                  (      67 ) ; /* 30 */  
        return
        ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     68 ) ; /* 4 */
 virtqueue_256zzqqzz                                                                                  (      69 ) ; /* 23 */
    metal_log ( METAL_LOG_DEBUG , "VQ: %s - size=%d; free=%d; used=%d; queued=%d; "
"desc_head_idx=%d; avail.idx=%d; used_cons_idx=%d; "
"used.idx=%d; avail.flags=0x%x; used.flags=0x%x\r\n", vq -> vq_name , vq -> vq_nentries , vq -> vq_free_cnt ,
        virtqueue_nused (
        vq ) , vq -> vq_queued_cnt , vq -> vq_desc_head_idx , vq -> vq_ring.avail -> idx , vq -> vq_used_cons_idx , vq -> vq_ring.used -> idx , vq -> vq_ring.avail -> flags , vq -> vq_ring.used -> flags ) ;
    virtqueue_256zqendz                                                                                  (      70 ) ; /* 30 */  
  }
/**
 * virtqueue_get_desc_size - Returns vring descriptor size
 *
 * @param vq - Pointer to VirtIO queue control block
 *
 * @return - Descriptor length
 */
 
uint32_t
  virtqueue_get_desc_size (
  struct virtqueue * vq )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      71 ) ; /* 37 */
    uint16_t
      head_idx = 0 ;
    uint16_t
      avail_idx = 0 ;
    uint32_t
      len = 0 ;
    if
      (
      vq -> vq_available_idx == vq -> vq_ring.avail -> idx
      )
 {
    virtqueue_256zzqqzz                                                                                  (     72 ) ; /* 1 */
      {
    virtqueue_256zqendz                                                                                  (      73 ) ; /* 30 */  
        return
        0 ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     74 ) ; /* 4 */
    VQUEUE_BUSY ( vq ) ;
    head_idx = vq -> vq_available_idx & ( vq -> vq_nentries - 1 ) ;
    avail_idx = vq -> vq_ring.avail -> ring[ head_idx ] ;
    len = vq -> vq_ring.desc[ avail_idx ].len ;
    VQUEUE_IDLE ( vq ) ;
    virtqueue_256zqendz                                                                                  (      75 ) ; /* 30 */  
    return
    len ;
  }
/**************************************************************************
 * Helper Functions *
 **************************************************************************/
/**
 *
 * vq_ring_add_buffer
 *
 */
 
static uint16_t
  vq_ring_add_buffer (
  struct virtqueue * vq ,
  struct vring_desc * desc ,
  uint16_t head_idx ,
  struct virtqueue_buf * buf_list ,
  int readable ,
  int writable )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      76 ) ; /* 37 */
    struct vring_desc *
      dp ;
    int
      i ,
      needed ;
    uint16_t
      idx ;
    ( void ) vq ;
    needed = readable + writable ;
    for
      (
      i = 0 , idx = head_idx
      ;
  ( /* 28 */
      i < needed
  )  /* 7 */
      ;
  ( /* 7 */
      i ++ , idx = dp -> next
  ,virtqueue_256zzqqzz                                                                                  (      77 ) /* 27b */
  ,virtqueue_256zzqqzz                                                                                  (      78 )) /* 27e */
      )
      {
 { /* 32 */
 int                  QZZZ =   
virtqueue_256zzqqzz                                                                                  (      79 ) ; /* 32 */
        VQASSERT ( vq , idx != VQ_RING_DESC_CHAIN_END , "premature end of free desc chain") ;
        dp = &desc[ idx ] ;
 virtqueue_256zzqqzz                                                                                  (      80 ) ; /* 23 */
        dp -> addr =
          virtqueue_virt_to_phys (
          vq , buf_list[ i ].buf ) ;
        dp -> len = buf_list[ i ].len ;
        dp -> flags = 0 ;
        if
          (
          i < needed - 1
          )
 {
    virtqueue_256zzqqzz                                                                                  (     81 ) ; /* 1 */
          {
            dp -> flags |= VRING_DESC_F_NEXT ;
         /*
          * Readable buffers are inserted into vring before the
          * writable buffers.
          */
          }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     82 ) ; /* 4 */
        if
          (
          i >= readable
          )
 {
    virtqueue_256zzqqzz                                                                                  (     83 ) ; /* 1 */
          {
            dp -> flags |= VRING_DESC_F_WRITE ;
          }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     84 ) ; /* 4 */
    virtqueue_256zzqqzz                                                                                  (     85 ) ;} /* 6 */
      }
    virtqueue_256zzqqzz                                                                                  (     86 ) ; /* 5 */
    virtqueue_256zqendz                                                                                  (      87 ) ; /* 30 */  
    return
    ( idx ) ;
  }
/**
 *
 * vq_ring_free_chain
 *
 */
 
static void
  vq_ring_free_chain (
  struct virtqueue * vq ,
  uint16_t desc_idx )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      88 ) ; /* 37 */
    struct vring_desc *
      dp ;
    struct vq_desc_extra *
      dxp ;
    VQ_RING_ASSERT_VALID_IDX ( vq , desc_idx ) ;
    dp = &vq -> vq_ring.desc[ desc_idx ] ;
    dxp = &vq -> vq_descx[ desc_idx ] ;
    if
      (
      vq -> vq_free_cnt == 0
      )
 {
    virtqueue_256zzqqzz                                                                                  (     89 ) ; /* 1 */
      {
        VQ_RING_ASSERT_CHAIN_TERM ( vq ) ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     90 ) ; /* 4 */
    vq -> vq_free_cnt += dxp -> ndescs ;
    dxp -> ndescs -- ;
    if
      (
      ( dp -> flags & VRING_DESC_F_INDIRECT ) == 0
      )
 {
    virtqueue_256zzqqzz                                                                                  (     91 ) ; /* 1 */
      {
        while
          (
 (  /* 21 */ 
          dp -> flags & VRING_DESC_F_NEXT
  )  /* 7 */
          )
          {
 { /* 32 */
  int zzqqzs = virtqueue_256zzqqzz                                                                                  (     92 ) ; /* 32a */
            VQ_RING_ASSERT_VALID_IDX ( vq , dp -> next ) ;
            dp = &vq -> vq_ring.desc[ dp -> next ] ;
            dxp -> ndescs -- ;
    virtqueue_256zzqqzz                                                                                  (     93 ) ;} /* 6 */
          }
    virtqueue_256zzqqzz                                                                                  (     94 ) ; /* 5 */
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (     95 ) ; /* 4 */
    VQASSERT ( vq , ( dxp -> ndescs == 0 ) , "failed to free entire desc chain, remaining") ;
        /*
         * We must append the existing free chain, if any, to the end of
         * newly freed chain. If the virtqueue was completely used, then
         * head would be VQ_RING_DESC_CHAIN_END (ASSERTed above).
         */
    dp -> next = vq -> vq_desc_head_idx ;
    vq -> vq_desc_head_idx = desc_idx ;
    virtqueue_256zqendz                                                                                  (      96 ) ; /* 30 */  
  }
/**
 *
 * vq_ring_init
 *
 */
 
static void
  vq_ring_init (
  struct virtqueue * vq ,
  void * ring_mem ,
  int alignment )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (      97 ) ; /* 37 */
    struct vring *
      vr ;
    int
      i ,
      size ;
    size = vq -> vq_nentries ;
    vr = &vq -> vq_ring ;
    vring_init ( vr , size , ( unsigned char * ) ring_mem , alignment ) ;
    for
      (
      i = 0
      ;
  ( /* 28 */
      i < size - 1
  )  /* 7 */
      ;
  ( /* 7 */
      i ++
  ,virtqueue_256zzqqzz                                                                                  (      98 ) /* 27b */
  ,virtqueue_256zzqqzz                                                                                  (      99 )) /* 27e */
      )
      {
 { /* 32 */
 int                  QZZZ =   
virtqueue_256zzqqzz                                                                                  (     100 ) ; /* 32 */
        vr -> desc[ i ].next = i + 1 ;
    virtqueue_256zzqqzz                                                                                  (    101 ) ;} /* 6 */
      }
    virtqueue_256zzqqzz                                                                                  (    102 ) ; /* 5 */
    vr -> desc[ i ].next = VQ_RING_DESC_CHAIN_END ;
    virtqueue_256zqendz                                                                                  (     103 ) ; /* 30 */  
  }
/**
 *
 * vq_ring_update_avail
 *
 */
 
static void
  vq_ring_update_avail (
  struct virtqueue * vq ,
  uint16_t desc_idx )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (     104 ) ; /* 37 */
    uint16_t
      avail_idx ;
        /*
         * Place the head of the descriptor chain into the next slot and make
         * it usable to the host. The chain is made available now rather than
         * deferring to virtqueue_notify() in the hopes that if the host is
         * currently running on another CPU, we can keep it processing the new
         * descriptor.
         */
    avail_idx = vq -> vq_ring.avail -> idx & ( vq -> vq_nentries - 1 ) ;
    vq -> vq_ring.avail -> ring[ avail_idx ] = desc_idx ;
    atomic_thread_fence ( memory_order_seq_cst ) ;
    vq -> vq_ring.avail -> idx ++ ;
        /* Keep pending count until virtqueue_notify(). */
    vq -> vq_queued_cnt ++ ;
    virtqueue_256zqendz                                                                                  (     105 ) ; /* 30 */  
  }
/**
 *
 * vq_ring_enable_interrupt
 *
 */
 
static int
  vq_ring_enable_interrupt (
  struct virtqueue * vq ,
  uint16_t ndesc )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (     106 ) ; /* 37 */
        /*
         * Enable interrupts, making sure we get the latest index of
         * what's already been consumed.
         */
    if
      (
      vq -> vq_flags & VIRTQUEUE_FLAG_EVENT_IDX
      )
 {
    virtqueue_256zzqqzz                                                                                  (    107 ) ; /* 1 */
      {
        vring_used_event ( & vq -> vq_ring ) = vq -> vq_used_cons_idx + ndesc ;
      }
    virtqueue_256zzqqzz                                                                                  (    108 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
virtqueue_256zzqqzz                                                                                  (    109 ); /* 2 */
      {
        vq -> vq_ring.avail -> flags &= ~ VRING_AVAIL_F_NO_INTERRUPT ;
      }
 }
    atomic_thread_fence ( memory_order_seq_cst ) ;
        /*
         * Enough items may have already been consumed to meet our threshold
         * since we last checked. Let our caller know so it processes the new
         * entries.
         */
    if
 (  /* 50 */
      (
 virtqueue_256zzqqzz                                                                                  (     110 ) , /* 23e */
        virtqueue_nused (
        vq ) > ndesc
      )
  ) /* 1 */
 {
    virtqueue_256zzqqzz                                                                                  (    111 ) ; /* 1 */
      {
    virtqueue_256zqendz                                                                                  (     112 ) ; /* 30 */  
        return
        1 ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (    113 ) ; /* 4 */
    virtqueue_256zqendz                                                                                  (     114 ) ; /* 30 */  
    return
    0 ;
  }
/**
 *
 * virtqueue_interrupt
 *
 */
 
void
  virtqueue_notification (
  struct virtqueue * vq )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (     115 ) ; /* 37 */
    atomic_thread_fence ( memory_order_seq_cst ) ;
    if
      (
      vq -> callback
      )
 {
    virtqueue_256zzqqzz                                                                                  (    116 ) ; /* 1 */
      {
        vq -> callback ( vq ) ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (    117 ) ; /* 4 */
    virtqueue_256zqendz                                                                                  (     118 ) ; /* 30 */  
  }
/**
 *
 * vq_ring_must_notify_host
 *
 */
 
static int
  vq_ring_must_notify_host (
  struct virtqueue * vq )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (     119 ) ; /* 37 */
    uint16_t
      new_idx ,
      prev_idx ,
      event_idx ;
    if
      (
      vq -> vq_flags & VIRTQUEUE_FLAG_EVENT_IDX
      )
 {
    virtqueue_256zzqqzz                                                                                  (    120 ) ; /* 1 */
      {
        new_idx = vq -> vq_ring.avail -> idx ;
        prev_idx = new_idx - vq -> vq_queued_cnt ;
        event_idx = vring_avail_event ( & vq -> vq_ring ) ;
    virtqueue_256zqendz                                                                                  (     121 ) ; /* 30 */  
        return
        ( vring_need_event ( event_idx , new_idx , prev_idx ) != 0 ) ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (    122 ) ; /* 4 */
    virtqueue_256zqendz                                                                                  (     123 ) ; /* 30 */  
    return
    (
    ( vq -> vq_ring.used -> flags & VRING_USED_F_NO_NOTIFY ) == 0 ) ;
  }
/**
 *
 * vq_ring_notify_host
 *
 */
 
static void
  vq_ring_notify_host (
  struct virtqueue * vq )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (     124 ) ; /* 37 */
    if
      (
      vq -> notify
      )
 {
    virtqueue_256zzqqzz                                                                                  (    125 ) ; /* 1 */
      {
        vq -> notify ( vq ) ;
      }
 }                                                                                                   
else                                                                                                
  virtqueue_256zzqqzz                                                                                  (    126 ) ; /* 4 */
    virtqueue_256zqendz                                                                                  (     127 ) ; /* 30 */  
  }
/**
 *
 * virtqueue_nused
 *
 */
 
static int
  virtqueue_nused (
  struct virtqueue * vq )
  {
   int ivirtqueue_256zzqqzz                                                                                 
 = virtqueue_256zzqqzz                                                                                  (     128 ) ; /* 37 */
    uint16_t
      used_idx ,
      nused ;
    used_idx = vq -> vq_ring.used -> idx ;
    nused = ( uint16_t ) ( used_idx - vq -> vq_used_cons_idx ) ;
    VQASSERT ( vq , nused <= vq -> vq_nentries , "used more than available") ;
    virtqueue_256zqendz                                                                                  (     129 ) ; /* 30 */  
    return
    nused ;
  }
#define qqqbranches    129
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
  static int virtqueue_256zscanf(char * qqscan_str)                                                                                                                                                                                                                 
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
  static int virtqueue_256zzqqzz(int qqqi)                                                                                                                                                                                                                          
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
    if ( virtqueue_256zzopen != 1 )                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      virtqueue_256zqqzqz1();                                                                                                                                                                                                                                       
    };                                                                                                                                                                                                                                                              
    if ( virtqueue_256zzopen )                                                                                                                                                                                                                                      
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
static int virtqueue_256zqendz(int qqqi)                                                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
      if ( virtqueue_256zzopen != 1 )                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
        virtqueue_256zqqzqz1();                                                                                                                                                                                                                                     
      };                                                                                                                                                                                                                                                            
      /* ----------------------------------------------------------------------* 304 *                                                                                                                                                                              
       * this is the one which puts an integer into                                                                                                                                                                                                                 
       * the execution history file and returns unity.                                                                                                                                                                                                              
       * The format of each field consists of six columns,                                                                                                                                                                                                          
       * the number is right justified in this field.                                                                                                                                                                                                               
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      if ( virtqueue_256zzopen )                                                                                                                                                                                                                                    
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
     * fclose(virtqueue_256zzhfil);                                                                                                                                                                                                                                 
     * virtqueue_256zzopen = 0;                                                                                                                                                                                                                                     
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
  static int virtqueue_256zqzqzq(int qqqi)                                                                                                                                                                                                                          
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if ( virtqueue_256zzopen != 1 )                                                                                                                                                                                                                               
      {                                                                                                                                                                                                                                                             
        virtqueue_256zqqzqz1();                                                                                                                                                                                                                                     
      };                                                                                                                                                                                                                                                            
      /* not compressed */                                                                                                                                                                                                                                          
      /* do nothing for bitmap*/                                                                                                                                                                                                                                    
      /* upload the history */                                                                                                                                                                                                                                      
      /* bitmap */                                                                                                                                                                                                                                                  
      /* uncompressed  bitmap */                                                                                                                                                                                                                                    
      virtqueue_256zqendz(qqqi);                                                                                                                                                                                                                                    
        /* qqqupload closes the execution history file */                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    return(1);                                                                                                                                                                                                                                                      
  } /* endof zqzqzq */                                                                                                                                                                                                                                              
  /*   the following routines should be left alone */                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 328 *                                                                                                                                                                                  
   *            virtqueue_256zzzqtz                                                                                                                                                                                                                                 
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is not 0.                                                                                                                                                                                                                 
   *                                                                                                                                                                                                                                                                
   *   qqqa - value of expression                                                                                                                                                                                                                                   
   *   qqqb - jump table index.                                                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int virtqueue_256zzzqtz(int qqqa, int qqqb)                                                                                                                                                                                                                
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        virtqueue_256zzqqzz(qqqb) ;                                                                                                                                                                                                                                 
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        virtqueue_256zzqqzz(qqqb-1);                                                                                                                                                                                                                                
      };                                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* endof zzzqtz */                                                                                                                                                                                                                                              
  /* ----------------------------------------------------------------------* 329 *                                                                                                                                                                                  
   *            virtqueue_256zzzqfz                                                                                                                                                                                                                                 
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is 0.                                                                                                                                                                                                                     
   *                                                                                                                                                                                                                                                                
   *  qqqa - value of expression                                                                                                                                                                                                                                    
   *  qqqb - jump table index.                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int virtqueue_256zzzqfz(int qqqa,int qqqb)                                                                                                                                                                                                                 
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        virtqueue_256zzqqzz(qqqb-1);                                                                                                                                                                                                                                
        return(qqqa);                                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        virtqueue_256zzqqzz(qqqb);                                                                                                                                                                                                                                  
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
    if ( virtqueue_256zzopen != 1 )                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      virtqueue_256zqqzqz1();                                                                                                                                                                                                                                       
    };                                                                                                                                                                                                                                                              
    if ( virtqueue_256zzopen )                                                                                                                                                                                                                                      
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
 
/* End File Insert : /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_virtqueue.c */
#ifdef _MSC_VER
#pragma message (" => Compiling source: /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_virtqueue.c finished")
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
struct virtqueue temp;
void* buf;
void* cookie;
struct virtqueue_buf buff;
struct vring_alloc_info info;
uint16_t avail_idx;
uint32_t len;
struct rpmsg_virtio_device* rvdev;

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
metal_phys_addr_t tbrun_qq_tc1_return;
int tbrun_qq_tc2_return;
int tbrun_qq_tc5_return;
uint32_t tbrun_qq_tc8_return;
uint32_t tbrun_qq_tc9_return;
int tbrun_qq_tc10_return;
int tbrun_qq_tc11_return;
void * tbrun_qq_tc13_return;
int tbrun_qq_tc16_return;
int tbrun_qq_tc17_return;
void * tbrun_qq_tc18_return;

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

static int ldra_qq_dtop_uint32_t (uint32_t expected_value,uint32_t actual_value,char * name,
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
} /* end of ldra_qq_dtop_uint32_t */

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_virt_to_phys
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
  struct virtqueue* vq;
  void* buf;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 1;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 2;
  ldra_qq_procedure_name = "virtqueue_virt_to_phys";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 1 256 2 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - buf
 */
  ldra_qq_tbrun_output ("I V Z buf\n");
  ldra_qq_tbrun_output ("E buf\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc1_return = virtqueue_virt_to_phys
      (vq,
       buf);

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
  ldra_qq_tbrun_output ("O X O buf\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_nused
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
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 2;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 23;
  ldra_qq_procedure_name = "virtqueue_nused";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 2 256 23 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc2_return = virtqueue_nused
      (vq);

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
  if (ldra_qq_dtop_int (58783,tbrun_qq_tc2_return,"%%",
                        "58783",'O',1,1,
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_dump
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
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 3;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 13;
  ldra_qq_procedure_name = "virtqueue_dump";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 3 256 13 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    virtqueue_dump      (vq);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_dump
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
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 4;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 13;
  ldra_qq_procedure_name = "virtqueue_dump";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 4 256 13 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = NULL;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    virtqueue_dump      (vq);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_enable_cb
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
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 5;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 10;
  ldra_qq_procedure_name = "virtqueue_enable_cb";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 5 256 10 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc5_return = virtqueue_enable_cb
      (vq);

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
  ldra_qq_tbrun_output ("O X O vq\n");

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (1,tbrun_qq_tc5_return,"%%",
                        "1",'O',1,1,
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_free
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
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 6;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 7;
  ldra_qq_procedure_name = "virtqueue_free";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 6 256 7 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    virtqueue_free      (vq);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_kick
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
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 12;
  ldra_qq_procedure_name = "virtqueue_kick";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 7 256 12 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    virtqueue_kick      (vq);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_get_buffer_length
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
  struct virtqueue* vq;
  uint16_t idx;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 8;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 6;
  ldra_qq_procedure_name = "virtqueue_get_buffer_length";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 8 256 6 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - idx
 */
  idx = 0;
  ldra_qq_tbrun_output ("I V Z idx\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc8_return = virtqueue_get_buffer_length
      (vq,
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
  if (ldra_qq_no_exception_raised == 1)
  {
    sprintf (testbed_buff,"%lu",tbrun_qq_tc8_return);
    if (ldra_qq_variable_converted == 1)
    {
      if (tbrun_qq_tc8_return != 0)
      {
        ldra_qq_variable_passed = 0;
      }
    }
    else
    {
      ldra_qq_variable_passed = 0;
    }
    if (ldra_qq_var_exception_raised == 1)
    {
      ldra_qq_tbrun_output ("O X O %%%%\n");
        ldra_qq_test_case_passed = 0;
    }
    else
    {
      if (ldra_qq_variable_passed == 1)
      {
        ldra_qq_tbrun_output ("O V O %%%%\n");
        ldra_qq_tbrun_output ("E 0\n");
        if (ldra_qq_variable_converted == 1)
        {
            ldra_qq_tbrun_output ("P V %s\n",testbed_buff);
        }
        else
        {
            ldra_qq_tbrun_output ("P F %s\n",testbed_buff);
        }
      }
      else
      {
        ldra_qq_tbrun_output ("O V O %%%%\n");
        ldra_qq_tbrun_output ("E 0\n");
        if (ldra_qq_variable_converted == 1)
        {
            ldra_qq_tbrun_output ("F V %s\n",testbed_buff);
        }
        else
        {
            ldra_qq_tbrun_output ("F F %s\n",testbed_buff);
        }
          ldra_qq_test_case_passed = 0;
      }
    }
  }
  else
  {
/*
 * Exception raised so no return generated
 */
    ldra_qq_tbrun_output ("%%%% X\n");
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_get_desc_size
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
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 9;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 14;
  ldra_qq_procedure_name = "virtqueue_get_desc_size";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 9 256 14 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc9_return = virtqueue_get_desc_size
      (vq);

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
  if (ldra_qq_no_exception_raised == 1)
  {
    sprintf (testbed_buff,"%lu",tbrun_qq_tc9_return);
    if (ldra_qq_variable_converted == 1)
    {
      if (tbrun_qq_tc9_return != 3053453216)
      {
        ldra_qq_variable_passed = 0;
      }
    }
    else
    {
      ldra_qq_variable_passed = 0;
    }
    if (ldra_qq_var_exception_raised == 1)
    {
      ldra_qq_tbrun_output ("O X O %%%%\n");
        ldra_qq_test_case_passed = 0;
    }
    else
    {
      if (ldra_qq_variable_passed == 1)
      {
        ldra_qq_tbrun_output ("O V O %%%%\n");
        ldra_qq_tbrun_output ("E 3053453216\n");
        if (ldra_qq_variable_converted == 1)
        {
            ldra_qq_tbrun_output ("P V %s\n",testbed_buff);
        }
        else
        {
            ldra_qq_tbrun_output ("P F %s\n",testbed_buff);
        }
      }
      else
      {
        ldra_qq_tbrun_output ("O V O %%%%\n");
        ldra_qq_tbrun_output ("E 3053453216\n");
        if (ldra_qq_variable_converted == 1)
        {
            ldra_qq_tbrun_output ("F V %s\n",testbed_buff);
        }
        else
        {
            ldra_qq_tbrun_output ("F F %s\n",testbed_buff);
        }
          ldra_qq_test_case_passed = 0;
      }
    }
  }
  else
  {
/*
 * Exception raised so no return generated
 */
    ldra_qq_tbrun_output ("%%%% X\n");
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_add_consumed_buffer
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
  struct virtqueue* vq;
  uint16_t head_idx;
  uint32_t len;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 10;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 9;
  ldra_qq_procedure_name = "virtqueue_add_consumed_buffer";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 10 256 9 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - head_idx
 */
  head_idx = 0;
  ldra_qq_tbrun_output ("I V Z head_idx\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = 0;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc10_return = virtqueue_add_consumed_buffer
      (vq,
       head_idx,
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_add_consumed_buffer
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
  struct virtqueue* vq;
  uint16_t head_idx;
  uint32_t len;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 11;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 9;
  ldra_qq_procedure_name = "virtqueue_add_consumed_buffer";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 11 256 9 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - head_idx
 */
  head_idx = -1;
  ldra_qq_tbrun_output ("I V Z head_idx\n");
  ldra_qq_tbrun_output ("E -1\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = -1;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E -1\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc11_return = virtqueue_add_consumed_buffer
      (vq,
       head_idx,
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
  if (ldra_qq_dtop_int (-3007,tbrun_qq_tc11_return,"%%",
                        "-3007",'O',1,1,
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_disable_cb
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
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 12;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 11;
  ldra_qq_procedure_name = "virtqueue_disable_cb";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 12 256 11 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    virtqueue_disable_cb      (vq);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_get_buffer
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
  struct virtqueue* vq;
  uint32_t* len;
  uint16_t* idx;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 13;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 5;
  ldra_qq_procedure_name = "virtqueue_get_buffer";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 13 256 5 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = NULL;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = 1234;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 1234\n");

/*
 * Assign Input parameter applied through local - idx
 */
  idx = 1234;
  ldra_qq_tbrun_output ("I V Z idx\n");
  ldra_qq_tbrun_output ("E 1234\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc13_return = virtqueue_get_buffer
      (vq,
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
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O idx\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : vq_ring_free_chain
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
  struct virtqueue* vq;
  uint16_t desc_idx;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 14;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 16;
  ldra_qq_procedure_name = "vq_ring_free_chain";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 14 256 16 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - desc_idx
 */
  desc_idx = 0;
  ldra_qq_tbrun_output ("I V Z desc_idx\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    vq_ring_free_chain      (vq,
       desc_idx);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : vq_ring_init
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
  struct virtqueue* vq;
  void* ring_mem;
  int alignment;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 15;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 17;
  ldra_qq_procedure_name = "vq_ring_init";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 15 256 17 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - ring_mem
 */
  ring_mem = &temp;
  ldra_qq_tbrun_output ("I V Z ring_mem\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - alignment
 */
  alignment = 1234;
  ldra_qq_tbrun_output ("I V Z alignment\n");
  ldra_qq_tbrun_output ("E 1234\n");
/*
 * Call Procedure for Test Case
 */
    vq_ring_init      (vq,
       ring_mem,
       alignment);

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
  ldra_qq_tbrun_output ("O X O ring_mem\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_add_buffer
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
  struct virtqueue* vq;
  struct virtqueue_buf* buf_list;
  int readable;
  int writable;
  void* cookie;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 16;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 4;
  ldra_qq_procedure_name = "virtqueue_add_buffer";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 16 256 4 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - buf_list
 */
  buf_list = &buff;
  ldra_qq_tbrun_output ("I V Z buf_list\n");
  ldra_qq_tbrun_output ("E &buff\n");

/*
 * Assign Input parameter applied through local - readable
 */
  readable = 0;
  ldra_qq_tbrun_output ("I V Z readable\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - writable
 */
  writable = 0;
  ldra_qq_tbrun_output ("I V Z writable\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - cookie
 */
  ldra_qq_tbrun_output ("I V Z cookie\n");
  ldra_qq_tbrun_output ("E cookie\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc16_return = virtqueue_add_buffer
      (vq,
       buf_list,
       readable,
       writable,
       cookie);

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
  ldra_qq_tbrun_output ("O X O vq\n");

/*
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O cookie\n");

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (0,tbrun_qq_tc16_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_create
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
  struct virtio_device* virt_dev;
  unsigned short id;
  char* name;
  struct vring_alloc_info* ring;
  void (* callback) ( struct virtqueue* vq );
  void (* notify) ( struct virtqueue* vq );
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 17;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 3;
  ldra_qq_procedure_name = "virtqueue_create";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 17 256 3 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - virt_dev
 */
  virt_dev = NULL;
  ldra_qq_tbrun_output ("I V Z virt_dev\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - id
 */
  id = 1234;
  ldra_qq_tbrun_output ("I V Z id\n");
  ldra_qq_tbrun_output ("E 1234\n");

/*
 * Assign Input parameter applied through local - name
 */
  name = "dev";
  ldra_qq_tbrun_output ("I V Z name\n");
  ldra_qq_tbrun_output ("E \"dev\"\n");

/*
 * Assign Input parameter applied through local - ring
 */
  ring = &info;
  ldra_qq_tbrun_output ("I V Z ring\n");
  ldra_qq_tbrun_output ("E &info\n");

/*
 * Assign Input parameter applied through local - callback
 */
  callback = 0;
  ldra_qq_tbrun_output ("I V Z callback\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - notify
 */
  notify = 0;
  ldra_qq_tbrun_output ("I V Z notify\n");
  ldra_qq_tbrun_output ("E 0\n");

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc17_return = virtqueue_create
      (virt_dev,
       id,
       name,
       ring,
       callback,
       notify,
       vq);

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
  if (ldra_qq_dtop_int (0,tbrun_qq_tc17_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_get_available_buffer
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
  struct virtqueue* vq;
  uint16_t* avail_idx;
  uint32_t* len;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 18;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 8;
  ldra_qq_procedure_name = "virtqueue_get_available_buffer";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 18 256 8 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - avail_idx
 */
  avail_idx = &avail_idx;
  ldra_qq_tbrun_output ("I V Z avail_idx\n");
  ldra_qq_tbrun_output ("E &avail_idx\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = &len;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E &len\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc18_return = virtqueue_get_available_buffer
      (vq,
       avail_idx,
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
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O avail_idx\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_notification
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
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 19;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 20;
  ldra_qq_procedure_name = "virtqueue_notification";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 19 256 20 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = &temp;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E &temp\n");
/*
 * Call Procedure for Test Case
 */
    virtqueue_notification      (vq);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_free
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
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 20;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 7;
  ldra_qq_procedure_name = "virtqueue_free";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 20 256 7 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = NULL;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    virtqueue_free      (vq);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c
 * Procedure for test case : virtqueue_disable_cb
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
  struct virtqueue* vq;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 21;
  ldra_qq_module_number = 256;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/virtio/virtqueue.c";
  ldra_qq_procedure_number = 11;
  ldra_qq_procedure_name = "virtqueue_disable_cb";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 21 256 11 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - vq
 */
  vq = NULL;
  ldra_qq_tbrun_output ("I V Z vq\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    virtqueue_disable_cb      (vq);

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

