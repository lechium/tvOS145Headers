//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UACornerActionManagerHandler.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface UABestAppSuggestionController : UACornerActionManagerHandler <NSXPCListenerDelegate>
{
    _Bool _disableEntitlementsCheck;	// 8 = 0x8
    NSXPCListener *_bestAppsListener;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000032d8
@property(retain) NSXPCListener *bestAppsListener; // @synthesize bestAppsListener=_bestAppsListener;
@property _Bool disableEntitlementsCheck; // @synthesize disableEntitlementsCheck=_disableEntitlementsCheck;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100002e8c
- (_Bool)terminate;	// IMP=0x0000000100002da4
- (_Bool)resume;	// IMP=0x0000000100002cd0
- (_Bool)suspend;	// IMP=0x0000000100002bfc
- (id)initWithManager:(id)arg1 name:(id)arg2;	// IMP=0x0000000100002aec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
