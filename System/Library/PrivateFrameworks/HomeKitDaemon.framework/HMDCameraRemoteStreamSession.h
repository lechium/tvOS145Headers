/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCameraStreamSession.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraRemoteStreamSenderProtocol, HMDCameraRemoteStreamReceiverProtocol;
@class NSString;

@interface HMDCameraRemoteStreamSession : HMDCameraStreamSession <HMFLogging> {

	id<HMDCameraRemoteStreamSenderProtocol> _streamSender;
	id<HMDCameraRemoteStreamReceiverProtocol> _streamReceiver;
	unsigned long long _streamState;

}

@property (nonatomic,readonly) id<HMDCameraRemoteStreamSenderProtocol> streamSender;                  //@synthesize streamSender=_streamSender - In the implementation block
@property (nonatomic,readonly) id<HMDCameraRemoteStreamReceiverProtocol> streamReceiver;              //@synthesize streamReceiver=_streamReceiver - In the implementation block
@property (assign,nonatomic) unsigned long long streamState;                                          //@synthesize streamState=_streamState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)setStreamState:(unsigned long long)arg1 ;
-(unsigned long long)streamState;
-(void)updateState:(long long)arg1 ;
-(id)stateAsString;
-(id)logIdentifier;
-(id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned long long)arg2 streamSender:(id)arg3 streamReceiver:(id)arg4 remoteCapabilities:(id)arg5 streamPreference:(id)arg6 ;
-(id<HMDCameraRemoteStreamSenderProtocol>)streamSender;
-(BOOL)containsState:(long long)arg1 ;
-(id<HMDCameraRemoteStreamReceiverProtocol>)streamReceiver;
@end

