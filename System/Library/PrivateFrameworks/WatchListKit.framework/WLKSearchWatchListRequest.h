/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKRequest.h>

@class NSDictionary;

@interface WLKSearchWatchListRequest : WLKRequest {

	NSDictionary* _query;

}

@property (nonatomic,copy,readonly) NSDictionary * query;              //@synthesize query=_query - In the implementation block
-(NSDictionary *)query;
-(id)initWithQuery:(id)arg1 ;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
@end
