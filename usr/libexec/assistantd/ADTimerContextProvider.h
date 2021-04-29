//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFContextSnapshotTransforming-Protocol.h"
#import "SOClockTimerListening-Protocol.h"

@class AFInstanceContext, NSString, SOClockTimerObserver;
@protocol AFContextDonationServiceProvider;

@interface ADTimerContextProvider : NSObject <SOClockTimerListening, AFContextSnapshotTransforming>
{
    id <AFContextDonationServiceProvider> _donationServiceProvider;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    SOClockTimerObserver *_observer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000a1590
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000a11f4
- (void)clockTimerObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;	// IMP=0x00000001000a1098
- (void)clockTimerObserver:(id)arg1 timerDidDismiss:(id)arg2;	// IMP=0x00000001000a1040
- (void)clockTimerObserver:(id)arg1 timerDidFire:(id)arg2;	// IMP=0x00000001000a0fb4
- (id)initWithDonationServiceProvider:(id)arg1 instanceContext:(id)arg2;	// IMP=0x00000001000a0e90
- (id)initWithDonationServiceProvider:(id)arg1;	// IMP=0x00000001000a0e08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
