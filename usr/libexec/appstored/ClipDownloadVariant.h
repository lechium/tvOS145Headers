//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ClipDownloadVariant-Protocol.h"

@class NSArray, NSString, NSURL;

@interface ClipDownloadVariant : NSObject <ClipDownloadVariant>
{
    NSURL *_assetURL;	// 8 = 0x8
    NSString *_assetToken;	// 16 = 0x10
    NSString *_md5;	// 24 = 0x18
    NSArray *_variantDeltas;	// 32 = 0x20
    NSArray *_variantDescriptors;	// 40 = 0x28
}

+ (id)_variantDescriptorsFromTargetArray:(id)arg1;	// IMP=0x00000001000552b0
+ (id)_variantDeltasFromDeltasInfo:(id)arg1;	// IMP=0x000000010005510c
- (void).cxx_destruct;	// IMP=0x0000000100055498
@property(readonly) NSArray *variantDescriptors; // @synthesize variantDescriptors=_variantDescriptors;
@property(readonly) NSArray *variantDeltas; // @synthesize variantDeltas=_variantDeltas;
@property(readonly) NSString *md5; // @synthesize md5=_md5;
@property(readonly) NSString *assetToken; // @synthesize assetToken=_assetToken;
@property(readonly) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly, copy) NSString *description;
- (id)variantDeltaFromAssetToken:(id)arg1;	// IMP=0x0000000100054e5c
@property(readonly) _Bool deltaUpdate;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100054ca4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

