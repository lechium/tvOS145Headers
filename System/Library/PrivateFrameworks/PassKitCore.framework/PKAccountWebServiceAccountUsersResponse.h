/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSSet, NSDate;

@interface PKAccountWebServiceAccountUsersResponse : PKAccountWebServiceResponse {

	NSSet* _users;
	NSDate* _lastUpdated;

}

@property (nonatomic,copy,readonly) NSSet * users;                //@synthesize users=_users - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdated;              //@synthesize lastUpdated=_lastUpdated - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSDate *)lastUpdated;
-(NSSet *)users;
@end
