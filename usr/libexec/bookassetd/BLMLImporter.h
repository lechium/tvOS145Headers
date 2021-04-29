//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BLMLImporter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    BLOperationQueue *_operationQueue;	// 16 = 0x10
    NSMutableArray *_scheduledItems;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_scheduledItemTimer;	// 32 = 0x20
}

+ (id)deviceMLImporter;	// IMP=0x0000000100008160
- (void).cxx_destruct;	// IMP=0x000000010000a79c
- (void)_setDownloadPropertiesForTrack:(id)arg1 usingLibraryItem:(id)arg2;	// IMP=0x000000010000a660
- (_Bool)_removeDownloadWithIdentifier:(long long)arg1 canceled:(_Bool)arg2 inLibrary:(id)arg3;	// IMP=0x000000010000a188
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a054
- (void)_commitScheduledLibraryItems;	// IMP=0x0000000100009f0c
- (_Bool)_addLibraryItems:(id)arg1 toMusicLibrary:(id)arg2 itemPids:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100008ec4
- (void)setAppleIdentifier:(id)arg1 forAccountIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100008db4
- (void)scheduleLibraryItems:(id)arg1;	// IMP=0x0000000100008a90
- (void)scheduleLibraryItem:(id)arg1;	// IMP=0x0000000100008a10
- (void)removeDownloadWithIdentifier:(long long)arg1 canceled:(_Bool)arg2;	// IMP=0x00000001000088e8
- (void)removeDownloadsWithIdentifiers:(id)arg1 canceled:(_Bool)arg2;	// IMP=0x000000010000861c
- (void)deleteAllOTATracks;	// IMP=0x0000000100008404
- (void)commitScheduledLibraryItems;	// IMP=0x000000010000839c
- (_Bool)addLibraryItems:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100008300
- (long long)addLibraryItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100008200
- (void)dealloc;	// IMP=0x0000000100008100
- (id)init;	// IMP=0x000000010000803c

@end

