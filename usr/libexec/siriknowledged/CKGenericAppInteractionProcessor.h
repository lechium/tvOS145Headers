//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKInteractionProcessing-Protocol.h"

@class NSString;

@interface CKGenericAppInteractionProcessor : NSObject <CKInteractionProcessing>
{
}

- (_Bool)processInteraction:(id)arg1 bundleId:(id)arg2;	// IMP=0x0000000100011570
- (id)supportedTypes;	// IMP=0x0000000100011554
- (id)bundleIdPredicate;	// IMP=0x000000010001153c
- (_Bool)supportsSiriDonations;	// IMP=0x0000000100011534

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
