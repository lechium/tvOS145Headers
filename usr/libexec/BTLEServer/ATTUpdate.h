//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBMutableCharacteristic, NSArray, NSData;

@interface ATTUpdate : NSObject
{
    NSData *_value;	// 8 = 0x8
    CBMutableCharacteristic *_characteristic;	// 16 = 0x10
    NSArray *_centrals;	// 24 = 0x18
}

+ (id)updateWithValue:(id)arg1 characteristic:(id)arg2 centrals:(id)arg3;	// IMP=0x000000010002befc
- (void).cxx_destruct;	// IMP=0x000000010002bfa8
@property(readonly, retain, nonatomic) NSArray *centrals; // @synthesize centrals=_centrals;
@property(readonly, retain, nonatomic) CBMutableCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly, retain, nonatomic) NSData *value; // @synthesize value=_value;
- (id)initWithValue:(id)arg1 characteristic:(id)arg2 centrals:(id)arg3;	// IMP=0x000000010002be2c

@end

