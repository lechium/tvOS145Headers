//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IAPWorkspaceObserverDelegate-Protocol.h"

@class IAPWorkspaceObserver, NSString;

@interface MediaLibraryHelper : NSObject <IAPWorkspaceObserverDelegate>
{
    IAPWorkspaceObserver *_workspaceObserver;	// 8 = 0x8
    _Bool _iTunesRadioEnabled;	// 16 = 0x10
    _Bool _showMusic;	// 17 = 0x11
    _Bool _showPodcasts;	// 18 = 0x12
    _Bool _showAudioBooks;	// 19 = 0x13
    _Bool _showiTunesU;	// 20 = 0x14
}

@property(readonly) _Bool showiTunesU; // @synthesize showiTunesU=_showiTunesU;
@property(readonly) _Bool showAudioBooks; // @synthesize showAudioBooks=_showAudioBooks;
@property(readonly) _Bool showPodcasts; // @synthesize showPodcasts=_showPodcasts;
@property(readonly) _Bool showMusic; // @synthesize showMusic=_showMusic;
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00000001000e4fb8
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x00000001000e4ea4
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00000001000e4d90
- (int)getFilteredMediaTypesMask:(int)arg1;	// IMP=0x00000001000e4d10
- (void)handleAppUninstall:(id)arg1;	// IMP=0x00000001000e4ad0
- (void)handleAppInstall:(id)arg1;	// IMP=0x00000001000e48cc
- (void)dealloc;	// IMP=0x00000001000e484c
- (id)init;	// IMP=0x00000001000e46cc
@property(readonly) _Bool iTunesRadioEnabled;
- (void)_updateITunesRadioEnabled;	// IMP=0x00000001000e45cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

