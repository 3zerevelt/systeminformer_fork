/*
 * Copyright (c) 2022 Winsider Seminars & Solutions, Inc.  All rights reserved.
 *
 * This file is part of System Informer.
 *
 * THIS IS AN AUTOGENERATED FILE, DO NOT MODIFY
 *
 */

#pragma once

#include <kphlibbase.h>

#define KPH_DYN_CONFIGURATION_VERSION 12

#define KPH_DYN_CI_INVALID ((SHORT)-1)
#define KPH_DYN_CI_V1      ((SHORT)1)
#define KPH_DYN_CI_V2      ((SHORT)2)

#define KPH_DYN_LX_INVALID ((SHORT)-1)
#define KPH_DYN_LX_V1      ((SHORT)1)

#define KPH_DYN_SESSION_TOKEN_PUBLIC_KEY_LENGTH 72

#include <pshpack1.h>

typedef struct _KPH_DYN_CONFIGURATION
{
    USHORT MajorVersion;
    USHORT MinorVersion;
    USHORT BuildNumberMin;               // -1 to ignore
    USHORT RevisionMin;                  // -1 to ignore
    USHORT BuildNumberMax;               // -1 to ignore
    USHORT RevisionMax;                  // -1 to ignore

    USHORT EgeGuid;                      // dt nt!_ETW_GUID_ENTRY Guid
    USHORT EpObjectTable;                // dt nt!_EPROCESS ObjectTable
    USHORT EreGuidEntry;                 // dt nt!_ETW_REG_ENTRY GuidEntry
    USHORT HtHandleContentionEvent;      // dt nt!_HANDLE_TABLE HandleContentionEvent
    USHORT OtName;                       // dt nt!_OBJECT_TYPE Name
    USHORT OtIndex;                      // dt nt!_OBJECT_TYPE Index
    USHORT ObDecodeShift;                // dt nt!_HANDLE_TABLE_ENTRY ObjectPointerBits
    USHORT ObAttributesShift;            // dt nt!_HANDLE_TABLE_ENTRY Attributes
    USHORT CiVersion;                    // ci.dll exports version
    USHORT AlpcCommunicationInfo;        // dt nt!_ALPC_PORT CommunicationInfo
    USHORT AlpcOwnerProcess;             // dt nt!_ALPC_PORT OwnerProcess
    USHORT AlpcConnectionPort;           // dt nt!_ALPC_COMMUNICATION_INFO ConnectionPort
    USHORT AlpcServerCommunicationPort;  // dt nt!_ALPC_COMMUNICATION_INFO ServerCommunicationPort
    USHORT AlpcClientCommunicationPort;  // dt nt!_ALPC_COMMUNICATION_INFO ClientCommunicationPort
    USHORT AlpcHandleTable;              // dt nt!_ALPC_COMMUNICATION_INFO HandleTable
    USHORT AlpcHandleTableLock;          // dt nt!_ALPC_HANDLE_TABLE Lock
    USHORT AlpcAttributes;               // dt nt!_ALPC_PORT PortAttributes
    USHORT AlpcAttributesFlags;          // dt nt!_ALPC_PORT_ATTRIBUTES Flags
    USHORT AlpcPortContext;              // dt nt!_ALPC_PORT PortContext
    USHORT AlpcPortObjectLock;           // dt nt!_ALPC_PORT PortObjectLock
    USHORT AlpcSequenceNo;               // dt nt!_ALPC_PORT SequenceNo
    USHORT AlpcState;                    // dt nt!_ALPC_PORT u1.State
    USHORT KtReadOperationCount;         // dt nt!_KTHREAD ReadOperationCount
    USHORT KtWriteOperationCount;        // dt nt!_KTHREAD WriteOperationCount
    USHORT KtOtherOperationCount;        // dt nt!_KTHREAD OtherOperationCount
    USHORT KtReadTransferCount;          // dt nt!_KTHREAD ReadTransferCount
    USHORT KtWriteTransferCount;         // dt nt!_KTHREAD WriteTransferCount
    USHORT KtOtherTransferCount;         // dt nt!_KTHREAD OtherTransferCount
    USHORT LxVersion;                    // lxcore.sys exports version
    USHORT LxPicoProc;                   // uf lxcore!LxpSyscall_GETPID
    USHORT LxPicoProcInfo;               // uf lxcore!LxpSyscall_GETPID
    USHORT LxPicoProcInfoPID;            // uf lxcore!LxpSyscall_GETPID
    USHORT LxPicoThrdInfo;               // uf lxcore!LxpSyscall_GETTID
    USHORT LxPicoThrdInfoTID;            // uf lxcore!LxpSyscall_GETTID
    USHORT MmSectionControlArea;         // dt nt!_SECTION u1.ControlArea
    USHORT MmControlAreaListHead;        // dt nt!_CONTROL_AREA ListHead
    USHORT MmControlAreaLock;            // dt nt!_CONTROL_AREA ControlAreaLock
    USHORT EpSectionObject;              // dt nt!_EPROCESS SectionObject
} KPH_DYN_CONFIGURATION, *PKPH_DYN_CONFIGURATION;

typedef struct _KPH_DYNDATA
{
    ULONG Version;
    BYTE SessionTokenPublicKey[KPH_DYN_SESSION_TOKEN_PUBLIC_KEY_LENGTH];
    ULONG Count;
    KPH_DYN_CONFIGURATION Configs[ANYSIZE_ARRAY];
} KPH_DYNDATA, *PKPH_DYNDATA;

#include <poppack.h>

#ifdef _WIN64
extern CONST BYTE KphDynData[];
extern CONST ULONG KphDynDataLength;
#endif
