/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface TVUserManager : NSObject

@property (nonatomic,readonly) NSString * currentUserIdentifier; 
@property (nonatomic,copy) NSArray * userIdentifiersForCurrentProfile; 
-(id)init;
-(NSString *)currentUserIdentifier;
-(NSArray *)userIdentifiersForCurrentProfile;
-(void)setUserIdentifiersForCurrentProfile:(NSArray *)arg1 ;
-(void)presentProfilePreferencePanelWithCurrentSettings:(id)arg1 availableProfiles:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)shouldStorePreferenceForCurrentUserToProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

