//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCATElementProvider-Protocol.h"

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface SCATAggregateElementProvider : NSObject <SCATElementProvider>
{
    NSMutableOrderedSet *_providers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000ac22c
@property(retain, nonatomic) NSMutableOrderedSet *providers; // @synthesize providers=_providers;
@property(readonly, nonatomic) NSOrderedSet *elementProviders;
- (_Bool)containsElement:(id)arg1;	// IMP=0x00000001000ac0b4
- (void)didFinishProvidingElements;	// IMP=0x00000001000ac0b0
- (void)willBeginProvidingElements;	// IMP=0x00000001000ac0ac
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00000001000abee0
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00000001000abd14
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x00000001000abc40
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x00000001000abb68
@property(readonly, nonatomic) _Bool providesElements;
- (unsigned long long)_indexOfProviderContainingElement:(id)arg1;	// IMP=0x00000001000aba38
- (unsigned long long)_indexOfProviderBeforeProviderWithIndex:(unsigned long long)arg1 didWrap:(_Bool *)arg2;	// IMP=0x00000001000ab9b8
- (unsigned long long)_indexOfProviderAfterProviderWithIndex:(unsigned long long)arg1 didWrap:(_Bool *)arg2;	// IMP=0x00000001000ab920
- (void)removeAllProviders;	// IMP=0x00000001000ab8e0
- (void)removeProvider:(id)arg1;	// IMP=0x00000001000ab874
- (id)addProviderWithElements:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ab660
- (void)addProvider:(id)arg1;	// IMP=0x00000001000ab5f4
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000001000ab3e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

