/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDPurgeableAppRequestOptions;

@interface ASDPurgeableAppRequest : ASDEphemeralRequest

@property (nonatomic,copy,readonly) ASDPurgeableAppRequestOptions * options; 
+(long long)requestType;
-(id)initWithOptions:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

