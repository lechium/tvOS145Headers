//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

#import "LibraryResultEnumerator-Protocol.h"

@interface NSEnumerator (LibraryQueryEvalulator) <LibraryResultEnumerator>
@property(readonly) long long resultComplexity;
- (id)lib_filter:(id)arg1;	// IMP=0x0000000100278950
- (id)lib_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00000001002788ec
- (id)lib_mapAndFilterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100278750
- (id)lib_flatMapAndFilterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100278530
- (id)lib_firstResultApplyingTransform:(CDUnknownBlockType)arg1;	// IMP=0x00000001002783f0
- (id)lib_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000001002782ac
- (void)lib_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010027815c
- (id)lib_categorizeItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100277f28
@end

