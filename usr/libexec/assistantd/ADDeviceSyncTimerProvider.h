//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceSyncDataProviding-Protocol.h"
#import "SOClockTimerListening-Protocol.h"

@class NSString;
@protocol ADDeviceSyncDataProviderDelegate;

@interface ADDeviceSyncTimerProvider : NSObject <SOClockTimerListening, ADDeviceSyncDataProviding>
{
    id <ADDeviceSyncDataProviderDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100239518
- (void)getSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100239048
- (void)getIncrementalChangesAfterGeneration:(unsigned long long)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100238e80
- (void)getGenerationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100238c0c
@property(readonly, nonatomic) NSString *type;
- (void)clockTimerObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;	// IMP=0x0000000100238a74
- (void)clockTimerObserver:(id)arg1 timerDidDismiss:(id)arg2;	// IMP=0x00000001002389b0
- (void)clockTimerObserver:(id)arg1 timerDidFire:(id)arg2;	// IMP=0x00000001002388ec
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100238840

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

