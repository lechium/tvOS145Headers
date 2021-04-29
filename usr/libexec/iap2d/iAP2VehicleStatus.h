//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "iAP2IdentificationParameter.h"

@class NSNumber, NSString;

@interface iAP2VehicleStatus : iAP2IdentificationParameter
{
    NSNumber *componentID;	// 24 = 0x18
    NSString *componentName;	// 32 = 0x20
}

@property(retain) NSString *componentName; // @synthesize componentName;
@property(retain) NSNumber *componentID; // @synthesize componentID;
- (_Bool)isVehicleStatusSupported:(int)arg1;	// IMP=0x000000010002b054
- (void)dealloc;	// IMP=0x000000010002aff4
- (id)init;	// IMP=0x000000010002afbc

@end

