//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_PBImageProcessingOperation.h"

@interface _PBWallpaperGenerateOperation : _PBImageProcessingOperation
{
    CDUnknownBlockType _generationBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000d8310
@property(readonly, copy, nonatomic) CDUnknownBlockType generationBlock; // @synthesize generationBlock=_generationBlock;
- (void)cancel;	// IMP=0x00000001000d8270
- (void)main;	// IMP=0x00000001000d7e3c
- (id)initWithGenerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d7d30

@end

