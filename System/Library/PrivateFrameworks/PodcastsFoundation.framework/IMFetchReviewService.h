/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsFoundation/IMBaseStoreService.h>

@class NSString;

@interface IMFetchReviewService : IMBaseStoreService {

	NSString* _adamID;

}

@property (nonatomic,retain) NSString * adamID;              //@synthesize adamID=_adamID - In the implementation block
-(void)setAdamID:(NSString *)arg1 ;
-(NSString *)adamID;
-(id)urlRequest;
-(id)initWithAdamID:(id)arg1 ;
-(void)performDataRequestWithCompletion:(/*^block*/id)arg1 ;
@end

