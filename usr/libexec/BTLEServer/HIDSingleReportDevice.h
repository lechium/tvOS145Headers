//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HIDGenericDevice.h"

@interface HIDSingleReportDevice : HIDGenericDevice
{
}

- (int)setReport:(char *)arg1 reportLength:(long long)arg2 reportID:(unsigned char)arg3 reportType:(int)arg4;	// IMP=0x0000000100009c3c
- (int)getReport:(char *)arg1 reportLength:(long long *)arg2 reportID:(unsigned char)arg3 reportType:(int)arg4;	// IMP=0x0000000100009b78
- (void)handleInputReportData:(id)arg1 reportID:(unsigned char)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x0000000100009adc

@end

