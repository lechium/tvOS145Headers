//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DIController2ClientProtocol-Protocol.h"

@class DIDeviceHandle;

@interface DIController2ClientDelegate : NSObject <DIController2ClientProtocol>
{
    DIDeviceHandle *_deviceHandle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001fcf4
@property(retain, nonatomic) DIDeviceHandle *deviceHandle; // @synthesize deviceHandle=_deviceHandle;
- (void)attachCompletedWithHandle:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001fb10

@end

