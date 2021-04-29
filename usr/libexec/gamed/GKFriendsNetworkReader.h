//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataReader-Protocol.h"

@class GKDataTransport, NSString;

@interface GKFriendsNetworkReader : NSObject <GKDataReader>
{
    _Bool _shouldFilter;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
}

+ (id)readerWithTransport:(id)arg1 filterFriendsInCommon:(_Bool)arg2;	// IMP=0x000000010010e6b4
- (void).cxx_destruct;	// IMP=0x000000010010fa24
@property(nonatomic) _Bool shouldFilter; // @synthesize shouldFilter=_shouldFilter;
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010f06c
- (id)friendForRepresentation:(id)arg1;	// IMP=0x000000010010e8e0
- (id)requestBodyForPlayer:(id)arg1;	// IMP=0x000000010010e7dc
- (id)poolName;	// IMP=0x000000010010e79c
- (id)initWithTransport:(id)arg1 filterFriendsInCommon:(_Bool)arg2;	// IMP=0x000000010010e718

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

