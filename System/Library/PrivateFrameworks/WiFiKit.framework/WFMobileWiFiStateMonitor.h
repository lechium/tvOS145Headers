/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WiFiKit/WiFiKit-Structs.h>
@class WFLinkQuality;

@interface WFMobileWiFiStateMonitor : NSObject {

	long long _state;
	/*^block*/id _handler;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	WFLinkQuality* _linkQuality;

}

@property (assign,nonatomic) long long state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef manager;              //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef device;                //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) WFLinkQuality * linkQuality;               //@synthesize linkQuality=_linkQuality - In the implementation block
@property (copy) id handler;                                            //@synthesize handler=_handler - In the implementation block
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)setHandler:(id)arg1 ;
-(WiFiManagerClientRef)manager;
-(WiFiDeviceClientRef)device;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(id)handler;
-(WFLinkQuality *)linkQuality;
-(void)setLinkQuality:(WFLinkQuality *)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)setManager:(WiFiManagerClientRef)arg1 ;
-(void)_updateState;
-(void)_updateWithDeviceAttachment:(WiFiDeviceClientRef)arg1 ;
@end

