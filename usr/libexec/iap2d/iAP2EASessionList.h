//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface iAP2EASessionList : NSObject
{
    NSMutableDictionary *_iap2SessionMap;	// 8 = 0x8
}

- (id)sessionsWithProtocolID:(unsigned char)arg1;	// IMP=0x0000000100067ac8
- (id)sessionWithProtocolID:(unsigned char)arg1;	// IMP=0x0000000100067984
- (id)sessionWithSessionID:(unsigned short)arg1;	// IMP=0x00000001000678fc
- (id)sessionsForClientID:(unsigned int)arg1;	// IMP=0x0000000100067764
- (id)sessions;	// IMP=0x00000001000675fc
- (void)removeSessionWithSessionID:(unsigned short)arg1;	// IMP=0x000000010006754c
- (void)addSession:(id)arg1 withSessionID:(unsigned short)arg2;	// IMP=0x0000000100067494
- (void)dealloc;	// IMP=0x000000010006742c
- (id)init;	// IMP=0x00000001000673b4

@end

