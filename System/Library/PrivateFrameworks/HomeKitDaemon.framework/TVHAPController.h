/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, NSNumber;

@interface TVHAPController : NSObject <HMFLogging> {

	IOHIDUserDeviceRef _hidUserDevice;
	unsigned long long _lastTimestampDelta;
	unsigned long long _lastServerTimestamp;
	unsigned long long _resetTimestampDelta;
	double _convertRatio;
	BOOL _supportsSiri;
	BOOL _supportsTouchpad;
	BOOL _connected;
	BOOL _selected;
	NSString* _controllerName;
	NSNumber* _identifier;

}

@property (nonatomic,copy) NSString * controllerName;               //@synthesize controllerName=_controllerName - In the implementation block
@property (nonatomic,readonly) NSNumber * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL supportsSiri;                   //@synthesize supportsSiri=_supportsSiri - In the implementation block
@property (nonatomic,readonly) BOOL supportsTouchpad;               //@synthesize supportsTouchpad=_supportsTouchpad - In the implementation block
@property (assign,nonatomic) BOOL connected;                        //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL selected;                         //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSNumber *)identifier;
-(BOOL)connected;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)supportsSiri;
-(id)logIdentifier;
-(id)initWithControllerName:(id)arg1 identifier:(id)arg2 supportsSiri:(BOOL)arg3 supportsTouchpad:(BOOL)arg4 ;
-(void)dispatchButtonEventWithInfo:(id)arg1 ;
-(void)setControllerName:(NSString *)arg1 ;
-(NSString *)controllerName;
-(BOOL)_initTimestampInfo;
-(BOOL)supportsTouchpad;
-(BOOL)_updateSiriInputReport:(SCD_Struct_TV35*)arg1 type:(long long)arg2 state:(long long)arg3 ;
-(BOOL)_updateNonSiriInputReport:(SCD_Struct_TV36*)arg1 type:(long long)arg2 state:(long long)arg3 ;
-(void)_setConnectedOrSelected:(BOOL)arg1 newValue:(BOOL)arg2 ;
@end

