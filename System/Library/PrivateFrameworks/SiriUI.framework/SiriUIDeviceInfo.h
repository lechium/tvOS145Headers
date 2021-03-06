/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriUI/SiriUI-Structs.h>
@interface SiriUIDeviceInfo : NSObject {

	BOOL _deviceZoomed;
	BOOL _largeFormatPhone;
	BOOL _deviceShouldUseFrozenBackdropSnapshot;
	BOOL _deviceShouldFreezeAura;
	BOOL _deviceShouldDeferFlamesView;
	BOOL _deviceSupportsProximitySensor;
	BOOL _deviceShouldSkipGuidePreloading;

}

@property (getter=isDeviceZoomed,nonatomic,readonly) BOOL deviceZoomed;                      //@synthesize deviceZoomed=_deviceZoomed - In the implementation block
@property (getter=isLargeFormatPhone,nonatomic,readonly) BOOL largeFormatPhone;              //@synthesize largeFormatPhone=_largeFormatPhone - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldUseFrozenBackdropSnapshot;                   //@synthesize deviceShouldUseFrozenBackdropSnapshot=_deviceShouldUseFrozenBackdropSnapshot - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldFreezeAura;                                  //@synthesize deviceShouldFreezeAura=_deviceShouldFreezeAura - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldDeferFlamesView;                             //@synthesize deviceShouldDeferFlamesView=_deviceShouldDeferFlamesView - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldSkipGuidePreloading;                         //@synthesize deviceShouldSkipGuidePreloading=_deviceShouldSkipGuidePreloading - In the implementation block
@property (nonatomic,readonly) BOOL deviceSupportsProximitySensor;                           //@synthesize deviceSupportsProximitySensor=_deviceSupportsProximitySensor - In the implementation block
+(id)sharedInstance;
-(id)initWithLargeFormatPhone:(BOOL)arg1 gestaltModes:(id)arg2 screenSize:(CGSize)arg3 ;
-(void)_updateProductTypeDerivedProperties;
-(BOOL)isDeviceZoomed;
-(BOOL)isLargeFormatPhone;
-(BOOL)deviceShouldUseFrozenBackdropSnapshot;
-(BOOL)deviceShouldFreezeAura;
-(BOOL)deviceShouldDeferFlamesView;
-(BOOL)deviceSupportsProximitySensor;
-(BOOL)deviceShouldSkipGuidePreloading;
@end

