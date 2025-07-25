/* FEAT900.H    (C) Copyright Jan Jaeger, 2000-2012                  */
/*              (C) and others 2013-2021                             */
/*              ESAME feature definitions                            */
/*                                                                   */
/*   Released under "The Q Public License Version 1"                 */
/*   (http://www.hercules-390.org/herclic.html) as modifications to  */
/*   Hercules.                                                       */

/*-------------------------------------------------------------------*/
/* This file defines the architectural features which are included   */
/* at compilation time for ESAME (z/Architecture) mode               */
/*-------------------------------------------------------------------*/


/*********************************************************************/
/*********************************************************************/
/**                                                                 **/
/**                     PROGRAMMING NOTE!                           **/
/**                                                                 **/
/**       This file MUST *NOT* contain any #undef statements!       **/
/**                                                                 **/
/*********************************************************************/
/*********************************************************************/


#if !defined( OPTION_900_MODE )
#define _ARCH_900_NAME      ""
#else
#define _ARCH_900_NAME      "z/Arch"

/*-------------------------------------------------------------------*/
/*      FEATUREs with STFL/STFLE facility bits defined               */
/*-------------------------------------------------------------------*/

#define FEATURE_000_N3_INSTR_FACILITY
#define FEATURE_001_ZARCH_INSTALLED_FACILITY
#define FEATURE_002_ZARCH_ACTIVE_FACILITY
#define FEATURE_003_DAT_ENHANCE_FACILITY_1
//efine FEATURE_004_IDTE_SC_SEGTAB_FACILITY
//efine FEATURE_005_IDTE_SC_REGTAB_FACILITY
#define FEATURE_006_ASN_LX_REUSE_FACILITY
#define FEATURE_007_STFL_EXTENDED_FACILITY
#define FEATURE_008_ENHANCED_DAT_FACILITY_1
#define FEATURE_009_SENSE_RUN_STATUS_FACILITY
#define FEATURE_010_CONDITIONAL_SSKE_FACILITY
#define FEATURE_011_CONFIG_TOPOLOGY_FACILITY
#define FEATURE_013_IPTE_RANGE_FACILITY
#define FEATURE_014_NONQ_KEY_SET_FACILITY
#define FEATURE_016_EXT_TRANSL_FACILITY_2
#define FEATURE_017_MSA_FACILITY
#define DYNINST_017_MSA_FACILITY                           /*dyncrypt*/
#define FEATURE_018_LONG_DISPL_INST_FACILITY
#define FEATURE_019_LONG_DISPL_HPERF_FACILITY
#define FEATURE_020_HFP_MULT_ADD_SUB_FACILITY
#define FEATURE_021_EXTENDED_IMMED_FACILITY
#define FEATURE_022_EXT_TRANSL_FACILITY_3
#define FEATURE_023_HFP_UNNORM_EXT_FACILITY
#define FEATURE_024_ETF2_ENHANCEMENT_FACILITY
#define FEATURE_025_STORE_CLOCK_FAST_FACILITY
#define FEATURE_026_PARSING_ENHANCE_FACILITY
#define FEATURE_027_MVCOS_FACILITY
#define FEATURE_028_TOD_CLOCK_STEER_FACILITY
#define FEATURE_030_ETF3_ENHANCEMENT_FACILITY
#define FEATURE_031_EXTRACT_CPU_TIME_FACILITY
#define FEATURE_032_CSS_FACILITY
#define FEATURE_033_CSS_FACILITY_2
#define FEATURE_034_GEN_INST_EXTN_FACILITY
#define FEATURE_035_EXECUTE_EXTN_FACILITY
#define FEATURE_036_ENH_MONITOR_FACILITY
#define FEATURE_037_FP_EXTENSION_FACILITY
//efine FEATURE_038_OP_CMPSC_FACILITY
#define FEATURE_040_LOAD_PROG_PARAM_FACILITY
#define FEATURE_041_DFP_ROUNDING_FACILITY
#define FEATURE_041_FPR_GR_TRANSFER_FACILITY
#define FEATURE_041_FPS_ENHANCEMENT_FACILITY
#define FEATURE_041_FPS_SIGN_HANDLING_FACILITY
#define FEATURE_041_IEEE_EXCEPT_SIM_FACILITY
#define FEATURE_042_DFP_FACILITY                                /*DFP*/
#define FEATURE_043_DFP_HPERF_FACILITY
#define FEATURE_044_PFPO_FACILITY
#define FEATURE_045_DISTINCT_OPERANDS_FACILITY
#define FEATURE_045_FAST_BCR_SERIAL_FACILITY
#define FEATURE_045_HIGH_WORD_FACILITY
#define FEATURE_045_INTERLOCKED_ACCESS_FACILITY_1
#define FEATURE_045_LOAD_STORE_ON_COND_FACILITY_1
#define FEATURE_045_POPULATION_COUNT_FACILITY
#define FEATURE_047_CMPSC_ENH_FACILITY
#define FEATURE_048_DFP_ZONE_CONV_FACILITY
#define FEATURE_049_EXECUTION_HINT_FACILITY
#define FEATURE_049_LOAD_AND_TRAP_FACILITY
#define FEATURE_049_MISC_INSTR_EXT_FACILITY_1
#define FEATURE_049_PROCESSOR_ASSIST_FACILITY
#define FEATURE_050_CONSTR_TRANSACT_FACILITY
#define FEATURE_051_LOCAL_TLB_CLEARING_FACILITY
#if CAN_IAF2 != IAF2_ATOMICS_UNAVAILABLE
#define FEATURE_052_INTERLOCKED_ACCESS_FACILITY_2
#endif
#define FEATURE_053_LOAD_STORE_ON_COND_FACILITY_2
#define FEATURE_053_LOAD_ZERO_RIGHTMOST_FACILITY
//efine FEATURE_054_EE_CMPSC_FACILITY
#define FEATURE_057_MSA_EXTENSION_FACILITY_5
#define DYNINST_057_MSA_EXTENSION_FACILITY_5
#define FEATURE_058_MISC_INSTR_EXT_FACILITY_2
#define FEATURE_061_MISC_INSTR_EXT_FACILITY_3
#define FEATURE_066_RES_REF_BITS_MULT_FACILITY
//efine FEATURE_067_CPU_MEAS_COUNTER_FACILITY
//efine FEATURE_068_CPU_MEAS_SAMPLNG_FACILITY
#define FEATURE_073_TRANSACT_EXEC_FACILITY
#define FEATURE_074_STORE_HYPER_INFO_FACILITY
#define FEATURE_075_ACC_EX_FS_INDIC_FACILITY
#define FEATURE_076_MSA_EXTENSION_FACILITY_3
#define DYNINST_076_MSA_EXTENSION_FACILITY_3               /*dyncrypt*/
#define FEATURE_077_MSA_EXTENSION_FACILITY_4
#define DYNINST_077_MSA_EXTENSION_FACILITY_4               /*dyncrypt*/
//efine FEATURE_078_ENHANCED_DAT_FACILITY_2
#define FEATURE_080_DFP_PACK_CONV_FACILITY
#define FEATURE_081_PPA_IN_ORDER_FACILITY
#define FEATURE_129_ZVECTOR_FACILITY
//efine FEATURE_130_INSTR_EXEC_PROT_FACILITY
//efine FEATURE_131_SIDE_EFFECT_ACCESS_FACILITY
//efine FEATURE_131_ENH_SUPP_ON_PROT_2_FACILITY
//efine FEATURE_133_GUARDED_STORAGE_FACILITY
#define FEATURE_134_ZVECTOR_PACK_DEC_FACILITY
#define FEATURE_135_ZVECTOR_ENH_FACILITY_1
//efine FEATURE_138_CONFIG_ZARCH_MODE_FACILITY
//efine FEATURE_139_MULTIPLE_EPOCH_FACILITY
//efine FEATURE_142_ST_CPU_COUNTER_MULT_FACILITY
//efine FEATURE_144_TEST_PEND_EXTERNAL_FACILITY
#define FEATURE_145_INS_REF_BITS_MULT_FACILITY
//efine FEATURE_146_MSA_EXTENSION_FACILITY_8
#define FEATURE_148_VECTOR_ENH_FACILITY_2
//efine FEATURE_149_MOVEPAGE_SETKEY_FACILITY
//efine FEATURE_150_ENH_SORT_FACILITY
//efine FEATURE_151_DEFLATE_CONV_FACILITY
#define FEATURE_152_VECT_PACKDEC_ENH_FACILITY
//efine FEATURE_155_MSA_EXTENSION_FACILITY_9
//efine FEATURE_158_ULTRAV_CALL_FACILITY
//efine FEATURE_161_SEC_EXE_UNPK_FACILITY
#define FEATURE_165_NNET_ASSIST_FACILITY
//efine FEATURE_168_ESA390_COMPAT_MODE_FACILITY
//efine FEATURE_169_SKEY_REMOVAL_FACILITY
#define FEATURE_192_VECT_PACKDEC_ENH_2_FACILITY
#define FEATURE_193_BEAR_ENH_FACILITY
//efine FEATURE_194_RESET_DAT_PROT_FACILITY
//efine FEATURE_196_PROC_ACT_FACILITY
//efine FEATURE_197_PROC_ACT_EXT_1_FACILITY
#define FEATURE_198_VECTOR_ENH_FACILITY_3
#define FEATURE_199_VECT_PACKDEC_ENH_FACILITY_3

/*-------------------------------------------------------------------*/
/*      FEATUREs that DON'T have any facility bits defined           */
/*-------------------------------------------------------------------*/

#define FEATURE_4K_STORAGE_KEYS
#define FEATURE_ACCESS_REGISTERS
#define FEATURE_ADDRESS_LIMIT_CHECKING
#define FEATURE_BASIC_FP_EXTENSIONS
#define FEATURE_BIMODAL_ADDRESSING
#define FEATURE_BINARY_FLOATING_POINT
#define FEATURE_BRANCH_AND_SET_AUTHORITY
#define FEATURE_BROADCASTED_PURGING
#define FEATURE_CALLED_SPACE_IDENTIFICATION
#define FEATURE_CANCEL_IO_FACILITY
#define FEATURE_CHANNEL_SUBSYSTEM
//efine FEATURE_CHANNEL_SWITCHING
#define FEATURE_CHECKSUM_INSTRUCTION
#define FEATURE_CHSC
#define FEATURE_COMPARE_AND_MOVE_EXTENDED
#define FEATURE_CMPSC
#define FEATURE_CPU_RECONFIG
#define FEATURE_DAT_ENHANCEMENT_FACILITY_2
#define FEATURE_DUAL_ADDRESS_SPACE
#define FEATURE_EMULATE_VM
#define FEATURE_ENHANCED_SUPPRESSION_ON_PROTECTION
#define FEATURE_EXPANDED_STORAGE
#define FEATURE_EXPEDITED_SIE_SUBSET
#define FEATURE_EXTENDED_DIAG204
#define FEATURE_EXTENDED_STORAGE_KEYS
#define FEATURE_EXTENDED_TOD_CLOCK
#define FEATURE_EXTENDED_TRANSLATION_FACILITY_1
#define FEATURE_EXTERNAL_INTERRUPT_ASSIST
#define FEATURE_FETCH_PROTECTION_OVERRIDE
#define FEATURE_FPS_EXTENSIONS
#define FEATURE_HARDWARE_LOADER
#define FEATURE_HERCULES_DIAGCALLS
#define FEATURE_HEXADECIMAL_FLOATING_POINT
#define FEATURE_HFP_EXTENSIONS
#define FEATURE_HOST_RESOURCE_ACCESS_FACILITY
#define FEATURE_HYPERVISOR
#define FEATURE_IMMEDIATE_AND_RELATIVE
#define FEATURE_INCORRECT_LENGTH_INDICATION_SUPPRESSION
#define FEATURE_INTEGRATED_3270_CONSOLE
//efine FEATURE_INTEGRATED_ASCII_CONSOLE
#define FEATURE_IO_ASSIST
#define FEATURE_LINKAGE_STACK
#define FEATURE_LOCK_PAGE
#define FEATURE_MSA_EXTENSION_FACILITY_1
#define FEATURE_MSA_EXTENSION_FACILITY_2
#define FEATURE_MIDAW_FACILITY
#define FEATURE_MOVE_PAGE_FACILITY_2
#define FEATURE_MPF_INFO
#define FEATURE_MVS_ASSIST
#define FEATURE_NEW_ZARCH_ONLY_INSTRUCTIONS  // 'N' instructions
#define FEATURE_PAGE_PROTECTION
#define FEATURE_PER
#define FEATURE_PER2
#define FEATURE_PER3
#define FEATURE_PER_STORAGE_KEY_ALTERATION_FACILITY
#define FEATURE_PER_ZERO_ADDRESS_DETECTION_FACILITY
#define FEATURE_PERFORM_LOCKED_OPERATION
#define FEATURE_PRIVATE_SPACE
//efine FEATURE_PROGRAM_DIRECTED_REIPL /*DIAG308 incomplete*/
#define FEATURE_PROTECTION_INTERCEPTION_CONTROL
#define FEATURE_QDIO_TDD
#define FEATURE_QDIO_THININT
#define FEATURE_QEBSM
#define FEATURE_QUEUED_DIRECT_IO
#define FEATURE_REGION_RELOCATE
//efine FEATURE_RESTORE_SUBCHANNEL_FACILITY
#define FEATURE_RESUME_PROGRAM
//efine FEATURE_S370_CHANNEL
#define FEATURE_SCEDIO
#define FEATURE_SCSI_IPL
#define FEATURE_SERVICE_PROCESSOR
#define FEATURE_SET_ADDRESS_SPACE_CONTROL_FAST
#define FEATURE_SIE
#define FEATURE_SQUARE_ROOT
#define FEATURE_STORAGE_KEY_ASSIST
#define FEATURE_STORAGE_PROTECTION_OVERRIDE
#define FEATURE_STORE_SYSTEM_INFORMATION
#define FEATURE_STRING_INSTRUCTION
#define FEATURE_SUBSPACE_GROUP
#define FEATURE_SUPPRESSION_ON_PROTECTION
#define FEATURE_SVS
#define FEATURE_SYSTEM_CONSOLE
#define FEATURE_TEST_BLOCK
#define FEATURE_TRACING
#define FEATURE_VIRTUAL_ARCHITECTURE_LEVEL
#define FEATURE_VM_BLOCKIO
/* INTEL X64 processor? */
#if defined( __x86_64__ ) || defined( _M_X64 )
  /* MSVC on X64: intrinsics are available and could be used for optimization */
  #if defined( _MSC_VER ) || defined( _MSVC_ )
    #define FEATURE_V128_SSE  1

    /* NOTE:                                           */
    /* MSVC optimization of 16-byte vectors is VERY    */
    /* limited. Only enable Hardware features when     */
    /* a performance test confirms significant         */
    /* performance improvement.                        */

    /* Compile-time Hardware Feature: Carry-less multiply  */
    /* --------------------------------------------------  */
    /* MSVC performance test showed a 275% performance     */
    /* degradation (compared to clang-15 75% improvement). */
    /* May 2025: Do not enable.                            */

    // #define FEATURE_HW_CLMUL  1


  /* gcc/clang on X64: intrinsics are available and should be used for optimization */
  /*                   Being conservative: require SSE 4.2 to be available to allow */
  /*                   any SSE intrinsic to be used for optimization.               */
  #elif defined( __GNUC__ ) && defined( __SSE4_2__ )
    #define FEATURE_V128_SSE  1

    /* For Gcc/Clang, check for compiler recognized HW features */
    /* to avoid compile errors                                  */

    /* Compile-time Hardware Feature: Carry-less multiply */
    #if defined(__PCLMUL__)
        #define FEATURE_HW_CLMUL  1
    #endif

  #endif
  /* compile debug message: are we using intrinsics? */
  #if 0
    #if defined( FEATURE_V128_SSE )
      #pragma message("FEATURE_V128_SSE is defined.  Using intrinsics." )
    #else
      #pragma message("No intrinsics are included for optimization; only compiler optimization")
    #endif
  #endif
#endif
#define FEATURE_WAITSTATE_ASSIST
#define FEATURE_ZVM_ESSA

#endif /* defined( OPTION_900_MODE ) */

/* end of FEAT900.H */
