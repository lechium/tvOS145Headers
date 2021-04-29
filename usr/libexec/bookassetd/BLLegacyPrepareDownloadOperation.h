//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "BLPrepareDownloadOperation-Protocol.h"

@class NSString, _BLPrepareDownloadOperation;

__attribute__((visibility("hidden")))
@interface BLLegacyPrepareDownloadOperation : ISOperation <BLPrepareDownloadOperation>
{
    _BLPrepareDownloadOperation *_operation;	// 96 = 0x60
}

+ (void)enumerateOperationsWithDownloads:(id)arg1 downloadPolicyManager:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010003d6f8
- (void).cxx_destruct;	// IMP=0x000000010003da80
@property(retain, nonatomic) _BLPrepareDownloadOperation *operation; // @synthesize operation=_operation;
- (void)run;	// IMP=0x000000010003da1c
@property(copy) CDUnknownBlockType outputBlock;
@property(readonly, nonatomic) NSString *downloadIdentifier;
- (id)_initWithDownload:(id)arg1 policy:(id)arg2;	// IMP=0x000000010003d63c

@end

