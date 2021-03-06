/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Assistant/Plugins/FMIPSiriBackendPlugin.assistantBundle/FMIPSiriBackendPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADPDevicePlaySound.h>

@protocol OS_dispatch_queue;
@class _TtC8FMClient7Session, NSObject;

@interface FMIPSADevicePlaySound : SADPDevicePlaySound {

	_TtC8FMClient7Session* _clientSession;
	NSObject*<OS_dispatch_queue> _commandQueue;

}

@property (nonatomic,retain) _TtC8FMClient7Session * clientSession;                  //@synthesize clientSession=_clientSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)commandQueue;
-(void)setCommandQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)setClientSession:(_TtC8FMClient7Session *)arg1 ;
-(_TtC8FMClient7Session *)clientSession;
-(void)invalidateClientSession;
-(void)initializePlay;
-(void)performPlaySoundWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)requiredFieldsPresent:(id)arg1 ;
-(id)playbackDevices:(id)arg1 ;
@end

