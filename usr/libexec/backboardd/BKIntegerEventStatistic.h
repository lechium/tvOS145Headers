//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKEventStatistic.h"

@interface BKIntegerEventStatistic : BKEventStatistic
{
    long long _value;	// 8 = 0x8
}

@property(nonatomic) long long value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000446d4
- (void)increment;	// IMP=0x00000001000446b0
- (void)reset;	// IMP=0x0000000100044640
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0000000100044588
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000444fc
- (unsigned long long)hash;	// IMP=0x0000000100044498

@end
