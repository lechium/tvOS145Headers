/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeHubAssignment.framework/HomeHubAssignment
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID;

@interface HHAHubStatus : NSObject {

	BOOL _isLeader;
	BOOL _isReachable;
	NSUUID* _hubId;

}

@property (nonatomic,readonly) NSUUID * hubId;                //@synthesize hubId=_hubId - In the implementation block
@property (nonatomic,readonly) BOOL isLeader;                 //@synthesize isLeader=_isLeader - In the implementation block
@property (nonatomic,readonly) BOOL isReachable;              //@synthesize isReachable=_isReachable - In the implementation block
-(id)description;
-(BOOL)isReachable;
-(NSUUID *)hubId;
-(BOOL)isLeader;
-(id)initWithHub:(id)arg1 leadership:(BOOL)arg2 isReachable:(BOOL)arg3 ;
@end

