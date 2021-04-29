//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDate;

@interface PBCableSignalInfo : NSObject <NSSecureCoding, NSCopying>
{
    int _linkQuality;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    double _cableCheckTime;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010014c188
+ (id)currentInfoWithLastCableCheckTime:(double)arg1;	// IMP=0x000000010014bee4
+ (int)_linkQuality;	// IMP=0x000000010014bca0
- (void).cxx_destruct;	// IMP=0x000000010014ca44
@property(nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property(readonly, nonatomic) double cableCheckTime; // @synthesize cableCheckTime=_cableCheckTime;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;	// IMP=0x000000010014c828
- (unsigned long long)hash;	// IMP=0x000000010014c748
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010014c510
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010014c45c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010014c34c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010014c1a4
@property(readonly, nonatomic) long long cableStatus;
- (id)initWithDate:(id)arg1 cableCheckTime:(double)arg2 linkQuality:(int)arg3;	// IMP=0x000000010014bf94

@end

