//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface VCPDataDecompressor : NSObject
{
    NSMutableData *_scratchData;	// 8 = 0x8
    NSMutableData *_resultData;	// 16 = 0x10
}

+ (id)decompressor;	// IMP=0x000000010003caf4
- (void).cxx_destruct;	// IMP=0x000000010003cc20
- (id)decompressData:(id)arg1;	// IMP=0x000000010003cb0c
- (id)init;	// IMP=0x000000010003ca28

@end

