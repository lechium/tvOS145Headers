//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCPlatformPluginProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol ACCPlatformUSBFaultPluginProtocol <NSObject, ACCPlatformPluginProtocol>
- (_Bool)getUSBFaultStateforType:(int)arg1;
- (void)usbFaultMonitor:(_Bool)arg1 forUUID:(NSString *)arg2;
@end

