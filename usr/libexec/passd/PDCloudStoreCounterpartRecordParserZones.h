//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserZones : NSObject
{
    NSMutableDictionary *_zoneNameToRecords;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001002731a8
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100273090
- (void)removeIdentifiers:(id)arg1;	// IMP=0x0000000100272f70
- (id)allRecords;	// IMP=0x0000000100272e6c
- (void)addRecord:(id)arg1;	// IMP=0x0000000100272d60
- (id)init;	// IMP=0x0000000100272cfc

@end

