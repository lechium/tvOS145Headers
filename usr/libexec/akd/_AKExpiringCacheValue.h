//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _AKExpiringCacheValue : NSObject
{
    id _cacheObject;	// 8 = 0x8
    NSDate *_expiryDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001be94
- (id)description;	// IMP=0x000000010001be40
- (_Bool)isExpired;	// IMP=0x000000010001bdb0
@property(readonly) NSDate *expiryDate;
@property(readonly) id cacheObject;
- (id)initWithObject:(id)arg1 expiryDate:(id)arg2;	// IMP=0x000000010001bcfc

@end
