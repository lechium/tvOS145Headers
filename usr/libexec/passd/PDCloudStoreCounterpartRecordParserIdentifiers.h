//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserIdentifiers : NSObject
{
    NSMutableDictionary *_identifierToParserZones;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100272cf0
- (id)description;	// IMP=0x0000000100272ce0
- (void)removeIdentifiers:(id)arg1;	// IMP=0x0000000100272bc0
- (id)allRecords;	// IMP=0x0000000100272aac
- (id)allRecordsWithIdentifier:(id)arg1;	// IMP=0x00000001002729e0
- (void)addRecord:(id)arg1 identifier:(id)arg2;	// IMP=0x000000010027292c
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010027291c
- (id)init;	// IMP=0x00000001002728b8

@end

