//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DKDAAPParserDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface ContainerCloudIDsParserDelegate : NSObject <DKDAAPParserDelegate>
{
    unsigned char _currentPlaylistKind;	// 8 = 0x8
    unsigned int _currentPlaylistCloudID;	// 12 = 0xc
    NSMutableArray *_subscribedPlaylistCloudIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100028404
@property(readonly, nonatomic) unsigned char currentPlaylistKind; // @synthesize currentPlaylistKind=_currentPlaylistKind;
@property(readonly, nonatomic) unsigned int currentPlaylistCloudID; // @synthesize currentPlaylistCloudID=_currentPlaylistCloudID;
@property(readonly, nonatomic) NSMutableArray *subscribedPlaylistCloudIDs; // @synthesize subscribedPlaylistCloudIDs=_subscribedPlaylistCloudIDs;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x000000010002834c
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x0000000100028310
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x00000001000282f4
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x00000001000282bc
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x0000000100028250
- (id)init;	// IMP=0x00000001000281dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
