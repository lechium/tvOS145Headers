//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MSDContentCacheManager : NSObject
{
    NSString *_fileDownloadCachePath;	// 8 = 0x8
    NSMutableArray *_fileDownloadedList;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010007c208
- (void).cxx_destruct;	// IMP=0x000000010007cce4
@property(retain) NSMutableArray *fileDownloadedList; // @synthesize fileDownloadedList=_fileDownloadedList;
@property(retain) NSString *fileDownloadCachePath; // @synthesize fileDownloadCachePath=_fileDownloadCachePath;
- (void)clearListOfDownloadedFiles;	// IMP=0x000000010007cb40
- (void)addToListOfDownloadedFiles:(id)arg1;	// IMP=0x000000010007c988
- (void)moveFilesToCacheFromStagingPath:(id)arg1;	// IMP=0x000000010007c8a8
- (_Bool)checkIfFileIsPresentInCache:(id)arg1;	// IMP=0x000000010007c74c
- (_Bool)copyFileIfPresentInCache:(id)arg1 toLocation:(id)arg2;	// IMP=0x000000010007c56c
- (void)clearCache;	// IMP=0x000000010007c3e8
- (id)init;	// IMP=0x000000010007c274

@end
