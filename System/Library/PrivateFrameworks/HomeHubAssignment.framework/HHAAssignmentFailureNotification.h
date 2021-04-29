/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeHubAssignment.framework/HomeHubAssignment
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoordinationCore/COMeshNotification.h>

@class NSUUID;

@interface HHAAssignmentFailureNotification : COMeshNotification {

	NSUUID* _endpointId;
	NSUUID* _hubId;

}

@property (nonatomic,readonly) NSUUID * endpointId;              //@synthesize endpointId=_endpointId - In the implementation block
@property (nonatomic,readonly) NSUUID * hubId;                   //@synthesize hubId=_hubId - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)endpointId;
-(id)initWithEndpoint:(id)arg1 andHub:(id)arg2 ;
-(NSUUID *)hubId;
@end
