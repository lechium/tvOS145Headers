/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/PBSUserProfileServiceDelegateInterface.h>

@protocol OS_dispatch_queue;
@class PBSUserProfilesSnapshot, NSObject, PBSUserProfileServiceProxy, NSHashTable, NSDictionary, NSString;

@interface PBSUserProfileManager : NSObject <BSDescriptionProviding, PBSUserProfileServiceDelegateInterface> {

	PBSUserProfilesSnapshot* _userProfilesSnapshot;
	NSObject*<OS_dispatch_queue> _workQueue;
	PBSUserProfileServiceProxy* _userProfileService;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _observerQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) PBSUserProfileServiceProxy * userProfileService;              //@synthesize userProfileService=_userProfileService - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                      //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerQueue;                   //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,readonly) PBSUserProfilesSnapshot * userProfilesSnapshot;               //@synthesize userProfilesSnapshot=_userProfilesSnapshot - In the implementation block
@property (nonatomic,readonly) NSDictionary * userProfiles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)sharedInstance;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(PBSUserProfilesSnapshot *)userProfilesSnapshot;
-(NSDictionary *)userProfiles;
-(void)selectUserProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createUserProfileWithAttributes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeUserProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userProfileServiceDidUpdate:(id)arg1 ;
-(void)_configureUserProfileService;
-(id)initWithUserProfileService:(id)arg1 ;
-(void)_handleUserProfilesSnapshot:(id)arg1 ;
-(void)_notifyObserversDidUpdate;
-(PBSUserProfileServiceProxy *)userProfileService;
@end

