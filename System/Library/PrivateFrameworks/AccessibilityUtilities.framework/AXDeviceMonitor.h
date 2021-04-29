/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXDeviceMonitorDelegate;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSRunLoop, NSMutableSet;

@interface AXDeviceMonitor : NSObject {

	NSRunLoop* _targetRunLoop;
	IOHIDManagerRef _hidManager;
	unsigned long long _state;
	NSMutableSet* _devices;
	os_unfair_lock_s _devicesLock;
	id<AXDeviceMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDeviceMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)bluetoothKeyboardDevices;
-(void)dealloc;
-(void)invalidate;
-(id<AXDeviceMonitorDelegate>)delegate;
-(void)setDelegate:(id<AXDeviceMonitorDelegate>)arg1 ;
-(void)begin;
-(void)_commonInitWithRunLoop:(id)arg1 ;
-(id)_existingDevicesForDevice:(IOHIDDeviceRef)arg1 ;
-(void)informDelegate;
-(id)initWithMatchingDictionary:(id)arg1 callbackRunLoop:(id)arg2 ;
-(id)initWithMatchingMultiple:(id)arg1 callbackRunLoop:(id)arg2 ;
-(id)copyDevices;
-(void)didAddDevice:(IOHIDDeviceRef)arg1 ;
-(void)didRemoveDevice:(IOHIDDeviceRef)arg1 ;
@end

