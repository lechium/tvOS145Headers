/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, SSMetricsConfiguration, SSMetricsPageEvent;

@interface RadioGetGenreTreeNodesRequest : RadioRequest {

	unsigned long long _parentNodeID;
	SSURLConnectionRequest* _request;
	SSMetricsConfiguration* _metricsConfiguration;
	SSMetricsPageEvent* _metricsPageEvent;

}

@property (nonatomic,retain,readonly) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,copy,readonly) SSMetricsPageEvent * metricsPageEvent;                        //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
+(id)requestBagKey;
+(id)fallbackRequestPath;
+(id)responseContentKey;
+(id)cacheKeyForGenreWithNodeID:(unsigned long long)arg1 ;
-(id)init;
-(SSMetricsPageEvent *)metricsPageEvent;
-(SSMetricsConfiguration *)metricsConfiguration;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithParentNodeID:(unsigned long long)arg1 ;
-(id)_genreTreeByApplyingResponse:(id)arg1 ;
-(void)startWithCachedCompletionHandler:(/*^block*/id)arg1 networkCompletionHandler:(/*^block*/id)arg2 ;
@end

