/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString;

@interface MTStoreIdentifier : NSObject {

	NSNumber* _storeIdentifier;
	NSString* _feedUrl;

}

@property (nonatomic,retain) NSNumber * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * feedUrl;                      //@synthesize feedUrl=_feedUrl - In the implementation block
+(BOOL)isEmptyNumber:(id)arg1 ;
+(BOOL)isEmpty:(long long)arg1 ;
+(BOOL)isNotEmpty:(long long)arg1 ;
+(id)adamIdNumberFromSerpentIdNumber:(id)arg1 ;
+(long long)adamIDFromSerpentId:(long long)arg1 ;
+(long long)adamIDFromSerpentId_override_feature_flag:(long long)arg1 ;
+(id)serpentIdNumberFromAdamIdNumber:(id)arg1 ;
+(long long)serpentIdFromAdamId:(long long)arg1 ;
+(long long)serpentIdFromAdamId_override_feature_flag:(long long)arg1 ;
+(id)identifierWithFeedUrl:(id)arg1 ;
+(id)identifierWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2 ;
+(id)adamIDListFromSerpentIdList:(id)arg1 ;
+(id)adamIdNumberFromStoreId:(long long)arg1 ;
+(id)serpentIdListFromAdamIDList:(id)arg1 ;
+(id)serpentIdNumberFromStoreId:(long long)arg1 ;
+(BOOL)isNotEmptyNumber:(id)arg1 ;
-(NSNumber *)storeIdentifier;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(void)setFeedUrl:(NSString *)arg1 ;
-(NSString *)feedUrl;
-(id)initWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2 ;
-(id)initWithFeedUrl:(id)arg1 ;
@end

