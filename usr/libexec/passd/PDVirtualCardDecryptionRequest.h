//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, PKVirtualCard;

@interface PDVirtualCardDecryptionRequest : NSObject
{
    PKVirtualCard *_virtualCard;	// 8 = 0x8
    NSData *_authorization;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010013b538
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSData *authorization; // @synthesize authorization=_authorization;
@property(copy, nonatomic) PKVirtualCard *virtualCard; // @synthesize virtualCard=_virtualCard;

@end

