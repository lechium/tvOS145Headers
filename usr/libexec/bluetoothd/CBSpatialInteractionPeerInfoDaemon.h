//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface CBSpatialInteractionPeerInfoDaemon : NSObject
{
    unsigned int _peerID;	// 8 = 0x8
    NSData *_identifierData;	// 16 = 0x10
    NSData *_irkData;	// 24 = 0x18
    NSData *_tokenData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010003c098
@property(copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
@property(nonatomic) unsigned int peerID; // @synthesize peerID=_peerID;
@property(copy, nonatomic) NSData *irkData; // @synthesize irkData=_irkData;
@property(copy, nonatomic) NSData *identifierData; // @synthesize identifierData=_identifierData;

@end
