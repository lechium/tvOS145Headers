/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PodcastsFoundation.AnalyticsIdentifier : NSObject {

	 store;
	 clientId;
	 userId;

}

@property (copy,nonatomic) NSString * clientId; 
@property (copy,nonatomic) NSString * userId; 
+(id)sharedInstance;
-(id)init;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(void)resetIfNeeded;
-(void)updateIdentifiers;
-(void)resetIdentifiers;
@end

