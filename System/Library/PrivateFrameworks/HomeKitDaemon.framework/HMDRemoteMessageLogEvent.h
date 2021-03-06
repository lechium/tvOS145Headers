/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDRemoteMessageLogEvent : HMDLogEvent <HMDAWDLogEvent, HMDCoreAnalyticsLogging> {

	BOOL _sending;
	BOOL _secure;
	int _transportType;
	NSString* _msgIdentifier;
	NSString* _transactionIdentifier;
	NSString* _msgName;
	long long _msgType;
	NSString* _peerInformation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int transportType;                                  //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL sending;                                       //@synthesize sending=_sending - In the implementation block
@property (nonatomic,copy,readonly) NSString * msgIdentifier;                      //@synthesize msgIdentifier=_msgIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL secure;                                        //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) NSString * msgName;                                 //@synthesize msgName=_msgName - In the implementation block
@property (nonatomic,readonly) long long msgType;                                  //@synthesize msgType=_msgType - In the implementation block
@property (nonatomic,readonly) NSString * peerInformation;                         //@synthesize peerInformation=_peerInformation - In the implementation block
+(id)receivedRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(BOOL)arg6 transportType:(int)arg7 ;
+(id)sendingRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(BOOL)arg6 transportType:(int)arg7 ;
+(id)receivedRemoteMessage:(id)arg1 transportType:(int)arg2 ;
+(id)sendingRemoteMessage:(id)arg1 transportType:(int)arg2 ;
+(int)awdMessageTypeFromHMDMessageType:(long long)arg1 ;
-(BOOL)secure;
-(int)transportType;
-(id)eventName;
-(NSString *)transactionIdentifier;
-(id)serializedEvent;
-(BOOL)shouldSubmitEvent;
-(id)initWithRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(BOOL)arg6 transportType:(int)arg7 sending:(BOOL)arg8 ;
-(id)serializedEventForDiagnostics:(BOOL)arg1 ;
-(NSString *)msgIdentifier;
-(NSString *)msgName;
-(long long)msgType;
-(BOOL)sending;
-(NSString *)peerInformation;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(int)toAWDType:(int)arg1 ;
@end

