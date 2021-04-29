/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol AVBonjourServiceDelegate;
@class NSNetService, NSString;

@interface AVBonjourService : NSObject <NSNetServiceDelegate> {

	NSNetService* _networkService;
	BOOL _started;
	id _deviceInfoChangedObserver;
	id _playerItemChangedObserver;
	NSString* _netServiceType;
	id<AVBonjourServiceDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * netServiceType;                               //@synthesize netServiceType=_netServiceType - In the implementation block
@property (assign,nonatomic,__weak) id<AVBonjourServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultTXTRecordWithDeviceInfo:(void*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(id<AVBonjourServiceDelegate>)delegate;
-(void)setDelegate:(id<AVBonjourServiceDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(id)initWithNetServiceType:(id)arg1 ;
-(void)_restartService;
-(void)netMethodService:(id)arg1 didNotPublish:(id)arg2 ;
-(id)txtRecordDataForDevice:(void*)arg1 ;
-(void)_initializeBonjourServiceWithDeviceInfo:(void*)arg1 ;
-(NSString *)netServiceType;
@end

