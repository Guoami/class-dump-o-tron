//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct IDSPortMap {
    unsigned long long ports[1024];
    unsigned short lastAssignedPort;
};

struct IDSSockAddrPair;

struct IDSSockAddrPairTable {
    int iNumPair;
    int iMaxNumPair;
    struct IDSSockAddrPair *pairs;
};

struct IDSStunAttribute {
    unsigned short type;
    unsigned short len;
    unsigned short valueType;
    union {
        struct sockaddr_storage ss;
        unsigned int u32;
        unsigned long long u64;
        struct StunBinaryData binaryData;
        struct StunErrorCode errorCode;
        struct StunUnknownAttribute unknownAttribute;
    } value;
};

struct SimpleNSStringToObjectTable {
    int tableSize;
    struct SimpleNSStringToObjectTableElement *elements;
    int elementCount;
};

struct SimpleNSStringToObjectTableElement;

struct SimpleUInt32ToObjectTable {
    int tableSize;
    struct SimpleUInt32ToObjectTableElement *elements;
    int elementCount;
};

struct SimpleUInt32ToObjectTableElement;

struct StunBinaryData {
    int len;
    unsigned char data[1472];
};

struct StunErrorCode {
    int errorClass;
    int errorNumber;
    unsigned char errorReason[128];
    int len;
};

struct StunUnknownAttribute {
    int count;
    unsigned short unknowAttributes[20];
};

struct _CCCryptor;

struct __SecKey {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        unsigned char _field2[4];
        unsigned int _field3;
    } _field1;
    struct __SecKeyDescriptor *_field2;
    void *_field3;
};

struct ifaddrs {
    struct ifaddrs *_field1;
    char *_field2;
    unsigned int _field3;
    struct sockaddr *_field4;
    struct sockaddr *_field5;
    struct sockaddr *_field6;
    void *_field7;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1[6];
    long long __ss_align;
    char __ss_pad2[112];
};

struct tagSRTPCryptContext {
    struct {
        unsigned long long Length;
        char *Data;
    } secAsn1Key;
    struct _CCCryptor *ccCryptorRef;
    unsigned char ccContext[404];
};

struct tagSRTPINFO {
    int fSRTPInitialized;
    int fCancelled;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } xWait;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } cWait;
    unsigned int dwSSRC;
    unsigned int dwRTPROC;
    unsigned short wFirstRTPSeq;
    unsigned short wHighestRTPSeq;
    unsigned int dwFirstRTCPSeq;
    unsigned int dwHighestRTCPSeq;
    unsigned char MasterKey[16];
    unsigned char MasterSalt[14];
    unsigned char SessionKey[32];
    unsigned char SessionSalt[14];
    unsigned int dwEncrCountRTPHi;
    unsigned int dwEncrCountRTPLo;
    unsigned int dwEncrCountRTCPHi;
    unsigned int dwEncrCountRTCPLo;
    unsigned int dwDerivationRate;
    struct tagSRTPCryptContext cryptContext;
    unsigned short wPreCalcSeq;
    unsigned char pbNextKeyStream[1600];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    char *_field1;
    unsigned long long _field2;
    long long _field3;
    long long _field4;
    _Bool _field5;
    unsigned int _field6;
    struct sockaddr_storage _field7;
    struct sockaddr_storage _field8;
    unsigned char _field9[0];
} CDStruct_9a16016b;

typedef struct {
    struct tagSRTPINFO SRTPSend;
    struct tagSRTPINFO SRTPRecv;
} CDStruct_d60bf057;

