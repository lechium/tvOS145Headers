//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PDLocationMap : NSObject
{
    NSMutableDictionary *_locationsByUniqueID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001002a5314
- (id)description;	// IMP=0x00000001002a5304
- (id)locationsForUniqueID:(id)arg1;	// IMP=0x00000001002a52f4
- (void)insertLocation:(id)arg1 forUniqueID:(id)arg2;	// IMP=0x00000001002a5240
- (id)init;	// IMP=0x00000001002a51dc

@end
