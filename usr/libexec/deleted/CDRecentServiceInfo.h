//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CDRecentServiceInfo : NSObject <NSSecureCoding, NSCopying>
{
    struct {
        struct {
            double timestamp;
            unsigned long long amount;
        } urgencies[4];
        unsigned long long non_purgeable_amount;
        unsigned char data[0];
    } recentinfo;	// 8 = 0x8
    NSDictionary *_itemizedNonPurgeable;	// 80 = 0x50
}

+ (id)CDRecentServiceInfo:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4;	// IMP=0x000000010002d408
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002d238
- (void).cxx_destruct;	// IMP=0x000000010002dda4
@property(retain, nonatomic) NSDictionary *itemizedNonPurgeable; // @synthesize itemizedNonPurgeable=_itemizedNonPurgeable;
- (id)description;	// IMP=0x000000010002dc3c
- (void)log;	// IMP=0x000000010002db04
- (void)invalidate;	// IMP=0x000000010002dae4
- (_Bool)isEmpty;	// IMP=0x000000010002dab4
- (_Bool)updateAmount:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4;	// IMP=0x000000010002d954
- (id)nonPurgeableAmount;	// IMP=0x000000010002d938
- (id)amountAtUrgency:(int)arg1;	// IMP=0x000000010002d8d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002d884
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002d80c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002d668
- (id)serialize;	// IMP=0x000000010002d510
- (_Bool)validate:(double)arg1 atUrgency:(int)arg2;	// IMP=0x000000010002d498
- (id)initWithAmount:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4;	// IMP=0x000000010002d240

@end

