//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol IDSMadridAckTrackerDelegate;

@interface IDSMadridAckTracker : NSObject
{
    NSNumber *_overallSendTimestamp;	// 8 = 0x8
    NSString *_guid;	// 16 = 0x10
    id <IDSMadridAckTrackerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001005ebc88
@property(retain, nonatomic) id <IDSMadridAckTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addBlockToAggregatableMessage:(id)arg1 trackingSet:(id)arg2;	// IMP=0x00000001005eb4ec
- (void)addBlockToAggregateMessage:(id)arg1 forURIs:(id)arg2 messageQueue:(id)arg3;	// IMP=0x00000001005eabf0
- (void)trackMessages:(id)arg1 forURIs:(id)arg2 messageQueue:(id)arg3;	// IMP=0x00000001005ea8b8
- (id)initWithGUID:(id)arg1;	// IMP=0x00000001005ea7d0

@end

