/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDictionary;

@interface VSIdentityProviderChannelAppsResponse : NSObject {

	NSArray* _allApps;
	NSDictionary* _appsByChannelID;

}

@property (nonatomic,copy) NSArray * allApps;                           //@synthesize allApps=_allApps - In the implementation block
@property (nonatomic,copy) NSDictionary * appsByChannelID;              //@synthesize appsByChannelID=_appsByChannelID - In the implementation block
-(id)init;
-(NSDictionary *)appsByChannelID;
-(void)setAppsByChannelID:(NSDictionary *)arg1 ;
-(NSArray *)allApps;
-(void)setAllApps:(NSArray *)arg1 ;
@end

