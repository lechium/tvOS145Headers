/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, CBPeripheralManager, CURetrier, NSData, NSObject, NSString;

@interface CUBLEAdvertiser : NSObject <CBPeripheralManagerDelegate> {

	BOOL _activateCalled;
	NSDictionary* _advertiseParametersCurrent;
	BOOL _changesPending;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	CBPeripheralManager* _peripheralManager;
	CURetrier* _retrier;
	BOOL _startAdvertisingCalled;
	LogCategory* _ucat;
	unsigned _advertiseFlags;
	NSData* _appleManufacturerData;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSData* _lgBTAddress;
	NSData* _lgDeviceID;
	NSString* _label;

}

@property (nonatomic,copy) NSData * appleManufacturerData;                            //@synthesize appleManufacturerData=_appleManufacturerData - In the implementation block
@property (assign,nonatomic) unsigned advertiseFlags;                                 //@synthesize advertiseFlags=_advertiseFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSData * lgBTAddress;                                      //@synthesize lgBTAddress=_lgBTAddress - In the implementation block
@property (nonatomic,copy) NSData * lgDeviceID;                                       //@synthesize lgDeviceID=_lgDeviceID - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(void)activate;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(unsigned)advertiseFlags;
-(void)setAdvertiseFlags:(unsigned)arg1 ;
-(NSData *)appleManufacturerData;
-(void)setAppleManufacturerData:(NSData *)arg1 ;
-(NSData *)lgBTAddress;
-(NSData *)lgDeviceID;
-(void)setLgBTAddress:(NSData *)arg1 ;
-(void)setLgDeviceID:(NSData *)arg1 ;
-(void)_ensureStarted;
-(void)_ensureStopped;
-(id)_advertiseParameters;
-(void)_advertiseParametersAddLGWake:(id)arg1 ;
-(void)_advertiseParametersAddOSR;
-(id)_advertiseParametersSummary:(id)arg1 ;
@end

