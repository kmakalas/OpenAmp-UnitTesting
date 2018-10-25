
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
 * Sequence Name : seq7
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
 * 1 elf_get_load_state /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 2 elf_locate_rsc_table /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 3 elf_get_entry /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 4 elf_get_entry /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 5 elf_release /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 6 elf_identify /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 7 elf_identify /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 8 elf_info_size /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 9 elf_get_section_from_index /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 10 elf_phnum /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 11 elf_phoff /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 12 elf_phentsize /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 13 elf_ehdr_size /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 14 elf_get_section_from_name /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 15 elf_get_segment_from_index /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 16 elf_get_load_state /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 17 elf_shoff /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 18 elf_is_64 /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 19 elf_ehdr_size /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 20 elf_locate_rsc_table /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 21 elf_shentsize /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 22 elf_shnum /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 23 elf_shstrndx /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 24 elf_phtable_ptr /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 25 elf_shtable_ptr /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 26 elf_shstrtab_ptr /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * 27 elf_shentsize /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 *
 * Program created on Thu Oct 25 2018 at 14:18:45
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
char *ldra_qq_sequence_name = "seq7";
int ldra_qq_quiet_stubs = 0;
int ldra_qq_test_case_number = 0;
int ldra_qq_last_test_case = -1;
int ldra_qq_tc_iterator = -1;
int ldra_qq_tc_repeater = -1;
int ldra_qq_module_number = 0;
char *ldra_qq_module_name = NULL;
int ldra_qq_procedure_number = 0;
char *ldra_qq_procedure_name = NULL;
int ldra_qq_number_of_existing_tcs = 27;
int ldra_qq_in_existing_test_case = 0;
int ldra_qq_in_new_test_case = 0;
char *ldra_qq_action_code = "";
int inszt_confirm_enabled = 0;

/*
 * Pre-include code will be placed here
 * this code is located at global scope and should consist of
 * declarations, preprocessor directives (e.g. #include) or procedures
 */
#define qqoutput tbrun_qqoutput249
#ifdef _MSC_VER
#pragma message (" => Compiling source: /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_elf_loader.c started")
#endif
/* Start File Insert : /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_elf_loader.c */
/*
C TESTBED VERSION  : 9.5.4
FILE UNDER TEST  : "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remot
DATE OF ANALYSIS : Mon Oct 15 17:36:27 2018
*/
 
/*
 * Copyright (c) 2014, Mentor Graphics Corporation
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include <string.h>
#include <metal/alloc.h>
#include <metal/log.h>
#include <openamp/elf_loader.h>
#include <openamp/remoteproc.h>
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
 static int zzfileid249 =    249;
#define zzfileid zzfileid249
 static int qzzqfileid =    249;
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
#define elf_loader_249zzopen                                                                                  zzopen
 extern int elf_loader_249zzopen                                                                                ;
#define elf_loader_249zqqzqz1                                                                                 zqqzqz1
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
  extern int elf_loader_249zqqzqz(qqnull_params);                                                                                                                                                                                                                   
  extern int elf_loader_249zqqzqz1(qqnull_params);                                                                                                                                                                                                                  
  static int elf_loader_249zzqqzz (int qqqi);                                                                                                                                                                                                                       
  static int elf_loader_249zqendz (int qqqi);                                                                                                                                                                                                                       
  static int elf_loader_249zqzqzq (int qqqi);                                                                                                                                                                                                                       
  static int elf_loader_249zzzqtz (int qqqa, int qqqb);                                                                                                                                                                                                             
  static int elf_loader_249zzzqfz (int qqqa, int qqqb);                                                                                                                                                                                                             
  void qqqupload (qqnull_params);                                                                                                                                                                                                                                   
/* ------------------------------ END OF TESTBED PROTOTYPES -------------------------------- */                                                                                                                                                                     
 
static int
  elf_is_64 (
  const void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (       1 ) ; /* 37 */
    const unsigned char *
      tmp = elf_info ;
    if
      (
      tmp[ EI_CLASS ] == ELFCLASS64
      )
 {
    elf_loader_249zzqqzz                                                                                 (      2 ) ; /* 1 */
      {
    elf_loader_249zqendz                                                                                 (       3 ) ; /* 30 */  
        return
        1 ;
      }
    elf_loader_249zzqqzz                                                                                 (      4 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (      5 ); /* 2 */
      {
    elf_loader_249zqendz                                                                                 (       6 ) ; /* 30 */  
        return
        0 ;
      }
 }
    elf_loader_249zqendz                                                                                 (       7 ) ; /* 30 */  
  }
 
static size_t
  elf_ehdr_size (
  const void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (       8 ) ; /* 37 */
    if
      (
      elf_info == NULL
      )
 {
    elf_loader_249zzqqzz                                                                                 (      9 ) ; /* 1 */
      {
    elf_loader_249zqendz                                                                                 (      10 ) ; /* 30 */  
        return
        sizeof ( Elf64_Ehdr ) ;
      }
    elf_loader_249zzqqzz                                                                                 (     11 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     12 ); /* 2 */
      {
        if
 (  /* 50 */
          (
 elf_loader_249zzqqzz                                                                                 (      13 ) , /* 23e */
            elf_is_64 (
            elf_info ) != 0
          )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (     14 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (      15 ) ; /* 30 */  
            return
            sizeof ( Elf64_Ehdr ) ;
          }
    elf_loader_249zzqqzz                                                                                 (     16 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     17 ); /* 2 */
          {
    elf_loader_249zqendz                                                                                 (      18 ) ; /* 30 */  
            return
            sizeof ( Elf32_Ehdr ) ;
          }
 }
      }
 }
    elf_loader_249zqendz                                                                                 (      19 ) ; /* 30 */  
  }
 
static size_t
  elf_phoff (
  const void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (      20 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (      21 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (     22 ) ; /* 1 */
      {
        const Elf32_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      23 ) ; /* 30 */  
        return
        ehdr -> e_phoff ;
      }
    elf_loader_249zzqqzz                                                                                 (     24 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     25 ); /* 2 */
      {
        const Elf64_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      26 ) ; /* 30 */  
        return
        ehdr -> e_phoff ;
      }
 }
    elf_loader_249zqendz                                                                                 (      27 ) ; /* 30 */  
  }
 
static size_t
  elf_phentsize (
  const void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (      28 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (      29 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (     30 ) ; /* 1 */
      {
        const Elf32_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      31 ) ; /* 30 */  
        return
        ehdr -> e_phentsize ;
      }
    elf_loader_249zzqqzz                                                                                 (     32 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     33 ); /* 2 */
      {
        const Elf64_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      34 ) ; /* 30 */  
        return
        ehdr -> e_phentsize ;
      }
 }
    elf_loader_249zqendz                                                                                 (      35 ) ; /* 30 */  
  }
 
static int
  elf_phnum (
  const void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (      36 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (      37 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (     38 ) ; /* 1 */
      {
        const Elf32_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      39 ) ; /* 30 */  
        return
        ehdr -> e_phnum ;
      }
    elf_loader_249zzqqzz                                                                                 (     40 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     41 ); /* 2 */
      {
        const Elf64_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      42 ) ; /* 30 */  
        return
        ehdr -> e_phnum ;
      }
 }
    elf_loader_249zqendz                                                                                 (      43 ) ; /* 30 */  
  }
 
static size_t
  elf_shoff (
  const void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (      44 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (      45 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (     46 ) ; /* 1 */
      {
        const Elf32_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      47 ) ; /* 30 */  
        return
        ehdr -> e_shoff ;
      }
    elf_loader_249zzqqzz                                                                                 (     48 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     49 ); /* 2 */
      {
        const Elf64_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      50 ) ; /* 30 */  
        return
        ehdr -> e_shoff ;
      }
 }
    elf_loader_249zqendz                                                                                 (      51 ) ; /* 30 */  
  }
 
static size_t
  elf_shentsize (
  const void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (      52 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (      53 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (     54 ) ; /* 1 */
      {
        const Elf32_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      55 ) ; /* 30 */  
        return
        ehdr -> e_shentsize ;
      }
    elf_loader_249zzqqzz                                                                                 (     56 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     57 ); /* 2 */
      {
        const Elf64_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      58 ) ; /* 30 */  
        return
        ehdr -> e_shentsize ;
      }
 }
    elf_loader_249zqendz                                                                                 (      59 ) ; /* 30 */  
  }
 
static int
  elf_shnum (
  const void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (      60 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (      61 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (     62 ) ; /* 1 */
      {
        const Elf32_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      63 ) ; /* 30 */  
        return
        ehdr -> e_shnum ;
      }
    elf_loader_249zzqqzz                                                                                 (     64 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     65 ); /* 2 */
      {
        const Elf64_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      66 ) ; /* 30 */  
        return
        ehdr -> e_shnum ;
      }
 }
    elf_loader_249zqendz                                                                                 (      67 ) ; /* 30 */  
  }
 
static int
  elf_shstrndx (
  const void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (      68 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (      69 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (     70 ) ; /* 1 */
      {
        const Elf32_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      71 ) ; /* 30 */  
        return
        ehdr -> e_shstrndx ;
      }
    elf_loader_249zzqqzz                                                                                 (     72 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     73 ); /* 2 */
      {
        const Elf64_Ehdr *
          ehdr = elf_info ;
    elf_loader_249zqendz                                                                                 (      74 ) ; /* 30 */  
        return
        ehdr -> e_shstrndx ;
      }
 }
    elf_loader_249zqendz                                                                                 (      75 ) ; /* 30 */  
  }
 
static void *
  elf_phtable_ptr (
  void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (      76 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (      77 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (     78 ) ; /* 1 */
      {
        struct elf32_info *
          einfo = elf_info ;
    elf_loader_249zqendz                                                                                 (      79 ) ; /* 30 */  
        return
        ( void * ) & einfo -> phdrs ;
      }
    elf_loader_249zzqqzz                                                                                 (     80 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     81 ); /* 2 */
      {
        struct elf64_info *
          einfo = elf_info ;
    elf_loader_249zqendz                                                                                 (      82 ) ; /* 30 */  
        return
        ( void * ) & einfo -> phdrs ;
      }
 }
    elf_loader_249zqendz                                                                                 (      83 ) ; /* 30 */  
  }
 
static void *
  elf_shtable_ptr (
  void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (      84 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (      85 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (     86 ) ; /* 1 */
      {
        struct elf32_info *
          einfo = elf_info ;
    elf_loader_249zqendz                                                                                 (      87 ) ; /* 30 */  
        return
        ( void * ) ( & einfo -> shdrs ) ;
      }
    elf_loader_249zzqqzz                                                                                 (     88 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     89 ); /* 2 */
      {
        struct elf64_info *
          einfo = elf_info ;
    elf_loader_249zqendz                                                                                 (      90 ) ; /* 30 */  
        return
        ( void * ) ( & einfo -> shdrs ) ;
      }
 }
    elf_loader_249zqendz                                                                                 (      91 ) ; /* 30 */  
  }
 
static void **
  elf_shstrtab_ptr (
  void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (      92 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (      93 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (     94 ) ; /* 1 */
      {
        struct elf32_info *
          einfo = elf_info ;
    elf_loader_249zqendz                                                                                 (      95 ) ; /* 30 */  
        return
        &einfo -> shstrtab ;
      }
    elf_loader_249zzqqzz                                                                                 (     96 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (     97 ); /* 2 */
      {
        struct elf64_info *
          einfo = elf_info ;
    elf_loader_249zqendz                                                                                 (      98 ) ; /* 30 */  
        return
        &einfo -> shstrtab ;
      }
 }
    elf_loader_249zqendz                                                                                 (      99 ) ; /* 30 */  
  }
 
static unsigned int *
  elf_load_state (
  void * elf_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     100 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (     101 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    102 ) ; /* 1 */
      {
        struct elf32_info *
          einfo = elf_info ;
    elf_loader_249zqendz                                                                                 (     103 ) ; /* 30 */  
        return
        &einfo -> load_state ;
      }
    elf_loader_249zzqqzz                                                                                 (    104 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    105 ); /* 2 */
      {
        struct elf64_info *
          einfo = elf_info ;
    elf_loader_249zqendz                                                                                 (     106 ) ; /* 30 */  
        return
        &einfo -> load_state ;
      }
 }
    elf_loader_249zqendz                                                                                 (     107 ) ; /* 30 */  
  }
 
static void
  elf_parse_segment (
  void * elf_info ,
  const void * elf_phdr ,
  unsigned int * p_type ,
  size_t * p_offset ,
  metal_phys_addr_t * p_vaddr ,
  metal_phys_addr_t * p_paddr ,
  size_t * p_filesz ,
  size_t * p_memsz )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     108 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (     109 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    110 ) ; /* 1 */
      {
        const Elf32_Phdr *
          phdr = elf_phdr ;
        if
          (
          p_type != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    111 ) ; /* 1 */
          {
            * p_type = ( unsigned int ) phdr -> p_type ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    112 ) ; /* 4 */
        if
          (
          p_offset != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    113 ) ; /* 1 */
          {
            * p_offset = ( size_t ) phdr -> p_offset ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    114 ) ; /* 4 */
        if
          (
          p_vaddr != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    115 ) ; /* 1 */
          {
            * p_vaddr = ( metal_phys_addr_t ) phdr -> p_vaddr ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    116 ) ; /* 4 */
        if
          (
          p_paddr != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    117 ) ; /* 1 */
          {
            * p_paddr = ( metal_phys_addr_t ) phdr -> p_paddr ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    118 ) ; /* 4 */
        if
          (
          p_filesz != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    119 ) ; /* 1 */
          {
            * p_filesz = ( size_t ) phdr -> p_filesz ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    120 ) ; /* 4 */
        if
          (
          p_memsz != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    121 ) ; /* 1 */
          {
            * p_memsz = ( size_t ) phdr -> p_memsz ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    122 ) ; /* 4 */
      }
    elf_loader_249zzqqzz                                                                                 (    123 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    124 ); /* 2 */
      {
        const Elf64_Phdr *
          phdr = elf_phdr ;
        if
          (
          p_type != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    125 ) ; /* 1 */
          {
            * p_type = ( unsigned int ) phdr -> p_type ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    126 ) ; /* 4 */
        if
          (
          p_offset != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    127 ) ; /* 1 */
          {
            * p_offset = ( size_t ) phdr -> p_offset ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    128 ) ; /* 4 */
        if
          (
          p_vaddr != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    129 ) ; /* 1 */
          {
            if
              (
              p_vaddr != NULL
              )
 {
    elf_loader_249zzqqzz                                                                                 (    130 ) ; /* 1 */
              {
                * p_vaddr = ( metal_phys_addr_t ) phdr -> p_vaddr ;
              }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    131 ) ; /* 4 */
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    132 ) ; /* 4 */
        if
          (
          p_paddr != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    133 ) ; /* 1 */
          {
            * p_paddr = ( metal_phys_addr_t ) phdr -> p_paddr ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    134 ) ; /* 4 */
        if
          (
          p_filesz != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    135 ) ; /* 1 */
          {
            * p_filesz = ( size_t ) phdr -> p_filesz ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    136 ) ; /* 4 */
        if
          (
          p_memsz != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    137 ) ; /* 1 */
          {
            * p_memsz = ( size_t ) phdr -> p_memsz ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    138 ) ; /* 4 */
      }
 }
    elf_loader_249zqendz                                                                                 (     139 ) ; /* 30 */  
  }
 
static const void *
  elf_get_segment_from_index (
  void * elf_info ,
  int index )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     140 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (     141 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    142 ) ; /* 1 */
      {
        const struct elf32_info *
          einfo = elf_info ;
        const Elf32_Ehdr *
          ehdr = &einfo -> ehdr ;
        const Elf32_Phdr *
          phdrs = einfo -> phdrs ;
        if
          (
          phdrs == NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    143 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     144 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    145 ) ; /* 4 */
        if
 (  /* 50 */
          (
          
  elf_loader_249zzzqtz                                                                                 (     /*  51 */ 
          index < 0
  ? 1 : 0  ,     147  )  /*  54 */
          ||
          index > ehdr -> e_phnum
          )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    148 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     149 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    150 ) ; /* 4 */
    elf_loader_249zqendz                                                                                 (     151 ) ; /* 30 */  
        return
        &phdrs[ index ] ;
      }
    elf_loader_249zzqqzz                                                                                 (    152 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    153 ); /* 2 */
      {
        const struct elf64_info *
          einfo = elf_info ;
        const Elf64_Ehdr *
          ehdr = &einfo -> ehdr ;
        const Elf64_Phdr *
          phdrs = einfo -> phdrs ;
        if
          (
          phdrs == NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    154 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     155 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    156 ) ; /* 4 */
        if
 (  /* 50 */
          (
          
  elf_loader_249zzzqtz                                                                                 (     /*  51 */ 
          index < 0
  ? 1 : 0  ,     158  )  /*  54 */
          ||
          index > ehdr -> e_phnum
          )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    159 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     160 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    161 ) ; /* 4 */
    elf_loader_249zqendz                                                                                 (     162 ) ; /* 30 */  
        return
        &phdrs[ index ] ;
      }
 }
    elf_loader_249zqendz                                                                                 (     163 ) ; /* 30 */  
  }
 
static void *
  elf_get_section_from_name (
  void * elf_info ,
  const char * name )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     164 ) ; /* 37 */
    unsigned int
      i ;
    const char *
      name_table ;
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (     165 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    166 ) ; /* 1 */
      {
        struct elf32_info *
          einfo = elf_info ;
        Elf32_Ehdr *
          ehdr = &einfo -> ehdr ;
 
          Elf32_Shdr
          * shdr = einfo -> shdrs ;
        name_table = einfo -> shstrtab ;
        if
 (  /* 50 */
          (
          
  elf_loader_249zzzqtz                                                                                 (     /*  51 */ 
          shdr == NULL
  ? 1 : 0  ,     168  )  /*  54 */
          ||
          name_table == NULL
          )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    169 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     170 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    171 ) ; /* 4 */
        for
          (
          i = 0
          ;
  ( /* 28 */
          i < ehdr -> e_shnum
  )  /* 7 */
          ;
  ( /* 7 */
          i ++ , shdr ++
  ,elf_loader_249zzqqzz                                                                                 (     172 ) /* 27b */
  ,elf_loader_249zzqqzz                                                                                 (     173 )) /* 27e */
          )
          {
 { /* 32 */
 int                  QZZZ =   
elf_loader_249zzqqzz                                                                                 (     174 ) ; /* 32 */
            if
              (
              strcmp ( name , name_table + shdr -> sh_name )
              )
 {
    elf_loader_249zzqqzz                                                                                 (    175 ) ; /* 1 */
              {
 elf_loader_249zzqqzz                                                                                 (     176 ) ; /* 10 */
                continue ;
              }
    elf_loader_249zzqqzz                                                                                 (    177 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    178 ); /* 2 */
              {
    elf_loader_249zqendz                                                                                 (     179 ) ; /* 30 */  
                return
                shdr ;
              }
 }
    elf_loader_249zzqqzz                                                                                 (    180 ) ;} /* 6 */
          }
    elf_loader_249zzqqzz                                                                                 (    181 ) ; /* 5 */
      }
    elf_loader_249zzqqzz                                                                                 (    182 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    183 ); /* 2 */
      {
        struct elf64_info *
          einfo = elf_info ;
        Elf64_Ehdr *
          ehdr = &einfo -> ehdr ;
 
          Elf64_Shdr
          * shdr = einfo -> shdrs ;
        name_table = einfo -> shstrtab ;
        if
 (  /* 50 */
          (
          
  elf_loader_249zzzqtz                                                                                 (     /*  51 */ 
          shdr == NULL
  ? 1 : 0  ,     185  )  /*  54 */
          ||
          name_table == NULL
          )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    186 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     187 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    188 ) ; /* 4 */
        for
          (
          i = 0
          ;
  ( /* 28 */
          i < ehdr -> e_shnum
  )  /* 7 */
          ;
  ( /* 7 */
          i ++ , shdr ++
  ,elf_loader_249zzqqzz                                                                                 (     189 ) /* 27b */
  ,elf_loader_249zzqqzz                                                                                 (     190 )) /* 27e */
          )
          {
 { /* 32 */
 int                  QZZZ =   
elf_loader_249zzqqzz                                                                                 (     191 ) ; /* 32 */
            if
              (
              strcmp ( name , name_table + shdr -> sh_name )
              )
 {
    elf_loader_249zzqqzz                                                                                 (    192 ) ; /* 1 */
              {
 elf_loader_249zzqqzz                                                                                 (     193 ) ; /* 10 */
                continue ;
              }
    elf_loader_249zzqqzz                                                                                 (    194 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    195 ); /* 2 */
              {
    elf_loader_249zqendz                                                                                 (     196 ) ; /* 30 */  
                return
                shdr ;
              }
 }
    elf_loader_249zzqqzz                                                                                 (    197 ) ;} /* 6 */
          }
    elf_loader_249zzqqzz                                                                                 (    198 ) ; /* 5 */
      }
 }
    elf_loader_249zqendz                                                                                 (     199 ) ; /* 30 */  
    return
    NULL ;
  }
 
static void *
  elf_get_section_from_index (
  void * elf_info ,
  int index )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     200 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (     201 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    202 ) ; /* 1 */
      {
        struct elf32_info *
          einfo = elf_info ;
        Elf32_Ehdr *
          ehdr = &einfo -> ehdr ;
        Elf32_Shdr * shdr = einfo -> shdrs ;
        if
          (
          shdr == NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    203 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     204 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    205 ) ; /* 4 */
        if
          (
          index > ehdr -> e_shnum
          )
 {
    elf_loader_249zzqqzz                                                                                 (    206 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     207 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    208 ) ; /* 4 */
    elf_loader_249zqendz                                                                                 (     209 ) ; /* 30 */  
        return
        &einfo -> shdrs[ index ] ;
      }
    elf_loader_249zzqqzz                                                                                 (    210 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    211 ); /* 2 */
      {
        struct elf64_info *
          einfo = elf_info ;
        Elf64_Ehdr *
          ehdr = &einfo -> ehdr ;
        Elf64_Shdr * shdr = einfo -> shdrs ;
        if
          (
          shdr == NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    212 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     213 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    214 ) ; /* 4 */
        if
          (
          index > ehdr -> e_shnum
          )
 {
    elf_loader_249zzqqzz                                                                                 (    215 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     216 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    217 ) ; /* 4 */
    elf_loader_249zqendz                                                                                 (     218 ) ; /* 30 */  
        return
        &einfo -> shdrs[ index ] ;
      }
 }
    elf_loader_249zqendz                                                                                 (     219 ) ; /* 30 */  
  }
 
static void
  elf_parse_section (
  void * elf_info ,
  void * elf_shdr ,
  unsigned int * sh_type ,
  unsigned int * sh_flags ,
  metal_phys_addr_t * sh_addr ,
  size_t * sh_offset ,
  size_t * sh_size ,
  unsigned int * sh_link ,
  unsigned int * sh_info ,
  unsigned int * sh_addralign ,
  size_t * sh_entsize )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     220 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (     221 ) , /* 23e */
        elf_is_64 (
        elf_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    222 ) ; /* 1 */
      {
        Elf32_Shdr *
          shdr = elf_shdr ;
        if
          (
          sh_type != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    223 ) ; /* 1 */
          {
            * sh_type = shdr -> sh_type ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    224 ) ; /* 4 */
        if
          (
          sh_flags != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    225 ) ; /* 1 */
          {
            * sh_flags = shdr -> sh_flags ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    226 ) ; /* 4 */
        if
          (
          sh_addr != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    227 ) ; /* 1 */
          {
            * sh_addr = ( metal_phys_addr_t ) shdr -> sh_addr ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    228 ) ; /* 4 */
        if
          (
          sh_offset != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    229 ) ; /* 1 */
          {
            * sh_offset = shdr -> sh_offset ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    230 ) ; /* 4 */
        if
          (
          sh_size != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    231 ) ; /* 1 */
          {
            * sh_size = shdr -> sh_size ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    232 ) ; /* 4 */
        if
          (
          sh_link != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    233 ) ; /* 1 */
          {
            * sh_link = shdr -> sh_link ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    234 ) ; /* 4 */
        if
          (
          sh_info != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    235 ) ; /* 1 */
          {
            * sh_info = shdr -> sh_info ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    236 ) ; /* 4 */
        if
          (
          sh_addralign != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    237 ) ; /* 1 */
          {
            * sh_addralign = shdr -> sh_addralign ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    238 ) ; /* 4 */
        if
          (
          sh_entsize != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    239 ) ; /* 1 */
          {
            * sh_entsize = shdr -> sh_entsize ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    240 ) ; /* 4 */
      }
    elf_loader_249zzqqzz                                                                                 (    241 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    242 ); /* 2 */
      {
        Elf64_Shdr *
          shdr = elf_shdr ;
        if
          (
          sh_type != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    243 ) ; /* 1 */
          {
            * sh_type = shdr -> sh_type ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    244 ) ; /* 4 */
        if
          (
          sh_flags != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    245 ) ; /* 1 */
          {
            * sh_flags = shdr -> sh_flags ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    246 ) ; /* 4 */
        if
          (
          sh_addr != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    247 ) ; /* 1 */
          {
            * sh_addr = ( metal_phys_addr_t ) ( shdr -> sh_addr & ( metal_phys_addr_t ) ( - 1 ) ) ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    248 ) ; /* 4 */
        if
          (
          sh_offset != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    249 ) ; /* 1 */
          {
            * sh_offset = shdr -> sh_offset ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    250 ) ; /* 4 */
        if
          (
          sh_size != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    251 ) ; /* 1 */
          {
            * sh_size = shdr -> sh_size ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    252 ) ; /* 4 */
        if
          (
          sh_link != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    253 ) ; /* 1 */
          {
            * sh_link = shdr -> sh_link ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    254 ) ; /* 4 */
        if
          (
          sh_info != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    255 ) ; /* 1 */
          {
            * sh_info = shdr -> sh_info ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    256 ) ; /* 4 */
        if
          (
          sh_addralign != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    257 ) ; /* 1 */
          {
            * sh_addralign = shdr -> sh_addralign ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    258 ) ; /* 4 */
        if
          (
          sh_entsize != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    259 ) ; /* 1 */
          {
            * sh_entsize = shdr -> sh_entsize ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    260 ) ; /* 4 */
      }
 }
    elf_loader_249zqendz                                                                                 (     261 ) ; /* 30 */  
  }
 
static const void *
  elf_next_load_segment (
  void * elf_info ,
  int * nseg ,
  metal_phys_addr_t * da ,
  size_t * noffset ,
  size_t * nfsize ,
  size_t * nmsize )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     262 ) ; /* 37 */
    const void *
      phdr ;
    unsigned int
      p_type = PT_NULL ;
    if
 (  /* 50 */
      (
      
  elf_loader_249zzzqtz                                                                                 (     /*  51 */ 
      elf_info == NULL
  ? 1 : 0  ,     264  )  /*  54 */
      ||
      nseg == NULL
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    265 ) ; /* 1 */
      {
    elf_loader_249zqendz                                                                                 (     266 ) ; /* 30 */  
        return
        NULL ;
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    267 ) ; /* 4 */
    while
      (
 (  /* 21 */ 
      p_type != PT_LOAD
  )  /* 7 */
      )
      {
 { /* 32 */
  int zzqqzs = elf_loader_249zzqqzz                                                                                 (    268 ) ; /* 32a */
 elf_loader_249zzqqzz                                                                                 (     269 ) ; /* 23 */
        phdr =
          elf_get_segment_from_index (
          elf_info , * nseg ) ;
        if
          (
          phdr == NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    270 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     271 ) ; /* 30 */  
            return
            NULL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    272 ) ; /* 4 */
 elf_loader_249zzqqzz                                                                                 (     273 ) ; /* 23 */
 
        elf_parse_segment (
        elf_info , phdr , & p_type , noffset , da , NULL , nfsize , nmsize ) ;
        * nseg = *nseg + 1 ;
    elf_loader_249zzqqzz                                                                                 (    274 ) ;} /* 6 */
      }
    elf_loader_249zzqqzz                                                                                 (    275 ) ; /* 5 */
    elf_loader_249zqendz                                                                                 (     276 ) ; /* 30 */  
    return
    phdr ;
  }
 
static size_t
  elf_info_size (
  const void * img_data )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     277 ) ; /* 37 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (     278 ) , /* 23e */
        elf_is_64 (
        img_data ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    279 ) ; /* 1 */
      {
    elf_loader_249zqendz                                                                                 (     280 ) ; /* 30 */  
        return
        sizeof ( struct elf32_info ) ;
      }
    elf_loader_249zzqqzz                                                                                 (    281 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    282 ); /* 2 */
      {
    elf_loader_249zqendz                                                                                 (     283 ) ; /* 30 */  
        return
        sizeof ( struct elf64_info ) ;
      }
 }
    elf_loader_249zqendz                                                                                 (     284 ) ; /* 30 */  
  }
 
int
  elf_identify (
  const void * img_data ,
  size_t len )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     285 ) ; /* 37 */
    if
 (  /* 50 */
      (
      
  elf_loader_249zzzqtz                                                                                 (     /*  51 */ 
      len < SELFMAG
  ? 1 : 0  ,     287  )  /*  54 */
      ||
      img_data == NULL
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    288 ) ; /* 1 */
      {
    elf_loader_249zqendz                                                                                 (     289 ) ; /* 30 */  
        return
        - RPROC_EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    290 ) ; /* 4 */
    if
      (
      memcmp ( img_data , ELFMAG , SELFMAG ) != 0
      )
 {
    elf_loader_249zzqqzz                                                                                 (    291 ) ; /* 1 */
      {
    elf_loader_249zqendz                                                                                 (     292 ) ; /* 30 */  
        return
        - RPROC_EINVAL ;
      }
    elf_loader_249zzqqzz                                                                                 (    293 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    294 ); /* 2 */
      {
    elf_loader_249zqendz                                                                                 (     295 ) ; /* 30 */  
        return
        0 ;
      }
 }
    elf_loader_249zqendz                                                                                 (     296 ) ; /* 30 */  
  }
 
int
  elf_load_header (
  const void * img_data ,
  size_t offset ,
  size_t len ,
  void ** img_info ,
  int last_load_state ,
  size_t * noffset ,
  size_t * nlen )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     297 ) ; /* 37 */
    unsigned int *
      load_state ;
    metal_assert ( noffset != NULL ) ;
    metal_assert ( nlen != NULL ) ;
        /* Get ELF header */
    if
      (
      last_load_state == ELF_STATE_INIT
      )
 {
    elf_loader_249zzqqzz                                                                                 (    298 ) ; /* 1 */
      {
        size_t
          tmpsize ;
        metal_log ( METAL_LOG_DEBUG , "Loading ELF headering\r\n") ;
 elf_loader_249zzqqzz                                                                                 (     299 ) ; /* 23 */
        tmpsize =
          elf_ehdr_size (
          img_data ) ;
        if
          (
          len < tmpsize
          )
 {
    elf_loader_249zzqqzz                                                                                 (    300 ) ; /* 1 */
          {
            * noffset = 0 ;
            * nlen = tmpsize ;
    elf_loader_249zqendz                                                                                 (     301 ) ; /* 30 */  
            return
            ELF_STATE_INIT ;
          }
    elf_loader_249zzqqzz                                                                                 (    302 ) ; /* 3 */
 }
        else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    303 ); /* 2 */
          {
 int                                                                                                  ZZ249100979 = (
 elf_loader_249zzqqzz                                                                                 (     304 ) * /* 26 + 23 */
  1 ) ; /* 26 */
            size_t
              infosize =
                           elf_info_size (
                           img_data ) ;
            if
              (
              *img_info == NULL
              )
 {
    elf_loader_249zzqqzz                                                                                 (    305 ) ; /* 1 */
              {
                * img_info = metal_allocate_memory ( infosize ) ;
                if
                  (
                  *img_info == NULL
                  )
 {
    elf_loader_249zzqqzz                                                                                 (    306 ) ; /* 1 */
                  {
    elf_loader_249zqendz                                                                                 (     307 ) ; /* 30 */  
                    return
                    - ENOMEM ;
                  }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    308 ) ; /* 4 */
                memset ( * img_info , 0 , infosize ) ;
              }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    309 ) ; /* 4 */
            memcpy ( * img_info , img_data , tmpsize ) ;
 elf_loader_249zzqqzz                                                                                 (     310 ) ; /* 23 */
            load_state =
              elf_load_state (
              * img_info ) ;
            * load_state = ELF_STATE_WAIT_FOR_PHDRS ;
            last_load_state = ELF_STATE_WAIT_FOR_PHDRS ;
          }
 }
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    311 ) ; /* 4 */
    metal_assert ( * img_info != NULL ) ;
 elf_loader_249zzqqzz                                                                                 (     312 ) ; /* 23 */
    load_state =
      elf_load_state (
      * img_info ) ;
    if
      (
      last_load_state != ( int ) * load_state
      )
 {
    elf_loader_249zzqqzz                                                                                 (    313 ) ; /* 1 */
      {
    elf_loader_249zqendz                                                                                 (     314 ) ; /* 30 */  
        return
        - RPROC_EINVAL ;
        /* Get ELF program headers */
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    315 ) ; /* 4 */
    if
      (
      *load_state == ELF_STATE_WAIT_FOR_PHDRS
      )
 {
    elf_loader_249zzqqzz                                                                                 (    316 ) ; /* 1 */
      {
        size_t
          phdrs_size ;
        size_t
          phdrs_offset ;
        char **
          phdrs ;
        const void *
          img_phdrs ;
        metal_log ( METAL_LOG_DEBUG , "Loading ELF program header.\r\n") ;
 elf_loader_249zzqqzz                                                                                 (     317 ) ; /* 23 */
        phdrs_offset =
          elf_phoff (
          * img_info ) ;
 elf_loader_249zzqqzz                                                                                 (     318 ) ; /* 23 */
 elf_loader_249zzqqzz                                                                                 (     319 ) ; /* 23 */
        phdrs_size =
          elf_phnum (
          * img_info ) *
          elf_phentsize (
          * img_info ) ;
        if
 (  /* 50 */
          (
          
  elf_loader_249zzzqtz                                                                                 (     /*  51 */ 
          offset > phdrs_offset
  ? 1 : 0  ,     321  )  /*  54 */
          ||
          offset + len < phdrs_offset + phdrs_size
          )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    322 ) ; /* 1 */
          {
            * noffset = phdrs_offset ;
            * nlen = phdrs_size ;
    elf_loader_249zqendz                                                                                 (     323 ) ; /* 30 */  
            return
            ( int ) * load_state ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    324 ) ; /* 4 */
          /* caculate the programs headers offset to the image_data */
        phdrs_offset -= offset ;
        img_phdrs = ( const void * ) (
        ( const char * ) img_data + phdrs_offset ) ;
 elf_loader_249zzqqzz                                                                                 (     325 ) ; /* 23 */
        phdrs = ( char ** )
          elf_phtable_ptr (
          * img_info ) ;
        ( * phdrs ) = metal_allocate_memory ( phdrs_size ) ;
        if
          (
          *phdrs == NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    326 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     327 ) ; /* 30 */  
            return
            - ENOMEM ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    328 ) ; /* 4 */
        memcpy (
        ( void * ) ( * phdrs ) , img_phdrs , phdrs_size ) ;
        * load_state = ELF_STATE_WAIT_FOR_SHDRS | RPROC_LOADER_READY_TO_LOAD ;
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    329 ) ; /* 4 */
        /* Get ELF Section Headers */
    if
      (
      ( * load_state & ELF_STATE_WAIT_FOR_SHDRS ) != 0
      )
 {
    elf_loader_249zzqqzz                                                                                 (    330 ) ; /* 1 */
      {
        size_t
          shdrs_size ;
        size_t
          shdrs_offset ;
        char **
          shdrs ;
        const void *
          img_shdrs ;
        metal_log ( METAL_LOG_DEBUG , "Loading ELF section header.\r\n") ;
 elf_loader_249zzqqzz                                                                                 (     331 ) ; /* 23 */
        shdrs_offset =
          elf_shoff (
          * img_info ) ;
        if
 (  /* 50 */
          (
 elf_loader_249zzqqzz                                                                                 (     332 ) , /* 23e */
            elf_shnum (
            * img_info ) == 0
          )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    333 ) ; /* 1 */
          {
            * load_state = ( * load_state & ( ~ ELF_STATE_MASK ) ) | ELF_STATE_HDRS_COMPLETE ;
            * nlen = 0 ;
    elf_loader_249zqendz                                                                                 (     334 ) ; /* 30 */  
            return
            ( int ) * load_state ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    335 ) ; /* 4 */
 elf_loader_249zzqqzz                                                                                 (     336 ) ; /* 23 */
 elf_loader_249zzqqzz                                                                                 (     337 ) ; /* 23 */
        shdrs_size =
          elf_shnum (
          * img_info ) *
          elf_shentsize (
          * img_info ) ;
        if
 (  /* 50 */
          (
          
  elf_loader_249zzzqtz                                                                                 (     /*  51 */ 
          offset > shdrs_offset
  ? 1 : 0  ,     339  )  /*  54 */
          ||
          offset + len < shdrs_offset + shdrs_size
          )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    340 ) ; /* 1 */
          {
            * noffset = shdrs_offset ;
            * nlen = shdrs_size ;
    elf_loader_249zqendz                                                                                 (     341 ) ; /* 30 */  
            return
            ( int ) * load_state ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    342 ) ; /* 4 */
          /* caculate the sections headers offset to the image_data */
        shdrs_offset -= offset ;
        img_shdrs = ( const void * ) (
        ( const char * ) img_data + shdrs_offset ) ;
 elf_loader_249zzqqzz                                                                                 (     343 ) ; /* 23 */
        shdrs = ( char ** )
          elf_shtable_ptr (
          * img_info ) ;
        ( * shdrs ) = metal_allocate_memory ( shdrs_size ) ;
        if
          (
          *shdrs == NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    344 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     345 ) ; /* 30 */  
            return
            - ENOMEM ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    346 ) ; /* 4 */
        memcpy (
        ( void * ) * shdrs , img_shdrs , shdrs_size ) ;
        * load_state = ( * load_state & ( ~ ELF_STATE_MASK ) ) | ELF_STATE_WAIT_FOR_SHSTRTAB ;
        metal_log ( METAL_LOG_DEBUG , "Loading ELF section header complete.\r\n") ;
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    347 ) ; /* 4 */
        /* Get ELF SHSTRTAB section */
    if
      (
      ( * load_state & ELF_STATE_WAIT_FOR_SHSTRTAB ) != 0
      )
 {
    elf_loader_249zzqqzz                                                                                 (    348 ) ; /* 1 */
      {
        size_t
          shstrtab_size ;
        size_t
          shstrtab_offset ;
        int
          shstrndx ;
        void *
          shdr ;
        void **
          shstrtab ;
        metal_log ( METAL_LOG_DEBUG , "Loading ELF shstrtab.\r\n") ;
 elf_loader_249zzqqzz                                                                                 (     349 ) ; /* 23 */
        shstrndx =
          elf_shstrndx (
          * img_info ) ;
 elf_loader_249zzqqzz                                                                                 (     350 ) ; /* 23 */
        shdr =
          elf_get_section_from_index (
          * img_info , shstrndx ) ;
        if
          (
          shdr == NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    351 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     352 ) ; /* 30 */  
            return
            - RPROC_EINVAL ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    353 ) ; /* 4 */
 elf_loader_249zzqqzz                                                                                 (     354 ) ; /* 23 */
 
        elf_parse_section (
        * img_info , shdr , NULL , NULL , NULL , & shstrtab_offset , & shstrtab_size , NULL , NULL , NULL , NULL ) ;
        if
 (  /* 50 */
          (
          
  elf_loader_249zzzqtz                                                                                 (     /*  51 */ 
          offset > shstrtab_offset
  ? 1 : 0  ,     356  )  /*  54 */
          ||
          offset + len < shstrtab_offset + shstrtab_size
          )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    357 ) ; /* 1 */
          {
            * noffset = shstrtab_offset ;
            * nlen = shstrtab_size ;
    elf_loader_249zqendz                                                                                 (     358 ) ; /* 30 */  
            return
            ( int ) * load_state ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    359 ) ; /* 4 */
          /* Caculate shstrtab section offset to the input image data */
        shstrtab_offset -= offset ;
 elf_loader_249zzqqzz                                                                                 (     360 ) ; /* 23 */
        shstrtab =
          elf_shstrtab_ptr (
          * img_info ) ;
        * shstrtab = metal_allocate_memory ( shstrtab_size ) ;
        if
          (
          *shstrtab == NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    361 ) ; /* 1 */
          {
    elf_loader_249zqendz                                                                                 (     362 ) ; /* 30 */  
            return
            - ENOMEM ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    363 ) ; /* 4 */
        memcpy ( * shstrtab , ( const void * ) (
        ( const char * ) img_data + shstrtab_offset ) , shstrtab_size ) ;
        * load_state = ( * load_state & ( ~ ELF_STATE_MASK ) ) | ELF_STATE_HDRS_COMPLETE ;
        * nlen = 0 ;
    elf_loader_249zqendz                                                                                 (     364 ) ; /* 30 */  
        return
        *load_state ;
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    365 ) ; /* 4 */
    elf_loader_249zqendz                                                                                 (     366 ) ; /* 30 */  
    return
    last_load_state ;
  }
 
int
  elf_load (
  struct remoteproc * rproc ,
  const void * img_data ,
  size_t offset ,
  size_t len ,
  void ** img_info ,
  int last_load_state ,
  metal_phys_addr_t * da ,
  size_t * noffset ,
  size_t * nlen ,
  unsigned char * padding ,
  size_t * nmemsize )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     367 ) ; /* 37 */
    unsigned int *
      load_state ;
    const void *
      phdr ;
    ( void ) rproc ;
    metal_assert ( da != NULL ) ;
    metal_assert ( noffset != NULL ) ;
    metal_assert ( nlen != NULL ) ;
    if
      (
      ( last_load_state & RPROC_LOADER_MASK ) == RPROC_LOADER_NOT_READY
      )
 {
    elf_loader_249zzqqzz                                                                                 (    368 ) ; /* 1 */
      {
        metal_log ( METAL_LOG_DEBUG , "%s, needs to load header first\r\n") ;
 elf_loader_249zzqqzz                                                                                 (     369 ) ; /* 23 */
        last_load_state =
          elf_load_header (
          img_data , offset , len , img_info , last_load_state , noffset , nlen ) ;
        if
          (
          ( last_load_state & RPROC_LOADER_MASK ) == RPROC_LOADER_NOT_READY
          )
 {
    elf_loader_249zzqqzz                                                                                 (    370 ) ; /* 1 */
          {
            * da = RPROC_LOAD_ANYADDR ;
    elf_loader_249zqendz                                                                                 (     371 ) ; /* 30 */  
            return
            last_load_state ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    372 ) ; /* 4 */
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    373 ) ; /* 4 */
    metal_assert (
  elf_loader_249zzzqfz                                                                                 (     /*  52 */ 
 
    img_info != NULL
  ? 1 : 0  ,     375  )  /*  54 */
    &&
    * img_info != NULL
    ) ;
 elf_loader_249zzqqzz                                                                                 (     376 ) , /* 23e */
    load_state =
      elf_load_state (
      * img_info ) ;
        /* For ELF, segment padding value is 0 */
    if
      (
      padding != NULL
      )
 {
    elf_loader_249zzqqzz                                                                                 (    377 ) ; /* 1 */
      {
        * padding = 0 ;
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    378 ) ; /* 4 */
    if
      (
      ( * load_state & RPROC_LOADER_READY_TO_LOAD ) != 0
      )
 {
    elf_loader_249zzqqzz                                                                                 (    379 ) ; /* 1 */
      {
        int
          nsegment ;
        size_t
          nsegmsize = 0 ;
        size_t
          nsize = 0 ;
        int
          phnums = 0 ;
        nsegment = ( int ) ( * load_state & ELF_NEXT_SEGMENT_MASK ) ;
 elf_loader_249zzqqzz                                                                                 (     380 ) ; /* 23 */
        phdr =
          elf_next_load_segment (
          * img_info , & nsegment , da , noffset , & nsize , & nsegmsize ) ;
        if
          (
          phdr == NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    381 ) ; /* 1 */
          {
            metal_log ( METAL_LOG_DEBUG , "cannot find more segement\r\n") ;
            * load_state = ( * load_state & ( ~ ELF_NEXT_SEGMENT_MASK ) ) | ( unsigned int ) ( nsegment & ELF_NEXT_SEGMENT_MASK ) ;
    elf_loader_249zqendz                                                                                 (     382 ) ; /* 30 */  
            return
            *load_state ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    383 ) ; /* 4 */
        * nlen = nsize ;
        * nmemsize = nsegmsize ;
 elf_loader_249zzqqzz                                                                                 (     384 ) ; /* 23 */
        phnums =
          elf_phnum (
          * img_info ) ;
        metal_log ( METAL_LOG_DEBUG , "segment: %d, total segs %d\r\n", nsegment , phnums ) ;
        if
 (  /* 50 */
          (
 elf_loader_249zzqqzz                                                                                 (     385 ) , /* 23e */
          nsegment ==
            elf_phnum (
            * img_info )
          )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    386 ) ; /* 1 */
          {
            * load_state = ( * load_state & ( ~ RPROC_LOADER_MASK ) ) | RPROC_LOADER_POST_DATA_LOAD ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    387 ) ; /* 4 */
        * load_state = ( * load_state & ( ~ ELF_NEXT_SEGMENT_MASK ) ) | ( unsigned int ) ( nsegment & ELF_NEXT_SEGMENT_MASK ) ;
      }
    elf_loader_249zzqqzz                                                                                 (    388 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    389 ); /* 2 */
      {
        if
          (
          ( * load_state & RPROC_LOADER_POST_DATA_LOAD ) != 0
          )
 {
    elf_loader_249zzqqzz                                                                                 (    390 ) ; /* 1 */
          {
            if
              (
              ( * load_state & ELF_STATE_HDRS_COMPLETE ) == 0
              )
 {
    elf_loader_249zzqqzz                                                                                 (    391 ) ; /* 1 */
              {
 elf_loader_249zzqqzz                                                                                 (     392 ) ; /* 23 */
                last_load_state =
                  elf_load_header (
                  img_data , offset , len , img_info , last_load_state , noffset , nlen ) ;
                if
                  (
                  last_load_state < 0
                  )
 {
    elf_loader_249zzqqzz                                                                                 (    393 ) ; /* 1 */
                  {
    elf_loader_249zqendz                                                                                 (     394 ) ; /* 30 */  
                    return
                    last_load_state ;
                  }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    395 ) ; /* 4 */
                if
                  (
                  ( last_load_state & ELF_STATE_HDRS_COMPLETE ) != 0
                  )
 {
    elf_loader_249zzqqzz                                                                                 (    396 ) ; /* 1 */
                  {
                    * load_state = ( * load_state & ( ~ RPROC_LOADER_MASK ) ) | RPROC_LOADER_LOAD_COMPLETE ;
                    * nlen = 0 ;
                  }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    397 ) ; /* 4 */
                * da = RPROC_LOAD_ANYADDR ;
              }
    elf_loader_249zzqqzz                                                                                 (    398 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    399 ); /* 2 */
              {
              /* TODO: will handle relocate later */
                * nlen = 0 ;
                * load_state = ( * load_state & ( ~ RPROC_LOADER_MASK ) ) | RPROC_LOADER_LOAD_COMPLETE ;
              }
 }
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    400 ) ; /* 4 */
      }
 }
    elf_loader_249zqendz                                                                                 (     401 ) ; /* 30 */  
    return
    *load_state ;
  }
 
void
  elf_release (
  void * img_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     402 ) ; /* 37 */
    if
      (
      img_info == NULL
      )
 {
    elf_loader_249zzqqzz                                                                                 (    403 ) ; /* 1 */
      {
    elf_loader_249zqendz                                                                                 (     404 ) ; /* 30 */  
        return
        ;
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    405 ) ; /* 4 */
    if
 (  /* 50 */
      (
 elf_loader_249zzqqzz                                                                                 (     406 ) , /* 23e */
        elf_is_64 (
        img_info ) == 0
      )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    407 ) ; /* 1 */
      {
        struct elf32_info *
          elf_info = img_info ;
        if
          (
          elf_info -> phdrs != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    408 ) ; /* 1 */
          {
            metal_free_memory ( elf_info -> phdrs ) ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    409 ) ; /* 4 */
        if
          (
          elf_info -> shdrs != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    410 ) ; /* 1 */
          {
            metal_free_memory ( elf_info -> shdrs ) ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    411 ) ; /* 4 */
        if
          (
          elf_info -> shstrtab != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    412 ) ; /* 1 */
          {
            metal_free_memory ( elf_info -> shstrtab ) ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    413 ) ; /* 4 */
        metal_free_memory ( img_info ) ;
      }
    elf_loader_249zzqqzz                                                                                 (    414 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    415 ); /* 2 */
      {
        struct elf64_info *
          elf_info = img_info ;
        if
          (
          elf_info -> phdrs != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    416 ) ; /* 1 */
          {
            metal_free_memory ( elf_info -> phdrs ) ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    417 ) ; /* 4 */
        if
          (
          elf_info -> shdrs != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    418 ) ; /* 1 */
          {
            metal_free_memory ( elf_info -> shdrs ) ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    419 ) ; /* 4 */
        if
          (
          elf_info -> shstrtab != NULL
          )
 {
    elf_loader_249zzqqzz                                                                                 (    420 ) ; /* 1 */
          {
            metal_free_memory ( elf_info -> shstrtab ) ;
          }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    421 ) ; /* 4 */
        metal_free_memory ( img_info ) ;
      }
 }
    elf_loader_249zqendz                                                                                 (     422 ) ; /* 30 */  
  }
 
metal_phys_addr_t
elf_get_entry (
void * elf_info )
{
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     423 ) ; /* 37 */
  if
    (
    ! elf_info
    )
 {
    elf_loader_249zzqqzz                                                                                 (    424 ) ; /* 1 */
    {
    elf_loader_249zqendz                                                                                 (     425 ) ; /* 30 */  
      return
      METAL_BAD_PHYS ;
    }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    426 ) ; /* 4 */
  if
 (  /* 50 */
    (
 elf_loader_249zzqqzz                                                                                 (     427 ) , /* 23e */
      elf_is_64 (
      elf_info ) == 0
    )
  ) /* 1 */
 {
    elf_loader_249zzqqzz                                                                                 (    428 ) ; /* 1 */
    {
      Elf32_Ehdr * elf_ehdr =
      ( Elf32_Ehdr * ) elf_info ;
 
      Elf32_Addr
      e_entry ;
      e_entry = elf_ehdr -> e_entry ;
    elf_loader_249zqendz                                                                                 (     429 ) ; /* 30 */  
      return
      ( metal_phys_addr_t ) e_entry ;
    }
    elf_loader_249zzqqzz                                                                                 (    430 ) ; /* 3 */
 }
  else
 {                                                                                                    ;
elf_loader_249zzqqzz                                                                                 (    431 ); /* 2 */
    {
      Elf64_Ehdr * elf_ehdr =
      ( Elf64_Ehdr * ) elf_info ;
 
      Elf64_Addr
      e_entry ;
      e_entry = elf_ehdr -> e_entry ;
    elf_loader_249zqendz                                                                                 (     432 ) ; /* 30 */  
      return
      ( metal_phys_addr_t ) ( e_entry & ( metal_phys_addr_t ) ( - 1 ) ) ;
    }
 }
    elf_loader_249zqendz                                                                                 (     433 ) ; /* 30 */  
}
 
int
  elf_locate_rsc_table (
  void * elf_info ,
  metal_phys_addr_t * da ,
  size_t * offset ,
  size_t * size )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     434 ) ; /* 37 */
    char *
      sect_name = ".resource_table";
    void *
      shdr ;
    unsigned int *
      load_state ;
    if
      (
      elf_info == NULL
      )
 {
    elf_loader_249zzqqzz                                                                                 (    435 ) ; /* 1 */
      {
    elf_loader_249zqendz                                                                                 (     436 ) ; /* 30 */  
        return
        - RPROC_EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    437 ) ; /* 4 */
 elf_loader_249zzqqzz                                                                                 (     438 ) ; /* 23 */
    load_state =
      elf_load_state (
      elf_info ) ;
    if
      (
      ( * load_state & ELF_STATE_HDRS_COMPLETE ) == 0
      )
 {
    elf_loader_249zzqqzz                                                                                 (    439 ) ; /* 1 */
      {
    elf_loader_249zqendz                                                                                 (     440 ) ; /* 30 */  
        return
        - RPROC_ERR_LOADER_STATE ;
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    441 ) ; /* 4 */
 elf_loader_249zzqqzz                                                                                 (     442 ) ; /* 23 */
    shdr =
      elf_get_section_from_name (
      elf_info , sect_name ) ;
    if
      (
      shdr == NULL
      )
 {
    elf_loader_249zzqqzz                                                                                 (    443 ) ; /* 1 */
      {
        metal_assert ( size != NULL ) ;
        * size = 0 ;
    elf_loader_249zqendz                                                                                 (     444 ) ; /* 30 */  
        return
        0 ;
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    445 ) ; /* 4 */
 elf_loader_249zzqqzz                                                                                 (     446 ) ; /* 23 */
 
    elf_parse_section (
    elf_info , shdr , NULL , NULL , da , offset , size , NULL , NULL , NULL , NULL ) ;
    elf_loader_249zqendz                                                                                 (     447 ) ; /* 30 */  
    return
    0 ;
  }
 
int
  elf_get_load_state (
  void * img_info )
  {
   int ielf_loader_249zzqqzz                                                                                
 = elf_loader_249zzqqzz                                                                                 (     448 ) ; /* 37 */
    unsigned int *
      load_state ;
    if
      (
      img_info == NULL
      )
 {
    elf_loader_249zzqqzz                                                                                 (    449 ) ; /* 1 */
      {
    elf_loader_249zqendz                                                                                 (     450 ) ; /* 30 */  
        return
        - RPROC_EINVAL ;
      }
 }                                                                                                   
else                                                                                                
  elf_loader_249zzqqzz                                                                                 (    451 ) ; /* 4 */
 elf_loader_249zzqqzz                                                                                 (     452 ) ; /* 23 */
    load_state =
      elf_load_state (
      img_info ) ;
    elf_loader_249zqendz                                                                                 (     453 ) ; /* 30 */  
    return
    ( int ) ( * load_state ) ;
  }
 
struct loader_ops
  elf_ops = {.load_header =
              elf_load_header ,.load_data =
              elf_load ,.locate_rsc_table =
              elf_locate_rsc_table ,.release =
              elf_release ,.get_entry =
              elf_get_entry ,.get_load_state =
              elf_get_load_state , } ;
#define qqqbranches    453
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
  static int elf_loader_249zscanf(char * qqscan_str)                                                                                                                                                                                                                
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
  static int elf_loader_249zzqqzz(int qqqi)                                                                                                                                                                                                                         
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
    if ( elf_loader_249zzopen != 1 )                                                                                                                                                                                                                                
    {                                                                                                                                                                                                                                                               
      elf_loader_249zqqzqz1();                                                                                                                                                                                                                                      
    };                                                                                                                                                                                                                                                              
    if ( elf_loader_249zzopen )                                                                                                                                                                                                                                     
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
static int elf_loader_249zqendz(int qqqi)                                                                                                                                                                                                                           
  {                                                                                                                                                                                                                                                                 
      if ( elf_loader_249zzopen != 1 )                                                                                                                                                                                                                              
      {                                                                                                                                                                                                                                                             
        elf_loader_249zqqzqz1();                                                                                                                                                                                                                                    
      };                                                                                                                                                                                                                                                            
      /* ----------------------------------------------------------------------* 304 *                                                                                                                                                                              
       * this is the one which puts an integer into                                                                                                                                                                                                                 
       * the execution history file and returns unity.                                                                                                                                                                                                              
       * The format of each field consists of six columns,                                                                                                                                                                                                          
       * the number is right justified in this field.                                                                                                                                                                                                               
       * -----------------------------------------------------------------------------                                                                                                                                                                              
       */                                                                                                                                                                                                                                                           
      if ( elf_loader_249zzopen )                                                                                                                                                                                                                                   
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
     * fclose(elf_loader_249zzhfil);                                                                                                                                                                                                                                
     * elf_loader_249zzopen = 0;                                                                                                                                                                                                                                    
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
  static int elf_loader_249zqzqzq(int qqqi)                                                                                                                                                                                                                         
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if ( elf_loader_249zzopen != 1 )                                                                                                                                                                                                                              
      {                                                                                                                                                                                                                                                             
        elf_loader_249zqqzqz1();                                                                                                                                                                                                                                    
      };                                                                                                                                                                                                                                                            
      /* not compressed */                                                                                                                                                                                                                                          
      /* do nothing for bitmap*/                                                                                                                                                                                                                                    
      /* upload the history */                                                                                                                                                                                                                                      
      /* bitmap */                                                                                                                                                                                                                                                  
      /* uncompressed  bitmap */                                                                                                                                                                                                                                    
      elf_loader_249zqendz(qqqi);                                                                                                                                                                                                                                   
        /* qqqupload closes the execution history file */                                                                                                                                                                                                           
      }                                                                                                                                                                                                                                                             
    return(1);                                                                                                                                                                                                                                                      
  } /* endof zqzqzq */                                                                                                                                                                                                                                              
  /*   the following routines should be left alone */                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 328 *                                                                                                                                                                                  
   *            elf_loader_249zzzqtz                                                                                                                                                                                                                                
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is not 0.                                                                                                                                                                                                                 
   *                                                                                                                                                                                                                                                                
   *   qqqa - value of expression                                                                                                                                                                                                                                   
   *   qqqb - jump table index.                                                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int elf_loader_249zzzqtz(int qqqa, int qqqb)                                                                                                                                                                                                               
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        elf_loader_249zzqqzz(qqqb) ;                                                                                                                                                                                                                                
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        elf_loader_249zzqqzz(qqqb-1);                                                                                                                                                                                                                               
      };                                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* endof zzzqtz */                                                                                                                                                                                                                                              
  /* ----------------------------------------------------------------------* 329 *                                                                                                                                                                                  
   *            elf_loader_249zzzqfz                                                                                                                                                                                                                                
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is 0.                                                                                                                                                                                                                     
   *                                                                                                                                                                                                                                                                
   *  qqqa - value of expression                                                                                                                                                                                                                                    
   *  qqqb - jump table index.                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int elf_loader_249zzzqfz(int qqqa,int qqqb)                                                                                                                                                                                                                
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        /* straight on jump */                                                                                                                                                                                                                                      
        elf_loader_249zzqqzz(qqqb-1);                                                                                                                                                                                                                               
        return(qqqa);                                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        elf_loader_249zzqqzz(qqqb);                                                                                                                                                                                                                                 
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
    if ( elf_loader_249zzopen != 1 )                                                                                                                                                                                                                                
    {                                                                                                                                                                                                                                                               
      elf_loader_249zqqzqz1();                                                                                                                                                                                                                                      
    };                                                                                                                                                                                                                                                              
    if ( elf_loader_249zzopen )                                                                                                                                                                                                                                     
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
 
/* End File Insert : /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_elf_loader.c */
#ifdef _MSC_VER
#pragma message (" => Compiling source: /proj/xhdsswstaff/kmakalas/LDRA/ldra_workarea954/msate-in/inszt_elf_loader.c finished")
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
char* sect_name = ".resource_table";
void** img_info;
char temp[5];

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
int tbrun_qq_tc2_return;
metal_phys_addr_t tbrun_qq_tc3_return;
metal_phys_addr_t tbrun_qq_tc4_return;
int tbrun_qq_tc6_return;
int tbrun_qq_tc7_return;
size_t tbrun_qq_tc8_return;
void * tbrun_qq_tc9_return;
int tbrun_qq_tc10_return;
size_t tbrun_qq_tc11_return;
size_t tbrun_qq_tc12_return;
size_t tbrun_qq_tc13_return;
void * tbrun_qq_tc14_return;
const void * tbrun_qq_tc15_return;
int tbrun_qq_tc16_return;
size_t tbrun_qq_tc17_return;
int tbrun_qq_tc18_return;
size_t tbrun_qq_tc19_return;
int tbrun_qq_tc20_return;
size_t tbrun_qq_tc21_return;
int tbrun_qq_tc22_return;
int tbrun_qq_tc23_return;
void * tbrun_qq_tc24_return;
void * tbrun_qq_tc25_return;
void ** tbrun_qq_tc26_return;
size_t tbrun_qq_tc27_return;

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

static int ldra_qq_dtop_size_t (size_t expected_value,size_t actual_value,char * name,
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
} /* end of ldra_qq_dtop_size_t */

static int ldra_qq_dtop_voidstar (void* expected_value,void* actual_value,char * name,
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
} /* end of ldra_qq_dtop_voidstar */

static int ldra_qq_dtop_size_tstar (size_t* expected_value,size_t* actual_value,char * name,
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
} /* end of ldra_qq_dtop_size_tstar */

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
int ldra_qq_execute_test_case_22 ();
int ldra_qq_execute_test_case_23 ();
int ldra_qq_execute_test_case_24 ();
int ldra_qq_execute_test_case_25 ();
int ldra_qq_execute_test_case_26 ();
int ldra_qq_execute_test_case_27 ();

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_get_load_state
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
  void* img_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 1;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 27;
  ldra_qq_procedure_name = "elf_get_load_state";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 1 249 27 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - img_info
 */
  img_info = NULL;
  ldra_qq_tbrun_output ("I V Z img_info\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc1_return = elf_get_load_state
      (img_info);

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
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (1074112,tbrun_qq_tc1_return,"%%",
                        "1074112",'O',1,1,
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_locate_rsc_table
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
  void* elf_info;
  metal_phys_addr_t* da;
  size_t* offset;
  size_t* size;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 2;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 26;
  ldra_qq_procedure_name = "elf_locate_rsc_table";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 2 249 26 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");

/*
 * Assign Input parameter applied through local - da
 */
  da = &temp;
  ldra_qq_tbrun_output ("I V Z da\n");
  ldra_qq_tbrun_output ("E &temp\n");

/*
 * Assign Input parameter applied through local - offset
 */
  offset = 0x7fffffff;
  ldra_qq_tbrun_output ("I V Z offset\n");
  ldra_qq_tbrun_output ("E 0x7fffffff\n");

/*
 * Assign Input parameter applied through local - size
 */
  size = 0xffff;
  ldra_qq_tbrun_output ("I V Z size\n");
  ldra_qq_tbrun_output ("E 0xffff\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc2_return = elf_locate_rsc_table
      (elf_info,
       da,
       offset,
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
  ldra_qq_tbrun_output ("O X O elf_info\n");

/*
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O size\n");

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-12,tbrun_qq_tc2_return,"%%",
                        "-12",'O',1,1,
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_get_entry
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
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 3;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 25;
  ldra_qq_procedure_name = "elf_get_entry";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 3 249 25 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc3_return = elf_get_entry
      (elf_info);

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
  ldra_qq_tbrun_output ("O X O elf_info\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_get_entry
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
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 4;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 25;
  ldra_qq_procedure_name = "elf_get_entry";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 4 249 25 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = NULL;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc4_return = elf_get_entry
      (elf_info);

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
  ldra_qq_tbrun_output ("O X O elf_info\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_release
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
  void* img_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 5;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 24;
  ldra_qq_procedure_name = "elf_release";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 5 249 24 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - img_info
 */
  img_info = NULL;
  ldra_qq_tbrun_output ("I V Z img_info\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    elf_release      (img_info);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_identify
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
  void* img_data;
  size_t len;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 6;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 21;
  ldra_qq_procedure_name = "elf_identify";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 6 249 21 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - img_data
 */
  img_data = &elf_ops;
  ldra_qq_tbrun_output ("I V Z img_data\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");

/*
 * Assign Input parameter applied through local - len
 */
  len = 1024;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 1024\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc6_return = elf_identify
      (img_data,
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
  if (ldra_qq_dtop_int (-2,tbrun_qq_tc6_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_identify
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
  void* img_data;
  size_t len;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 7;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 21;
  ldra_qq_procedure_name = "elf_identify";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 7 249 21 0 V\n");
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
 * Assign Input parameter applied through local - len
 */
  len = 0;
  ldra_qq_tbrun_output ("I V Z len\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc7_return = elf_identify
      (img_data,
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
  if (ldra_qq_dtop_int (-2,tbrun_qq_tc7_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_info_size
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
  void* img_data;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 8;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 20;
  ldra_qq_procedure_name = "elf_info_size";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 8 249 20 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - img_data
 */
  img_data = &elf_ops;
  ldra_qq_tbrun_output ("I V Z img_data\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc8_return = elf_info_size
      (img_data);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_get_section_from_index
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
  void* elf_info;
  int index;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 9;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 17;
  ldra_qq_procedure_name = "elf_get_section_from_index";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 9 249 17 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");

/*
 * Assign Input parameter applied through local - index
 */
  index = 0;
  ldra_qq_tbrun_output ("I V Z index\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc9_return = elf_get_section_from_index
      (elf_info,
       index);

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
  ldra_qq_tbrun_output ("O X O elf_info\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_phnum
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
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 10;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 5;
  ldra_qq_procedure_name = "elf_phnum";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 10 249 5 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc10_return = elf_phnum
      (elf_info);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_phoff
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
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 11;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 3;
  ldra_qq_procedure_name = "elf_phoff";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 11 249 3 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc11_return = elf_phoff
      (elf_info);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_phentsize
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
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 12;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 4;
  ldra_qq_procedure_name = "elf_phentsize";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 12 249 4 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc12_return = elf_phentsize
      (elf_info);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_ehdr_size
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
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 13;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 2;
  ldra_qq_procedure_name = "elf_ehdr_size";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 13 249 2 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc13_return = elf_ehdr_size
      (elf_info);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_get_section_from_name
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
  void* elf_info;
  char* name;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 14;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 16;
  ldra_qq_procedure_name = "elf_get_section_from_name";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 14 249 16 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");

/*
 * Assign Input parameter applied through local - name
 */
  name = sect_name;
  ldra_qq_tbrun_output ("I V Z name\n");
  ldra_qq_tbrun_output ("E sect_name\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc14_return = elf_get_section_from_name
      (elf_info,
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
 * check Output parameter for harness
 */
  ldra_qq_variable_converted = 1;
  ldra_qq_variable_passed = 1;
  ldra_qq_var_exception_raised = 0;
  ldra_qq_tbrun_output ("O X O elf_info\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_get_segment_from_index
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
  void* elf_info;
  int index;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 15;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 15;
  ldra_qq_procedure_name = "elf_get_segment_from_index";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 15 249 15 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");

/*
 * Assign Input parameter applied through local - index
 */
  index = 1234;
  ldra_qq_tbrun_output ("I V Z index\n");
  ldra_qq_tbrun_output ("E 1234\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc15_return = elf_get_segment_from_index
      (elf_info,
       index);

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
  ldra_qq_tbrun_output ("O X O elf_info\n");

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_get_load_state
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
  void* img_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 16;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 27;
  ldra_qq_procedure_name = "elf_get_load_state";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 16 249 27 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - img_info
 */
  img_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z img_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc16_return = elf_get_load_state
      (img_info);

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
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (1074112,tbrun_qq_tc16_return,"%%",
                        "1074112",'O',1,1,
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_shoff
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
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 17;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 6;
  ldra_qq_procedure_name = "elf_shoff";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 17 249 6 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc17_return = elf_shoff
      (elf_info);

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
  if (ldra_qq_dtop_size_t (1132,tbrun_qq_tc17_return,"%%",
                           "1132",'O',0,1,
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_is_64
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
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 18;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 1;
  ldra_qq_procedure_name = "elf_is_64";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 18 249 1 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &elf_ops;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &elf_ops\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc18_return = elf_is_64
      (elf_info);

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
  if (ldra_qq_dtop_int (0,tbrun_qq_tc18_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_ehdr_size
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
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 19;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 2;
  ldra_qq_procedure_name = "elf_ehdr_size";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 19 249 2 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = NULL;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E NULL\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc19_return = elf_ehdr_size
      (elf_info);

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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_locate_rsc_table
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
  void* elf_info;
  metal_phys_addr_t* da;
  size_t* offset;
  size_t* size;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 20;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 26;
  ldra_qq_procedure_name = "elf_locate_rsc_table";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 20 249 26 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = NULL;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E NULL\n");

/*
 * Assign Input parameter applied through local - da
 */
  da = (metal_phys_addr_t*)(0);
  ldra_qq_tbrun_output ("I V Z da\n");
  ldra_qq_tbrun_output ("E (metal_phys_addr_t*)(0)\n");

/*
 * Assign Input parameter applied through local - offset
 */
  offset = (size_t*)(0);
  ldra_qq_tbrun_output ("I V Z offset\n");
  ldra_qq_tbrun_output ("E (size_t*)(0)\n");

/*
 * Assign Input parameter applied through local - size
 */
  size = 0;
  ldra_qq_tbrun_output ("I V Z size\n");
  ldra_qq_tbrun_output ("E 0\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc20_return = elf_locate_rsc_table
      (elf_info,
       da,
       offset,
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
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_voidstar ((void*)0,(void*)elf_info,"elf_info",
                             "0",'O',0,1,
                             1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O elf_info\n");
  }

/*
 * check Output parameter for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_size_tstar ((size_t*)0,(size_t*)size,"size",
                               "0",'O',0,1,
                               1,"") == 0)
  {
    ldra_qq_test_case_passed = 0;
  }
  }
  else
  {
  ldra_qq_tbrun_output ("O X O size\n");
  }

/*
 * check Function result for harness
 */
  if (ldra_qq_no_exception_raised == 1)
  {
  if (ldra_qq_dtop_int (-2,tbrun_qq_tc20_return,"%%",
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
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_shentsize
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
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 21;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 7;
  ldra_qq_procedure_name = "elf_shentsize";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 21 249 7 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = img_info;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E img_info\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc21_return = elf_shentsize
      (elf_info);

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

/*
 *
 * Procedure to execute test case 22
 * Procedure to execute existing test case 22
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_shnum
 *
 */
int ldra_qq_execute_test_case_22 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 22 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 22
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 22;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 8;
  ldra_qq_procedure_name = "elf_shnum";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 22 249 8 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = img_info;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E img_info\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc22_return = elf_shnum
      (elf_info);

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
  if (ldra_qq_dtop_int (6704,tbrun_qq_tc22_return,"%%",
                        "6704",'O',1,1,
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

  ldra_qq_last_test_case = -23;
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
#pragma message (" => Test Case 22 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_22 */

/*
 *
 * Procedure to execute test case 23
 * Procedure to execute existing test case 23
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_shstrndx
 *
 */
int ldra_qq_execute_test_case_23 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 23 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 23
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 23;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 9;
  ldra_qq_procedure_name = "elf_shstrndx";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 23 249 9 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = img_info;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E img_info\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc23_return = elf_shstrndx
      (elf_info);

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
  if (ldra_qq_dtop_int (16,tbrun_qq_tc23_return,"%%",
                        "16",'O',1,1,
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

  ldra_qq_last_test_case = -24;
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
#pragma message (" => Test Case 23 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_23 */

/*
 *
 * Procedure to execute test case 24
 * Procedure to execute existing test case 24
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_phtable_ptr
 *
 */
int ldra_qq_execute_test_case_24 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 24 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 24
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 24;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 10;
  ldra_qq_procedure_name = "elf_phtable_ptr";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 24 249 10 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = img_info;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E img_info\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc24_return = elf_phtable_ptr
      (elf_info);

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
  ldra_qq_tbrun_output ("O X O elf_info\n");

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

  ldra_qq_last_test_case = -25;
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
#pragma message (" => Test Case 24 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_24 */

/*
 *
 * Procedure to execute test case 25
 * Procedure to execute existing test case 25
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_shtable_ptr
 *
 */
int ldra_qq_execute_test_case_25 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 25 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 25
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 25;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 11;
  ldra_qq_procedure_name = "elf_shtable_ptr";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 25 249 11 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = img_info;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E img_info\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc25_return = elf_shtable_ptr
      (elf_info);

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
  ldra_qq_tbrun_output ("O X O elf_info\n");

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

  ldra_qq_last_test_case = -26;
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
#pragma message (" => Test Case 25 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_25 */

/*
 *
 * Procedure to execute test case 26
 * Procedure to execute existing test case 26
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_shstrtab_ptr
 *
 */
int ldra_qq_execute_test_case_26 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 26 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 26
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 26;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 12;
  ldra_qq_procedure_name = "elf_shstrtab_ptr";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 26 249 12 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = img_info;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E img_info\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc26_return = elf_shstrtab_ptr
      (elf_info);

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
  ldra_qq_tbrun_output ("O X O elf_info\n");

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

  ldra_qq_last_test_case = -27;
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
#pragma message (" => Test Case 26 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_26 */

/*
 *
 * Procedure to execute test case 27
 * Procedure to execute existing test case 27
 * File for test case : /proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c
 * Procedure for test case : elf_shentsize
 *
 */
int ldra_qq_execute_test_case_27 ()
{
#ifdef _MSC_VER
#pragma message (" => Test Case 27 started")
#endif

  int ldra_qq_test_case_passed = 1;
  int ldra_qq_no_exception_raised = 1;
  int ldra_qq_variable_converted = 1;
  int ldra_qq_variable_passed = 1;
  int ldra_qq_var_exception_raised = 0;
/*
 * Declarations for test case 27
 */
/*
 * Test case declaration code will be placed here
 * Variables declared in this section have local scope to the test case function
 */
  void* elf_info;

  ldra_qq_last_test_case = 0;
  ldra_qq_test_case_number = 27;
  ldra_qq_module_number = 249;
  ldra_qq_module_name = "/proj/xhdsswstaff/kmakalas/15OCT/test_bsp/psu_cortexr5_0/libsrc/openamp_v1_5/src/open-amp/lib/remoteproc/elf_loader.c";
  ldra_qq_procedure_number = 7;
  ldra_qq_procedure_name = "elf_shentsize";
  ldra_qq_in_existing_test_case = 1;
  ldra_qq_in_new_test_case = 0;
  ldra_qq_action_code = "";
  ldra_qq_tbrun_output ("T 27 249 7 0 V\n");
/*
 * Test case initialisation code will be placed here
 * Variables declared in this section do not have global scope
 * Some compilers may not allow declarations here
 */

/*
 * Assign Input parameter applied through local - elf_info
 */
  elf_info = &img_info;
  ldra_qq_tbrun_output ("I V Z elf_info\n");
  ldra_qq_tbrun_output ("E &img_info\n");
/*
 * Call Procedure for Test Case
 */
    tbrun_qq_tc27_return = elf_shentsize
      (elf_info);

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

  ldra_qq_last_test_case = -28;
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
#pragma message (" => Test Case 27 finished")
#endif

  return ldra_qq_test_case_passed;
} /* end of ldra_qq_execute_test_case_27 */

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

    if (ldra_qq_execute_test_case_22 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_23 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_24 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_25 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_26 () == 0)
    {
      ldra_qq_fail_count++;
    }

    if (ldra_qq_execute_test_case_27 () == 0)
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

