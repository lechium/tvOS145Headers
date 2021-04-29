/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSDeveloperServiceProtocol <NSObject>
@required
-(void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchDeveloperSettingsWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchDeveloperIdentityProvidersWithCompletionHandler:(/*^block*/id)arg1;
-(void)updateDeveloperSettings:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

