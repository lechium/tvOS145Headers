//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ClientSessionInterface-Protocol.h"

@class NSData, NSDictionary, NSMutableDictionary, NSString, NSXPCConnection;
@protocol ReportingSessionEventCacheDelegate, ReportingdSessionDelegate;

@interface ReportingdSession : NSObject <ClientSessionInterface>
{
    unsigned int _sessionID;	// 8 = 0x8
    NSDictionary *_sessionInfo;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
    NSDictionary *_frameworks;	// 32 = 0x20
    NSDictionary *_backends;	// 40 = 0x28
    NSDictionary *_hierarchyDictionary;	// 48 = 0x30
    NSMutableDictionary *_periodicServices;	// 56 = 0x38
    id <ReportingdSessionDelegate> _sessionDelegate;	// 64 = 0x40
    NSString *_sessionIDString;	// 72 = 0x48
    NSString *_storebagVersion;	// 80 = 0x50
    NSString *_clientPID;	// 88 = 0x58
    NSString *_bundleID;	// 96 = 0x60
    unsigned char _deviceid[41];	// 104 = 0x68
    NSXPCConnection *_connection;	// 152 = 0x98
    _Bool _hasAggregator;	// 160 = 0xa0
    _Bool _hasFinishedGracefully;	// 161 = 0xa1
    _Bool _disableGracefulTerminationReporting;	// 162 = 0xa2
    NSData *_digestKey;	// 168 = 0xa8
    int _digestAlgorithm;	// 176 = 0xb0
    id <ReportingSessionEventCacheDelegate> _activitySchedulerDelegate;	// 184 = 0xb8
    _Bool _counted;	// 192 = 0xc0
}

@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy) NSString *clientPID; // @synthesize clientPID=_clientPID;
@property(getter=isCounted) _Bool counted; // @synthesize counted=_counted;
@property _Bool hasAggregator; // @synthesize hasAggregator=_hasAggregator;
@property(copy) NSString *storebagVersion; // @synthesize storebagVersion=_storebagVersion;
@property(readonly) NSString *sessionIDString; // @synthesize sessionIDString=_sessionIDString;
@property(readonly, nonatomic) NSDictionary *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property unsigned int sessionID; // @synthesize sessionID=_sessionID;
- (void)invalidate;	// IMP=0x0000000100011f4c
- (void)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 storebag:(id)arg3 category:(unsigned short)arg4 type:(unsigned short)arg5 payload:(id)arg6;	// IMP=0x00000001000119fc
- (void)addSessionsAccumulatedHealthInfoToPayload:(id)arg1 sessionList:(id)arg2 storebags:(id)arg3;	// IMP=0x000000010001179c
- (unsigned long long)addSessionHealthInfo:(id)arg1 healthReport:(id)arg2;	// IMP=0x00000001000115f8
- (unsigned long long)batchedEventsSize;	// IMP=0x00000001000114c0
- (void)updateCombinedSessionID;	// IMP=0x00000001000112c4
- (void)uploadLogData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011108
- (void)uploadFileWithURL:(id)arg1 extensionToken:(char *)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010ee0
- (void)internalFlushMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000109e4
- (void)internalSendMessage:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4;	// IMP=0x000000010001083c
- (id)sendMessageWithDictionary:(id)arg1 error:(id)arg2;	// IMP=0x0000000100010200
- (void)shutdownSessionAggregation;	// IMP=0x0000000100010128
- (void)aggregateMessage:(id)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5;	// IMP=0x0000000100010004
- (void)sendToAggregator:(id)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5;	// IMP=0x000000010000ff58
@property(readonly) NSString *hierarchyToken;
@property(readonly) unsigned int hierarchyLevel;
- (void)receivedUserInfo:(id)arg1;	// IMP=0x000000010000fd34
- (void)updateSessionWithDefaultSessionInfo;	// IMP=0x000000010000fcfc
- (id)fetchBlacklistedEvents;	// IMP=0x000000010000fadc
- (id)fetchWhitelistedEvents;	// IMP=0x000000010000f8e8
- (id)fetchReportingStates;	// IMP=0x000000010000f770
- (void)syncReportingStates;	// IMP=0x000000010000f364
- (_Bool)updateReportingStates;	// IMP=0x000000010000f140
- (void)updateUserInfoForBackends;	// IMP=0x000000010000efb4
- (void)createBackendsWithStorebag:(id)arg1;	// IMP=0x000000010000ed5c
- (void)removeEphemeralSession:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000eab0
- (void)setEphemeralSession:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x000000010000e890
- (void)validateEphemeralSession:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e60c
- (void)getSessionId:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e504
- (void)setDigestKey:(id)arg1 algorithm:(int)arg2;	// IMP=0x000000010000e370
- (void)updateSharedDataForKey:(id)arg1 value:(id)arg2;	// IMP=0x000000010000e27c
- (void)updateSharedDataWithDictionary:(id)arg1;	// IMP=0x000000010000e214
- (void)sendMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000010000df5c
- (void)uploadFileAtPath:(id)arg1 extensionToken:(char *)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000de84
- (void)finishSessionGracefully;	// IMP=0x000000010000ddd4
- (void)flushMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000dcb4
- (void)sendMessageWithDictionary:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000db2c
- (void)fetchDisplayURL:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d790
- (void)fetchStatesWithUserInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d610
- (void)startConfigWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d394
- (void)sendStartMessage;	// IMP=0x000000010000d064
- (void)setSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 hasAggregationBlock:(_Bool)arg4;	// IMP=0x000000010000ce74
- (void)setHierarchyToken:(id)arg1;	// IMP=0x000000010000cd34
- (void)updateUserInfo:(id)arg1;	// IMP=0x000000010000ccf4
- (_Bool)hasValidUserInfoKeys;	// IMP=0x000000010000cc8c
- (void)releaseUserInfo;	// IMP=0x000000010000cc60
- (id)sessionInformation;	// IMP=0x000000010000cb50
- (void)dealloc;	// IMP=0x000000010000c7c4
- (id)initWithSessionDelegate:(id)arg1 connection:(id)arg2;	// IMP=0x000000010000c620

@end

