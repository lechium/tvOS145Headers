//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface MSDFetchCKDataOptions : NSObject <NSCopying>
{
    _Bool _createNewZoneIfMissing;	// 8 = 0x8
    _Bool _userInitiatedRequest;	// 9 = 0x9
}

@property(nonatomic) _Bool userInitiatedRequest; // @synthesize userInitiatedRequest=_userInitiatedRequest;
@property(nonatomic) _Bool createNewZoneIfMissing; // @synthesize createNewZoneIfMissing=_createNewZoneIfMissing;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000349b8
- (id)description;	// IMP=0x0000000100034954

@end

