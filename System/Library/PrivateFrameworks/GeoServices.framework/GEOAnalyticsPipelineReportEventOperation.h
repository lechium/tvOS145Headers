/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOAnalyticsPipelineReportOperation.h>

@class NSData;

@interface GEOAnalyticsPipelineReportEventOperation : GEOAnalyticsPipelineReportOperation {

	int _logMsgType;
	int _handlingPolicyId;
	NSData* _logMsg;

}
-(void)main;
-(id)initWithType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 remoteProxy:(id)arg4 runQueue:(id)arg5 completionQueue:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
@end

