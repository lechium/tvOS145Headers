//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRBabelInstance, NRBabelNeighbor, NRBabelPrefix, NRBabelRoute;
@protocol OS_dispatch_source;

@interface NRPendingOutgoingSeqnoReq : NSObject
{
    unsigned char _hopCount;	// 8 = 0x8
    _Bool _removedFromInstance;	// 9 = 0x9
    unsigned short _seqno;	// 10 = 0xa
    short _retriesLeft;	// 12 = 0xc
    NRBabelPrefix *_bPrefix;	// 16 = 0x10
    unsigned long long _routerID;	// 24 = 0x18
    NRBabelNeighbor *_target;	// 32 = 0x20
    NRBabelNeighbor *_originator;	// 40 = 0x28
    NRBabelRoute *_route;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_retryTimer;	// 56 = 0x38
    NRBabelInstance *_instance;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100077898
@property(nonatomic) _Bool removedFromInstance; // @synthesize removedFromInstance=_removedFromInstance;
@property(nonatomic) __weak NRBabelInstance *instance; // @synthesize instance=_instance;
@property(nonatomic) unsigned char hopCount; // @synthesize hopCount=_hopCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) short retriesLeft; // @synthesize retriesLeft=_retriesLeft;
@property(nonatomic) __weak NRBabelRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) NRBabelNeighbor *originator; // @synthesize originator=_originator;
@property(retain, nonatomic) NRBabelNeighbor *target; // @synthesize target=_target;
@property(nonatomic) unsigned short seqno; // @synthesize seqno=_seqno;
@property(nonatomic) unsigned long long routerID; // @synthesize routerID=_routerID;
@property(retain, nonatomic) NRBabelPrefix *bPrefix; // @synthesize bPrefix=_bPrefix;
- (_Bool)cancelIfMatchesPrefix:(id)arg1 routerID:(unsigned long long)arg2 seqno:(unsigned short)arg3;	// IMP=0x0000000100077708
- (_Bool)cancelIfRouteUnselected;	// IMP=0x000000010007762c
- (void)dealloc;	// IMP=0x00000001000775ac
- (void)cancelWithDelay:(_Bool)arg1;	// IMP=0x0000000100077478
- (void)cancelTimer;	// IMP=0x000000010007743c
- (void)start;	// IMP=0x00000001000773b0
- (id)description;	// IMP=0x00000001000772a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000771d8
- (_Bool)matchesPrefix:(id)arg1 routerID:(unsigned long long)arg2;	// IMP=0x00000001000771b4
- (id)initWithInstance:(id)arg1 prefix:(id)arg2 routerID:(unsigned long long)arg3;	// IMP=0x0000000100076f68
- (void)sendSeqnoReq;	// IMP=0x0000000100076e70
- (id)createTLV;	// IMP=0x0000000100076dc0

@end

