//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@interface DownloadsDatabaseGarbageCollectionOperation : ISOperation
{
}

+ (_Bool)garbageCollectionTimerIsExpired;	// IMP=0x00000001001b1f10
- (void)_garbageCollectWorkingDirectoryPath:(id)arg1;	// IMP=0x00000001001b2f30
- (void)_garbageCollectWorkingDirectory;	// IMP=0x00000001001b2e44
- (void)_garbageCollectSoftwareDownloads;	// IMP=0x00000001001b2724
- (void)_garbageCollectPersistentManagers;	// IMP=0x00000001001b2010
- (void)run;	// IMP=0x00000001001b1f7c

@end
