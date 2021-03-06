//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSArray;

@interface CloudLoadBulkArtworkInfoOperation : CloudLibraryOperation
{
    NSArray *_cloudIDs;	// 8 = 0x8
    _Bool _useLongIDs;	// 16 = 0x10
    unsigned char _itemKind;	// 17 = 0x11
    NSArray *_cloudArtworkInfoDictionaries;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100033c78
@property(readonly, nonatomic) NSArray *cloudArtworkInfoDictionaries; // @synthesize cloudArtworkInfoDictionaries=_cloudArtworkInfoDictionaries;
@property(readonly, nonatomic) unsigned char itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, nonatomic) _Bool useLongIDs; // @synthesize useLongIDs=_useLongIDs;
- (void)main;	// IMP=0x000000010003376c
- (id)initWithConfiguration:(id)arg1 cloudIDs:(id)arg2;	// IMP=0x0000000100033644
- (id)initWithCloudIDs:(id)arg1;	// IMP=0x00000001000335d0

@end

