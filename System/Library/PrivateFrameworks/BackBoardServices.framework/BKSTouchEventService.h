/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BSCompoundAssertion;

@interface BKSTouchEventService : NSObject {

	BSCompoundAssertion* _authenticationSpecificationAssertion;

}

@property (nonatomic,retain) BSCompoundAssertion * authenticationSpecificationAssertion;              //@synthesize authenticationSpecificationAssertion=_authenticationSpecificationAssertion - In the implementation block
+(id)sharedInstance;
-(id)addAuthenticationSpecifications:(id)arg1 forReason:(id)arg2 ;
-(BSCompoundAssertion *)authenticationSpecificationAssertion;
-(void)setAuthenticationSpecificationAssertion:(BSCompoundAssertion *)arg1 ;
@end

