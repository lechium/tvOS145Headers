/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AVOutputDeviceGroupMembershipChangeResult : NSObject {

	long long _status;
	NSString* _cancellationReason;

}

@property (readonly) long long status; 
@property (readonly) NSString * cancellationReason; 
-(void)dealloc;
-(long long)status;
-(NSString *)cancellationReason;
-(id)initWithStatus:(long long)arg1 cancellationReason:(id)arg2 ;
@end

