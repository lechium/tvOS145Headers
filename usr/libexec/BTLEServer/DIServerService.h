//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ServerService.h"

@class CBMutableCharacteristic;

@interface DIServerService : ServerService
{
    CBMutableCharacteristic *_manufacturerNameCharacteristic;	// 8 = 0x8
    CBMutableCharacteristic *_modelNumberCharacteristic;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001cd54
@property(retain, nonatomic) CBMutableCharacteristic *modelNumberCharacteristic; // @synthesize modelNumberCharacteristic=_modelNumberCharacteristic;
@property(retain, nonatomic) CBMutableCharacteristic *manufacturerNameCharacteristic; // @synthesize manufacturerNameCharacteristic=_manufacturerNameCharacteristic;
- (id)init;	// IMP=0x000000010001ca14

@end

