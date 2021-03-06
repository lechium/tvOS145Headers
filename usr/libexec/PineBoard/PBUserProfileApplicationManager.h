//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBAppInfoControllerDelegate-Protocol.h"
#import "PBInstanceDependable-Protocol.h"
#import "PBUserProfileManagerObserver-Protocol.h"

@class NSHashTable, NSMutableSet, NSOperationQueue, NSSet, NSString, PBAppInfoController, PBSUserProfile;
@protocol OS_dispatch_queue;

@interface PBUserProfileApplicationManager : NSObject <PBUserProfileManagerObserver, PBAppInfoControllerDelegate, PBInstanceDependable>
{
    NSSet *_updatingApplicationIdentifiers;	// 8 = 0x8
    PBSUserProfile *_updatingUserProfile;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSOperationQueue *_manageApplicationsOperationQueue;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    PBSUserProfile *_selectedUserProfile;	// 48 = 0x30
    NSMutableSet *_personaEnabledApplicationIdentifiers;	// 56 = 0x38
    PBAppInfoController *_appInfoController;	// 64 = 0x40
}

+ (id)_contentApplicationIdentifiers;	// IMP=0x000000010020db0c
+ (id)sharedInstance;	// IMP=0x000000010020b618
+ (id)dependencyDescription;	// IMP=0x000000010020ace0
- (void).cxx_destruct;	// IMP=0x000000010020e330
@property(readonly, nonatomic, getter=_appInfoController) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, nonatomic) NSMutableSet *personaEnabledApplicationIdentifiers; // @synthesize personaEnabledApplicationIdentifiers=_personaEnabledApplicationIdentifiers;
@property(readonly, nonatomic) PBSUserProfile *selectedUserProfile; // @synthesize selectedUserProfile=_selectedUserProfile;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSOperationQueue *manageApplicationsOperationQueue; // @synthesize manageApplicationsOperationQueue=_manageApplicationsOperationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x000000010020e028
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x000000010020dc48
- (void)_workQueue_addNotifyObserversDidUpdateApplicationsOperationsWithApplicationIdentifiers:(id)arg1;	// IMP=0x000000010020d7c4
- (void)_workQueue_addNotifyObserversWillUpdateApplicationsOperationsWithApplicationIdentifiers:(id)arg1;	// IMP=0x000000010020d47c
- (void)_workQueue_addManageApplicationsOperationsWithPersonaApplicationIdentifiers:(id)arg1 updatingApplicationIdentifiers:(id)arg2;	// IMP=0x000000010020c724
- (void)_workQueue_didUpdatePersonaEnabledApplicationsWithAddedApplicationIdentifiers:(id)arg1 removedApplicationIdentifiers:(id)arg2;	// IMP=0x000000010020c468
- (void)_workQueue_setSelectedUserProfile:(id)arg1;	// IMP=0x000000010020c060
- (void)removeObserver:(id)arg1;	// IMP=0x000000010020bf2c
- (void)addObserver:(id)arg1;	// IMP=0x000000010020bdf8
@property(readonly, nonatomic) PBSUserProfile *updatingUserProfile; // @synthesize updatingUserProfile=_updatingUserProfile;
@property(readonly, nonatomic) NSSet *updatingApplicationIdentifiers; // @synthesize updatingApplicationIdentifiers=_updatingApplicationIdentifiers;
@property(readonly, copy) NSString *debugDescription;
- (id)_init;	// IMP=0x000000010020b3f0
- (id)_initWithAppInfoController:(id)arg1;	// IMP=0x000000010020ae6c

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

