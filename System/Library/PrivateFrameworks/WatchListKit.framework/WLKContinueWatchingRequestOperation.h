/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequestOperation : WLKUTSNetworkRequestOperation {

	WLKContinueWatchingResponse* _response;

}

@property (nonatomic,retain) WLKContinueWatchingResponse * response;              //@synthesize response=_response - In the implementation block
-(id)init;
-(void)setResponse:(WLKContinueWatchingResponse *)arg1 ;
-(WLKContinueWatchingResponse *)response;
-(void)processResponse;
-(id)initWithQueryParameters:(id)arg1 ;
-(id)initWithCaller:(id)arg1 options:(long long)arg2 ;
@end

