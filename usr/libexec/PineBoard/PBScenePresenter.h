//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PBScenePresenter : NSObject
{
    NSMutableDictionary *_scenePresenters;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001833d4
@property(readonly, nonatomic, getter=_scenePresenters) NSMutableDictionary *scenePresenters; // @synthesize scenePresenters=_scenePresenters;
- (void)invalidatePresentationForElement:(id)arg1;	// IMP=0x0000000100182df0
- (id)snapshotPresentationViewForElement:(id)arg1;	// IMP=0x0000000100182a10
- (id)presentationViewForElement:(id)arg1;	// IMP=0x00000001001821b0
- (id)init;	// IMP=0x00000001001820ec

@end

