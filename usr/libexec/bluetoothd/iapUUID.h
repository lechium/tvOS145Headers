//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface iapUUID : NSObject
{
    NSString *_connectionUUID;	// 8 = 0x8
    NSString *_endpointUUID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100376f00
@property(retain) NSString *endpointUUID; // @synthesize endpointUUID=_endpointUUID;
@property(retain) NSString *connectionUUID; // @synthesize connectionUUID=_connectionUUID;

@end

