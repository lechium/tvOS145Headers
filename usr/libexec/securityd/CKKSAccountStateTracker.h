//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKKSCloudKitAccountStateTrackingProvider-Protocol.h"
#import "CKKSOctagonStatusMemoizer-Protocol.h"

@class CKAccountInfo, CKContainer, CKKSCondition, NSError, NSMapTable, NSString, OTCliqueStatusWrapper, SOSAccountStatus;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKKSAccountStateTracker : NSObject <CKKSCloudKitAccountStateTrackingProvider, CKKSOctagonStatusMemoizer>
{
    _Bool _firstCKAccountFetch;	// 8 = 0x8
    NSString *_octagonPeerID;	// 16 = 0x10
    CKKSCondition *_finishedInitialDispatches;	// 24 = 0x18
    CKAccountInfo *_currentCKAccountInfo;	// 32 = 0x20
    CKKSCondition *_ckAccountInfoInitialized;	// 40 = 0x28
    NSString *_ckdeviceID;	// 48 = 0x30
    NSError *_ckdeviceIDError;	// 56 = 0x38
    CKKSCondition *_ckdeviceIDInitialized;	// 64 = 0x40
    SOSAccountStatus *_currentCircleStatus;	// 72 = 0x48
    NSString *_accountCirclePeerID;	// 80 = 0x50
    NSError *_accountCirclePeerIDError;	// 88 = 0x58
    CKKSCondition *_accountCirclePeerIDInitialized;	// 96 = 0x60
    OTCliqueStatusWrapper *_octagonStatus;	// 104 = 0x68
    CKKSCondition *_octagonInformationInitialized;	// 112 = 0x70
    long long _hsa2iCloudAccountStatus;	// 120 = 0x78
    CKKSCondition *_hsa2iCloudAccountInitialized;	// 128 = 0x80
    Class _nsnotificationCenterClass;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_queue;	// 144 = 0x90
    NSMapTable *_ckChangeListeners;	// 152 = 0x98
    CKContainer *_container;	// 160 = 0xa0
}

+ (id)stringFromAccountStatus:(long long)arg1;	// IMP=0x0000000100039c88
+ (id)getCircleStatus;	// IMP=0x0000000100039b60
+ (void)fetchCirclePeerID:(CDUnknownBlockType)arg1;	// IMP=0x0000000100039abc
- (void).cxx_destruct;	// IMP=0x0000000100037db8
@property _Bool firstCKAccountFetch; // @synthesize firstCKAccountFetch=_firstCKAccountFetch;
@property(retain) CKContainer *container; // @synthesize container=_container;
@property(retain) NSMapTable *ckChangeListeners; // @synthesize ckChangeListeners=_ckChangeListeners;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) Class nsnotificationCenterClass; // @synthesize nsnotificationCenterClass=_nsnotificationCenterClass;
@property(retain) CKKSCondition *hsa2iCloudAccountInitialized; // @synthesize hsa2iCloudAccountInitialized=_hsa2iCloudAccountInitialized;
@property long long hsa2iCloudAccountStatus; // @synthesize hsa2iCloudAccountStatus=_hsa2iCloudAccountStatus;
@property(retain) CKKSCondition *octagonInformationInitialized; // @synthesize octagonInformationInitialized=_octagonInformationInitialized;
@property(retain) OTCliqueStatusWrapper *octagonStatus; // @synthesize octagonStatus=_octagonStatus;
@property(retain) CKKSCondition *accountCirclePeerIDInitialized; // @synthesize accountCirclePeerIDInitialized=_accountCirclePeerIDInitialized;
@property(retain) NSError *accountCirclePeerIDError; // @synthesize accountCirclePeerIDError=_accountCirclePeerIDError;
@property(retain) NSString *accountCirclePeerID; // @synthesize accountCirclePeerID=_accountCirclePeerID;
@property(retain) SOSAccountStatus *currentCircleStatus; // @synthesize currentCircleStatus=_currentCircleStatus;
@property(retain) CKKSCondition *ckdeviceIDInitialized; // @synthesize ckdeviceIDInitialized=_ckdeviceIDInitialized;
@property(retain) NSError *ckdeviceIDError; // @synthesize ckdeviceIDError=_ckdeviceIDError;
@property(copy) NSString *ckdeviceID; // @synthesize ckdeviceID=_ckdeviceID;
@property(retain) CKKSCondition *ckAccountInfoInitialized; // @synthesize ckAccountInfoInitialized=_ckAccountInfoInitialized;
@property(retain) CKAccountInfo *currentCKAccountInfo; // @synthesize currentCKAccountInfo=_currentCKAccountInfo;
@property(retain) CKKSCondition *finishedInitialDispatches; // @synthesize finishedInitialDispatches=_finishedInitialDispatches;
@property(retain) NSString *octagonPeerID; // @synthesize octagonPeerID=_octagonPeerID;
- (void)setHSA2iCloudAccountStatus:(long long)arg1;	// IMP=0x0000000100037b6c
- (void)triggerOctagonStatusFetch;	// IMP=0x0000000100037990
- (id)checkForAllDeliveries;	// IMP=0x0000000100037870
- (void)notifyCircleStatusChangeAndWaitForSignal;	// IMP=0x0000000100037830
- (void)notifyCKAccountStatusChangeAndWaitForSignal;	// IMP=0x0000000100037820
- (_Bool)notifyCKAccountStatusChangeAndWait:(unsigned long long)arg1;	// IMP=0x00000001000377bc
- (void)_onqueueDeliverCurrentCloudKitState:(id)arg1 listenerQueue:(id)arg2 oldStatus:(id)arg3 group:(id)arg4;	// IMP=0x0000000100037674
- (void)_onqueueDeliverCloudKitStateChanges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00000001000374d8
- (void)_onqueueUpdateAccountState:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00000001000371dc
- (void)_onqueueUpdateAccountState:(id)arg1 deliveredSemaphore:(id)arg2;	// IMP=0x0000000100037050
- (void)_onqueueUpdateCirclePeerID:(id)arg1;	// IMP=0x0000000100036e44
- (id)notifyCircleChange:(id)arg1;	// IMP=0x0000000100036d3c
- (void)_onqueueUpdateCKDeviceID:(id)arg1;	// IMP=0x0000000100036ba0
- (id)notifyCKAccountStatusChange:(id)arg1;	// IMP=0x0000000100036a74
- (id)registerForNotificationsOfCloudKitAccountStatusChange:(id)arg1;	// IMP=0x0000000100036980
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionInternal:(id)arg1;	// IMP=0x00000001000367cc
- (void)dealloc;	// IMP=0x0000000100036750
- (void)performInitialDispatches;	// IMP=0x00000001000366c0
- (id)init:(id)arg1 nsnotificationCenterClass:(Class)arg2;	// IMP=0x00000001000362e4

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

