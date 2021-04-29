/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class CUBonjourAdvertiser, NSMutableDictionary, SFDeviceDiscovery, CUNANPublisher, NSSet, NSObject, NSString, NSDictionary;

@interface CUNetServiceAdvertiser : NSObject {

	BOOL _activated;
	CUBonjourAdvertiser* _awdlBonjourAdvertiser;
	NSMutableDictionary* _bleDevices;
	SFDeviceDiscovery* _bleDiscovery;
	unsigned long long _bleDiscoveryFlags;
	CUBonjourAdvertiser* _infraBonjourAdvertiser;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	CUNANPublisher* _nanPublisher;
	LogCategory* _ucat;
	BOOL _updatePending;
	BOOL _blePeerFilterChanged;
	BOOL _portChanged;
	BOOL _serviceInfoChanged;
	BOOL _serviceTypeChanged;
	int _awdlControl;
	int _infraControl;
	int _nanControl;
	int _port;
	NSSet* _blePeerFilter;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSDictionary* _serviceInfo;
	NSString* _serviceType;

}

@property (assign,nonatomic) int awdlControl;                                         //@synthesize awdlControl=_awdlControl - In the implementation block
@property (nonatomic,copy) NSSet * blePeerFilter;                                     //@synthesize blePeerFilter=_blePeerFilter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) int infraControl;                                        //@synthesize infraControl=_infraControl - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int nanControl;                                          //@synthesize nanControl=_nanControl - In the implementation block
@property (assign,nonatomic) int port;                                                //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSDictionary * serviceInfo;                                //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(int)port;
-(NSString *)serviceType;
-(void)setPort:(int)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)serviceInfo;
-(void)_activateSafeInvokeBlock:(/*^block*/id)arg1 ;
-(void)_updateLocked;
-(int)awdlControl;
-(NSSet *)blePeerFilter;
-(int)infraControl;
-(int)nanControl;
-(void)setAwdlControl:(int)arg1 ;
-(void)setBlePeerFilter:(NSSet *)arg1 ;
-(void)setInfraControl:(int)arg1 ;
-(void)setNanControl:(int)arg1 ;
-(void)setServiceInfo:(NSDictionary *)arg1 ;
-(void)_awdlBonjourAdvertiserEnsureStarted;
-(void)_awdlBonjourAdvertiserEnsureStopped;
-(void)_bleTriggerEnsureStarted;
-(void)_bleTriggerEnsureStopped;
-(void)_bleTriggerDeviceFound:(id)arg1 ;
-(void)_bleTriggerDeviceLost:(id)arg1 ;
-(void)_infraBonjourAdvertiserEnsureStarted;
-(void)_infraBonjourAdvertiserEnsureStopped;
-(void)_nanAdvertiserEnsureStarted;
-(void)_nanAdvertiserEnsureStopped;
@end

