//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DKDAAPParserDelegate-Protocol.h"

@class NSString;

@interface UpdateResponseParserDelegate : NSObject <DKDAAPParserDelegate>
{
    _Bool _hasAddToPlaylistBehavior;	// 8 = 0x8
    unsigned char _addToPlaylistBehavior;	// 9 = 0x9
    unsigned int _serverRevision;	// 12 = 0xc
}

@property(nonatomic) unsigned char addToPlaylistBehavior; // @synthesize addToPlaylistBehavior=_addToPlaylistBehavior;
@property(nonatomic) _Bool hasAddToPlaylistBehavior; // @synthesize hasAddToPlaylistBehavior=_hasAddToPlaylistBehavior;
@property(nonatomic) unsigned int serverRevision; // @synthesize serverRevision=_serverRevision;
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x000000010001af0c
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x000000010001aef8
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x000000010001aec0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

