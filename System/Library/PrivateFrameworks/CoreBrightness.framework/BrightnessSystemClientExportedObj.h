/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BacklightSystemDelegateXpcProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, BrightnessSystemClientInternal, NSString;

@interface BrightnessSystemClientExportedObj : NSObject <BacklightSystemDelegateXpcProtocol> {

	/*^block*/id clientBlock;
	NSObject*<OS_dispatch_queue> queue;
	BrightnessSystemClientInternal* _target;

}

@property (assign,nonatomic) BrightnessSystemClientInternal * target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setTarget:(BrightnessSystemClientInternal *)arg1 ;
-(BrightnessSystemClientInternal *)target;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)notifyChangedProperty:(id)arg1 value:(id)arg2 ;
-(void)unregisterNotificationBlock;
@end

