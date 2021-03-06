//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDisplayObserving-Protocol.h"

@class FBSDisplayMonitor, NSString;
@protocol ADDisplayScaleContextCollectorDelegate;

@interface ADDisplayScaleContextCollector : NSObject <FBSDisplayObserving>
{
    FBSDisplayMonitor *_displayMonitor;	// 8 = 0x8
    _Bool _hasSetUpDisplayMonitor;	// 16 = 0x10
    double _displayScale;	// 24 = 0x18
    id <ADDisplayScaleContextCollectorDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010006e054
@property(nonatomic) __weak id <ADDisplayScaleContextCollectorDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldMonitorScaleChanges;	// IMP=0x000000010006e008
- (void)_updateDisplayScaleIfNeededAndNotify:(_Bool)arg1;	// IMP=0x000000010006de44
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;	// IMP=0x000000010006de34
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x000000010006de24
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x000000010006de14
- (double)displayScale;	// IMP=0x000000010006dd68
- (void)dealloc;	// IMP=0x000000010006db18
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010006daa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

