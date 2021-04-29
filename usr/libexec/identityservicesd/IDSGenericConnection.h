//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSConnectionContext, IDSGenericConnectionID, IDSHCInfo, IDSSockAddrWrapperPair, IDSStallDetector, NSError, NSString;
@protocol OS_dispatch_queue, OS_nw_connection, OS_nw_endpoint, OS_nw_service_connector;

@interface IDSGenericConnection : NSObject
{
    NSString *_localConnectionGUID;	// 8 = 0x8
    NSString *_remoteConnectionGUID;	// 16 = 0x10
    NSString *_clientID;	// 24 = 0x18
    IDSGenericConnectionID *_connectionID;	// 32 = 0x20
    IDSSockAddrWrapperPair *_addressPair;	// 40 = 0x28
    int _protocol;	// 48 = 0x30
    int _sd;	// 52 = 0x34
    int _sdCopy;	// 56 = 0x38
    int _sdOriginal;	// 60 = 0x3c
    int _sdNumberNoClose;	// 64 = 0x40
    NSError *_connectError;	// 72 = 0x48
    CDUnknownBlockType _openSocketCompletionHandler;	// 80 = 0x50
    unsigned int _firstIncomingSYNSequenceNumber;	// 88 = 0x58
    unsigned int _expectedNextOutgoingSequenceNumber;	// 92 = 0x5c
    unsigned int _expectedNextIncomingSequenceNumber;	// 96 = 0x60
    int _stateFlags;	// 100 = 0x64
    double _creationTime;	// 104 = 0x68
    long long _priority;	// 112 = 0x70
    long long _socketTrafficClass;	// 120 = 0x78
    _Bool _hasMoreData;	// 128 = 0x80
    double _lastSuccessfulSentTime;	// 136 = 0x88
    IDSHCInfo *_compressionInfo;	// 144 = 0x90
    long long _compressionState;	// 152 = 0x98
    _Bool _suspended;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_completionQueue;	// 168 = 0xa8
    unsigned int _uint32Key;	// 176 = 0xb0
    _Bool _isCloudEnabled;	// 180 = 0xb4
    _Bool _isControlChannel;	// 181 = 0xb5
    _Bool _isDefaultPairedDevice;	// 182 = 0xb6
    _Bool _isRealTime;	// 183 = 0xb7
    _Bool _sentAWDReport;	// 184 = 0xb8
    CDStruct_eff2b79e _encryptionState;	// 192 = 0xc0
    _Bool _encryptionEnabled;	// 4784 = 0x12b0
    int _keyMaterialLength;	// 4788 = 0x12b4
    char *_localKeyMaterial;	// 4792 = 0x12b8
    unsigned int _SSRCSend;	// 4800 = 0x12c0
    unsigned int _SSRCRecv;	// 4804 = 0x12c4
    unsigned short _seqSendStart;	// 4808 = 0x12c8
    unsigned short _seqRecvStart;	// 4810 = 0x12ca
    unsigned short _seqSend;	// 4812 = 0x12cc
    int _srtpProtocolVersion;	// 4816 = 0x12d0
    unsigned long long _packetsReceived;	// 4824 = 0x12d8
    unsigned long long _packetsSent;	// 4832 = 0x12e0
    unsigned long long _bytesReceived;	// 4840 = 0x12e8
    unsigned long long _bytesSent;	// 4848 = 0x12f0
    double _connectionInitTime;	// 4856 = 0x12f8
    double _firstPacketReceiveTime;	// 4864 = 0x1300
    double _firstDataPacketReceiveTime;	// 4872 = 0x1308
    NSString *_idsDeviceConnectionUUID;	// 4880 = 0x1310
    NSObject<OS_nw_connection> *_serviceConnection;	// 4888 = 0x1318
    NSObject<OS_nw_service_connector> *_serviceConnector;	// 4896 = 0x1320
    NSObject<OS_nw_endpoint> *_defaultPairedDeviceEndpoint;	// 4904 = 0x1328
    double _lastStallDetectLogTime;	// 4912 = 0x1330
    NSString *_outgoingStallDetectorName;	// 4920 = 0x1338
    IDSStallDetector *_outgoingStallDetector;	// 4928 = 0x1340
    IDSConnectionContext *_connectionContext;	// 4936 = 0x1348
    CDUnknownBlockType _readHandler;	// 4944 = 0x1350
    _Bool _shouldSetWhiteListUUIDForStreamingSocket;	// 4952 = 0x1358
    _Bool _shouldStopBTDatagramLink;	// 4953 = 0x1359
    _Bool _checksumFailed;	// 4954 = 0x135a
    _Bool _didInvalidate;	// 4955 = 0x135b
    double _connectionSetupStartTime;	// 4960 = 0x1360
}

- (void).cxx_destruct;	// IMP=0x00000001004c85e8
@property(nonatomic) _Bool didInvalidate; // @synthesize didInvalidate=_didInvalidate;
@property(retain, nonatomic) IDSStallDetector *outgoingStallDetector; // @synthesize outgoingStallDetector=_outgoingStallDetector;
@property(copy, nonatomic) NSString *outgoingStallDetectorName; // @synthesize outgoingStallDetectorName=_outgoingStallDetectorName;
@property(retain, nonatomic) NSObject<OS_nw_endpoint> *defaultPairedDeviceEndpoint; // @synthesize defaultPairedDeviceEndpoint=_defaultPairedDeviceEndpoint;
@property(retain, nonatomic) NSObject<OS_nw_service_connector> *serviceConnector; // @synthesize serviceConnector=_serviceConnector;
@property(retain, nonatomic) NSObject<OS_nw_connection> *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
@property(nonatomic) _Bool shouldSetWhiteListUUIDForStreamingSocket; // @synthesize shouldSetWhiteListUUIDForStreamingSocket=_shouldSetWhiteListUUIDForStreamingSocket;
@property(copy, nonatomic) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
@property(retain, nonatomic) IDSConnectionContext *connectionContext; // @synthesize connectionContext=_connectionContext;
@property(nonatomic) double firstPacketReceiveTime; // @synthesize firstPacketReceiveTime=_firstPacketReceiveTime;
@property(nonatomic) double connectionSetupStartTime; // @synthesize connectionSetupStartTime=_connectionSetupStartTime;
@property(copy, nonatomic) NSString *idsDeviceConnectionUUID; // @synthesize idsDeviceConnectionUUID=_idsDeviceConnectionUUID;
@property(nonatomic) double firstDataPacketReceiveTime; // @synthesize firstDataPacketReceiveTime=_firstDataPacketReceiveTime;
@property(nonatomic) double connectionInitTime; // @synthesize connectionInitTime=_connectionInitTime;
@property(nonatomic) _Bool checksumFailed; // @synthesize checksumFailed=_checksumFailed;
@property(nonatomic) int srtpProtocolVersion; // @synthesize srtpProtocolVersion=_srtpProtocolVersion;
@property(nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(nonatomic) unsigned long long packetsSent; // @synthesize packetsSent=_packetsSent;
@property(nonatomic) unsigned long long packetsReceived; // @synthesize packetsReceived=_packetsReceived;
@property(nonatomic) unsigned short seqSend; // @synthesize seqSend=_seqSend;
@property(nonatomic) unsigned short seqRecvStart; // @synthesize seqRecvStart=_seqRecvStart;
@property(nonatomic) unsigned short seqSendStart; // @synthesize seqSendStart=_seqSendStart;
@property(nonatomic) unsigned int SSRCRecv; // @synthesize SSRCRecv=_SSRCRecv;
@property(nonatomic) unsigned int SSRCSend; // @synthesize SSRCSend=_SSRCSend;
@property(nonatomic) char *localKeyMaterial; // @synthesize localKeyMaterial=_localKeyMaterial;
@property(nonatomic) int keyMaterialLength; // @synthesize keyMaterialLength=_keyMaterialLength;
@property(nonatomic) _Bool encryptionEnabled; // @synthesize encryptionEnabled=_encryptionEnabled;
@property(nonatomic) _Bool shouldStopBTDatagramLink; // @synthesize shouldStopBTDatagramLink=_shouldStopBTDatagramLink;
@property(nonatomic) _Bool isRealTime; // @synthesize isRealTime=_isRealTime;
@property(nonatomic) _Bool isDefaultPairedDevice; // @synthesize isDefaultPairedDevice=_isDefaultPairedDevice;
@property(nonatomic) _Bool isControlChannel; // @synthesize isControlChannel=_isControlChannel;
@property(nonatomic) _Bool isCloudEnabled; // @synthesize isCloudEnabled=_isCloudEnabled;
@property(nonatomic) unsigned int uint32Key; // @synthesize uint32Key=_uint32Key;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) long long compressionState; // @synthesize compressionState=_compressionState;
@property(retain, nonatomic) IDSHCInfo *compressionInfo; // @synthesize compressionInfo=_compressionInfo;
@property(nonatomic) double lastSuccessfulSentTime; // @synthesize lastSuccessfulSentTime=_lastSuccessfulSentTime;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) long long socketTrafficClass; // @synthesize socketTrafficClass=_socketTrafficClass;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(nonatomic) int stateFlags; // @synthesize stateFlags=_stateFlags;
@property(nonatomic) unsigned int expectedNextIncomingSequenceNumber; // @synthesize expectedNextIncomingSequenceNumber=_expectedNextIncomingSequenceNumber;
@property(nonatomic) unsigned int expectedNextOutgoingSequenceNumber; // @synthesize expectedNextOutgoingSequenceNumber=_expectedNextOutgoingSequenceNumber;
@property(nonatomic) unsigned int firstIncomingSYNSequenceNumber; // @synthesize firstIncomingSYNSequenceNumber=_firstIncomingSYNSequenceNumber;
@property(copy, nonatomic) CDUnknownBlockType openSocketCompletionHandler; // @synthesize openSocketCompletionHandler=_openSocketCompletionHandler;
@property(retain, nonatomic) NSError *connectError; // @synthesize connectError=_connectError;
@property(nonatomic) int sdNumberNoClose; // @synthesize sdNumberNoClose=_sdNumberNoClose;
@property(nonatomic) int sdOriginal; // @synthesize sdOriginal=_sdOriginal;
@property(nonatomic) int sdCopy; // @synthesize sdCopy=_sdCopy;
@property(nonatomic) int sd; // @synthesize sd=_sd;
@property(readonly, nonatomic) int protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) IDSSockAddrWrapperPair *addressPair; // @synthesize addressPair=_addressPair;
@property(retain, nonatomic) IDSGenericConnectionID *connectionID; // @synthesize connectionID=_connectionID;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSString *remoteConnectionGUID; // @synthesize remoteConnectionGUID=_remoteConnectionGUID;
@property(readonly, retain, nonatomic) NSString *localConnectionGUID; // @synthesize localConnectionGUID=_localConnectionGUID;
- (void)_createStallDetectorWithName:(id)arg1;	// IMP=0x00000001004c6c6c
- (void)_triggerStallDetectionLogsForDetector:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001004c65a4
- (void)reportToAWD:(unsigned long long)arg1 connectionType:(int)arg2 error:(int)arg3;	// IMP=0x00000001004c6374
- (void)invalidate;	// IMP=0x00000001004c5a68
- (void)dealloc;	// IMP=0x00000001004c597c
- (void)_closeSockets;	// IMP=0x00000001004c52e0
@property(nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
- (id)initWithAddressPair:(id)arg1 protocol:(int)arg2;	// IMP=0x00000001004c4e8c
- (id)flagsString;	// IMP=0x00000001004c4d9c
- (CDStruct_eff2b79e *)encryptionState;	// IMP=0x00000001004c4d80
- (id)description;	// IMP=0x00000001004c47e0
- (id)initWithConnectionID:(id)arg1 protocol:(int)arg2 keyMaterialLength:(int)arg3 isCloudEnabled:(_Bool)arg4;	// IMP=0x00000001004c4430
- (id)initWithConnectionID:(id)arg1 protocol:(int)arg2 isCloudEnabled:(_Bool)arg3;	// IMP=0x00000001004c4070

@end

