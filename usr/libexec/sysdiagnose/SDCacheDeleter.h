//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SDCacheDeleter : NSObject
{
    NSString *_archivesDirectory;	// 8 = 0x8
}

+ (void)registerCallbacks;	// IMP=0x000000010004f9c4
- (void).cxx_destruct;	// IMP=0x000000010004fafc
@property(copy, nonatomic) NSString *archivesDirectory; // @synthesize archivesDirectory=_archivesDirectory;
- (struct __CFDictionary *)periodicAPFSMarkAsPurgeable:(struct __CFDictionary *)arg1;	// IMP=0x000000010004f628
- (id)getEnumeratorForVolume:(id)arg1;	// IMP=0x000000010004f538
- (id)initWithArchivesDirectory:(id)arg1;	// IMP=0x000000010004f4b0
- (id)init;	// IMP=0x000000010004f450

@end
