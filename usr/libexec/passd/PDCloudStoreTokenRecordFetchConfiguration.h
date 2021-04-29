//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSSet, PDCloudStoreContainerDatabase;

@interface PDCloudStoreTokenRecordFetchConfiguration : NSObject
{
    _Bool _useStoredChangeToken;	// 8 = 0x8
    _Bool _shouldSaveToken;	// 9 = 0x9
    NSSet *_cloudStoreZonesAndChangeTokens;	// 16 = 0x10
    PDCloudStoreContainerDatabase *_containerDatabase;	// 24 = 0x18
    NSDate *_ignoreRecordsBeforeDate;	// 32 = 0x20
    NSDate *_ignoreRecordsAfterDate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010011daf0
@property(retain, nonatomic) NSDate *ignoreRecordsAfterDate; // @synthesize ignoreRecordsAfterDate=_ignoreRecordsAfterDate;
@property(retain, nonatomic) NSDate *ignoreRecordsBeforeDate; // @synthesize ignoreRecordsBeforeDate=_ignoreRecordsBeforeDate;
@property(retain, nonatomic) PDCloudStoreContainerDatabase *containerDatabase; // @synthesize containerDatabase=_containerDatabase;
@property(copy, nonatomic) NSSet *cloudStoreZonesAndChangeTokens; // @synthesize cloudStoreZonesAndChangeTokens=_cloudStoreZonesAndChangeTokens;
@property(nonatomic) _Bool shouldSaveToken; // @synthesize shouldSaveToken=_shouldSaveToken;
@property(nonatomic) _Bool useStoredChangeToken; // @synthesize useStoredChangeToken=_useStoredChangeToken;
- (id)description;	// IMP=0x000000010011d934
- (_Bool)hasContainerDatabase;	// IMP=0x000000010011d924
- (_Bool)hasCloudStoreZones;	// IMP=0x000000010011d7b0

@end

