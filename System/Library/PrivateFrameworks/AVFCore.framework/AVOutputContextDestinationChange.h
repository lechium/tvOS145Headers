/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputContextDestinationChangeInternal, NSString;

@interface AVOutputContextDestinationChange : NSObject {

	AVOutputContextDestinationChangeInternal* _ivars;

}

@property (readonly) long long status; 
@property (readonly) NSString * cancellationReason; 
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)status;
-(NSString *)cancellationReason;
-(void)markAsFinished;
-(void)_setStatus:(long long)arg1 cancellationReason:(id)arg2 ;
-(void)markAsInProgress;
-(void)markAsFailed;
-(void)markAsCancelledWithReason:(id)arg1 ;
-(void)changeToTerminalStatusBasedOnRouteChangeEndedReason:(CFStringRef)arg1 ;
-(void)changeToTerminalStatusBasedOnRouteConfigUpdatedReason:(CFStringRef)arg1 ;
@end

