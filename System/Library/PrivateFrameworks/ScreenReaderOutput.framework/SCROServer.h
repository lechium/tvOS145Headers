/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SCROServerDelegate;
#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock;

@interface SCROServer : NSObject {

	NSLock* _contentLock;
	id<SCROServerDelegate> _delegate;
	CFRunLoopSourceRef _serverSource;
	CFRunLoopSourceRef _deathSource;
	CFRunLoopTimerRef _deathTimer;
	unsigned _serverPort;
	unsigned _deathPort;
	long long _clientCount;
	BOOL _isRegisteredWithMach;

}
+(id)sharedServer;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(long long)_clientCount;
-(CFRunLoopSourceRef)serverSource;
-(CFRunLoopTimerRef)_deathTimer;
-(BOOL)_registerWithMachServiceName:(char*)arg1 ;
-(void)unregisterWithMach;
-(long long)_incrementClientCount;
-(void)_setClientCount:(long long)arg1 ;
-(int)_registerForNotificationOnDeathPort:(unsigned)arg1 ;
-(BOOL)isRegisteredWithMach;
-(BOOL)registerWithMach;
@end

