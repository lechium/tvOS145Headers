//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKDisplayAnnotationStyle-Protocol.h"

@class NSString;

@interface BKDisplayAnnotationTextStyle : NSObject <BKDisplayAnnotationStyle>
{
}

- (void)sizeLayer:(id)arg1 toFitAtScale:(double)arg2;	// IMP=0x00000001000175e8
- (void)applyToLayer:(id)arg1 forContent:(id)arg2;	// IMP=0x00000001000175e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

