//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAirDropHandler.h"

__attribute__((visibility("hidden")))
@interface SDAirDropHandlerVoiceMemos : SDAirDropHandler
{
}

- (void)updatePossibleActions;	// IMP=0x00000001000d0a78
- (id)suitableContentsDescription;	// IMP=0x00000001000d08cc
- (long long)transferTypes;	// IMP=0x00000001000d0894
- (_Bool)canHandleTransfer;	// IMP=0x00000001000d07e8
@property(readonly, nonatomic) _Bool canHandleTransferRegardlessOfBundleID;
- (id)initWithTransfer:(id)arg1;	// IMP=0x00000001000d05a4

@end
